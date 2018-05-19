// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function Core.Object.SumInt
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// int                            Total                          (CPF_Parm)
// int                            Value                          (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SumInt(int Total, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SumInt");

	UObject_SumInt_Params params;
	params.Total = Total;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SortDescendingString
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SortDescendingString(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SortDescendingString");

	UObject_SortDescendingString_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SortAscendingString
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SortAscendingString(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SortAscendingString");

	UObject_SortAscendingString_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SortDescendingQWORD
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SortDescendingQWORD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SortDescendingQWORD");

	UObject_SortDescendingQWORD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SortAscendingQWORD
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SortAscendingQWORD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SortAscendingQWORD");

	UObject_SortAscendingQWORD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SortDescendingInt
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SortDescendingInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SortDescendingInt");

	UObject_SortDescendingInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SortAscendingInt
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SortAscendingInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SortAscendingInt");

	UObject_SortAscendingInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PadString
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Str                            (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// int                            Characters                     (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_PadString(const struct FString& Str, int Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PadString");

	UObject_PadString_Params params;
	params.Str = Str;
	params.Characters = Characters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetFrameCounter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)

void UObject::STATIC_GetFrameCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetFrameCounter");

	UObject_GetFrameCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetScaledAxisValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          Value                          (CPF_Parm)
// float                          Sensitivity                    (CPF_Parm)
// float                          MaxSensitivity                 (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_GetScaledAxisValue(float Value, float Sensitivity, float MaxSensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetScaledAxisValue");

	UObject_GetScaledAxisValue_Params params;
	params.Value = Value;
	params.Sensitivity = Sensitivity;
	params.MaxSensitivity = MaxSensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetObjectProvider
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UObjectProvider*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UObjectProvider* UObject::STATIC_GetObjectProvider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetObjectProvider");

	UObject_GetObjectProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetEdition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// TEnumAsByte<EEdition>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<EEdition> UObject::STATIC_GetEdition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEdition");

	UObject_GetEdition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsEdition
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// TEnumAsByte<EEdition>          Edition                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_IsEdition(TEnumAsByte<EEdition> Edition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsEdition");

	UObject_IsEdition_Params params;
	params.Edition = Edition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SetRooted
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bRooted                        (CPF_Parm)

void UObject::SetRooted(bool bRooted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SetRooted");

	UObject_SetRooted_Params params;
	params.bRooted = bRooted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 EventName                      (CPF_Parm, CPF_NeedCtorLink)

void UObject::STATIC_ProfNodeEvent(const struct FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeEvent");

	UObject_ProfNodeEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeSetDepthThreshold
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// int                            Depth                          (CPF_Parm)

void UObject::STATIC_ProfNodeSetDepthThreshold(int Depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeSetDepthThreshold");

	UObject_ProfNodeSetDepthThreshold_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeSetTimeThresholdSeconds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          Threshold                      (CPF_Parm)

void UObject::STATIC_ProfNodeSetTimeThresholdSeconds(float Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeSetTimeThresholdSeconds");

	UObject_ProfNodeSetTimeThresholdSeconds_Params params;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeStop
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            AssumedTimerIndex              (CPF_OptionalParm, CPF_Parm)

void UObject::STATIC_ProfNodeStop(int AssumedTimerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeStop");

	UObject_ProfNodeStop_Params params;
	params.AssumedTimerIndex = AssumedTimerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProfNodeStart
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 TimerName                      (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_ProfNodeStart(const struct FString& TimerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProfNodeStart");

	UObject_ProfNodeStart_Params params;
	params.TimerName = TimerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.CreateGuidString
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_CreateGuidString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.CreateGuidString");

	UObject_CreateGuidString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetStringFromGuid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGuid                   InGuid                         (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_GetStringFromGuid(struct FGuid* InGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetStringFromGuid");

	UObject_GetStringFromGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGuid != nullptr)
		*InGuid = params.InGuid;

	return params.ReturnValue;
}


// Function Core.Object.GetGuidFromString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 InGuidString                   (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FGuid                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGuid UObject::STATIC_GetGuidFromString(struct FString* InGuidString)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetGuidFromString");

	UObject_GetGuidFromString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGuidString != nullptr)
		*InGuidString = params.InGuidString;

	return params.ReturnValue;
}


// Function Core.Object.CreateGuid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FGuid                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FGuid UObject::STATIC_CreateGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.CreateGuid");

	UObject_CreateGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsGuidValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGuid                   InGuid                         (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_IsGuidValid(struct FGuid* InGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsGuidValid");

	UObject_IsGuidValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGuid != nullptr)
		*InGuid = params.InGuid;

	return params.ReturnValue;
}


// Function Core.Object.InvalidateGuid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FGuid                   InGuid                         (CPF_Parm, CPF_OutParm)

void UObject::STATIC_InvalidateGuid(struct FGuid* InGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InvalidateGuid");

	UObject_InvalidateGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGuid != nullptr)
		*InGuid = params.InGuid;
}


// Function Core.Object.FindStructProperty
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UClass*                  PropertyClass                  (CPF_Parm)
// struct FName                   PropertyName                   (CPF_Parm)
// struct FName                   StructName                     (CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)

class UObject* UObject::FindStructProperty(class UClass* PropertyClass, const struct FName& PropertyName, const struct FName& StructName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindStructProperty");

	UObject_FindStructProperty_Params params;
	params.PropertyClass = PropertyClass;
	params.PropertyName = PropertyName;
	params.StructName = StructName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FindProperty
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UClass*                  PropertyClass                  (CPF_Parm)
// struct FName                   PropertyName                   (CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)

class UObject* UObject::FindProperty(class UClass* PropertyClass, const struct FName& PropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindProperty");

	UObject_FindProperty_Params params;
	params.PropertyClass = PropertyClass;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Identical
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UObject*                 Left                           (CPF_Parm)
// class UObject*                 Right                          (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Identical(class UObject* Left, class UObject* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Identical");

	UObject_Identical_Params params;
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DuplicateObject
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UObject*                 Template                       (CPF_Parm)
// class UObject*                 ObjOuter                       (CPF_OptionalParm, CPF_Parm)
// class UClass*                  DestClass                      (CPF_OptionalParm, CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)

class UObject* UObject::DuplicateObject(class UObject* Template, class UObject* ObjOuter, class UClass* DestClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DuplicateObject");

	UObject_DuplicateObject_Params params;
	params.Template = Template;
	params.ObjOuter = ObjOuter;
	params.DestClass = DestClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RunningAverage
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// float                          OldAverage                     (CPF_Parm)
// float                          NewValue                       (CPF_Parm)
// int                            NewCount                       (CPF_Parm)
// int                            OldCount                       (CPF_OptionalParm, CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::RunningAverage(float OldAverage, float NewValue, int NewCount, int OldCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RunningAverage");

	UObject_RunningAverage_Params params;
	params.OldAverage = OldAverage;
	params.NewValue = NewValue;
	params.NewCount = NewCount;
	params.OldCount = OldCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetCurrentTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_GetCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetCurrentTime");

	UObject_GetCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetMaxLinearColorBrightness
// (FUNC_Final, FUNC_Simulated, FUNC_Native, FUNC_Public)
// Parameters:
// struct FLinearColor            C                              (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::GetMaxLinearColorBrightness(const struct FLinearColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetMaxLinearColorBrightness");

	UObject_GetMaxLinearColorBrightness_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetMaxColorBrightness
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// struct FColor                  C                              (CPF_Parm)
// struct FColor                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FColor UObject::GetMaxColorBrightness(const struct FColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetMaxColorBrightness");

	UObject_GetMaxColorBrightness_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LABtoRGB
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FLinearColor            C                              (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_LABtoRGB(const struct FLinearColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LABtoRGB");

	UObject_LABtoRGB_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RGBtoLAB
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FLinearColor            C                              (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_RGBtoLAB(const struct FLinearColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RGBtoLAB");

	UObject_RGBtoLAB_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.HSVtoRGB
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FLinearColor            C                              (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_HSVtoRGB(const struct FLinearColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.HSVtoRGB");

	UObject_HSVtoRGB_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RGBtoHSV
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FLinearColor            C                              (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_RGBtoHSV(const struct FLinearColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RGBtoHSV");

	UObject_RGBtoHSV_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IntToLinearColor
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// int                            I                              (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_IntToLinearColor(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IntToLinearColor");

	UObject_IntToLinearColor_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IntToColor
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// int                            I                              (CPF_Parm)
// struct FColor                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FColor UObject::STATIC_IntToColor(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IntToColor");

	UObject_IntToColor_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinearColorToInt
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// struct FLinearColor            C                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_LinearColorToInt(const struct FLinearColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorToInt");

	UObject_LinearColorToInt_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorToInt
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// struct FColor                  C                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_ColorToInt(const struct FColor& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorToInt");

	UObject_ColorToInt_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SolveVelocityQuadratic
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          Distance                       (CPF_Parm)
// float                          Speed                          (CPF_Parm)
// float                          Accel                          (CPF_Parm)
// float                          Time                           (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::SolveVelocityQuadratic(float Distance, float Speed, float Accel, float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SolveVelocityQuadratic");

	UObject_SolveVelocityQuadratic_Params params;
	params.Distance = Distance;
	params.Speed = Speed;
	params.Accel = Accel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

	return params.ReturnValue;
}


// Function Core.Object.Sign
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          X                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::Sign(float X)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sign");

	UObject_Sign_Params params;
	params.X = X;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeVector2D
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_MakeVector2D(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeVector2D");

	UObject_MakeVector2D_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VAbs
// (FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 V                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_VAbs(const struct FVector& V)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VAbs");

	UObject_VAbs_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeVector
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// float                          Z                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_MakeVector(float X, float Y, float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeVector");

	UObject_MakeVector_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FlattenVector
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// struct FVector                 NormalToFlatten                (CPF_Parm)
// struct FVector                 PlaneNormal                    (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::FlattenVector(const struct FVector& NormalToFlatten, const struct FVector& PlaneNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FlattenVector");

	UObject_FlattenVector_Params params;
	params.NormalToFlatten = NormalToFlatten;
	params.PlaneNormal = PlaneNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRealArchetypeName
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FName UObject::GetRealArchetypeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRealArchetypeName");

	UObject_GetRealArchetypeName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FormatTime
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// int                            Seconds                        (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_FormatTime(int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FormatTime");

	UObject_FormatTime_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SwapRefrences
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UObject*                 A                              (CPF_Parm, CPF_OutParm)
// class UObject*                 B                              (CPF_Parm, CPF_OutParm)

void UObject::SwapRefrences(class UObject** A, class UObject** B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SwapRefrences");

	UObject_SwapRefrences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;
	if (B != nullptr)
		*B = params.B;
}


// Function Core.Object.GetTextArchetype
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UClass*                  ArchetypeClass                 (CPF_Parm)
// struct FString                 Path                           (CPF_Const, CPF_Parm, CPF_NeedCtorLink)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)

class UObject* UObject::STATIC_GetTextArchetype(class UClass* ArchetypeClass, const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetTextArchetype");

	UObject_GetTextArchetype_Params params;
	params.ArchetypeClass = ArchetypeClass;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsArchetype
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::IsArchetype()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsArchetype");

	UObject_IsArchetype_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.UnsubscribeFromAllEvents
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UObject::UnsubscribeFromAllEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.UnsubscribeFromAllEvents");

	UObject_UnsubscribeFromAllEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NewInstance
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UObject*                 ObjOuter                       (CPF_OptionalParm, CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)

class UObject* UObject::NewInstance(class UObject* ObjOuter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NewInstance");

	UObject_NewInstance_Params params;
	params.ObjOuter = ObjOuter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PrintDebugInfo
// (FUNC_Simulated, FUNC_Public)
// Parameters:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UObject::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PrintDebugInfo");

	UObject_PrintDebugInfo_Params params;
	params.Drawer = Drawer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.RotatorFromInt
// (FUNC_Final, FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// int                            RotationPitchAndYaw            (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::RotatorFromInt(int RotationPitchAndYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotatorFromInt");

	UObject_RotatorFromInt_Params params;
	params.RotationPitchAndYaw = RotationPitchAndYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RotatorToInt
// (FUNC_Final, FUNC_Defined, FUNC_Public)
// Parameters:
// struct FRotator                Rotation                       (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::RotatorToInt(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotatorToInt");

	UObject_RotatorToInt_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetLanguage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_GetLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetLanguage");

	UObject_GetLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRandomOptionSumFrequency
// (FUNC_Final, FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<float>                  FreqList                       (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::GetRandomOptionSumFrequency(TArray<float>* FreqList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRandomOptionSumFrequency");

	UObject_GetRandomOptionSumFrequency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FreqList != nullptr)
		*FreqList = params.FreqList;

	return params.ReturnValue;
}


// Function Core.Object.GetBuildChangelistNumber
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::GetBuildChangelistNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetBuildChangelistNumber");

	UObject_GetBuildChangelistNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetEngineVersion
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::GetEngineVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEngineVersion");

	UObject_GetEngineVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetAppSeconds
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::GetAppSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAppSeconds");

	UObject_GetAppSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetSystemTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            Year                           (CPF_Parm, CPF_OutParm)
// int                            Month                          (CPF_Parm, CPF_OutParm)
// int                            DayOfWeek                      (CPF_Parm, CPF_OutParm)
// int                            Day                            (CPF_Parm, CPF_OutParm)
// int                            Hour                           (CPF_Parm, CPF_OutParm)
// int                            Min                            (CPF_Parm, CPF_OutParm)
// int                            Sec                            (CPF_Parm, CPF_OutParm)
// int                            MSec                           (CPF_Parm, CPF_OutParm)

void UObject::GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetSystemTime");

	UObject_GetSystemTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Year != nullptr)
		*Year = params.Year;
	if (Month != nullptr)
		*Month = params.Month;
	if (DayOfWeek != nullptr)
		*DayOfWeek = params.DayOfWeek;
	if (Day != nullptr)
		*Day = params.Day;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Min != nullptr)
		*Min = params.Min;
	if (Sec != nullptr)
		*Sec = params.Sec;
	if (MSec != nullptr)
		*MSec = params.MSec;
}


// Function Core.Object.TimeStamp
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::TimeStamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TimeStamp");

	UObject_TimeStamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformVectorByRotation
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FRotator                SourceRotation                 (CPF_Parm)
// struct FVector                 SourceVector                   (CPF_Parm)
// bool                           bInverse                       (CPF_OptionalParm, CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVectorByRotation");

	UObject_TransformVectorByRotation_Params params;
	params.SourceRotation = SourceRotation;
	params.SourceVector = SourceVector;
	params.bInverse = bInverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetPackageName
// (FUNC_Final, FUNC_Defined, FUNC_Public)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FName UObject::GetPackageName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPackageName");

	UObject_GetPackageName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsPendingKill
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::IsPendingKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsPendingKill");

	UObject_IsPendingKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ByteToFloat
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  inputByte                      (CPF_Parm)
// bool                           bSigned                        (CPF_OptionalParm, CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::ByteToFloat(unsigned char inputByte, bool bSigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ByteToFloat");

	UObject_ByteToFloat_Params params;
	params.inputByte = inputByte;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FloatToByte
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// float                          inputFloat                     (CPF_Parm)
// bool                           bSigned                        (CPF_OptionalParm, CPF_Parm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::FloatToByte(float inputFloat, bool bSigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FloatToByte");

	UObject_FloatToByte_Params params;
	params.inputFloat = inputFloat;
	params.bSigned = bSigned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.UnwindHeading
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_UnwindHeading(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.UnwindHeading");

	UObject_UnwindHeading_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FindDeltaAngle
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A1                             (CPF_Parm)
// float                          A2                             (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FindDeltaAngle(float A1, float A2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindDeltaAngle");

	UObject_FindDeltaAngle_Params params;
	params.A1 = A1;
	params.A2 = A2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetHeadingAngle
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Dir                            (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_GetHeadingAngle(const struct FVector& Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetHeadingAngle");

	UObject_GetHeadingAngle_Params params;
	params.Dir = Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetAngularDegreesFromRadians
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector2D               OutFOV                         (CPF_Parm, CPF_OutParm)

void UObject::STATIC_GetAngularDegreesFromRadians(struct FVector2D* OutFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDegreesFromRadians");

	UObject_GetAngularDegreesFromRadians_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFOV != nullptr)
		*OutFOV = params.OutFOV;
}


// Function Core.Object.GetAngularFromDotDist
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector2D               OutAngDist                     (CPF_Parm, CPF_OutParm)
// struct FVector2D               DotDist                        (CPF_Parm)

void UObject::STATIC_GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D* OutAngDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularFromDotDist");

	UObject_GetAngularFromDotDist_Params params;
	params.DotDist = DotDist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngDist != nullptr)
		*OutAngDist = params.OutAngDist;
}


// Function Core.Object.GetAngularDistance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector2D               OutAngularDist                 (CPF_Parm, CPF_OutParm)
// struct FVector                 Direction                      (CPF_Parm)
// struct FVector                 AxisX                          (CPF_Parm)
// struct FVector                 AxisY                          (CPF_Parm)
// struct FVector                 AxisZ                          (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutAngularDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAngularDistance");

	UObject_GetAngularDistance_Params params;
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngularDist != nullptr)
		*OutAngularDist = params.OutAngularDist;

	return params.ReturnValue;
}


// Function Core.Object.GetDotDistance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector2D               OutDotDist                     (CPF_Parm, CPF_OutParm)
// struct FVector                 Direction                      (CPF_Parm)
// struct FVector                 AxisX                          (CPF_Parm)
// struct FVector                 AxisY                          (CPF_Parm)
// struct FVector                 AxisZ                          (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutDotDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetDotDistance");

	UObject_GetDotDistance_Params params;
	params.Direction = Direction;
	params.AxisX = AxisX;
	params.AxisY = AxisY;
	params.AxisZ = AxisZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDotDist != nullptr)
		*OutDotDist = params.OutDotDist;

	return params.ReturnValue;
}


// Function Core.Object.LinePlaneIntersection
// (FUNC_Final, FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FVector                 LineStart                      (CPF_Parm)
// struct FVector                 LineEnd                        (CPF_Parm)
// struct FVector                 PlaneOrigin                    (CPF_Parm)
// struct FVector                 PlaneNormal                    (CPF_Parm)
// struct FVector                 Out_Intersection               (CPF_Parm, CPF_OutParm)
// float                          Out_T                          (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
// bool                           bCheckLineSegment              (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, bool bCheckLineSegment, struct FVector* Out_Intersection, float* Out_T)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinePlaneIntersection");

	UObject_LinePlaneIntersection_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.PlaneOrigin = PlaneOrigin;
	params.PlaneNormal = PlaneNormal;
	params.bCheckLineSegment = bCheckLineSegment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Intersection != nullptr)
		*Out_Intersection = params.Out_Intersection;
	if (Out_T != nullptr)
		*Out_T = params.Out_T;

	return params.ReturnValue;
}


// Function Core.Object.PointProjectToPlane
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 C                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointProjectToPlane");

	UObject_PointProjectToPlane_Params params;
	params.Point = Point;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToPlane
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FVector                 Point                          (CPF_Parm)
// struct FRotator                Orientation                    (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FVector                 out_ClosestPoint               (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToPlane");

	UObject_PointDistToPlane_Params params;
	params.Point = Point;
	params.Orientation = Orientation;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ClosestPoint != nullptr)
		*out_ClosestPoint = params.out_ClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToSegment
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 StartPoint                     (CPF_Parm)
// struct FVector                 EndPoint                       (CPF_Parm)
// struct FVector                 OutClosestPoint                (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToSegment");

	UObject_PointDistToSegment_Params params;
	params.Point = Point;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.PointDistToLine
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector                 Point                          (CPF_Parm)
// struct FVector                 Line                           (CPF_Parm)
// struct FVector                 Origin                         (CPF_Parm)
// struct FVector                 OutClosestPoint                (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PointDistToLine");

	UObject_PointDistToLine_Params params;
	params.Point = Point;
	params.Line = Line;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPoint != nullptr)
		*OutClosestPoint = params.OutClosestPoint;

	return params.ReturnValue;
}


// Function Core.Object.GetPerObjectConfigObjects
// (FUNC_Final, FUNC_Iterator, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UClass*                  SearchClass                    (CPF_Parm)
// class UObject*                 OutObject                      (CPF_Parm, CPF_OutParm)
// class UObject*                 ObjectOuter                    (CPF_OptionalParm, CPF_Parm)
// int                            MaxResults                     (CPF_OptionalParm, CPF_Parm)

void UObject::STATIC_GetPerObjectConfigObjects(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, class UObject** OutObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPerObjectConfigObjects");

	UObject_GetPerObjectConfigObjects_Params params;
	params.SearchClass = SearchClass;
	params.ObjectOuter = ObjectOuter;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutObject != nullptr)
		*OutObject = params.OutObject;
}


// Function Core.Object.GetPerObjectConfigSections
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UClass*                  SearchClass                    (CPF_Parm)
// TArray<struct FString>         out_SectionNames               (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class UObject*                 ObjectOuter                    (CPF_OptionalParm, CPF_Parm)
// int                            MaxResults                     (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>* out_SectionNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPerObjectConfigSections");

	UObject_GetPerObjectConfigSections_Params params;
	params.SearchClass = SearchClass;
	params.ObjectOuter = ObjectOuter;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_SectionNames != nullptr)
		*out_SectionNames = params.out_SectionNames;

	return params.ReturnValue;
}


// Function Core.Object.ImportJSON
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 PropertyName                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 JSON                           (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UObject::STATIC_ImportJSON(const struct FString& PropertyName, struct FString* JSON)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ImportJSON");

	UObject_ImportJSON_Params params;
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JSON != nullptr)
		*JSON = params.JSON;
}


// Function Core.Object.StaticSaveConfig
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)

