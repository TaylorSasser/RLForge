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

// Function GFxUI.GFxEngine.UpdateMovieLoadingInfo
struct UGFxEngine_UpdateMovieLoadingInfo_Params
{
	struct FLoadingMovieMapInfo                        LoadingInfo;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxEngine.Tick
struct UGFxEngine_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GFxUI.GFxFSCmdHandler.FSCommand
struct UGFxFSCmdHandler_FSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                                    // (CPF_Parm)
	class UGFxEvent_FSCommand*                         Event;                                                    // (CPF_Parm)
	struct FString                                     Cmd;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxInteraction.DebugInputKey
struct UGFxInteraction_DebugInputKey_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FName                                       Key;                                                      // (CPF_Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (CPF_Parm)
	float                                              AmountDepressed;                                          // (CPF_Parm)
	bool                                               bGamepad;                                                 // (CPF_Parm)
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
struct UGFxInteraction_CloseAllMoviePlayers_Params
{
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
struct UGFxInteraction_NotifySplitscreenLayoutChanged_Params
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
struct UGFxInteraction_NotifyPlayerRemoved_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm)
	class ULocalPlayer*                                RemovedPlayer;                                            // (CPF_Parm)
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
struct UGFxInteraction_NotifyPlayerAdded_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm)
	class ULocalPlayer*                                AddedPlayer;                                              // (CPF_Parm)
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
struct UGFxInteraction_NotifyGameSessionEnded_Params
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
struct UGFxInteraction_GetFocusMovie_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	class UGFxMoviePlayer*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetFullScreen
struct UGFxMoviePlayer_SetFullScreen_Params
{
	bool                                               bFullScreen;                                              // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.IsHidden
struct UGFxMoviePlayer_IsHidden_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetHidden
struct UGFxMoviePlayer_SetHidden_Params
{
	bool                                               bHidden;                                                  // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.RenderOnce
struct UGFxMoviePlayer_RenderOnce_Params
{
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
struct UGFxMoviePlayer_UpdateSplitscreenLayout_Params
{
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
struct UGFxMoviePlayer_ApplyPriorityVisibilityEffect_Params
{
	bool                                               bRemoveEffect;                                            // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
struct UGFxMoviePlayer_ApplyPriorityBlurEffect_Params
{
	bool                                               bRemoveEffect;                                            // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
struct UGFxMoviePlayer_ApplyPriorityEffect_Params
{
	bool                                               bRequestedBlurState;                                      // (CPF_Parm)
	bool                                               bRequestedHiddenState;                                    // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
struct UGFxMoviePlayer_PlaySoundFromTheme_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm)
	struct FName                                       SoundThemeName;                                           // (CPF_OptionalParm, CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
struct UGFxMoviePlayer_OnFocusLost_Params
{
	int                                                LocalPlayerIndex;                                         // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
struct UGFxMoviePlayer_OnFocusGained_Params
{
	int                                                LocalPlayerIndex;                                         // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
struct UGFxMoviePlayer_ConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetPC
struct UGFxMoviePlayer_GetPC_Params
{
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetLP
struct UGFxMoviePlayer_GetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.Init
struct UGFxMoviePlayer_Init_Params
{
	class ULocalPlayer*                                LocPlay;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
struct UGFxMoviePlayer_SetWidgetPathBinding_Params
{
	class UGFxObject*                                  WidgetToBind;                                             // (CPF_Parm)
	struct FName                                       Path;                                                     // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
struct UGFxMoviePlayer_PostWidgetInit_Params
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
struct UGFxMoviePlayer_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (CPF_Parm)
	struct FName                                       WidgetPath;                                               // (CPF_Parm)
	class UGFxObject*                                  Widget;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
struct UGFxMoviePlayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (CPF_Parm)
	struct FName                                       WidgetPath;                                               // (CPF_Parm)
	class UGFxObject*                                  Widget;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
struct UGFxMoviePlayer_ActionScriptConstructor_Params
{
	struct FString                                     ClassName;                                                // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
struct UGFxMoviePlayer_ActionScriptObject_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
struct UGFxMoviePlayer_ActionScriptString_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
struct UGFxMoviePlayer_ActionScriptFloat_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
struct UGFxMoviePlayer_ActionScriptInt_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
struct UGFxMoviePlayer_ActionScriptVoid_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.Invoke
struct UGFxMoviePlayer_Invoke_Params
{
	struct FString                                     method;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FASValue>                            args;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
struct UGFxMoviePlayer_ActionScriptSetFunction_Params
{
	class UGFxObject*                                  Object;                                                   // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.CreateArray
struct UGFxMoviePlayer_CreateArray_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.CreateObject
struct UGFxMoviePlayer_CreateObject_Params
{
	struct FString                                     ASClass;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	class UClass*                                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	TArray<struct FASValue>                            args;                                                     // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
struct UGFxMoviePlayer_SetVariableStringArray_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	TArray<struct FString>                             Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
struct UGFxMoviePlayer_SetVariableFloatArray_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	TArray<float>                                      Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
struct UGFxMoviePlayer_SetVariableIntArray_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	TArray<int>                                        Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
struct UGFxMoviePlayer_SetVariableArray_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	TArray<struct FASValue>                            Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
struct UGFxMoviePlayer_GetVariableStringArray_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	TArray<struct FString>                             Arg;                                                      // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
struct UGFxMoviePlayer_GetVariableFloatArray_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	TArray<float>                                      Arg;                                                      // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
struct UGFxMoviePlayer_GetVariableIntArray_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	TArray<int>                                        Arg;                                                      // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
struct UGFxMoviePlayer_GetVariableArray_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	TArray<struct FASValue>                            Arg;                                                      // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
struct UGFxMoviePlayer_SetVariableObject_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxObject*                                  Object;                                                   // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
struct UGFxMoviePlayer_SetVariableString_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.SetVariableInt
struct UGFxMoviePlayer_SetVariableInt_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                I;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
struct UGFxMoviePlayer_SetVariableNumber_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	float                                              F;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
struct UGFxMoviePlayer_SetVariableBool_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               B;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariable
struct UGFxMoviePlayer_SetVariable_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
struct UGFxMoviePlayer_GetVariableObject_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class UClass*                                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
struct UGFxMoviePlayer_GetVariableString_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableInt
struct UGFxMoviePlayer_GetVariableInt_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
struct UGFxMoviePlayer_GetVariableNumber_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
struct UGFxMoviePlayer_GetVariableBool_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariable
struct UGFxMoviePlayer_GetVariable_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
struct UGFxMoviePlayer_GetAVMVersion_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
struct UGFxMoviePlayer_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FName                                       ButtonName;                                               // (CPF_Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
struct UGFxMoviePlayer_FlushPlayerInput_Params
{
	bool                                               capturekeysonly;                                          // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
struct UGFxMoviePlayer_ClearFocusIgnoreKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
struct UGFxMoviePlayer_AddFocusIgnoreKey_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
struct UGFxMoviePlayer_ClearCaptureKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
struct UGFxMoviePlayer_AddCaptureKey_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
struct UGFxMoviePlayer_SetMovieCanReceiveInput_Params
{
	bool                                               bCanReceiveInput;                                         // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
struct UGFxMoviePlayer_SetMovieCanReceiveFocus_Params
{
	bool                                               bCanReceiveFocus;                                         // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
struct UGFxMoviePlayer_SetPerspective3D_Params
{
	struct FMatrix                                     matPersp;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetView3D
struct UGFxMoviePlayer_SetView3D_Params
{
	struct FMatrix                                     matView;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
struct UGFxMoviePlayer_GetVisibleFrameRect_Params
{
	float                                              x0;                                                       // (CPF_Parm, CPF_OutParm)
	float                                              y0;                                                       // (CPF_Parm, CPF_OutParm)
	float                                              X1;                                                       // (CPF_Parm, CPF_OutParm)
	float                                              Y1;                                                       // (CPF_Parm, CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
struct UGFxMoviePlayer_SetAlignment_Params
{
	TEnumAsByte<EGFxAlign>                             A;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
struct UGFxMoviePlayer_SetViewScaleMode_Params
{
	TEnumAsByte<EGFxScaleMode>                         SM;                                                       // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetViewport
struct UGFxMoviePlayer_SetViewport_Params
{
	int                                                X;                                                        // (CPF_Parm)
	int                                                Y;                                                        // (CPF_Parm)
	int                                                Width;                                                    // (CPF_Parm)
	int                                                Height;                                                   // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
struct UGFxMoviePlayer_GetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetPriority
struct UGFxMoviePlayer_SetPriority_Params
{
	unsigned char                                      NewPriority;                                              // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
struct UGFxMoviePlayer_SetExternalTexture_Params
{
	struct FString                                     Resource;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UTexture*                                    Texture;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
struct UGFxMoviePlayer_SetExternalInterface_Params
{
	class UObject*                                     H;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
struct UGFxMoviePlayer_SetTimingMode_Params
{
	TEnumAsByte<EGFxTimingMode>                        Mode;                                                     // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
struct UGFxMoviePlayer_SetMovieInfo_Params
{
	class USwfMovie*                                   Data;                                                     // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
struct UGFxMoviePlayer_ConditionalClearPause_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
struct UGFxMoviePlayer_OnCleanup_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnClose
struct UGFxMoviePlayer_OnClose_Params
{
};

// Function GFxUI.GFxMoviePlayer.Close
struct UGFxMoviePlayer_Close_Params
{
	bool                                               Unload;                                                   // (CPF_OptionalParm, CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPause
struct UGFxMoviePlayer_SetPause_Params
{
	bool                                               bPausePlayback;                                           // (CPF_OptionalParm, CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
struct UGFxMoviePlayer_OnPostAdvance_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
struct UGFxMoviePlayer_PostAdvance_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.Advance
struct UGFxMoviePlayer_Advance_Params
{
	float                                              Time;                                                     // (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.Start
struct UGFxMoviePlayer_Start_Params
{
	bool                                               StartPaused;                                              // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.WidgetUnloaded
struct UGFxObject_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (CPF_Parm)
	struct FName                                       WidgetPath;                                               // (CPF_Parm)
	class UGFxObject*                                  Widget;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.WidgetInitialized
struct UGFxObject_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (CPF_Parm)
	struct FName                                       WidgetPath;                                               // (CPF_Parm)
	class UGFxObject*                                  Widget;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.AttachMovie
struct UGFxObject_AttachMovie_Params
{
	struct FString                                     symbolname;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     instancename;                                             // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Depth;                                                    // (CPF_OptionalParm, CPF_Parm)
	class UClass*                                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
struct UGFxObject_CreateEmptyMovieClip_Params
{
	struct FString                                     instancename;                                             // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Depth;                                                    // (CPF_OptionalParm, CPF_Parm)
	class UClass*                                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GotoAndStopI
struct UGFxObject_GotoAndStopI_Params
{
	int                                                frame;                                                    // (CPF_Parm)
};

// Function GFxUI.GFxObject.GotoAndStop
struct UGFxObject_GotoAndStop_Params
{
	struct FString                                     frame;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GotoAndPlayI
struct UGFxObject_GotoAndPlayI_Params
{
	int                                                frame;                                                    // (CPF_Parm)
};

// Function GFxUI.GFxObject.GotoAndPlay
struct UGFxObject_GotoAndPlay_Params
{
	struct FString                                     frame;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptArray
struct UGFxObject_ActionScriptArray_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	TArray<class UGFxObject*>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptObject
struct UGFxObject_ActionScriptObject_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptString
struct UGFxObject_ActionScriptString_Params
{
	struct FString                                     method;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptFloat
struct UGFxObject_ActionScriptFloat_Params
{
	struct FString                                     method;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptInt
struct UGFxObject_ActionScriptInt_Params
{
	struct FString                                     method;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptVoid
struct UGFxObject_ActionScriptVoid_Params
{
	struct FString                                     method;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.Invoke
struct UGFxObject_Invoke_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FASValue>                            args;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
struct UGFxObject_ActionScriptSetFunctionOn_Params
{
	class UGFxObject*                                  Target;                                                   // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
struct UGFxObject_ActionScriptSetFunction_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberString
struct UGFxObject_SetElementMemberString_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberInt
struct UGFxObject_SetElementMemberInt_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	int                                                I;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementMemberFloat
struct UGFxObject_SetElementMemberFloat_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	float                                              F;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementMemberBool
struct UGFxObject_SetElementMemberBool_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               B;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementMemberObject
struct UGFxObject_SetElementMemberObject_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxObject*                                  val;                                                      // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementMember
struct UGFxObject_SetElementMember_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberString
struct UGFxObject_GetElementMemberString_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberInt
struct UGFxObject_GetElementMemberInt_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberFloat
struct UGFxObject_GetElementMemberFloat_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberBool
struct UGFxObject_GetElementMemberBool_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberObject
struct UGFxObject_GetElementMemberObject_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class UClass*                                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMember
struct UGFxObject_GetElementMember_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementColorTransform
struct UGFxObject_SetElementColorTransform_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FASColorTransform                           cxform;                                                   // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementPosition
struct UGFxObject_SetElementPosition_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementVisible
struct UGFxObject_SetElementVisible_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	bool                                               Visible;                                                  // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
struct UGFxObject_SetElementDisplayMatrix_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FMatrix                                     M;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
struct UGFxObject_SetElementDisplayInfo_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FASDisplayInfo                              D;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
struct UGFxObject_GetElementDisplayMatrix_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FMatrix                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
struct UGFxObject_GetElementDisplayInfo_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FASDisplayInfo                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.SetElementString
struct UGFxObject_SetElementString_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementInt
struct UGFxObject_SetElementInt_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	int                                                I;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementFloat
struct UGFxObject_SetElementFloat_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	float                                              F;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementBool
struct UGFxObject_SetElementBool_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	bool                                               B;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementObject
struct UGFxObject_SetElementObject_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	class UGFxObject*                                  val;                                                      // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElement
struct UGFxObject_SetElement_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FASValue                                    Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementString
struct UGFxObject_GetElementString_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementInt
struct UGFxObject_GetElementInt_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementFloat
struct UGFxObject_GetElementFloat_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementBool
struct UGFxObject_GetElementBool_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementObject
struct UGFxObject_GetElementObject_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	class UClass*                                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElement
struct UGFxObject_GetElement_Params
{
	int                                                Index;                                                    // (CPF_Parm)
	struct FASValue                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetText
struct UGFxObject_SetText_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function GFxUI.GFxObject.GetText
struct UGFxObject_GetText_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetVisible
struct UGFxObject_SetVisible_Params
{
	bool                                               Visible;                                                  // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
struct UGFxObject_SetDisplayMatrix3D_Params
{
	struct FMatrix                                     M;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix
struct UGFxObject_SetDisplayMatrix_Params
{
	struct FMatrix                                     M;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetColorTransform
struct UGFxObject_SetColorTransform_Params
{
	struct FASColorTransform                           cxform;                                                   // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetPosition
struct UGFxObject_SetPosition_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetDisplayInfo
struct UGFxObject_SetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
struct UGFxObject_GetDisplayMatrix3D_Params
{
	struct FMatrix                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix
struct UGFxObject_GetDisplayMatrix_Params
{
	struct FMatrix                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetColorTransform
struct UGFxObject_GetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetPosition
struct UGFxObject_GetPosition_Params
{
	float                                              X;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              Y;                                                        // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayInfo
struct UGFxObject_GetDisplayInfo_Params
{
	struct FASDisplayInfo                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.TranslateString
struct UGFxObject_TranslateString_Params
{
	struct FString                                     StringToTranslate;                                        // (CPF_Parm, CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                                // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetFunction
struct UGFxObject_SetFunction_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class UObject*                                     Context;                                                  // (CPF_Parm)
	struct FName                                       fname;                                                    // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetObject
struct UGFxObject_SetObject_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxObject*                                  val;                                                      // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetString
struct UGFxObject_SetString_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function GFxUI.GFxObject.SetInt
struct UGFxObject_SetInt_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	int                                                I;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetFloat
struct UGFxObject_SetFloat_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	float                                              F;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.SetBool
struct UGFxObject_SetBool_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               B;                                                        // (CPF_Parm)
};

// Function GFxUI.GFxObject.Set
struct UGFxObject_Set_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetObject
struct UGFxObject_GetObject_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class UClass*                                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetString
struct UGFxObject_GetString_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetInt
struct UGFxObject_GetInt_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetFloat
struct UGFxObject_GetFloat_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetBool
struct UGFxObject_GetBool_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxObject.Get
struct UGFxObject_Get_Params
{
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
struct UGFxAction_CloseMovie_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
struct UGFxAction_GetVariable_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
struct UGFxAction_Invoke_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
struct UGFxAction_OpenMovie_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
struct UGFxAction_SetVariable_IsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
struct UGFxFSCmdHandler_Kismet_FSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                                    // (CPF_Parm)
	class UGFxEvent_FSCommand*                         Event;                                                    // (CPF_Parm)
	struct FString                                     Cmd;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Arg;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
struct UGFxClikWidget_ASRemoveAllEventListeners_Params
{
	struct FString                                     Event;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
struct UGFxClikWidget_AS3AddEventListener_Params
{
	struct FString                                     Type;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxObject*                                  O;                                                        // (CPF_Parm)
	bool                                               useCapture;                                               // (CPF_OptionalParm, CPF_Parm)
	int                                                listenerPriority;                                         // (CPF_OptionalParm, CPF_Parm)
	bool                                               useWeakReference;                                         // (CPF_OptionalParm, CPF_Parm)
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
struct UGFxClikWidget_ASAddEventListener_Params
{
	struct FString                                     Type;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxObject*                                  O;                                                        // (CPF_Parm)
	struct FString                                     func;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.SetListener
struct UGFxClikWidget_SetListener_Params
{
	class UGFxObject*                                  O;                                                        // (CPF_Parm)
	struct FString                                     Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Listener;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
struct UGFxClikWidget_GetEventStringFromTypename_Params
{
	struct FName                                       Typename;                                                 // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
struct UGFxClikWidget_RemoveAllEventListeners_Params
{
	struct FString                                     Event;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AddEventListener
struct UGFxClikWidget_AddEventListener_Params
{
	struct FName                                       Type;                                                     // (CPF_Parm)
	struct FScriptDelegate                             Listener;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               useCapture;                                               // (CPF_OptionalParm, CPF_Parm)
	int                                                listenerPriority;                                         // (CPF_OptionalParm, CPF_Parm)
	bool                                               useWeakReference;                                         // (CPF_OptionalParm, CPF_Parm)
};

// Function GFxUI.GFxClikWidget.EventListener
struct UGFxClikWidget_EventListener_Params
{
	struct FEventData                                  Data;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
