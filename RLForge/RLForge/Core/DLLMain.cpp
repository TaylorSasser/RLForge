#include <Windows.h>
#include <iostream>
#include "../Meta/TypeErasure.hpp"


HANDLE MainThread;
void onAttach(HMODULE hModule);
void onDetach(HMODULE hModule);

bool WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    switch (dwReason) {
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


void onAttach(HMODULE hModule) {
    DisableThreadLibraryCalls(hModule);

}