void UObject::STATIC_StaticSaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.StaticSaveConfig");

	UObject_StaticSaveConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SaveConfig
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UObject::SaveConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SaveConfig");

	UObject_SaveConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FindObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 ObjectName                     (CPF_Parm, CPF_NeedCtorLink)
// class UClass*                  ObjectClass                    (CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UObject* UObject::STATIC_FindObject(const struct FString& ObjectName, class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FindObject");

	UObject_FindObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DynamicLoadObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 ObjectName                     (CPF_Parm, CPF_NeedCtorLink)
// class UClass*                  ObjectClass                    (CPF_Parm)
// bool                           MayFail                        (CPF_OptionalParm, CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UObject* UObject::STATIC_DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DynamicLoadObject");

	UObject_DynamicLoadObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;
	params.MayFail = MayFail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EnumFromString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UObject*                 E                              (CPF_Parm)
// struct FName                   ValueName                      (CPF_Parm, CPF_CoerceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_EnumFromString(class UObject* E, const struct FName& ValueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EnumFromString");

	UObject_EnumFromString_Params params;
	params.E = E;
	params.ValueName = ValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetEnum
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UObject*                 E                              (CPF_Parm)
// int                            I                              (CPF_Parm, CPF_CoerceParm)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FName UObject::STATIC_GetEnum(class UObject* E, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetEnum");

	UObject_GetEnum_Params params;
	params.E = E;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Disable
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   ProbeFunc                      (CPF_Parm)

