#include <Windows.h>

#include "../Module/Mods/TestMod.hpp"
#include "../Module/ModBase.hpp"
#include "Core.h"

HANDLE MainThread;
void onAttach(HMODULE hModule);
void onDetach(HMODULE hModule);

extern "C" bool WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
    	case DLL_PROCESS_ATTACH:
			MainThread = CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(onAttach), hModule, 0, nullptr);
			break;
		case DLL_PROCESS_DETACH:
			break;
		default:
			break;
    };
    return true;
}


void onAttach(HMODULE hModule)
{
    DisableThreadLibraryCalls(hModule);
    Core::AttachConsole();
    
    TestMod TestModule("TestModule");
    PolyModuleBase(TestModule).onEnable();
	PolyModuleBase(TestModule).onDisable();
	PolyModuleBase(TestModule).onToggle();
	PolyModuleBase(TestModule).isEnabled();
}

void onDetach(HMODULE hModule)
{

}