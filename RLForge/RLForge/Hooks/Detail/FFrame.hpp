#pragma once

#include <cstddef>
#include "../../RL/SDK.hpp"

namespace SDK
{
	struct FOutParamRec
	{
		class UProperty*		Property;
		unsigned char*			PropertyAddress;
		struct FOutParamRec*	NextOutParam;
	};
	
	struct FOutputDevice
	{
		void* VirtualFunctionTable;
		unsigned long bAllowSuppression;
		unsigned long bSuppressEventTag;
		unsigned long bAutoEmitLineTerminator;
	};
	
	struct FFrame : public FOutputDevice
	{
		SDK::UStruct*		Node;
		SDK::UObject*		Object;
		std::byte*			Code;
		std::byte*			Locals;
		FFrame*				PreviousFrame;
		FOutParamRec*		OutParams;
	};
	
}