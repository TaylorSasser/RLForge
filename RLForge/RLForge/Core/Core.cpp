#include "Core.h"


namespace Core {
	
	HANDLE Output, OldOutput;
	HANDLE Error, OldError;
	HANDLE Input, OldInput;

	void AttachConsole() {
		AllocConsole();
		SetConsoleCtrlHandler(NULL,true);
		freopen("CON", "w", stdout);
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