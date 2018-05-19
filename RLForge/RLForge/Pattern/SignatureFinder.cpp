#pragma comment(lib, "Psapi.lib")
#include "SignatureFinder.hpp"
#include <Psapi.h>
#include <cstring>


namespace Detail
{
	uintptr_t FindPattern(uintptr_t start, size_t length, const unsigned char *pattern, const char *mask)
	{
		size_t pos = 0;
		auto maskLength = std::strlen(mask) - 1;
		auto startAddress = start;
		
		for (auto it = startAddress; it < startAddress + length; ++it) {
			if (*reinterpret_cast<unsigned char *>(it) == pattern[pos] || mask[pos] == '?')
			{
				if (mask[pos + 1] == '\0')
					return it - maskLength;
				pos++;
			} else
				pos = 0;
		}
		return static_cast<uintptr_t>(-1);
	}
	
	uintptr_t FindPattern(HMODULE hModule, const unsigned char *pattern, const char *mask)
	{
		MODULEINFO info = {};
		GetModuleInformation(GetCurrentProcess(), hModule, &info, sizeof(MODULEINFO));
		return FindPattern(reinterpret_cast<uintptr_t>(hModule), info.SizeOfImage, pattern, mask);
	}
	
}