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
		Restore();
	}
	
	bool Hook(Type Pointer, HookType HookPointer)
	{
		this->OriginalFunction = CallOriginalFunction = Pointer;
		this->CallbackFunction = HookPointer;
		
		if (!AllocateBuffer(reinterpret_cast<uint8_t*>(Pointer)))
			return false;
		
		asmjit::CodeHolder ThunkHolder{};
		asmjit::X86Assembler ThunkJump{&ThunkHolder};
		
		asmjit::CodeHolder HookHolder{};
		asmjit::X86Assembler HookJump{&HookHolder};
		
		ThunkJump.jmp(asmjit::x86::ptr_32(*BufferPointer));
		this->OriginalSize = ThunkHolder.getCodeSize();
		
		CopyOldCode((uint8_t*)this->OriginalFunction);
		
		asmjit::X86Mem ThreadLocalStorage = asmjit::x86::dword_ptr_abs(0x14);
		ThreadLocalStorage.setSegment(asmjit::x86::fs);
		HookJump.mov(ThreadLocalStorage,asmjit::x86::eax);
		
		HookJump.jmp((asmjit::x86::ptr)(static_cast<uint32_t>(&HookHandler<Function,C>::HandlerWrapper)));
		
		HookHolder.relocate(this->BufferPointer);
		HookHolder._codeInfo.setBaseAddress((uintptr_t)this->OriginalFunction);
	}
};