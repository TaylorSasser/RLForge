#pragma once

#include <cstdint>
#include <type_traits>


class DetourBase
{
public:
	DetourBase() = default;
	~DetourBase();
protected:
	bool AllocateBuffer(uint8_t* Nearest = nullptr);
	bool EnableHook();
	bool DisableHook();
	void CopyOldCode(uint8_t* Pointer);
protected:
	bool 		isHooked		 = false;

	void* 		CallbackFunction = nullptr;
	void*		CallbackClass = nullptr;        //Pointer to calling Object

	void* 		OriginalFunctionAddress = nullptr;
	void*		OriginalFunctionPointer = nullptr;
	void* 		InternalFunctionHandler = nullptr;
	
	
	size_t   	OriginalSize 	= 0;

    uint8_t* 	OriginalCode 	    = nullptr;

	uint8_t* 	TrampolineBuffer 	= nullptr;
	uint8_t* 	TrampolineBytes 	= nullptr;
};