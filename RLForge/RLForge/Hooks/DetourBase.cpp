#include <cstdlib>
#include <windows.h>

#include "DetourBase.hpp"

DetourBase::~DetourBase() {
	free(TrampolineBuffer);
}

bool DetourBase::AllocateBuffer(uint8_t* NearestAddress) {
	if (TrampolineBuffer != nullptr)
		return true;

	MEMORY_BASIC_INFORMATION MemoryInformation = {};
	for (auto Address = (std::size_t)NearestAddress; Address > (std::size_t)NearestAddress - 0x80000000; Address = (std::size_t)MemoryInformation.BaseAddress - 1)
    {
        if (!VirtualQuery((LPCVOID)Address,&MemoryInformation,sizeof(MemoryInformation)))
            break;

        if (MemoryInformation.State == MEM_FREE)
        {
            TrampolineBuffer = (uint8_t*)VirtualAlloc(MemoryInformation.BaseAddress + MemoryInformation.RegionSize - 0x1000,0x1000,MEM_RESERVE | MEM_COMMIT,PAGE_EXECUTE_READWRITE);
            if (TrampolineBuffer)
               break;
        }
    }
    if (TrampolineBuffer == nullptr)
        TrampolineBuffer = (uint8_t*)VirtualAlloc( nullptr, 0x1000, MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE );

    OriginalCode = TrampolineBuffer + 0x100;
    TrampolineBytes = TrampolineBuffer + 0x100;

    return TrampolineBuffer != nullptr;
	
}

bool DetourBase::DisableHook() {
	return false;
}

bool DetourBase::EnableHook() {
	return false;
}

void DetourBase::CopyOldCode(uint8_t* Pointer)
{
    uint8_t* src = Pointer;
    uint8_t* old = (uint8_t*)OriginalFunctionPointer;
    uint32_t all_len = 0;
    ldasm_data ld = { 0 };
}
