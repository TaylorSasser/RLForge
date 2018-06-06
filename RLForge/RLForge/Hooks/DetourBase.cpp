#include <cstdlib>
#include <windows.h>

#include "DetourBase.hpp"
#include "Assembly/LDAssembly.hpp"

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
    uint8_t* Source = Pointer;
	auto* Old = (uint8_t*)OriginalFunctionPointer;
    uint32_t TotalLength = 0;
    ldasm_data LoaderData = { 0 };
	
	do
	{
		uint32_t len = ldasm(Source,&LoaderData,0);
		
		// Determine code end
		if (LoaderData.flags & F_INVALID
			|| (len == 1 && (Source[LoaderData.opcd_offset] == 0xCC || Source[LoaderData.opcd_offset] == 0xC3))
			|| (len == 3 && Source[LoaderData.opcd_offset] == 0xC2)
			|| len + TotalLength > 128)
		{
			break;
		}
		
		// move instruction
		memcpy(Old,Source, len );
		
		// if instruction has relative offset, calculate new offset
		if (LoaderData.flags & F_RELATIVE)
		{
			int32_t diff = 0;
			const uintptr_t ofst = (LoaderData.disp_offset != 0 ? LoaderData.disp_offset : LoaderData.imm_offset);
			const uintptr_t sz = LoaderData.disp_size != 0 ? LoaderData.disp_size : LoaderData.imm_size;
			
			memcpy(&diff,Source + ofst, sz );
			
			diff += Source - Old;
			memcpy(Old + ofst, &diff, sz );
		}
		
		Source += len;
		Old += len;
		TotalLength += len;
		
	} while (TotalLength < this->OriginalSize);
	
	
	if (TotalLength < this->OriginalSize)
		memcpy(this->OriginalCode,Pointer,this->OriginalSize);
	else
	{
		SET_JUMP(Old,Source);
		this->OriginalFunctionPointer = this->OriginalCode;
	}
}
