#pragma once
#include <algorithm>


namespace Detail
{
    template<class T>
    struct Function {};

    template<class R,class... Args>
    struct Function<R(Args)> {
        using FunctionSignature = R(Args);
    };
}

class PipeableFunction 
{
public:
    template<class R,class... T>
    PipeableFunction(Detail::Function<R,T> Function);


    PipeableFunction& operator|(const PipeableFunction& NextFunction);
    PipeableFunction& operator|(PipeableFunction&& NextFunction);
};