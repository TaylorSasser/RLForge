#pragma once

#include "HookHandlers.hpp"

template<typename Function, class C = NoClass>
class Detour : public HookHandler<Function,C> {
public:
	using Type = typename HookHandler<Function, C>::Type;
	using HookType = typename HookHandler<Function, C>::HookType;
	using MemberHookType = typename HookHandler<Function, C>::MemberHookType;
public:
	Detour()
	{
		this->InternalFunctionHandler = &HookHandler<Function, C>::HandlerWrapper;
	}
	
	~Detour()
	{
        DWORD OldProtection = 0;
        if (!VirtualProtect(this->OriginalFunctionAddress, this->OriginalSize, PAGE_EXECUTE_READWRITE, &OldProtection))
            return;

        memcpy(this->OriginalFunctionAddress, this->OriginalCode, this->OriginalSize);
        VirtualProtect(this->OriginalFunctionAddress, this->OriginalSize, OldProtection, &OldProtection);
	}
	
	bool Hook(Type Pointer, HookType HookPointer)
	{
		this->OriginalFunctionPointer = OriginalFunctionAddress = Pointer;
		this->CallbackFunction = HookPointer;


		
		if (!AllocateBuffer(reinterpret_cast<uint8_t*>(Pointer)))
			return false;

		asmjit::JitRuntime Runtime;


		asmjit::CodeHolder ThunkHolder;
		ThunkHolder.init(Runtime.getCodeInfo());
		asmjit::X86Assembler ThunkJump(&ThunkHolder);

		asmjit::CodeHolder HookHolder;
		HookHolder.init(Runtime.getCodeInfo());
		asmjit::X86Assembler HookJump(&HookHolder);
		
		ThunkJump.jmp(asmjit::x86::ptr_32(*TrampolineBuffer));
		this->OriginalSize = ThunkHolder.getCodeSize();

		CopyOldCode((uint8_t*)this->OriginalFunctionAddress);

		asmjit::X86Mem ThreadLocalStorage = asmjit::x86::dword_ptr_abs(0x14);
		//asmjit::X86Mem ThreadLocalStorage = asmjit::x86::dword_ptr(static_cast<uintptr_t>(FunctionHandler));
		ThreadLocalStorage.setSegment(asmjit::x86::fs);
		HookJump.mov(ThreadLocalStorage,asmjit::x86::eax);
		HookJump.jmp((asmjit::x86::ptr)(static_cast<uint32_t>(&HookHandler<Function,C>::HandlerWrapper)));
		HookHolder.relocate(this->TrampolineBuffer);

		HookHolder._codeInfo.setBaseAddress((uintptr_t)this->OriginalFunctionAddress);
		ThunkHolder.relocate(this->TrampolineBytes);

		DWORD OldProtection;
		if (!VirtualProtect(this->OriginalFunctionAddress,this->OriginalSize,PAGE_EXECUTE_READWRITE,&OldProtection))
		    return false;

		memcpy(this->OriginalCode,this->TrampolineBytes,this->OriginalSize);
		VirtualProtect(this->OriginalCode,this->OriginalSize,OldProtection,&OldProtection);
		this->isHooked = (this->OriginalSize != 0);

	}
};