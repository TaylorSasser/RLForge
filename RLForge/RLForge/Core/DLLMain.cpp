#include <Windows.h>
#include <iomanip>

#include "Core.h"
#include "../Pattern/SignatureFinder.hpp"
#include "../Hooks/HookFactory.hpp"
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


static const unsigned char* ProcessEventPattern = (const unsigned char*)"\x55\x8B\xEC\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x40";
static const unsigned char* CallFunctionPattern = (const unsigned char*)"\x55\x8D\xAC\x24\x00\x00\x00\x00\x81\xEC\x00\x00\x00\x00\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x40";

static const char* ProcessEventMask = "xxxxxx????xx????xxxx";
static const char* CallFunctionMask = "xxxx????xx????xxx????xx????xxxx";

void onAttach(HMODULE hModule)
{
    DisableThreadLibraryCalls(hModule);
    Core::AttachConsole();
    
    uintptr_t ProcessEventPointer = Detail::FindPattern(GetModuleHandleW(nullptr),ProcessEventPattern,ProcessEventMask);
 	uintptr_t CallFunctionPointer = Detail::FindPattern(GetModuleHandleW(nullptr),CallFunctionPattern,CallFunctionMask);
 	
	std::cout << std::hex << std::setfill('0') << std::setw(2) << (int)ProcessEventPointer << "\n";
	std::cout << std::hex << std::setfill('0') << std::setw(2) << (int)CallFunctionPointer << "\n";
}

void onDetach(HMODULE hModule)
{

}