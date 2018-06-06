#include <Windows.h>
#include <iomanip>
#include <iostream>

#include "Core.h"
#include "../Hooks/Detour.hpp"
#include "../Pattern/SignatureFinder.hpp"
#include "../RL/SDK.hpp"




HANDLE MainThread;
void onAttach(HMODULE hModule);
void onDetach(HMODULE hModule);

bool WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
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

__attribute__((fastcall))
void TestFastCall(int& a1,float)
{
	std::cout << "TestFastcall called. Argument = " << a1 << "\r\n";
}

__attribute__((fastcall))
void hkTestFastcall(int& a1, float&)
{
	std::cout << "hkTestFastcall called. Argument = " << a1 << "\r\n";
}


void onAttach(HMODULE hModule)
{
    DisableThreadLibraryCalls(hModule);
    Core::AttachConsole();
    
	Detour<decltype(&TestFastCall)> TestDetour;
	
	TestDetour.Hook(&TestFastCall,&hkTestFastcall);
	
	int x = 5;
	TestFastCall(x,10f);
	
	
}

void onDetach(HMODULE hModule)
{

}