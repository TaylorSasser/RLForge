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

// Function AkAudio.AkDevice.SetSoundEnvironment
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm)
// TEnumAsByte<EAkEnvironmentType> EnvironmentType                (CPF_Parm)

void UAkDevice::STATIC_SetSoundEnvironment(class AActor* Actor, TEnumAsByte<EAkEnvironmentType> EnvironmentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetSoundEnvironment");

	UAkDevice_SetSoundEnvironment_Params params;
	params.Actor = Actor;
	params.EnvironmentType = EnvironmentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.GetEnvironments
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkEnvironments*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UAkEnvironments* UAkDevice::STATIC_GetEnvironments()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.GetEnvironments");

	UAkDevice_GetEnvironments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkDevice.NotifyWhenInitialized
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)

void UAkDevice::STATIC_NotifyWhenInitialized(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.NotifyWhenInitialized");

	UAkDevice_NotifyWhenInitialized_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.ProfileStop
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)

void UAkDevice::STATIC_ProfileStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.ProfileStop");

	UAkDevice_ProfileStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.ProfileStart
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)

void UAkDevice::STATIC_ProfileStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.ProfileStart");

	UAkDevice_ProfileStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PrintData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)

void UAkDevice::STATIC_PrintData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PrintData");

	UAkDevice_PrintData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetOutputType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// TEnumAsByte<EAkOutputType>     Type                           (CPF_Parm)

