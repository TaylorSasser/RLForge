#pragma once
#include <algorithm>
#include <functional>
#include <tuple>


namespace Functional
{
    template<class Function, class... Arguments>
    constexpr auto Invoke(Function&& Func,Arguments&&... Args) noexcept
    {

    }

}