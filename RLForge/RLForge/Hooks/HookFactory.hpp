#pragma once
#include <type_traits>

#include "../RL/SDK.hpp"

template<class Signature>
class FunctionHook {};

template<class Return,class... Args>
class FunctionHook<Return(Args...)> {
public:
	typedef Return (*FunctionSignature)(Args...);
	
	FunctionHook(FunctionSignature ProxyFunction, FunctionSignature TargetFunction)
	{
		OldTargetFunction = TargetFunction;
	}
	
	
private:
	FunctionSignature OldTargetFunction;
};

namespace Detail {
	
	[[gnu::naked]] extern void ProcessEventProxy() asm("ProcessEventProxy");
	[[gnu::naked]] extern void CallFunctionProxy() asm("CallFunctionProxy");
	
}