#include <Windows.h>
#include <tlhelp32.h>
#include <shlwapi.h>
#include <cstdio>

DWORD GetProcessIdFromProcessName(const wchar_t* ProcessName);

int main(int argc,char* argv[])
{
    wchar_t PathBuffer[MAX_PATH] = {};
    GetFullPathNameW(L"RLForge.dll",MAX_PATH,PathBuffer,nullptr);

    HANDLE ProcessHandle;
    LPVOID RemoteString,LoadLibAddress;

    for(;;)
    {
       DWORD RocketLeagueProcessID = GetProcessIdFromProcessName(L"Notepad++");

		if (RocketLeagueProcessID)
		{
		    printf("ProcessID found \n%p \n",RocketLeagueProcessID);
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

DWORD GetProcessIdFromProcessName(const wchar_t* ProcessName)
{
    PROCESSENTRY32W pe;
    HANDLE thSnapShot;
    BOOL HasNextProcess = false;

    thSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (thSnapShot == INVALID_HANDLE_VALUE)
    {
        return false;
    }

    pe.dwSize = sizeof(PROCESSENTRY32W);

    HasNextProcess = Process32FirstW(thSnapShot, &pe);
    while (HasNextProcess)
    {
        if (StrStrIW(pe.szExeFile, ProcessName))
        {
            return pe.th32ProcessID;
        }
        HasNextProcess = Process32NextW(thSnapShot, &pe);
    }
    return 0;
}