void UAkDevice::STATIC_SetOutputType(TEnumAsByte<EAkOutputType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetOutputType");

	UAkDevice_SetOutputType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetListenerSpatialization
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class ULocalPlayer*            Player                         (CPF_Parm)
// TEnumAsByte<EAkListenerSpacialization> Value                          (CPF_Parm)

void UAkDevice::STATIC_SetListenerSpatialization(class ULocalPlayer* Player, TEnumAsByte<EAkListenerSpacialization> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetListenerSpatialization");

	UAkDevice_SetListenerSpatialization_Params params;
	params.Player = Player;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.RemoveListener
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class ULocalPlayer*            Player                         (CPF_Parm)

void UAkDevice::STATIC_RemoveListener(class ULocalPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.RemoveListener");

	UAkDevice_RemoveListener_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.AddListener
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class ULocalPlayer*            Player                         (CPF_Parm)

void UAkDevice::STATIC_AddListener(class ULocalPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.AddListener");

	UAkDevice_AddListener_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetMusicRTCP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::STATIC_SetMusicRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetMusicRTCP");

	UAkDevice_SetMusicRTCP_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetGlobalRTCP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::STATIC_SetGlobalRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetGlobalRTCP");

	UAkDevice_SetGlobalRTCP_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopPlayingID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// int                            PlayingID                      (CPF_Parm)

void UAkDevice::STATIC_StopPlayingID(int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopPlayingID");

	UAkDevice_StopPlayingID_Params params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopBGMusic
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::STATIC_StopBGMusic(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopBGMusic");

	UAkDevice_StopBGMusic_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PlayBGMusic
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UAkDevice::STATIC_PlayBGMusic(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PlayBGMusic");

	UAkDevice_PlayBGMusic_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkDevice.StopGlobalSound
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::STATIC_StopGlobalSound(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopGlobalSound");

	UAkDevice_StopGlobalSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PlayGlobalSound
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::STATIC_PlayGlobalSound(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PlayGlobalSound");

	UAkDevice_PlayGlobalSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   InStateGroup                   (CPF_Parm)
// struct FName                   InState                        (CPF_Parm)

void UAkDevice::STATIC_SetState(const struct FName& InStateGroup, const struct FName& InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetState");

	UAkDevice_SetState_Params params;
	params.InStateGroup = InStateGroup;
	params.InState = InState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetSwitch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkDevice::STATIC_SetSwitch(class AActor* SourceActor, const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetSwitch");

	UAkDevice_SetSwitch_Params params;
	params.SourceActor = SourceActor;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetRTCP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::STATIC_SetRTCP(class AActor* SourceActor, const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetRTCP");

	UAkDevice_SetRTCP_Params params;
	params.SourceActor = SourceActor;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopAllSounds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)

void UAkDevice::STATIC_StopAllSounds(class AActor* SourceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopAllSounds");

	UAkDevice_StopAllSounds_Params params;
	params.SourceActor = SourceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopSound
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::STATIC_StopSound(class AActor* SourceActor, class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopSound");

	UAkDevice_StopSound_Params params;
	params.SourceActor = SourceActor;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PlaySound
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm, CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm, CPF_Parm)
// class UAkSoundSource*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)

class UAkSoundSource* UAkDevice::STATIC_PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PlaySound");

	UAkDevice_PlaySound_Params params;
	params.SourceActor = SourceActor;
	params.Sound = Sound;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkDevice.EventMusicTrackEnd
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            PlayingID                      (CPF_Parm)

void UAkDevice::EventMusicTrackEnd(int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.EventMusicTrackEnd");

	UAkDevice_EventMusicTrackEnd_Params params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.EventMusicTrackStart
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            PlayingID                      (CPF_Parm)
// struct FString                 FileMarker                     (CPF_Parm, CPF_NeedCtorLink)

void UAkDevice::EventMusicTrackStart(int PlayingID, const struct FString& FileMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.EventMusicTrackStart");

	UAkDevice_EventMusicTrackStart_Params params;
	params.PlayingID = PlayingID;
	params.FileMarker = FileMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.EventInitialized
// (FUNC_Public, FUNC_Delegate)

void UAkDevice::EventInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.EventInitialized");

	UAkDevice_EventInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkEnvironments.RemoveActorEnvironment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm)
// struct FString                 EnvironmentID                  (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UAkEnvironments::RemoveActorEnvironment(class AActor* TargetActor, struct FString* EnvironmentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkEnvironments.RemoveActorEnvironment");

	UAkEnvironments_RemoveActorEnvironment_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnvironmentID != nullptr)
		*EnvironmentID = params.EnvironmentID;
}


// Function AkAudio.AkEnvironments.AddActorEnvironment
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class AActor*                  TargetActor                    (CPF_Parm)
// struct FAkEnvironment          Environment                    (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UAkEnvironments::AddActorEnvironment(class AActor* TargetActor, struct FAkEnvironment* Environment)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkEnvironments.AddActorEnvironment");

	UAkEnvironments_AddActorEnvironment_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Environment != nullptr)
		*Environment = params.Environment;
}


// Function AkAudio.AkEnvironments.AddLevelDefault
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FAkEnvironment          Environment                    (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UAkEnvironments::AddLevelDefault(struct FAkEnvironment* Environment)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkEnvironments.AddLevelDefault");

	UAkEnvironments_AddLevelDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Environment != nullptr)
		*Environment = params.Environment;
}


// Function AkAudio.AkParamGroup.PrintDebugInfo
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UAkParamGroup::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.PrintDebugInfo");

	UAkParamGroup_PrintDebugInfo_Params params;
	params.Drawer = Drawer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetActorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// class AActor*                  Value                          (CPF_Parm)

void UAkParamGroup::SetActorParameter(const struct FName& Key, class AActor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetActorParameter");

	UAkParamGroup_SetActorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetLinearColorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FLinearColor            Value                          (CPF_Parm)

void UAkParamGroup::SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetLinearColorParameter");

	UAkParamGroup_SetLinearColorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetVectorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FVector                 Value                          (CPF_Parm)

void UAkParamGroup::SetVectorParameter(const struct FName& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetVectorParameter");

	UAkParamGroup_SetVectorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetFloatParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkParamGroup::SetFloatParameter(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetFloatParameter");

	UAkParamGroup_SetFloatParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetNameParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkParamGroup::SetNameParameter(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetNameParameter");

	UAkParamGroup_SetNameParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.GetDebugData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_K2Call)
// Parameters:
// TArray<struct FName>           RTCPKeys                       (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<float>                  RTCPValues                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<struct FName>           SwitchKeys                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<struct FName>           SwitchValues                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UAkParamGroup::GetDebugData(TArray<struct FName>* RTCPKeys, TArray<float>* RTCPValues, TArray<struct FName>* SwitchKeys, TArray<struct FName>* SwitchValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.GetDebugData");

	UAkParamGroup_GetDebugData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RTCPKeys != nullptr)
		*RTCPKeys = params.RTCPKeys;
	if (RTCPValues != nullptr)
		*RTCPValues = params.RTCPValues;
	if (SwitchKeys != nullptr)
		*SwitchKeys = params.SwitchKeys;
	if (SwitchValues != nullptr)
		*SwitchValues = params.SwitchValues;
}


// Function AkAudio.AkParamGroup.StopSound
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkParamGroup::StopSound(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.StopSound");

	UAkParamGroup_StopSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.PlaySound
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm, CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm, CPF_Parm)
// class UAkSoundSource*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)

class UAkSoundSource* UAkParamGroup::PlaySound(class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.PlaySound");

	UAkParamGroup_PlaySound_Params params;
	params.Sound = Sound;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkParamGroup.SetSwitch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkParamGroup::SetSwitch(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetSwitch");

	UAkParamGroup_SetSwitch_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetRTCP
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkParamGroup::SetRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetRTCP");

	UAkParamGroup_SetRTCP_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetActorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// class AActor*                  Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetActorParameter(const struct FName& Key, class AActor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetActorParameter");

	UAkPlaySoundComponent_SetActorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FLinearColor            Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter");

	UAkPlaySoundComponent_SetLinearColorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FVector                 Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetVectorParameter(const struct FName& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetVectorParameter");

	UAkPlaySoundComponent_SetVectorParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetFloatParameter(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetFloatParameter");

	UAkPlaySoundComponent_SetFloatParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetNameParameter(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetNameParameter");

	UAkPlaySoundComponent_SetNameParameter_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetRTCP
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetRTCP");

	UAkPlaySoundComponent_SetRTCP_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetSwitch
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetSwitch(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetSwitch");

	UAkPlaySoundComponent_SetSwitch_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UAkPlaySoundComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.IsPlaying");

	UAkPlaySoundComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkPlaySoundComponent.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAkPlaySoundComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.Stop");

	UAkPlaySoundComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.Play
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAkPlaySoundComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.Play");

	UAkPlaySoundComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UAkRevPhysicsSimulation::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo");

	UAkRevPhysicsSimulation_PrintDebugInfo_Params params;
	params.Drawer = Drawer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FAkRevSimUpdateParams   SimUpdate                      (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UAkRevPhysicsSimulation::STATIC_GetGearRatio(struct FAkRevSimUpdateParams* SimUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.GetGearRatio");

	UAkRevPhysicsSimulation_GetGearRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SimUpdate != nullptr)
		*SimUpdate = params.SimUpdate;

	return params.ReturnValue;
}


// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          GearRatio                      (CPF_Parm)
// float                          RPM                            (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UAkRevPhysicsSimulation::CalcVelocity(float GearRatio, float RPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.CalcVelocity");

	UAkRevPhysicsSimulation_CalcVelocity_Params params;
	params.GearRatio = GearRatio;
	params.RPM = RPM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          GearRatio                      (CPF_Parm)
// float                          Velocity                       (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UAkRevPhysicsSimulation::CalcRPM(float GearRatio, float Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.CalcRPM");

	UAkRevPhysicsSimulation_CalcRPM_Params params;
	params.GearRatio = GearRatio;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkRevPhysicsSimulation.Step
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)
// struct FAkRevSimUpdateParams   Params                         (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FAkRevSimFrame          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FAkRevSimFrame UAkRevPhysicsSimulation::Step(float DeltaTime, struct FAkRevSimUpdateParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.Step");

	UAkRevPhysicsSimulation_Step_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Params != nullptr)
		*Params = params.Params;

	return params.ReturnValue;
}


// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UAkRevPhysicsSimulation* Simulation                     (CPF_Parm)

void UAkRevPhysicsSimulation::EventGearChange(class UAkRevPhysicsSimulation* Simulation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkRevPhysicsSimulation.EventGearChange");

	UAkRevPhysicsSimulation_EventGearChange_Params params;
	params.Simulation = Simulation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.IsPlayingAny
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UAkSoundSource::IsPlayingAny()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.IsPlayingAny");

	UAkSoundSource_IsPlayingAny_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSoundSource.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UAkSoundSource::IsPlaying(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.IsPlaying");

	UAkSoundSource_IsPlaying_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSoundSource.StopAll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)

void UAkSoundSource::StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.StopAll");

	UAkSoundSource_StopAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkSoundSource::Stop(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.Stop");

	UAkSoundSource_Stop_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkSoundSource::Play(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.Play");

	UAkSoundSource_Play_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSoundActor.OnToggle
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AAkAmbientSoundActor::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSoundActor.OnToggle");

	AAkAmbientSoundActor_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  A                              (CPF_Parm)
// bool                           bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSoundFor(class AActor* A, bool bPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor");

	USeqAct_AkPlaySound_ToggleSoundFor_Params params;
	params.A = A;
	params.bPlay = bPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSound(bool bPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlaySound.ToggleSound");

	USeqAct_AkPlaySound_ToggleSound_Params params;
	params.bPlay = bPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlaySound.Activated
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void USeqAct_AkPlaySound::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlaySound.Activated");

	USeqAct_AkPlaySound_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
