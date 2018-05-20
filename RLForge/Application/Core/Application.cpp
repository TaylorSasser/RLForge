#include <Windows.h>
#include <iostream>
#include <thread>
#include <chrono>

int main(int argc,char* argv[])
{
    HWND RLWindow = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
    DWORD RocketLeagueProcessID;
    GetWindowThreadProcessId(RLWindow,&RocketLeagueProcessID);

    wchar_t PathBuffer[MAX_PATH] = {};
    GetFullPathNameW(L"RLForge",MAX_PATH,PathBuffer,nullptr);

    HANDLE ProcessHandle;
    LPVOID RemoteString,LoadLibAddress;

    while(!RocketLeagueProcessID)
    {
        std::cout << "Rocket League process id not found \n";
        Sleep(static_cast<DWORD>(60000));
        ProcessHandle = OpenProcess(PROCESS_ALL_ACCESS,false,RocketLeagueProcessID);
    }

    if (ProcessHandle)
    {
        std::cout << "Rocket League Process found \n";
        LoadLibAddress = (LPVOID)GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryW");
        RemoteString = (LPVOID)VirtualAllocEx(ProcessHandle,nullptr, sizeof(PathBuffer), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
        WriteProcessMemory(ProcessHandle, (LPVOID)RemoteString,PathBuffer, sizeof(PathBuffer), nullptr);
        CreateRemoteThread(ProcessHandle,nullptr,nullptr, (LPTHREAD_START_ROUTINE)LoadLibAddress, (LPVOID)RemoteString,nullptr,nullptr);
        CloseHandle(ProcessHandle);
    }

}