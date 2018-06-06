#pragma once
#include <optional>
#include <cstdint>
#include <windows.h>

namespace Detail
{
	uintptr_t FindPattern(uintptr_t start, size_t length, const unsigned char *pattern, const char *mask);
	uintptr_t FindPattern(HMODULE hModule, const unsigned char *pattern, const char *mask);
}


class SignatureFactory
{
public:
	template<typename T>
	static T FindAddress(const unsigned char* pattern, const char* mask, int offset)
	{
		uintptr_t address = Detail::FindPattern(GetModuleHandleW(nullptr),pattern,mask);
		return (address != -1) ? reinterpret_cast<T>(address + offset) : -1;
	}
};