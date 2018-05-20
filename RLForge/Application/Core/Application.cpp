#include <Windows.h>
#include <iostream>
#include <thread>
#include <chrono>

#define _GLIBCXX_HAS_GTHREADS

int main(int argc,char* argv[])
{
    
    wchar_t PathBuffer[MAX_PATH] = {};
    GetFullPathNameW(L"RLForge.dll",MAX_PATH,PathBuffer,nullptr);

    HANDLE ProcessHandle;
    LPVOID RemoteString,LoadLibAddress;

    for(;;)
    {
		HWND RLWindow = FindWindowA("LaunchUnrealUWindowsClient", "Rocket League (32-bit, DX9)");
		DWORD RocketLeagueProcessID = 0;
		GetWindowThreadProcessId(RLWindow,&RocketLeagueProcessID);
		
		if (RocketLeagueProcessID && RLWindow)
		{
			ProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, RocketLeagueProcessID);
			LoadLibAddress = (LPVOID)GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryW");
			RemoteString = (LPVOID)VirtualAllocEx(ProcessHandle, NULL, sizeof(PathBuffer), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
			WriteProcessMemory(ProcessHandle, (LPVOID)RemoteString,PathBuffer, sizeof(PathBuffer), NULL);
			CreateRemoteThread(ProcessHandle, NULL, NULL, (LPTHREAD_START_ROUTINE)LoadLibAddress, (LPVOID)RemoteString, NULL, NULL);
			CloseHandle(ProcessHandle);
			break;
		}
	}

 

}