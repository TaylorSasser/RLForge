#pragma once
#include <type_traits>
#include <memory>
#include <functional>
#include <optional>


#include "../RL/SDK.hpp"

template<class Return,class... Args>
class IFunctionHook {
public:
    typedef std::function<Return,Args...> FunctionSignature;

	virtual std::optional<FunctionSignature> Setup(const FunctionSignature&) = 0;
	virtual bool Restore(const FunctionSignature&) = 0;
};

class ProcessEventHook : public IFunctionHook<void(SDK::UObject**,SDK::UFunction*,void*)>
{
public:
    explicit ProcessEventHook() = default;

    /**
     * Returns the OldProcessEvent Function if hook worked.
     * @param Function Function to detour too.
     * @return
     */
    virtual std::optional<FunctionSignature> Setup(const FunctionSignature& Function) {

    }

    virtual bool Restore(const FunctionSignature Function) {

    }

private:

};



class HookFactory
{
public:
	template<class T,class = std::enable_if_t<std::is_base_of_v<IFunctionHook,T>>>
	static std::shared_ptr<T> New()
	{
	    return std::make_shared<T>();
	}


};


void ProcessEventProxy(SDK::UObject**,SDK::UFunction*,void* Params) {

}

int test() {
    std::shared_ptr<ProcessEventHook> ProcessEventHook = HookFactory::New<ProcessEventHook>();

    ProcessEventHook->Setup(std::bind<void,SDK::UObject**,SDK::UFunction*,void*>(&ProcessEventProxy));

