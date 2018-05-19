#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AkAudio.AkDevice.SetSoundEnvironment
struct UAkDevice_SetSoundEnvironment_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm)
	TEnumAsByte<EAkEnvironmentType>                    EnvironmentType;                                          // (CPF_Parm)
};

// Function AkAudio.AkDevice.GetEnvironments
struct UAkDevice_GetEnvironments_Params
{
	class UAkEnvironments*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AkAudio.AkDevice.NotifyWhenInitialized
struct UAkDevice_NotifyWhenInitialized_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function AkAudio.AkDevice.ProfileStop
struct UAkDevice_ProfileStop_Params
{
};

// Function AkAudio.AkDevice.ProfileStart
struct UAkDevice_ProfileStart_Params
{
};

// Function AkAudio.AkDevice.PrintData
struct UAkDevice_PrintData_Params
{
};

// Function AkAudio.AkDevice.SetOutputType
struct UAkDevice_SetOutputType_Params
{
	TEnumAsByte<EAkOutputType>                         Type;                                                     // (CPF_Parm)
};

// Function AkAudio.AkDevice.SetListenerSpatialization
struct UAkDevice_SetListenerSpatialization_Params
{
	class ULocalPlayer*                                Player;                                                   // (CPF_Parm)
	TEnumAsByte<EAkListenerSpacialization>             Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkDevice.RemoveListener
struct UAkDevice_RemoveListener_Params
{
	class ULocalPlayer*                                Player;                                                   // (CPF_Parm)
};

// Function AkAudio.AkDevice.AddListener
struct UAkDevice_AddListener_Params
{
	class ULocalPlayer*                                Player;                                                   // (CPF_Parm)
};

// Function AkAudio.AkDevice.SetMusicRTCP
struct UAkDevice_SetMusicRTCP_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkDevice.SetGlobalRTCP
struct UAkDevice_SetGlobalRTCP_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkDevice.StopPlayingID
struct UAkDevice_StopPlayingID_Params
{
	int                                                PlayingID;                                                // (CPF_Parm)
};

// Function AkAudio.AkDevice.StopBGMusic
struct UAkDevice_StopBGMusic_Params
{
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
};

// Function AkAudio.AkDevice.PlayBGMusic
struct UAkDevice_PlayBGMusic_Params
{
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AkAudio.AkDevice.StopGlobalSound
struct UAkDevice_StopGlobalSound_Params
{
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
};

// Function AkAudio.AkDevice.PlayGlobalSound
struct UAkDevice_PlayGlobalSound_Params
{
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
};

// Function AkAudio.AkDevice.SetState
struct UAkDevice_SetState_Params
{
	struct FName                                       InStateGroup;                                             // (CPF_Parm)
	struct FName                                       InState;                                                  // (CPF_Parm)
};

// Function AkAudio.AkDevice.SetSwitch
struct UAkDevice_SetSwitch_Params
{
	class AActor*                                      SourceActor;                                              // (CPF_Parm)
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FName                                       Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkDevice.SetRTCP
struct UAkDevice_SetRTCP_Params
{
	class AActor*                                      SourceActor;                                              // (CPF_Parm)
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkDevice.StopAllSounds
struct UAkDevice_StopAllSounds_Params
{
	class AActor*                                      SourceActor;                                              // (CPF_Parm)
};

// Function AkAudio.AkDevice.StopSound
struct UAkDevice_StopSound_Params
{
	class AActor*                                      SourceActor;                                              // (CPF_Parm)
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
};

// Function AkAudio.AkDevice.PlaySound
struct UAkDevice_PlaySound_Params
{
	class AActor*                                      SourceActor;                                              // (CPF_Parm)
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
	struct FVector                                     Translation;                                              // (CPF_OptionalParm, CPF_Parm)
	struct FRotator                                    Rotation;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UAkSoundSource*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function AkAudio.AkDevice.EventMusicTrackEnd
struct UAkDevice_EventMusicTrackEnd_Params
{
	int                                                PlayingID;                                                // (CPF_Parm)
};

// Function AkAudio.AkDevice.EventMusicTrackStart
struct UAkDevice_EventMusicTrackStart_Params
{
	int                                                PlayingID;                                                // (CPF_Parm)
	struct FString                                     FileMarker;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function AkAudio.AkDevice.EventInitialized
struct UAkDevice_EventInitialized_Params
{
};

// Function AkAudio.AkEnvironments.RemoveActorEnvironment
struct UAkEnvironments_RemoveActorEnvironment_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm)
	struct FString                                     EnvironmentID;                                            // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function AkAudio.AkEnvironments.AddActorEnvironment
struct UAkEnvironments_AddActorEnvironment_Params
{
	class AActor*                                      TargetActor;                                              // (CPF_Parm)
	struct FAkEnvironment                              Environment;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function AkAudio.AkEnvironments.AddLevelDefault
struct UAkEnvironments_AddLevelDefault_Params
{
	struct FAkEnvironment                              Environment;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function AkAudio.AkParamGroup.PrintDebugInfo
struct UAkParamGroup_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function AkAudio.AkParamGroup.SetActorParameter
struct UAkParamGroup_SetActorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	class AActor*                                      Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkParamGroup.SetLinearColorParameter
struct UAkParamGroup_SetLinearColorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FLinearColor                                Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkParamGroup.SetVectorParameter
struct UAkParamGroup_SetVectorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FVector                                     Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkParamGroup.SetFloatParameter
struct UAkParamGroup_SetFloatParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkParamGroup.SetNameParameter
struct UAkParamGroup_SetNameParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FName                                       Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkParamGroup.GetDebugData
struct UAkParamGroup_GetDebugData_Params
{
	TArray<struct FName>                               RTCPKeys;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<float>                                      RTCPValues;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FName>                               SwitchKeys;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FName>                               SwitchValues;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function AkAudio.AkParamGroup.StopSound
struct UAkParamGroup_StopSound_Params
{
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
};

// Function AkAudio.AkParamGroup.PlaySound
struct UAkParamGroup_PlaySound_Params
{
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
	struct FVector                                     Translation;                                              // (CPF_OptionalParm, CPF_Parm)
	struct FRotator                                    Rotation;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UAkSoundSource*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function AkAudio.AkParamGroup.SetSwitch
struct UAkParamGroup_SetSwitch_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FName                                       Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkParamGroup.SetRTCP
struct UAkParamGroup_SetRTCP_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetActorParameter
struct UAkPlaySoundComponent_SetActorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	class AActor*                                      Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
struct UAkPlaySoundComponent_SetLinearColorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FLinearColor                                Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
struct UAkPlaySoundComponent_SetVectorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FVector                                     Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
struct UAkPlaySoundComponent_SetFloatParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetNameParameter
struct UAkPlaySoundComponent_SetNameParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FName                                       Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetRTCP
struct UAkPlaySoundComponent_SetRTCP_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkPlaySoundComponent.SetSwitch
struct UAkPlaySoundComponent_SetSwitch_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FName                                       Value;                                                    // (CPF_Parm)
};

// Function AkAudio.AkPlaySoundComponent.IsPlaying
struct UAkPlaySoundComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AkAudio.AkPlaySoundComponent.Stop
struct UAkPlaySoundComponent_Stop_Params
{
};

// Function AkAudio.AkPlaySoundComponent.Play
struct UAkPlaySoundComponent_Play_Params
{
};

// Function AkAudio.AkRevPhysicsSimulation.PrintDebugInfo
struct UAkRevPhysicsSimulation_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function AkAudio.AkRevPhysicsSimulation.GetGearRatio
struct UAkRevPhysicsSimulation_GetGearRatio_Params
{
	struct FAkRevSimUpdateParams                       SimUpdate;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.CalcVelocity
struct UAkRevPhysicsSimulation_CalcVelocity_Params
{
	float                                              GearRatio;                                                // (CPF_Parm)
	float                                              RPM;                                                      // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.CalcRPM
struct UAkRevPhysicsSimulation_CalcRPM_Params
{
	float                                              GearRatio;                                                // (CPF_Parm)
	float                                              Velocity;                                                 // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.Step
struct UAkRevPhysicsSimulation_Step_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FAkRevSimUpdateParams                       Params;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FAkRevSimFrame                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AkAudio.AkRevPhysicsSimulation.EventGearChange
struct UAkRevPhysicsSimulation_EventGearChange_Params
{
	class UAkRevPhysicsSimulation*                     Simulation;                                               // (CPF_Parm)
};

// Function AkAudio.AkSoundSource.IsPlayingAny
struct UAkSoundSource_IsPlayingAny_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AkAudio.AkSoundSource.IsPlaying
struct UAkSoundSource_IsPlaying_Params
{
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function AkAudio.AkSoundSource.StopAll
struct UAkSoundSource_StopAll_Params
{
};

// Function AkAudio.AkSoundSource.Stop
struct UAkSoundSource_Stop_Params
{
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
};

// Function AkAudio.AkSoundSource.Play
struct UAkSoundSource_Play_Params
{
	class UAkSoundCue*                                 Sound;                                                    // (CPF_Parm)
};

// Function AkAudio.AkAmbientSoundActor.OnToggle
struct AAkAmbientSoundActor_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (CPF_Parm)
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
struct USeqAct_AkPlaySound_ToggleSoundFor_Params
{
	class AActor*                                      A;                                                        // (CPF_Parm)
	bool                                               bPlay;                                                    // (CPF_Parm)
};

// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
struct USeqAct_AkPlaySound_ToggleSound_Params
{
	bool                                               bPlay;                                                    // (CPF_Parm)
};

// Function AkAudio.SeqAct_AkPlaySound.Activated
struct USeqAct_AkPlaySound_Activated_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
