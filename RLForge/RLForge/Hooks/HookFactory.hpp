#pragma once
#include <type_traits>


template<std::size_t N,class TypeOne,class... Args>
struct Type
{
	using Type = typename Type<N - 1U,Args...>::Type
};

template<class TypeOne,class... Args>
struct Type<0U,TypeOne,Args...>
{
	using Type = TypeOne;
};

template<std::size_t,class>
struct Argument {};

template<std::size_t N,class R,class... Args>
struct Argument<N,R(Args...)>
{
	using Type = typename Type<N,Args...>::Type;
};


template<class>
struct ReturnType{};

template<class Return,class... Args>
struct ReturnType<Return(Args...)>
{
	using Type = Return;
};




class IFunctionHook {
public:
	
	virtual IFunctionHook();
	
};


class ProcessEventHook : public IFunctionHook
{

};



class HookFactory
{
public:
	template<class T,class = std::enable_if_t<std::is_base_of<IFunctionHook,T>>>
	static T New();
};


auto ProcessEventHook = HookFactory::New<ProcessEventHook>();