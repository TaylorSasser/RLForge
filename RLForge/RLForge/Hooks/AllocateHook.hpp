#pragma once
#include "../RL/SDK.hpp"
#include "../Functional/Functional.hpp"

class AllocatorHook;


class AllocatorHookFactory {
public:
    template<class R,class... Args>
    AllocatorHook* New(SDK::UClass* Target)
    {

    }
};