void UObject::Disable(const struct FName& ProbeFunc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Disable");

	UObject_Disable_Params params;
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.Enable
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   ProbeFunc                      (CPF_Parm)

void UObject::Enable(const struct FName& ProbeFunc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Enable");

	UObject_Enable_Params params;
	params.ProbeFunc = ProbeFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ContinuedState
// (FUNC_Event, FUNC_Public)

void UObject::ContinuedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ContinuedState");

	UObject_ContinuedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PausedState
// (FUNC_Event, FUNC_Public)

void UObject::PausedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PausedState");

	UObject_PausedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PoppedState
// (FUNC_Event, FUNC_Public)

void UObject::PoppedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PoppedState");

	UObject_PoppedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushedState
// (FUNC_Event, FUNC_Public)

void UObject::PushedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushedState");

	UObject_PushedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.EndState
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   NextStateName                  (CPF_Parm)

void UObject::EndState(const struct FName& NextStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EndState");

	UObject_EndState_Params params;
	params.NextStateName = NextStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.BeginState
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   PreviousStateName              (CPF_Parm)

void UObject::BeginState(const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.BeginState");

	UObject_BeginState_Params params;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.DumpStateStack
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UObject::DumpStateStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DumpStateStack");

	UObject_DumpStateStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PopState
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// bool                           bPopAll                        (CPF_OptionalParm, CPF_Parm)

void UObject::PopState(bool bPopAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PopState");

	UObject_PopState_Params params;
	params.bPopAll = bPopAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.PushState
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FName                   NewState                       (CPF_Parm)
// struct FName                   NewLabel                       (CPF_OptionalParm, CPF_Parm)

void UObject::PushState(const struct FName& NewState, const struct FName& NewLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PushState");

	UObject_PushState_Params params;
	params.NewState = NewState;
	params.NewLabel = NewLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetStateName
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FName UObject::GetStateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetStateName");

	UObject_GetStateName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsChildState
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   TestState                      (CPF_Parm)
// struct FName                   TestParentState                (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::IsChildState(const struct FName& TestState, const struct FName& TestParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsChildState");

	UObject_IsChildState_Params params;
	params.TestState = TestState;
	params.TestParentState = TestParentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsInState
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FName                   TestState                      (CPF_Parm)
// bool                           bTestStateStack                (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::IsInState(const struct FName& TestState, bool bTestStateStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsInState");

	UObject_IsInState_Params params;
	params.TestState = TestState;
	params.bTestStateStack = bTestStateStack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GotoState
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FName                   NewState                       (CPF_OptionalParm, CPF_Parm)
// struct FName                   Label                          (CPF_OptionalParm, CPF_Parm)
// bool                           bForceEvents                   (CPF_OptionalParm, CPF_Parm)
// bool                           bKeepStack                     (CPF_OptionalParm, CPF_Parm)

void UObject::GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GotoState");

	UObject_GotoState_Params params;
	params.NewState = NewState;
	params.Label = Label;
	params.bForceEvents = bForceEvents;
	params.bKeepStack = bKeepStack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.IsUTracing
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_IsUTracing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsUTracing");

	UObject_IsUTracing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SetUTracing
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           bShouldUTrace                  (CPF_Parm)

void UObject::STATIC_SetUTracing(bool bShouldUTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SetUTracing");

	UObject_SetUTracing_Params params;
	params.bShouldUTrace = bShouldUTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetFuncName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FName UObject::STATIC_GetFuncName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetFuncName");

	UObject_GetFuncName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DebugBreak
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            UserFlags                      (CPF_OptionalParm, CPF_Parm)
// TEnumAsByte<EDebugBreakType>   DebuggerType                   (CPF_OptionalParm, CPF_Parm)

void UObject::STATIC_DebugBreak(int UserFlags, TEnumAsByte<EDebugBreakType> DebuggerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DebugBreak");

	UObject_DebugBreak_Params params;
	params.UserFlags = UserFlags;
	params.DebuggerType = DebuggerType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.GetScriptTrace
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_GetScriptTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetScriptTrace");

	UObject_GetScriptTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ScriptTrace
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)

void UObject::STATIC_ScriptTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ScriptTrace");

	UObject_ScriptTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ParseLocalizedPropertyPath
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 PathName                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_ParseLocalizedPropertyPath(const struct FString& PathName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseLocalizedPropertyPath");

	UObject_ParseLocalizedPropertyPath_Params params;
	params.PathName = PathName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Localize
// (FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 SectionName                    (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 KeyName                        (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 PackageName                    (CPF_OptionalParm, CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// bool                           bOptional                      (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName, bool bOptional)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Localize");

	UObject_Localize_Params params;
	params.SectionName = SectionName;
	params.KeyName = KeyName;
	params.PackageName = PackageName;
	params.bOptional = bOptional;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.WarnInternal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)

void UObject::STATIC_WarnInternal(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.WarnInternal");

	UObject_WarnInternal_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LogInternal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FName                   Tag                            (CPF_OptionalParm, CPF_Parm)
// bool                           bFileOnly                      (CPF_OptionalParm, CPF_Parm)

void UObject::STATIC_LogInternal(const struct FString& S, const struct FName& Tag, bool bFileOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LogInternal");

	UObject_LogInternal_Params params;
	params.S = S;
	params.Tag = Tag;
	params.bFileOnly = bFileOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.LinearColorLerp
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FLinearColor            ColorA                         (CPF_Parm)
// struct FLinearColor            ColorB                         (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_LinearColorLerp(const struct FLinearColor& ColorA, const struct FLinearColor& ColorB, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorLerp");

	UObject_LinearColorLerp_Params params;
	params.ColorA = ColorA;
	params.ColorB = ColorB;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_LinearColorLinearColor
// (FUNC_Final, FUNC_Defined, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FLinearColor            A                              (CPF_Parm)
// struct FLinearColor            B                              (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_LinearColorLinearColor");

	UObject_Subtract_LinearColorLinearColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_LinearColorFloat
// (FUNC_Final, FUNC_Defined, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FLinearColor            LC                             (CPF_Parm)
// float                          Mult                           (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_LinearColorFloat");

	UObject_Multiply_LinearColorFloat_Params params;
	params.LC = LC;
	params.Mult = Mult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ConvertFromSRGB
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FLinearColor            OldColor                       (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_ConvertFromSRGB(const struct FLinearColor& OldColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ConvertFromSRGB");

	UObject_ConvertFromSRGB_Params params;
	params.OldColor = OldColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LinearColorToColor
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FLinearColor            OldColor                       (CPF_Parm)
// struct FColor                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FColor UObject::STATIC_LinearColorToColor(const struct FLinearColor& OldColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LinearColorToColor");

	UObject_LinearColorToColor_Params params;
	params.OldColor = OldColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ColorToLinearColor
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FColor                  OldColor                       (CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_ColorToLinearColor(const struct FColor& OldColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ColorToLinearColor");

	UObject_ColorToLinearColor_Params params;
	params.OldColor = OldColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeLinearColor
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// float                          R                              (CPF_Parm)
// float                          G                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          A                              (CPF_OptionalParm, CPF_Parm)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FLinearColor UObject::STATIC_MakeLinearColor(float R, float G, float B, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeLinearColor");

	UObject_MakeLinearColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LerpColor
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// struct FColor                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FColor UObject::STATIC_LerpColor(const struct FColor& A, const struct FColor& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LerpColor");

	UObject_LerpColor_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeColor
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// unsigned char                  R                              (CPF_Parm)
// unsigned char                  G                              (CPF_Parm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  A                              (CPF_OptionalParm, CPF_Parm)
// struct FColor                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FColor UObject::STATIC_MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeColor");

	UObject_MakeColor_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_ColorColor
// (FUNC_Final, FUNC_Defined, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)
// struct FColor                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FColor UObject::STATIC_Add_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_ColorColor");

	UObject_Add_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_ColorFloat
// (FUNC_Final, FUNC_Defined, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FColor                  A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// struct FColor                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FColor UObject::STATIC_Multiply_ColorFloat(const struct FColor& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_ColorFloat");

	UObject_Multiply_ColorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatColor
// (FUNC_Final, FUNC_Defined, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)
// struct FColor                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FColor UObject::STATIC_Multiply_FloatColor(float A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatColor");

	UObject_Multiply_FloatColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_ColorColor
// (FUNC_Final, FUNC_Defined, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FColor                  A                              (CPF_Parm)
// struct FColor                  B                              (CPF_Parm)
// struct FColor                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FColor UObject::STATIC_Subtract_ColorColor(const struct FColor& A, const struct FColor& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_ColorColor");

	UObject_Subtract_ColorColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveVector2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FInterpCurveVector2D    Vector2DCurve                  (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// float                          InVal                          (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D* Vector2DCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector2D");

	UObject_EvalInterpCurveVector2D_Params params;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector2DCurve != nullptr)
		*Vector2DCurve = params.Vector2DCurve;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FInterpCurveVector      VectorCurve                    (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// float                          InVal                          (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_EvalInterpCurveVector(float InVal, struct FInterpCurveVector* VectorCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveVector");

	UObject_EvalInterpCurveVector_Params params;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VectorCurve != nullptr)
		*VectorCurve = params.VectorCurve;

	return params.ReturnValue;
}


// Function Core.Object.EvalInterpCurveFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FInterpCurveFloat       FloatCurve                     (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// float                          InVal                          (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat* FloatCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EvalInterpCurveFloat");

	UObject_EvalInterpCurveFloat_Params params;
	params.InVal = InVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FloatCurve != nullptr)
		*FloatCurve = params.FloatCurve;

	return params.ReturnValue;
}


// Function Core.Object.vect2d
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// float                          InX                            (CPF_Parm)
// float                          InY                            (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_vect2d(float InX, float InY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.vect2d");

	UObject_vect2d_Params params;
	params.InX = InX;
	params.InY = InY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetMappedRangeValue
// (FUNC_Final, FUNC_Simulated, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               InputRange                     (CPF_Parm)
// struct FVector2D               OutputRange                    (CPF_Parm)
// float                          Value                          (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetMappedRangeValue");

	UObject_GetMappedRangeValue_Params params;
	params.InputRange = InputRange;
	params.OutputRange = OutputRange;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRangePctByValue
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               Range                          (CPF_Parm)
// float                          Value                          (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_GetRangePctByValue(const struct FVector2D& Range, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangePctByValue");

	UObject_GetRangePctByValue_Params params;
	params.Range = Range;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRangeValueByPct
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               Range                          (CPF_Parm)
// float                          Pct                            (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_GetRangeValueByPct(const struct FVector2D& Range, float Pct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRangeValueByPct");

	UObject_GetRangeValueByPct_Params params;
	params.Range = Range;
	params.Pct = Pct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.V2DNormal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_V2DNormal(const struct FVector2D& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.V2DNormal");

	UObject_V2DNormal_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.V2DSizeSq
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_V2DSizeSq(const struct FVector2D& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.V2DSizeSq");

	UObject_V2DSizeSq_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.V2DSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_V2DSize(const struct FVector2D& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.V2DSize");

	UObject_V2DSize_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Dot_Vector2DVector2D
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Dot_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Dot_Vector2DVector2D");

	UObject_Dot_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_Vector2DVector2D
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector2D               A                              (CPF_Parm, CPF_OutParm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_SubtractEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_Vector2DVector2D");

	UObject_SubtractEqual_Vector2DVector2D_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_Vector2DVector2D
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector2D               A                              (CPF_Parm, CPF_OutParm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_AddEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_Vector2DVector2D");

	UObject_AddEqual_Vector2DVector2D_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_Vector2DFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector2D               A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_DivideEqual_Vector2DFloat(float B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_Vector2DFloat");

	UObject_DivideEqual_Vector2DFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_Vector2DFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector2D               A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_MultiplyEqual_Vector2DFloat(float B, struct FVector2D* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_Vector2DFloat");

	UObject_MultiplyEqual_Vector2DFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Divide_Vector2DFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_Divide_Vector2DFloat(const struct FVector2D& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_Vector2DFloat");

	UObject_Divide_Vector2DFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_Vector2DFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_Multiply_Vector2DFloat(const struct FVector2D& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_Vector2DFloat");

	UObject_Multiply_Vector2DFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_Vector2DVector2D
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_Vector2DVector2D");

	UObject_Subtract_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_Vector2DVector2D
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector2D               A                              (CPF_Parm)
// struct FVector2D               B                              (CPF_Parm)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector2D UObject::STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_Vector2DVector2D");

	UObject_Add_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_QuatQuat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQuat UObject::STATIC_Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_QuatQuat");

	UObject_Subtract_QuatQuat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_QuatQuat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQuat UObject::STATIC_Add_QuatQuat(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_QuatQuat");

	UObject_Add_QuatQuat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatSlerp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// bool                           bShortestPath                  (CPF_OptionalParm, CPF_Parm)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQuat UObject::STATIC_QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatSlerp");

	UObject_QuatSlerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatToRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FQuat                   A                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_QuatToRotator(const struct FQuat& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatToRotator");

	UObject_QuatToRotator_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFromRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQuat UObject::STATIC_QuatFromRotator(const struct FRotator& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromRotator");

	UObject_QuatFromRotator_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFromAxisAndAngle
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Axis                           (CPF_Parm)
// float                          Angle                          (CPF_Parm)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQuat UObject::STATIC_QuatFromAxisAndAngle(const struct FVector& Axis, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFromAxisAndAngle");

	UObject_QuatFromAxisAndAngle_Params params;
	params.Axis = Axis;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatFindBetween
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQuat UObject::STATIC_QuatFindBetween(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatFindBetween");

	UObject_QuatFindBetween_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatRotateVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FQuat                   A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_QuatRotateVector(const struct FQuat& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatRotateVector");

	UObject_QuatRotateVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatInvert
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQuat UObject::STATIC_QuatInvert(const struct FQuat& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatInvert");

	UObject_QuatInvert_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatDot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_QuatDot(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatDot");

	UObject_QuatDot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QuatProduct
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FQuat                   A                              (CPF_Parm)
// struct FQuat                   B                              (CPF_Parm)
// struct FQuat                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FQuat UObject::STATIC_QuatProduct(const struct FQuat& A, const struct FQuat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QuatProduct");

	UObject_QuatProduct_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetAxis
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FMatrix                 TM                             (CPF_Parm)
// TEnumAsByte<EAxis>             Axis                           (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<EAxis> Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetAxis");

	UObject_MatrixGetAxis_Params params;
	params.TM = TM;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetOrigin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_MatrixGetOrigin(const struct FMatrix& TM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetOrigin");

	UObject_MatrixGetOrigin_Params params;
	params.TM = TM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MatrixGetRotator
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FMatrix                 TM                             (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_MatrixGetRotator(const struct FMatrix& TM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MatrixGetRotator");

	UObject_MatrixGetRotator_Params params;
	params.TM = TM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotationMatrix
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                Rotation                       (CPF_Parm)
// struct FMatrix                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMatrix UObject::STATIC_MakeRotationMatrix(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationMatrix");

	UObject_MakeRotationMatrix_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotationTranslationMatrix
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Translation                    (CPF_Parm)
// struct FRotator                Rotation                       (CPF_Parm)
// struct FMatrix                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMatrix UObject::STATIC_MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotationTranslationMatrix");

	UObject_MakeRotationTranslationMatrix_Params params;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InverseTransformNormal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformNormal");

	UObject_InverseTransformNormal_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformNormal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_TransformNormal(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformNormal");

	UObject_TransformNormal_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InverseTransformVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_InverseTransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InverseTransformVector");

	UObject_InverseTransformVector_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.TransformVector
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FMatrix                 TM                             (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_TransformVector(const struct FMatrix& TM, const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.TransformVector");

	UObject_TransformVector_Params params;
	params.TM = TM;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_MatrixMatrix
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FMatrix                 A                              (CPF_Parm)
// struct FMatrix                 B                              (CPF_Parm)
// struct FMatrix                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMatrix UObject::STATIC_Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_MatrixMatrix");

	UObject_Multiply_MatrixMatrix_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_NameName
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FName                   A                              (CPF_Parm)
// struct FName                   B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_NameName");

	UObject_NotEqual_NameName_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_NameName
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FName                   A                              (CPF_Parm)
// struct FName                   B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_NameName");

	UObject_EqualEqual_NameName_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsA
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   ClassName                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::IsA(const struct FName& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsA");

	UObject_IsA_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClassIsChildOf
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UClass*                  TestClass                      (CPF_Parm)
// class UClass*                  ParentClass                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClassIsChildOf");

	UObject_ClassIsChildOf_Params params;
	params.TestClass = TestClass;
	params.ParentClass = ParentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_InterfaceInterface
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// TScriptInterface<class UInterface> A                              (CPF_Parm)
// TScriptInterface<class UInterface> B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_InterfaceInterface");

	UObject_NotEqual_InterfaceInterface_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_InterfaceInterface
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// TScriptInterface<class UInterface> A                              (CPF_Parm)
// TScriptInterface<class UInterface> B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_InterfaceInterface");

	UObject_EqualEqual_InterfaceInterface_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_ObjectObject
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// class UObject*                 A                              (CPF_Parm)
// class UObject*                 B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_ObjectObject");

	UObject_NotEqual_ObjectObject_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_ObjectObject
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// class UObject*                 A                              (CPF_Parm)
// class UObject*                 B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_ObjectObject");

	UObject_EqualEqual_ObjectObject_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetPathName
// (FUNC_Final, FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::GetPathName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetPathName");

	UObject_GetPathName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.PathName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class UObject*                 CheckObject                    (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_PathName(class UObject* CheckObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.PathName");

	UObject_PathName_Params params;
	params.CheckObject = CheckObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SplitString
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Source                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Delimiter                      (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           bCullEmpty                     (CPF_OptionalParm, CPF_Parm)
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FString> UObject::STATIC_SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SplitString");

	UObject_SplitString_Params params;
	params.Source = Source;
	params.Delimiter = Delimiter;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ParseStringIntoArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 BaseString                     (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         Pieces                         (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           bCullEmpty                     (CPF_Parm)

void UObject::STATIC_ParseStringIntoArray(const struct FString& BaseString, const struct FString& delim, bool bCullEmpty, TArray<struct FString>* Pieces)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ParseStringIntoArray");

	UObject_ParseStringIntoArray_Params params;
	params.BaseString = BaseString;
	params.delim = delim;
	params.bCullEmpty = bCullEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pieces != nullptr)
		*Pieces = params.Pieces;
}


// Function Core.Object.RepeatString
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 InValue                        (CPF_Parm, CPF_NeedCtorLink)
// int                            Count                          (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_RepeatString(const struct FString& InValue, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RepeatString");

	UObject_RepeatString_Params params;
	params.InValue = InValue;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.JoinArrayQWord
// (FUNC_Final, FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 delim                          (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           bIgnoreBlanks                  (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::JoinArrayQWord(const struct FString& delim, bool bIgnoreBlanks)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArrayQWord");

	UObject_JoinArrayQWord_Params params;
	params.delim = delim;
	params.bIgnoreBlanks = bIgnoreBlanks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.JoinArrayInt
// (FUNC_Final, FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<int>                    IntArray                       (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           bIgnoreBlanks                  (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::JoinArrayInt(const struct FString& delim, bool bIgnoreBlanks, TArray<int>* IntArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArrayInt");

	UObject_JoinArrayInt_Params params;
	params.delim = delim;
	params.bIgnoreBlanks = bIgnoreBlanks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntArray != nullptr)
		*IntArray = params.IntArray;

	return params.ReturnValue;
}


// Function Core.Object.JoinArrayName
// (FUNC_Final, FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FName>           NameArray                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           bIgnoreBlanks                  (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::JoinArrayName(const struct FString& delim, bool bIgnoreBlanks, TArray<struct FName>* NameArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArrayName");

	UObject_JoinArrayName_Params params;
	params.delim = delim;
	params.bIgnoreBlanks = bIgnoreBlanks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameArray != nullptr)
		*NameArray = params.NameArray;

	return params.ReturnValue;
}


// Function Core.Object.JoinArrayStr
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FString>         StringArray                    (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           bIgnoreBlanks                  (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_JoinArrayStr(const struct FString& delim, bool bIgnoreBlanks, TArray<struct FString>* StringArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArrayStr");

	UObject_JoinArrayStr_Params params;
	params.delim = delim;
	params.bIgnoreBlanks = bIgnoreBlanks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringArray != nullptr)
		*StringArray = params.StringArray;

	return params.ReturnValue;
}


// Function Core.Object.JoinArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FString>         StringArray                    (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 out_Result                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 delim                          (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           bIgnoreBlanks                  (CPF_OptionalParm, CPF_Parm)

void UObject::STATIC_JoinArray(const struct FString& delim, bool bIgnoreBlanks, TArray<struct FString>* StringArray, struct FString* out_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.JoinArray");

	UObject_JoinArray_Params params;
	params.delim = delim;
	params.bIgnoreBlanks = bIgnoreBlanks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringArray != nullptr)
		*StringArray = params.StringArray;
	if (out_Result != nullptr)
		*out_Result = params.out_Result;
}


// Function Core.Object.GetRightMost
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Text                           (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_GetRightMost(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRightMost");

	UObject_GetRightMost_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Split
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Text                           (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 SplitStr                       (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// bool                           bOmitSplitStr                  (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Split");

	UObject_Split_Params params;
	params.Text = Text;
	params.SplitStr = SplitStr;
	params.bOmitSplitStr = bOmitSplitStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Trim
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Src                            (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Trim(const struct FString& Src)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Trim");

	UObject_Trim_Params params;
	params.Src = Src;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Repl
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Src                            (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 Match                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 With                           (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// bool                           bCaseSensitive                 (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Repl");

	UObject_Repl_Params params;
	params.Src = Src;
	params.Match = Match;
	params.With = With;
	params.bCaseSensitive = bCaseSensitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Asc
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Asc(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asc");

	UObject_Asc_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Chr
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// int                            I                              (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Chr(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Chr");

	UObject_Chr_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Locs
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Locs(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Locs");

	UObject_Locs_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Caps
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Caps(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Caps");

	UObject_Caps_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Right
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Right(const struct FString& S, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Right");

	UObject_Right_Params params;
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Left
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Left(const struct FString& S, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Left");

	UObject_Left_Params params;
	params.S = S;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Mid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)
// int                            J                              (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Mid(const struct FString& S, int I, int J)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Mid");

	UObject_Mid_Params params;
	params.S = S;
	params.I = I;
	params.J = J;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InStr
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 T                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// bool                           bSearchFromRight               (CPF_OptionalParm, CPF_Parm)
// bool                           bIgnoreCase                    (CPF_OptionalParm, CPF_Parm)
// int                            StartPos                       (CPF_OptionalParm, CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InStr");

	UObject_InStr_Params params;
	params.S = S;
	params.T = T;
	params.bSearchFromRight = bSearchFromRight;
	params.bIgnoreCase = bIgnoreCase;
	params.StartPos = StartPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Len
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 S                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Len(const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Len");

	UObject_Len_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_SubtractEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_StrStr");

	UObject_SubtractEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AtEqual_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_AtEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AtEqual_StrStr");

	UObject_AtEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.ConcatEqual_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_ConcatEqual_StrStr(const struct FString& B, struct FString* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ConcatEqual_StrStr");

	UObject_ConcatEqual_StrStr_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.ComplementEqual_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_ComplementEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_StrStr");

	UObject_ComplementEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_StrStr");

	UObject_NotEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_StrStr");

	UObject_EqualEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_GreaterEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_StrStr");

	UObject_GreaterEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_LessEqual_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_StrStr");

	UObject_LessEqual_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Greater_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_StrStr");

	UObject_Greater_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Less_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_StrStr");

	UObject_Less_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.At_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_At_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.At_StrStr");

	UObject_At_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Concat_StrStr
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 A                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 B                              (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_Concat_StrStr(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Concat_StrStr");

	UObject_Concat_StrStr_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RotateRotator
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Axis                           (CPF_Parm)
// struct FRotator                Rot                            (CPF_Parm)
// struct FRotator                Direction                      (CPF_Parm)
// float                          Amount                         (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_RotateRotator(const struct FVector& Axis, const struct FRotator& Rot, const struct FRotator& Direction, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotateRotator");

	UObject_RotateRotator_Params params;
	params.Axis = Axis;
	params.Rot = Rot;
	params.Direction = Direction;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MakeRotator
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// int                            Pitch                          (CPF_Parm)
// int                            Yaw                            (CPF_Parm)
// int                            Roll                           (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_MakeRotator(int Pitch, int Yaw, int Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MakeRotator");

	UObject_MakeRotator_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SClampRotAxis
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)
// int                            ViewAxis                       (CPF_Parm)
// int                            out_DeltaViewAxis              (CPF_Parm, CPF_OutParm)
// int                            MaxLimit                       (CPF_Parm)
// int                            MinLimit                       (CPF_Parm)
// float                          InterpolationSpeed             (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SClampRotAxis");

	UObject_SClampRotAxis_Params params;
	params.DeltaTime = DeltaTime;
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;
	params.InterpolationSpeed = InterpolationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxisFromRange
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// int                            Current                        (CPF_Parm)
// int                            Min                            (CPF_Parm)
// int                            Max                            (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_ClampRotAxisFromRange(int Current, int Min, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromRange");

	UObject_ClampRotAxisFromRange_Params params;
	params.Current = Current;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxisFromBase
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// int                            Current                        (CPF_Parm)
// int                            Center                         (CPF_Parm)
// int                            MaxDelta                       (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_ClampRotAxisFromBase(int Current, int Center, int MaxDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxisFromBase");

	UObject_ClampRotAxisFromBase_Params params;
	params.Current = Current;
	params.Center = Center;
	params.MaxDelta = MaxDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampRotAxis
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            ViewAxis                       (CPF_Parm)
// int                            out_DeltaViewAxis              (CPF_Parm, CPF_OutParm)
// int                            MaxLimit                       (CPF_Parm)
// int                            MinLimit                       (CPF_Parm)

void UObject::STATIC_ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampRotAxis");

	UObject_ClampRotAxis_Params params;
	params.ViewAxis = ViewAxis;
	params.MaxLimit = MaxLimit;
	params.MinLimit = MinLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DeltaViewAxis != nullptr)
		*out_DeltaViewAxis = params.out_DeltaViewAxis;
}


// Function Core.Object.FlattenRotatorOnAxis
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FVector                 AxisToRemove                   (CPF_Parm)
// struct FRotator                RotToFlatten                   (CPF_Parm)
// struct FRotator                RotToFlattenTo                 (CPF_OptionalParm, CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_FlattenRotatorOnAxis(const struct FVector& AxisToRemove, const struct FRotator& RotToFlatten, const struct FRotator& RotToFlattenTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FlattenRotatorOnAxis");

	UObject_FlattenRotatorOnAxis_Params params;
	params.AxisToRemove = AxisToRemove;
	params.RotToFlatten = RotToFlatten;
	params.RotToFlattenTo = RotToFlattenTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                R                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_RSize(const struct FRotator& R)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RSize");

	UObject_RSize_Params params;
	params.R = R;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RDiff
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_RDiff(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RDiff");

	UObject_RDiff_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NormalizeRotAxis
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// int                            Angle                          (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_NormalizeRotAxis(int Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NormalizeRotAxis");

	UObject_NormalizeRotAxis_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RInterpTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FRotator                Current                        (CPF_Parm)
// struct FRotator                Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)
// bool                           bConstantInterpSpeed           (CPF_OptionalParm, CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RInterpTo");

	UObject_RInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;
	params.bConstantInterpSpeed = bConstantInterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                R                              (CPF_Parm)
// struct FRotator                RBasis                         (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_RTransform(const struct FRotator& R, const struct FRotator& RBasis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RTransform");

	UObject_RTransform_Params params;
	params.R = R;
	params.RBasis = RBasis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RLerp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// bool                           bShortestPath                  (CPF_OptionalParm, CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RLerp");

	UObject_RLerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.bShortestPath = bShortestPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normalize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                Rot                            (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_Normalize(const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normalize");

	UObject_Normalize_Params params;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.OrthoRotation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 X                              (CPF_Parm)
// struct FVector                 Y                              (CPF_Parm)
// struct FVector                 Z                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrthoRotation");

	UObject_OrthoRotation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RotRand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// bool                           bRoll                          (CPF_OptionalParm, CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_RotRand(bool bRoll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RotRand");

	UObject_RotRand_Params params;
	params.bRoll = bRoll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRotatorAxis
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// int                            Axis                           (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_GetRotatorAxis(const struct FRotator& A, int Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRotatorAxis");

	UObject_GetRotatorAxis_Params params;
	params.A = A;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetUnAxes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// struct FVector                 X                              (CPF_Parm, CPF_OutParm)
// struct FVector                 Y                              (CPF_Parm, CPF_OutParm)
// struct FVector                 Z                              (CPF_Parm, CPF_OutParm)

void UObject::STATIC_GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetUnAxes");

	UObject_GetUnAxes_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}


// Function Core.Object.GetAxes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// struct FVector                 X                              (CPF_Parm, CPF_OutParm)
// struct FVector                 Y                              (CPF_Parm, CPF_OutParm)
// struct FVector                 Z                              (CPF_Parm, CPF_OutParm)

void UObject::STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetAxes");

	UObject_GetAxes_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;
}


// Function Core.Object.ClockwiseFrom_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_ClockwiseFrom_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClockwiseFrom_IntInt");

	UObject_ClockwiseFrom_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_RotatorRotator
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FRotator                A                              (CPF_Parm, CPF_OutParm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_RotatorRotator");

	UObject_SubtractEqual_RotatorRotator_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_RotatorRotator
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FRotator                A                              (CPF_Parm, CPF_OutParm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_RotatorRotator");

	UObject_AddEqual_RotatorRotator_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_RotatorRotator
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_RotatorRotator");

	UObject_Subtract_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_RotatorRotator
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_RotatorRotator");

	UObject_Add_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_RotatorFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FRotator                A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_DivideEqual_RotatorFloat(float B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_RotatorFloat");

	UObject_DivideEqual_RotatorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_RotatorFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FRotator                A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_MultiplyEqual_RotatorFloat(float B, struct FRotator* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_RotatorFloat");

	UObject_MultiplyEqual_RotatorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Divide_RotatorFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_Divide_RotatorFloat(const struct FRotator& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_RotatorFloat");

	UObject_Divide_RotatorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatRotator
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_Multiply_FloatRotator(float A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatRotator");

	UObject_Multiply_FloatRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_RotatorFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRotator UObject::STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_RotatorFloat");

	UObject_Multiply_RotatorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_RotatorRotator
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_RotatorRotator");

	UObject_NotEqual_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_RotatorRotator
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FRotator                A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_RotatorRotator");

	UObject_EqualEqual_RotatorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GetRadiansBetweenVectors
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 V0                             (CPF_Parm)
// struct FVector                 v1                             (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_GetRadiansBetweenVectors(const struct FVector& V0, const struct FVector& v1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GetRadiansBetweenVectors");

	UObject_GetRadiansBetweenVectors_Params params;
	params.V0 = V0;
	params.v1 = v1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VClamp
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 Min                            (CPF_Parm)
// struct FVector                 Max                            (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_VClamp(const struct FVector& A, const struct FVector& Min, const struct FVector& Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VClamp");

	UObject_VClamp_Params params;
	params.A = A;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.vect3d
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// float                          Z                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_vect3d(float X, float Y, float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.vect3d");

	UObject_vect3d_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.InCylinder
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FVector                 Origin                         (CPF_Parm)
// struct FRotator                Dir                            (CPF_Parm)
// float                          Width                          (CPF_Parm)
// struct FVector                 A                              (CPF_Parm)
// bool                           bIgnoreZ                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.InCylinder");

	UObject_InCylinder_Params params;
	params.Origin = Origin;
	params.Dir = Dir;
	params.Width = Width;
	params.A = A;
	params.bIgnoreZ = bIgnoreZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NoZDot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_NoZDot(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NoZDot");

	UObject_NoZDot_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ClampLength
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 V                              (CPF_Parm)
// float                          MaxLength                      (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_ClampLength(const struct FVector& V, float MaxLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ClampLength");

	UObject_ClampLength_Params params;
	params.V = V;
	params.MaxLength = MaxLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VInterpConstantTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Current                        (CPF_Parm)
// struct FVector                 Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_VInterpConstantTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VInterpConstantTo");

	UObject_VInterpConstantTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VInterpTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Current                        (CPF_Parm)
// struct FVector                 Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VInterpTo");

	UObject_VInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Construct
// (FUNC_Event, FUNC_Public)

void UObject::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Construct");

	UObject_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.ProjectOnToPlane
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FVector                 InVector                       (CPF_Parm)
// struct FVector                 InNormal                       (CPF_Parm)
// float                          OverBounce                     (CPF_OptionalParm, CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_ProjectOnToPlane(const struct FVector& InVector, const struct FVector& InNormal, float OverBounce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProjectOnToPlane");

	UObject_ProjectOnToPlane_Params params;
	params.InVector = InVector;
	params.InNormal = InNormal;
	params.OverBounce = OverBounce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.IsZero
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_IsZero(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.IsZero");

	UObject_IsZero_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ProjectOnTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 X                              (CPF_Parm)
// struct FVector                 Y                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_ProjectOnTo(const struct FVector& X, const struct FVector& Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ProjectOnTo");

	UObject_ProjectOnTo_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MirrorVectorByNormal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 InVect                         (CPF_Parm)
// struct FVector                 InNormal                       (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MirrorVectorByNormal");

	UObject_MirrorVectorByNormal_Params params;
	params.InVect = InVect;
	params.InNormal = InNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRandCone2
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Dir                            (CPF_Parm)
// float                          HorizontalConeHalfAngleRadians (CPF_Parm)
// float                          VerticalConeHalfAngleRadians   (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone2");

	UObject_VRandCone2_Params params;
	params.Dir = Dir;
	params.HorizontalConeHalfAngleRadians = HorizontalConeHalfAngleRadians;
	params.VerticalConeHalfAngleRadians = VerticalConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRandCone
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Dir                            (CPF_Parm)
// float                          ConeHalfAngleRadians           (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRandCone");

	UObject_VRandCone_Params params;
	params.Dir = Dir;
	params.ConeHalfAngleRadians = ConeHalfAngleRadians;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VRand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_VRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VRand");

	UObject_VRand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VLerp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_VLerp(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VLerp");

	UObject_VLerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normal2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Normal2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normal2D");

	UObject_Normal2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Normal
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Normal(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Normal");

	UObject_Normal_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSizeSq2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_VSizeSq2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq2D");

	UObject_VSizeSq2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSizeSq
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_VSizeSq(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSizeSq");

	UObject_VSizeSq_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSize2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_VSize2D(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize2D");

	UObject_VSize2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.VSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_VSize(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.VSize");

	UObject_VSize_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector                 A                              (CPF_Parm, CPF_OutParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_SubtractEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_VectorVector");

	UObject_SubtractEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector                 A                              (CPF_Parm, CPF_OutParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_AddEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_VectorVector");

	UObject_AddEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_VectorFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector                 A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_DivideEqual_VectorFloat(float B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_VectorFloat");

	UObject_DivideEqual_VectorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector                 A                              (CPF_Parm, CPF_OutParm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_MultiplyEqual_VectorVector(const struct FVector& B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorVector");

	UObject_MultiplyEqual_VectorVector_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_VectorFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FVector                 A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_MultiplyEqual_VectorFloat(float B, struct FVector* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_VectorFloat");

	UObject_MultiplyEqual_VectorFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Cross_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cross_VectorVector");

	UObject_Cross_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Dot_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Dot_VectorVector");

	UObject_Dot_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_VectorVector");

	UObject_NotEqual_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_VectorVector");

	UObject_EqualEqual_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreater_VectorRotator
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_VectorRotator");

	UObject_GreaterGreater_VectorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessLess_VectorRotator
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FRotator                B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_VectorRotator");

	UObject_LessLess_VectorRotator_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_VectorVector");

	UObject_Subtract_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_VectorVector");

	UObject_Add_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_VectorFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Divide_VectorFloat(const struct FVector& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_VectorFloat");

	UObject_Divide_VectorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_VectorVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorVector");

	UObject_Multiply_VectorVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatVector
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// struct FVector                 B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Multiply_FloatVector(float A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatVector");

	UObject_Multiply_FloatVector_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_VectorFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Multiply_VectorFloat(const struct FVector& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_VectorFloat");

	UObject_Multiply_VectorFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreVector
// (FUNC_Final, FUNC_PreOperator, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 A                              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_Subtract_PreVector(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreVector");

	UObject_Subtract_PreVector_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpConstantTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          Current                        (CPF_Parm)
// float                          Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpConstantTo");

	UObject_FInterpConstantTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          Current                        (CPF_Parm)
// float                          Target                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          InterpSpeed                    (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpTo");

	UObject_FInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FPctByRange
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// float                          Value                          (CPF_Parm)
// float                          InMin                          (CPF_Parm)
// float                          InMax                          (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FPctByRange(float Value, float InMin, float InMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FPctByRange");

	UObject_FPctByRange_Params params;
	params.Value = Value;
	params.InMin = InMin;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RandSign
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// float                          Value                          (CPF_OptionalParm, CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_RandSign(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RandSign");

	UObject_RandSign_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.CalculateGravityPosition
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FVector                 Location                       (CPF_Parm)
// struct FVector                 Velocity                       (CPF_Parm)
// float                          Gravity                        (CPF_Parm)
// float                          Time                           (CPF_Parm)
// struct FVector                 GravityDirection               (CPF_OptionalParm, CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UObject::STATIC_CalculateGravityPosition(const struct FVector& Location, const struct FVector& Velocity, float Gravity, float Time, const struct FVector& GravityDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.CalculateGravityPosition");

	UObject_CalculateGravityPosition_Params params;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Gravity = Gravity;
	params.Time = Time;
	params.GravityDirection = GravityDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.RandRange
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Static, FUNC_Public)
// Parameters:
// float                          InMin                          (CPF_Parm)
// float                          InMax                          (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_RandRange(float InMin, float InMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.RandRange");

	UObject_RandRange_Params params;
	params.InMin = InMin;
	params.InMax = InMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseInOut
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FInterpEaseInOut(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseInOut");

	UObject_FInterpEaseInOut_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseOut
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FInterpEaseOut(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseOut");

	UObject_FInterpEaseOut_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FInterpEaseIn
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          Exp                            (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FInterpEaseIn(float A, float B, float Alpha, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FInterpEaseIn");

	UObject_FInterpEaseIn_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FCubicInterp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          P0                             (CPF_Parm)
// float                          T0                             (CPF_Parm)
// float                          P1                             (CPF_Parm)
// float                          T1                             (CPF_Parm)
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FCubicInterp(float P0, float T0, float P1, float T1, float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCubicInterp");

	UObject_FCubicInterp_Params params;
	params.P0 = P0;
	params.T0 = T0;
	params.P1 = P1;
	params.T1 = T1;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FloorLog2
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// int                            Value                          (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_FloorLog2(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FloorLog2");

	UObject_FloorLog2_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FCeil
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_FCeil(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FCeil");

	UObject_FCeil_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FFloor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_FFloor(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FFloor");

	UObject_FFloor_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Round
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Round(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Round");

	UObject_Round_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Lerp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          Alpha                          (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Lerp(float A, float B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Lerp");

	UObject_Lerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FClamp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          V                              (CPF_Parm)
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FClamp(float V, float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FClamp");

	UObject_FClamp_Params params;
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FMax
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FMax(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMax");

	UObject_FMax_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FMin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FMin(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FMin");

	UObject_FMin_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.FRand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_FRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FRand");

	UObject_FRand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Square
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Square(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Square");

	UObject_Square_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Sqrt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Sqrt(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sqrt");

	UObject_Sqrt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Loge
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Loge(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Loge");

	UObject_Loge_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Exp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Exp(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Exp");

	UObject_Exp_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Atan2
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Atan2(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan2");

	UObject_Atan2_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Atan
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Atan(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Atan");

	UObject_Atan_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Tan
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Tan(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Tan");

	UObject_Tan_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Acos
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Acos(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Acos");

	UObject_Acos_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Cos
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Cos(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Cos");

	UObject_Cos_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Asin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Asin(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Asin");

	UObject_Asin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Sin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Sin(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Sin");

	UObject_Sin_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Abs
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Abs(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Abs");

	UObject_Abs_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_SubtractEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_FloatFloat");

	UObject_SubtractEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_AddEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_FloatFloat");

	UObject_AddEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_DivideEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_FloatFloat");

	UObject_DivideEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_MultiplyEqual_FloatFloat(float B, float* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_FloatFloat");

	UObject_MultiplyEqual_FloatFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_FloatFloat");

	UObject_NotEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ComplementEqual_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_ComplementEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ComplementEqual_FloatFloat");

	UObject_ComplementEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_FloatFloat");

	UObject_EqualEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_GreaterEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_FloatFloat");

	UObject_GreaterEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_LessEqual_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_FloatFloat");

	UObject_LessEqual_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Greater_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_FloatFloat");

	UObject_Greater_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Less_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_FloatFloat");

	UObject_Less_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Subtract_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_FloatFloat");

	UObject_Subtract_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Add_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_FloatFloat");

	UObject_Add_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Percent_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Percent_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_FloatFloat");

	UObject_Percent_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Divide_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_FloatFloat");

	UObject_Divide_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          B                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Multiply_FloatFloat(float A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_FloatFloat");

	UObject_Multiply_FloatFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyMultiply_FloatFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          Base                           (CPF_Parm)
// float                          Exp                            (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_MultiplyMultiply_FloatFloat(float Base, float Exp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyMultiply_FloatFloat");

	UObject_MultiplyMultiply_FloatFloat_Params params;
	params.Base = Base;
	params.Exp = Exp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreFloat
// (FUNC_Final, FUNC_PreOperator, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// float                          A                              (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UObject::STATIC_Subtract_PreFloat(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreFloat");

	UObject_Subtract_PreFloat_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.ToHex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UObject::STATIC_ToHex(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.ToHex");

	UObject_ToHex_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Clamp
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// int                            V                              (CPF_Parm)
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Clamp(int V, int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Clamp");

	UObject_Clamp_Params params;
	params.V = V;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Max
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Max(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Max");

	UObject_Max_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Min
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Min(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Min");

	UObject_Min_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Rand
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// int                            Max                            (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Rand(int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Rand");

	UObject_Rand_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.UnbindDelegate
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   DelegateName                   (CPF_Parm)
// class UObject*                 TargetObject                   (CPF_Parm)
// struct FName                   TargetFuncName                 (CPF_Parm)

void UObject::UnbindDelegate(const struct FName& DelegateName, class UObject* TargetObject, const struct FName& TargetFuncName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.UnbindDelegate");

	UObject_UnbindDelegate_Params params;
	params.DelegateName = DelegateName;
	params.TargetObject = TargetObject;
	params.TargetFuncName = TargetFuncName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.BindStateDelegate
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   DelegateName                   (CPF_Parm)
// class UObject*                 TargetObject                   (CPF_Parm)
// struct FName                   TargetFuncName                 (CPF_Parm)

void UObject::BindStateDelegate(const struct FName& DelegateName, class UObject* TargetObject, const struct FName& TargetFuncName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.BindStateDelegate");

	UObject_BindStateDelegate_Params params;
	params.DelegateName = DelegateName;
	params.TargetObject = TargetObject;
	params.TargetFuncName = TargetFuncName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.BindDelegate
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   DelegateName                   (CPF_Parm)
// class UObject*                 TargetObject                   (CPF_Parm)
// struct FName                   TargetFuncName                 (CPF_Parm)

void UObject::BindDelegate(const struct FName& DelegateName, class UObject* TargetObject, const struct FName& TargetFuncName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.BindDelegate");

	UObject_BindDelegate_Params params;
	params.DelegateName = DelegateName;
	params.TargetObject = TargetObject;
	params.TargetFuncName = TargetFuncName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.FromHex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Hex                            (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_FromHex(const struct FString& Hex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.FromHex");

	UObject_FromHex_Params params;
	params.Hex = Hex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.QMin
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)

void UObject::STATIC_QMin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QMin");

	UObject_QMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QMax
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)

void UObject::STATIC_QMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QMax");

	UObject_QMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.QSubtract
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)

void UObject::STATIC_QSubtract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.QSubtract");

	UObject_QSubtract_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.NotEqual_QWordInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_QWordInt(int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_QWordInt");

	UObject_NotEqual_QWordInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_QWordInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_QWordInt(int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_QWordInt");

	UObject_EqualEqual_QWordInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_QWordQWord
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_QWordQWord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_QWordQWord");

	UObject_NotEqual_QWordQWord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_QWordQWord
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_QWordQWord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_QWordQWord");

	UObject_EqualEqual_QWordQWord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_QWordQWord
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_GreaterEqual_QWordQWord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_QWordQWord");

	UObject_GreaterEqual_QWordQWord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_QWordQWord
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_LessEqual_QWordQWord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_QWordQWord");

	UObject_LessEqual_QWordQWord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_QWordQWord
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Greater_QWordQWord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_QWordQWord");

	UObject_Greater_QWordQWord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_QWordQWord
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Less_QWordQWord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_QWordQWord");

	UObject_Less_QWordQWord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_QWordQWord
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Subtract_QWordQWord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_QWordQWord");

	UObject_Subtract_QWordQWord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_QWordQWord
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)

void UObject::STATIC_Add_QWordQWord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_QWordQWord");

	UObject_Add_QWordQWord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Object.SubtractSubtract_Int
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            A                              (CPF_Parm, CPF_OutParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SubtractSubtract_Int(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Int");

	UObject_SubtractSubtract_Int_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_Int
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            A                              (CPF_Parm, CPF_OutParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_AddAdd_Int(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Int");

	UObject_AddAdd_Int_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_PreInt
// (FUNC_Final, FUNC_PreOperator, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            A                              (CPF_Parm, CPF_OutParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SubtractSubtract_PreInt(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreInt");

	UObject_SubtractSubtract_PreInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_PreInt
// (FUNC_Final, FUNC_PreOperator, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            A                              (CPF_Parm, CPF_OutParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_AddAdd_PreInt(int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreInt");

	UObject_AddAdd_PreInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            A                              (CPF_Parm, CPF_OutParm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_SubtractEqual_IntInt(int B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_IntInt");

	UObject_SubtractEqual_IntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            A                              (CPF_Parm, CPF_OutParm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_AddEqual_IntInt(int B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_IntInt");

	UObject_AddEqual_IntInt_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_IntFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_DivideEqual_IntFloat(float B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_IntFloat");

	UObject_DivideEqual_IntFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_IntFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_MultiplyEqual_IntFloat(float B, int* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_IntFloat");

	UObject_MultiplyEqual_IntFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.Or_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Or_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Or_IntInt");

	UObject_Or_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Xor_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Xor_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Xor_IntInt");

	UObject_Xor_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.And_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_And_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.And_IntInt");

	UObject_And_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_IntInt");

	UObject_NotEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_IntInt");

	UObject_EqualEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterEqual_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_GreaterEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterEqual_IntInt");

	UObject_GreaterEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessEqual_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_LessEqual_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessEqual_IntInt");

	UObject_LessEqual_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Greater_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Greater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Greater_IntInt");

	UObject_Greater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Less_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Less_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Less_IntInt");

	UObject_Less_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreaterGreater_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_GreaterGreaterGreater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreaterGreater_IntInt");

	UObject_GreaterGreaterGreater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.GreaterGreater_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_GreaterGreater_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.GreaterGreater_IntInt");

	UObject_GreaterGreater_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.LessLess_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_LessLess_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.LessLess_IntInt");

	UObject_LessLess_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Subtract_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_IntInt");

	UObject_Subtract_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Add_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Add_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Add_IntInt");

	UObject_Add_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Percent_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Percent_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Percent_IntInt");

	UObject_Percent_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Divide_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Divide_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Divide_IntInt");

	UObject_Divide_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Multiply_IntInt
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            B                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Multiply_IntInt(int A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Multiply_IntInt");

	UObject_Multiply_IntInt_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Subtract_PreInt
// (FUNC_Final, FUNC_PreOperator, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Subtract_PreInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Subtract_PreInt");

	UObject_Subtract_PreInt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Complement_PreInt
// (FUNC_Final, FUNC_PreOperator, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// int                            A                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UObject::STATIC_Complement_PreInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Complement_PreInt");

	UObject_Complement_PreInt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_Byte
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  A                              (CPF_Parm, CPF_OutParm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::STATIC_SubtractSubtract_Byte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_Byte");

	UObject_SubtractSubtract_Byte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_Byte
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  A                              (CPF_Parm, CPF_OutParm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::STATIC_AddAdd_Byte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_Byte");

	UObject_AddAdd_Byte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractSubtract_PreByte
// (FUNC_Final, FUNC_PreOperator, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  A                              (CPF_Parm, CPF_OutParm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::STATIC_SubtractSubtract_PreByte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractSubtract_PreByte");

	UObject_SubtractSubtract_PreByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddAdd_PreByte
// (FUNC_Final, FUNC_PreOperator, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  A                              (CPF_Parm, CPF_OutParm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::STATIC_AddAdd_PreByte(unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddAdd_PreByte");

	UObject_AddAdd_PreByte_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.SubtractEqual_ByteByte
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  A                              (CPF_Parm, CPF_OutParm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::STATIC_SubtractEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.SubtractEqual_ByteByte");

	UObject_SubtractEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.AddEqual_ByteByte
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  A                              (CPF_Parm, CPF_OutParm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::STATIC_AddEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AddEqual_ByteByte");

	UObject_AddEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.DivideEqual_ByteByte
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  A                              (CPF_Parm, CPF_OutParm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::STATIC_DivideEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.DivideEqual_ByteByte");

	UObject_DivideEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_ByteFloat
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  A                              (CPF_Parm, CPF_OutParm)
// float                          B                              (CPF_Parm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::STATIC_MultiplyEqual_ByteFloat(float B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteFloat");

	UObject_MultiplyEqual_ByteFloat_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.MultiplyEqual_ByteByte
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  A                              (CPF_Parm, CPF_OutParm)
// unsigned char                  B                              (CPF_Parm)
// unsigned char                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

unsigned char UObject::STATIC_MultiplyEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.MultiplyEqual_ByteByte");

	UObject_MultiplyEqual_ByteByte_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (A != nullptr)
		*A = params.A;

	return params.ReturnValue;
}


// Function Core.Object.OrOr_BoolBool
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm, CPF_SkipParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_OrOr_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.OrOr_BoolBool");

	UObject_OrOr_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.XorXor_BoolBool
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_XorXor_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.XorXor_BoolBool");

	UObject_XorXor_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.AndAnd_BoolBool
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm, CPF_SkipParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_AndAnd_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.AndAnd_BoolBool");

	UObject_AndAnd_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.NotEqual_BoolBool
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_NotEqual_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.NotEqual_BoolBool");

	UObject_NotEqual_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.EqualEqual_BoolBool
// (FUNC_Final, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           A                              (CPF_Parm)
// bool                           B                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_EqualEqual_BoolBool(bool A, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.EqualEqual_BoolBool");

	UObject_EqualEqual_BoolBool_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Object.Not_PreBool
// (FUNC_Final, FUNC_PreOperator, FUNC_Native, FUNC_Operator, FUNC_Static, FUNC_Public)
// Parameters:
// bool                           A                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UObject::STATIC_Not_PreBool(bool A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Object.Not_PreBool");

	UObject_Not_PreBool_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Subscription.__Subscription__TriggerAll_1
// (FUNC_Final, FUNC_Static, FUNC_Private)
// Parameters:
// class USubscription*           S                              (CPF_Parm)

void USubscription::STATIC___Subscription__TriggerAll_1(class USubscription* S)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Subscription.__Subscription__TriggerAll_1");

	USubscription___Subscription__TriggerAll_1_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Subscription.GetNone
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// class USubscription*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class USubscription* USubscription::STATIC_GetNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Subscription.GetNone");

	USubscription_GetNone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Subscription.TriggerAll
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<class USubscription*>   Subscriptions                  (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void USubscription::STATIC_TriggerAll(TArray<class USubscription*>* Subscriptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Subscription.TriggerAll");

	USubscription_TriggerAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Subscriptions != nullptr)
		*Subscriptions = params.Subscriptions;
}


// Function Core.Subscription.Create
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InCallback                     (CPF_Parm, CPF_NeedCtorLink)
// class USubscription*           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class USubscription* USubscription::STATIC_Create(const struct FScriptDelegate& InCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Subscription.Create");

	USubscription_Create_Params params;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Subscription.Dispose
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void USubscription::Dispose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Subscription.Dispose");

	USubscription_Dispose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Subscription.TriggerCallback
// (FUNC_Final, FUNC_Defined, FUNC_Public)

void USubscription::TriggerCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Subscription.TriggerCallback");

	USubscription_TriggerCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Subscription.SetCallback
// (FUNC_Final, FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InCallback                     (CPF_Parm, CPF_NeedCtorLink)

void USubscription::SetCallback(const struct FScriptDelegate& InCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Subscription.SetCallback");

	USubscription_SetCallback_Params params;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.Subscription.SubscriberCallback
// (FUNC_Public, FUNC_Delegate)

void USubscription::SubscriberCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Subscription.SubscriberCallback");

	USubscription_SubscriberCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.SetSingleton
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UClass*                  ObjClass                       (CPF_Parm)
// class UObject*                 Replacement                    (CPF_Parm)

void UObjectProvider::SetSingleton(class UClass* ObjClass, class UObject* Replacement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.SetSingleton");

	UObjectProvider_SetSingleton_Params params;
	params.ObjClass = ObjClass;
	params.Replacement = Replacement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.AddAndRemoveObjects
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<class UObject*>         AddObjects                     (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<class UObject*>         RemoveObjects                  (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UObjectProvider::AddAndRemoveObjects(TArray<class UObject*>* AddObjects, TArray<class UObject*>* RemoveObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.AddAndRemoveObjects");

	UObjectProvider_AddAndRemoveObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AddObjects != nullptr)
		*AddObjects = params.AddObjects;
	if (RemoveObjects != nullptr)
		*RemoveObjects = params.RemoveObjects;
}


// Function Core.ObjectProvider.RemoveObjects
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<class UObject*>         InObjects                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UObjectProvider::RemoveObjects(TArray<class UObject*>* InObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.RemoveObjects");

	UObjectProvider_RemoveObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InObjects != nullptr)
		*InObjects = params.InObjects;
}


// Function Core.ObjectProvider.RemoveObject
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UObject*                 Obj                            (CPF_Parm)

void UObjectProvider::RemoveObject(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.RemoveObject");

	UObjectProvider_RemoveObject_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.AddObjects
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<class UObject*>         InObjects                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UObjectProvider::AddObjects(TArray<class UObject*>* InObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.AddObjects");

	UObjectProvider_AddObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InObjects != nullptr)
		*InObjects = params.InObjects;
}


// Function Core.ObjectProvider.AddObject
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UObject*                 Obj                            (CPF_Parm)

void UObjectProvider::AddObject(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.AddObject");

	UObjectProvider_AddObject_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.GetOrCreate
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UClass*                  ObjClass                       (CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)

class UObject* UObjectProvider::GetOrCreate(class UClass* ObjClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.GetOrCreate");

	UObjectProvider_GetOrCreate_Params params;
	params.ObjClass = ObjClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.ObjectProvider.Get
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UClass*                  ObjClass                       (CPF_Parm)
// class UObject*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)

class UObject* UObjectProvider::Get(class UClass* ObjClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.Get");

	UObjectProvider_Get_Params params;
	params.ObjClass = ObjClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.ObjectProvider.AllObjects
// (FUNC_Final, FUNC_Iterator, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UClass*                  BaseClass                      (CPF_Parm)
// class UObject*                 Obj                            (CPF_Parm, CPF_OutParm)
// class UClass*                  InterfaceClass                 (CPF_OptionalParm, CPF_Parm)

void UObjectProvider::AllObjects(class UClass* BaseClass, class UClass* InterfaceClass, class UObject** Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.AllObjects");

	UObjectProvider_AllObjects_Params params;
	params.BaseClass = BaseClass;
	params.InterfaceClass = InterfaceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Obj != nullptr)
		*Obj = params.Obj;
}


// Function Core.ObjectProvider.Inject
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UObject*                 Subscriber                     (CPF_Parm)

void UObjectProvider::Inject(class UObject* Subscriber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.Inject");

	UObjectProvider_Inject_Params params;
	params.Subscriber = Subscriber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.UnsubscribeAll
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UObject*                 Subscription                   (CPF_Parm)

void UObjectProvider::UnsubscribeAll(class UObject* Subscription)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.UnsubscribeAll");

	UObjectProvider_UnsubscribeAll_Params params;
	params.Subscription = Subscription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.Unsubscribe
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)

void UObjectProvider::Unsubscribe(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.Unsubscribe");

	UObjectProvider_Unsubscribe_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.SubscribeList
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UClass*                  BaseClass                      (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)

void UObjectProvider::SubscribeList(class UClass* BaseClass, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.SubscribeList");

	UObjectProvider_SubscribeList_Params params;
	params.BaseClass = BaseClass;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.Subscribe
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UClass*                  BaseClass                      (CPF_Parm)
// struct FScriptDelegate         OnAdd                          (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// struct FScriptDelegate         OnRemove                       (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)

void UObjectProvider::Subscribe(class UClass* BaseClass, const struct FScriptDelegate& OnAdd, const struct FScriptDelegate& OnRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.Subscribe");

	UObjectProvider_Subscribe_Params params;
	params.BaseClass = BaseClass;
	params.OnAdd = OnAdd;
	params.OnRemove = OnRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.ObjectChangeCallback
// (FUNC_Public, FUNC_Delegate)

void UObjectProvider::ObjectChangeCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.ObjectChangeCallback");

	UObjectProvider_ObjectChangeCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.ObjectListSubscriptionCallback
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UObjectProvider*         Provider                       (CPF_Parm)

void UObjectProvider::ObjectListSubscriptionCallback(class UObjectProvider* Provider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.ObjectListSubscriptionCallback");

	UObjectProvider_ObjectListSubscriptionCallback_Params params;
	params.Provider = Provider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.ObjectProvider.ObjectSubscriptionCallback
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UObject*                 Obj                            (CPF_Parm)

void UObjectProvider::ObjectSubscriptionCallback(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ObjectProvider.ObjectSubscriptionCallback");

	UObjectProvider_ObjectSubscriptionCallback_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.FileSystem.CrcString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Str                            (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UFileSystem::STATIC_CrcString(struct FString* Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.CrcString");

	UFileSystem_CrcString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Str != nullptr)
		*Str = params.Str;

	return params.ReturnValue;
}


// Function Core.FileSystem.CrcBytes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          Bytes                          (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UFileSystem::STATIC_CrcBytes(TArray<unsigned char>* Bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.CrcBytes");

	UFileSystem_CrcBytes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bytes != nullptr)
		*Bytes = params.Bytes;

	return params.ReturnValue;
}


// Function Core.FileSystem.DeleteDirectoryTree
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFileSystem::STATIC_DeleteDirectoryTree(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.DeleteDirectoryTree");

	UFileSystem_DeleteDirectoryTree_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.FileSystem.DeleteFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFileSystem::STATIC_DeleteFile(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.DeleteFile");

	UFileSystem_DeleteFile_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.FileSystem.AppendStringToFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFileSystem::STATIC_AppendStringToFile(const struct FString& Path, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.AppendStringToFile");

	UFileSystem_AppendStringToFile_Params params;
	params.Path = Path;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.FileSystem.SaveStringToFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFileSystem::STATIC_SaveStringToFile(const struct FString& Path, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.SaveStringToFile");

	UFileSystem_SaveStringToFile_Params params;
	params.Path = Path;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.FileSystem.SaveBytesToFile
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          Bytes                          (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFileSystem::STATIC_SaveBytesToFile(const struct FString& Path, TArray<unsigned char>* Bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.SaveBytesToFile");

	UFileSystem_SaveBytesToFile_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bytes != nullptr)
		*Bytes = params.Bytes;

	return params.ReturnValue;
}


// Function Core.FileSystem.LoadFileToBytes
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          OutBytes                       (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFileSystem::STATIC_LoadFileToBytes(const struct FString& Path, TArray<unsigned char>* OutBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.LoadFileToBytes");

	UFileSystem_LoadFileToBytes_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBytes != nullptr)
		*OutBytes = params.OutBytes;

	return params.ReturnValue;
}


// Function Core.FileSystem.LoadFileToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 OutText                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFileSystem::STATIC_LoadFileToString(const struct FString& Path, struct FString* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.LoadFileToString");

	UFileSystem_LoadFileToString_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

	return params.ReturnValue;
}


// Function Core.FileSystem.GetFileExtensionWithoutDot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UFileSystem::STATIC_GetFileExtensionWithoutDot(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.GetFileExtensionWithoutDot");

	UFileSystem_GetFileExtensionWithoutDot_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.FileSystem.GetFileExtension
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UFileSystem::STATIC_GetFileExtension(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.GetFileExtension");

	UFileSystem_GetFileExtension_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.FileSystem.GetFilePathWithoutExtension
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UFileSystem::STATIC_GetFilePathWithoutExtension(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.GetFilePathWithoutExtension");

	UFileSystem_GetFilePathWithoutExtension_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.FileSystem.GetFileNameWithoutExtension
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UFileSystem::STATIC_GetFileNameWithoutExtension(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.GetFileNameWithoutExtension");

	UFileSystem_GetFileNameWithoutExtension_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.FileSystem.GetFilename
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UFileSystem::STATIC_GetFilename(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.GetFilename");

	UFileSystem_GetFilename_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.FileSystem.FindFiles
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         OutFilenames                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UFileSystem::STATIC_FindFiles(const struct FString& Path, TArray<struct FString>* OutFilenames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.FileSystem.FindFiles");

	UFileSystem_FindFiles_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFilenames != nullptr)
		*OutFilenames = params.OutFilenames;
}


// Function Core.ErrorType.CreateError
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 InErrorMessage                 (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// int                            InErrorCode                    (CPF_OptionalParm, CPF_Parm)
// class UError*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UError* UErrorType::CreateError(const struct FString& InErrorMessage, int InErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ErrorType.CreateError");

	UErrorType_CreateError_Params params;
	params.InErrorMessage = InErrorMessage;
	params.InErrorCode = InErrorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.ErrorType.GetLocalizedMessage
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UErrorType::GetLocalizedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ErrorType.GetLocalizedMessage");

	UErrorType_GetLocalizedMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.ErrorList.GetErrorType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FName                   Error                          (CPF_Parm)
// class UErrorType*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UErrorType* UErrorList::STATIC_GetErrorType(const struct FName& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.ErrorList.GetErrorType");

	UErrorList_GetErrorType_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Error.GetDebugMessage
// (FUNC_Final, FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UError::GetDebugMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Error.GetDebugMessage");

	UError_GetDebugMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Error.GetLocalizedMessage
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UError::GetLocalizedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Error.GetLocalizedMessage");

	UError_GetLocalizedMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.DebugDrawer.Reset
// (FUNC_Defined, FUNC_Public)

void UDebugDrawer::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.Reset");

	UDebugDrawer_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.PrintText
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Text                           (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FColor                  InColor                        (CPF_OptionalParm, CPF_Parm)

void UDebugDrawer::PrintText(const struct FString& Text, const struct FColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.PrintText");

	UDebugDrawer_PrintText_Params params;
	params.Text = Text;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.PrintArrayProperty
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 PropertyName                   (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// struct FString                 Value                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)

void UDebugDrawer::PrintArrayProperty(const struct FString& PropertyName, int Index, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.PrintArrayProperty");

	UDebugDrawer_PrintArrayProperty_Params params;
	params.PropertyName = PropertyName;
	params.Index = Index;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.PrintProperty
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 PropertyName                   (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)

void UDebugDrawer::PrintProperty(const struct FString& PropertyName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.PrintProperty");

	UDebugDrawer_PrintProperty_Params params;
	params.PropertyName = PropertyName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.EndSection
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UDebugDrawer::EndSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.EndSection");

	UDebugDrawer_EndSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.StartSection
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UDebugDrawer::StartSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.StartSection");

	UDebugDrawer_StartSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.PrintObject
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 Title                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// class UObject*                 ForObj                         (CPF_Parm)

void UDebugDrawer::PrintObject(const struct FString& Title, class UObject* ForObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.PrintObject");

	UDebugDrawer_PrintObject_Params params;
	params.Title = Title;
	params.ForObj = ForObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.PrintSeperater
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UDebugDrawer::PrintSeperater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.PrintSeperater");

	UDebugDrawer_PrintSeperater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.DebugArrayObject
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 Title                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// class UObject*                 ForObj                         (CPF_Parm)

void UDebugDrawer::DebugArrayObject(const struct FString& Title, int Index, class UObject* ForObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.DebugArrayObject");

	UDebugDrawer_DebugArrayObject_Params params;
	params.Title = Title;
	params.Index = Index;
	params.ForObj = ForObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.DebugObject
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 Title                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// class UObject*                 ForObj                         (CPF_Parm)

void UDebugDrawer::DebugObject(const struct FString& Title, class UObject* ForObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.DebugObject");

	UDebugDrawer_DebugObject_Params params;
	params.Title = Title;
	params.ForObj = ForObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DebugDrawer.ShouldDisplayDebug
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FName                   Category                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UDebugDrawer::ShouldDisplayDebug(const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.ShouldDisplayDebug");

	UDebugDrawer_ShouldDisplayDebug_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.DebugDrawer.LogFunc
// (FUNC_Defined, FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FString                 Str                            (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)

void UDebugDrawer::LogFunc(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DebugDrawer.LogFunc");

	UDebugDrawer_LogFunc_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.StringMap.Append
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UStringMap*              Other                          (CPF_Parm, CPF_EditInline)

void UStringMap::Append(class UStringMap* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.StringMap.Append");

	UStringMap_Append_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.StringMap.Contains
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UStringMap::Contains(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.StringMap.Contains");

	UStringMap_Contains_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.StringMap.Remove
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)

void UStringMap::Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.StringMap.Remove");

	UStringMap_Remove_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.StringMap.TryGet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 OutValue                       (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UStringMap::TryGet(const struct FString& Key, struct FString* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.StringMap.TryGet");

	UStringMap_TryGet_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function Core.StringMap.Get
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UStringMap::Get(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.StringMap.Get");

	UStringMap_Get_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.StringMap.Set
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)

void UStringMap::Set(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.StringMap.Set");

	UStringMap_Set_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.DistributionVector.GetVectorValue
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// float                          F                              (CPF_OptionalParm, CPF_Parm)
// int                            LastExtreme                    (CPF_OptionalParm, CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UDistributionVector::GetVectorValue(float F, int LastExtreme)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionVector.GetVectorValue");

	UDistributionVector_GetVectorValue_Params params;
	params.F = F;
	params.LastExtreme = LastExtreme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.DistributionFloat.GetFloatValue
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// float                          F                              (CPF_OptionalParm, CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UDistributionFloat::GetFloatValue(float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.DistributionFloat.GetFloatValue");

	UDistributionFloat_GetFloatValue_Params params;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.Commandlet.Main
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 Params                         (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UCommandlet::Main(const struct FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.Commandlet.Main");

	UCommandlet_Main_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.HelpCommandlet.Main
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 Params                         (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UHelpCommandlet::Main(const struct FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.HelpCommandlet.Main");

	UHelpCommandlet_Main_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.AsyncTask.QueCallbacks
// (FUNC_Final, FUNC_Native, FUNC_Private)

void UAsyncTask::QueCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.QueCallbacks");

	UAsyncTask_QueCallbacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.AsyncTask.CreateError
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UError*                  InError                        (CPF_Parm)
// class UAsyncTask*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UAsyncTask* UAsyncTask::STATIC_CreateError(class UError* InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.CreateError");

	UAsyncTask_CreateError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.AsyncTask.CreateSuccess
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UAsyncTask*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UAsyncTask* UAsyncTask::STATIC_CreateSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.CreateSuccess");

	UAsyncTask_CreateSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.AsyncTask.Create
// (FUNC_Final, FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UAsyncTask*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UAsyncTask* UAsyncTask::STATIC_Create()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.Create");

	UAsyncTask_Create_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.AsyncTask.DependOn
// (FUNC_Final, FUNC_Defined, FUNC_Public)
// Parameters:
// class UAsyncTask*              Other                          (CPF_Parm)
// class UAsyncTask*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UAsyncTask* UAsyncTask::DependOn(class UAsyncTask* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.DependOn");

	UAsyncTask_DependOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.AsyncTask.NotifyOnDispose
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)
// class UAsyncTask*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UAsyncTask* UAsyncTask::NotifyOnDispose(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.NotifyOnDispose");

	UAsyncTask_NotifyOnDispose_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.AsyncTask.ClearCallbacks
// (FUNC_Defined, FUNC_Event, FUNC_Protected)

void UAsyncTask::ClearCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.ClearCallbacks");

	UAsyncTask_ClearCallbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.AsyncTask.Dispose
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UAsyncTask::Dispose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.Dispose");

	UAsyncTask_Dispose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.AsyncTask.SetComplete
// (FUNC_Final, FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UError*                  InError                        (CPF_OptionalParm, CPF_Parm)

void UAsyncTask::SetComplete(class UError* InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.SetComplete");

	UAsyncTask_SetComplete_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.AsyncTask.SetError
// (FUNC_Final, FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UError*                  InError                        (CPF_Parm)

void UAsyncTask::SetError(class UError* InError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.SetError");

	UAsyncTask_SetError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.AsyncTask.NotifyOnComplete
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)
// class UAsyncTask*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UAsyncTask* UAsyncTask::NotifyOnComplete(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.NotifyOnComplete");

	UAsyncTask_NotifyOnComplete_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.AsyncTask.NotifyOnFail
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)
// class UAsyncTask*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UAsyncTask* UAsyncTask::NotifyOnFail(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.NotifyOnFail");

	UAsyncTask_NotifyOnFail_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.AsyncTask.NotifyOnSuccess
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)
// class UAsyncTask*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UAsyncTask* UAsyncTask::NotifyOnSuccess(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.NotifyOnSuccess");

	UAsyncTask_NotifyOnSuccess_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Core.AsyncTask.EventDisposed
// (FUNC_Public, FUNC_Delegate)

void UAsyncTask::EventDisposed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.EventDisposed");

	UAsyncTask_EventDisposed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.AsyncTask.EventAsyncTaskComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UError*                  TaskError                      (CPF_Parm)

void UAsyncTask::EventAsyncTaskComplete(class UError* TaskError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.EventAsyncTaskComplete");

	UAsyncTask_EventAsyncTaskComplete_Params params;
	params.TaskError = TaskError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.AsyncTask.EventAsyncTaskFail
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UError*                  TaskError                      (CPF_Parm)

void UAsyncTask::EventAsyncTaskFail(class UError* TaskError)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.EventAsyncTaskFail");

	UAsyncTask_EventAsyncTaskFail_Params params;
	params.TaskError = TaskError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.AsyncTask.EventAsyncTaskSuccess
// (FUNC_Public, FUNC_Delegate)

void UAsyncTask::EventAsyncTaskSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.AsyncTask.EventAsyncTaskSuccess");

	UAsyncTask_EventAsyncTaskSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core._LoggingDoc.TestSpecialLogging
// (FUNC_Defined, FUNC_Static, FUNC_Public)

void U_LoggingDoc::STATIC_TestSpecialLogging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core._LoggingDoc.TestSpecialLogging");

	U_LoggingDoc_TestSpecialLogging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core.IDisposable.Dispose
// (FUNC_Event, FUNC_Public)

void UIDisposable::Dispose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core.IDisposable.Dispose");

	UIDisposable_Dispose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
