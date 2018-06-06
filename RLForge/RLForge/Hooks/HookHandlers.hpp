#pragma once

#include <winnt.h>
#include <windows.h>
#include <algorithm>
#include <functional>


#include "DetourBase.hpp"
#include "../Meta/UnsafeCast.hpp"

#include "../../../Libs/AsmJit/src/asmjit/asmjit.h"

static thread_local void* FunctionHandler;


#define __cdecl __attribute__((cdecl))
#define __fastcall __attribute__((fastcall))
#define __stdcall __attribute__((stdcall))
#define __thiscall __attribute__((thiscall))

#define __cdeclptr *__attribute__((cdecl))
#define __fastcallptr *__attribute__((fastcall))
#define __stdcallptr *__attribute__((stdcall))
#define __thiscallptr *__attribute__((thiscall))



class NoClass {};
template<class Function,class C>
struct HookHandler;

template<typename R,typename... Args,class C>
struct HookHandler<R(__cdeclptr)(Args...),C> : public DetourBase
{
	using ReturnType = std::conditional_t<std::is_same_v<R,void>,int,R>
	
	using Type = R(__cdeclptr)(Args...);
	using HookType = R(__cdeclptr)(Args&...);
	using MemberHookType = R(C::*)(Args&...);
	
	using TypeReturn = ReturnType(__cdeclptr)(Args...);
	using HookTypeReturn = ReturnType(__cdeclptr)(Args&...);
	using MemberHookTypeReturn = ReturnType(C::*)(Args&...);
	
	static __attribute__((noinline)) ReturnType __cdecl HandlerWrapper(Args... Arguments)
	{
		HookHandler* Instance = (HookHandler*)((_NT_TIB*)NtCurrentTeb())->ArbitraryUserPointer;
		return Instance->HandlerDetail(std::forward<Args>(Arguments)...);
	}
	
	ReturnType HandlerDetail(Args&&... Arguments)
	{
		DisableHook();
		
		if (CallbackClass != nullptr)
			reinterpret_cast<C*>(CallbackClass)->*unsafe_cast(MemberHookTypeReturn(CallbackClass))(Arguments...);
		else
			reinterpret_cast<MemberHookTypeReturn>(CallbackFunction)(Arguments...);
		
		reinterpret_cast<TypeReturn>(CallbackFunction)(Arguments);
		
		if (this->isHooked)
			EnableHook();
	}
};



template<typename R,typename... Args,class C>
struct HookHandler<R(__fastcallptr)(Args...),C> : public DetourBase
{
	using ReturnType = std::conditional_t<std::is_same_v<R,void>,int,R>
	
	using Type = R(__fastcallptr)(Args...);
	using HookType = R(__fastcallptr)(Args&...);
	using MemberHookType = R(C::*)(Args&...);
	
	using TypeReturn = ReturnType(__fastcallptr)(Args...);
	using HookTypeReturn = ReturnType(__fastcallptr)(Args&...);
	using MemberHookTypeReturn = ReturnType(C::*)(Args&...);
	
	static __attribute__((noinline)) ReturnType __fastcall HandlerWrapper(Args... Arguments)
	{
		HookHandler* Instance = (HookHandler*)((_NT_TIB*)NtCurrentTeb())->ArbitraryUserPointer;
		return Instance->HandlerDetail(std::forward<Args>(Arguments)...);
	}
	
	ReturnType HandlerDetail(Args&&... Arguments)
	{
		DisableHook();
		
		if (CallbackClass != nullptr)
			reinterpret_cast<C*>(CallbackClass)->*unsafe_cast(MemberHookTypeReturn(CallbackClass))(Arguments...);
		else
			reinterpret_cast<MemberHookTypeReturn>(CallbackFunction)(Arguments...);
		
		reinterpret_cast<TypeReturn>(CallbackFunction)(Arguments);
		
		if (this->isHooked)
			EnableHook();
	}
};


template<typename R,typename... Args,class C>
struct HookHandler<R(__stdcallptr)(Args...),C> : public DetourBase
{
	using ReturnType = std::conditional_t<std::is_same_v<R,void>,int,R>
	
	using Type = R(__stdcallptr)(Args...);
	using HookType = R(__stdcallptr)(Args&...);
	using MemberHookType = R(C::*)(Args&...);
	
	using TypeReturn = ReturnType(__stdcallptr)(Args...);
	using HookTypeReturn = ReturnType(__stdcallptr)(Args&...);
	using MemberHookTypeReturn = ReturnType(C::*)(Args&...);
	
	static __attribute__((noinline)) ReturnType __stdcall HandlerWrapper(Args... Arguments)
	{
		HookHandler* Instance = (HookHandler*)((_NT_TIB*)NtCurrentTeb())->ArbitraryUserPointer;
		return Instance->HandlerDetail(std::forward<Args>(Arguments)...);
	}
	
	ReturnType HandlerDetail(Args&&... Arguments)
	{
		DisableHook();
		
		if (CallbackClass != nullptr)
			reinterpret_cast<C*>(CallbackClass)->*unsafe_cast(MemberHookTypeReturn(CallbackClass))(Arguments...);
		else
			reinterpret_cast<MemberHookTypeReturn>(CallbackFunction)(Arguments...);
		
		reinterpret_cast<TypeReturn>(CallbackFunction)(Arguments);
		
		if (this->isHooked)
			EnableHook();
	}
};


template<typename R,typename... Args,class C>
struct HookHandler<R(__thiscallptr)(Args...),C> : public DetourBase
{
	using ReturnType = std::conditional_t<std::is_same_v<R,void>,int,R>
	
	using Type = R(__thiscallptr)(Args...);
	using HookType = R(__thiscallptr)(Args&...);
	using MemberHookType = R(C::*)(Args&...);
	
	using TypeReturn = ReturnType(__thiscallptr)(Args...);
	using HookTypeReturn = ReturnType(__thiscallptr)(Args&...);
	using MemberHookTypeReturn = ReturnType(C::*)(Args&...);
	
	static __attribute__((noinline)) ReturnType __thiscall HandlerWrapper(Args... Arguments)
	{
		HookHandler* Instance = (HookHandler*)((_NT_TIB*)NtCurrentTeb())->ArbitraryUserPointer;
		return Instance->HandlerDetail(std::forward<Args>(Arguments)...);
	}
	
	ReturnType HandlerDetail(Args&&... Arguments)
	{
		DisableHook();
		
		if (CallbackClass != nullptr)
			reinterpret_cast<C*>(CallbackClass)->*unsafe_cast(MemberHookTypeReturn(CallbackClass))(Arguments...);
		else
			reinterpret_cast<MemberHookTypeReturn>(CallbackFunction)(Arguments...);
		
		reinterpret_cast<TypeReturn>(CallbackFunction)(Arguments);
		
		if (this->isHooked)
			EnableHook();
	}
};



