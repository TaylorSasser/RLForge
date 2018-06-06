#include <cstdlib>
#include "DetourBase.hpp"

DetourBase::~DetourBase() {
	free(BufferPointer);
}

bool DetourBase::AllocateBuffer(uint8_t* NearestAddress) {
	if (BufferPointer != nullptr)
		return true;
	
	
}

bool DetourBase::DisableHook() {
	return false;
}

bool DetourBase::EnableHook() {
	return false;
}

void DetourBase::CopyOldCode(uint8_t* Pointer) {

}
