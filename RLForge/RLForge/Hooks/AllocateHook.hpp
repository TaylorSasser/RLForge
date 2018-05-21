#pragma once
#include "../RL/SDK.hpp"



class AllocatorHook {
public:




    template<class R,class... Args>
    AllocatorHook* New(SDK::UClass* Target);
};
