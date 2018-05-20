#include "Core.h"


namespace Core {
	
	HANDLE Output, OldOutput;
	HANDLE Error, OldError;
	HANDLE Input, OldInput;

	void AttachConsole() {
		FILE *StdOut;
		FILE *StdErr;
		AllocConsole();
		SetConsoleCtrlHandler(NULL,true);
		freopen_s(&StdOut,"CONOUT$", "w", stdout);
		freopen_s($StdErr,"CONOUT&", "w", stderr);
		std::ios::sync_with_stdio(true);
	}

	void DetachConsole()
	{
		if (Output && Input && Error)
		{
			FreeConsole();

			if (OldOutput)
				SetStdHandle(STD_OUTPUT_HANDLE, OldOutput);
			if (OldInput)
				SetStdHandle(STD_OUTPUT_HANDLE, OldInput);
			if (OldError)
				SetStdHandle(STD_OUTPUT_HANDLE, OldError);
		}
	}
}	