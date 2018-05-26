#pragma once
#include <type_traits>

#include "../RL/SDK.hpp"

template<class Signature>
class FunctionHook {};

template<class Return,class... Args>
class FunctionHook<Return(Args...)>
{
public:
	typedef Return(*FunctionSignature)(Args...);
	
	FunctionHook(FunctionSignature ProxyFunction, FunctionSignature TargetFunction)
	{
		OldTargetFunction = TargetFunction;
	}
private:
	FunctionSignature OldTargetFunction;
};

namespace Detail
{
	__attribute__((naked)) extern "C" void ProcessEventProxy() asm("ProcessEventProxy");
	__attribute__((naked)) extern "C" void CallFunctionProxy() asm("CallFunctionProxy");
}