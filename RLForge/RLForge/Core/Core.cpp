#include "Core.h"


namespace Core {
	HANDLE hOutput, hOldOutput;
	HANDLE hError, hOldError;
	HANDLE hInput, hOldInput;

	void AttachConsole() {
		FILE* StdOut;
		::AllocConsole() && ::AttachConsole(GetCurrentProcessId());
		freopen_s(&StdOut,"CONOUT$", "wt", stdout);  
		std::ios::sync_with_stdio(1);
	}

	void DetachConsole() {
		if (hOutput && hInput && hError) {
			FreeConsole();

			if (hOldOutput)
				SetStdHandle(STD_OUTPUT_HANDLE, hOldOutput);
			if (hOldInput)
				SetStdHandle(STD_OUTPUT_HANDLE, hOldInput);
			if (hOldError)
				SetStdHandle(STD_OUTPUT_HANDLE, hOldError);
		}
	}
}	