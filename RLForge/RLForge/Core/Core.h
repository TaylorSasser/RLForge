#pragma once
#include <Windows.h>
#include <iostream>

class ModuleManager;
class EventBus;
class MemoryAllocator;

extern ModuleManager GModuleManager;
extern EventBus GEventBus;
extern MemoryAllocator GMemoryAllocator;

namespace Core {
	void AttachConsole();
	void DetachConsole();
}
