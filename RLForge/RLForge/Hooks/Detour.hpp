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
		
		HookJump.mov(asmjit::x86::dword_ptr_abs( 0x14 ).setSegment( asmjit::x86::fs ) , (uint32_t)this );
		
		HookJump.mov(asmjit::x86::dword_ptr_abs(0x14).setSegment(asmjit::x86::fs),(uint32_t)this);
	}
};