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

// Function GameFramework.GameAIController.GetActionString
struct AGameAIController_GetActionString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameAIController.SetDesiredRotation
struct AGameAIController_SetDesiredRotation_Params
{
	struct FRotator                                    TargetDesiredRotation;                                    // (CPF_Parm)
	bool                                               InLockDesiredRotation;                                    // (CPF_OptionalParm, CPF_Parm)
	bool                                               InUnlockWhenReached;                                      // (CPF_OptionalParm, CPF_Parm)
	float                                              InterpolationTime;                                        // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameAIController.AILog_Internal
struct AGameAIController_AILog_Internal_Params
{
	struct FString                                     LogText;                                                  // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FName                                       LogCategory;                                              // (CPF_OptionalParm, CPF_Parm)
	bool                                               bForce;                                                   // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameAIController.RecordDemoAILog
struct AGameAIController_RecordDemoAILog_Params
{
	struct FString                                     LogText;                                                  // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameAIController.Destroyed
struct AGameAIController_Destroyed_Params
{
};

// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
struct AGameAIController_ReachedIntermediateMoveGoal_Params
{
};

// Function GameFramework.GameAIController.ReachedMoveGoal
struct AGameAIController_ReachedMoveGoal_Params
{
};

// Function GameFramework.GameAIController.GetDestinationOffset
struct AGameAIController_GetDestinationOffset_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAIController.GetAICommandInStack
struct AGameAIController_GetAICommandInStack_Params
{
	class UClass*                                      InClass;                                                  // (CPF_Const, CPF_Parm)
	class UGameAICommand*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAIController.FindCommandOfClass
struct AGameAIController_FindCommandOfClass_Params
{
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	class UGameAICommand*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function GameFramework.GameAIController.DumpCommandStack
struct AGameAIController_DumpCommandStack_Params
{
};

// Function GameFramework.GameAIController.CheckCommandCount
struct AGameAIController_CheckCommandCount_Params
{
};

// Function GameFramework.GameAIController.GetActiveCommand
struct AGameAIController_GetActiveCommand_Params
{
	class UGameAICommand*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAIController.AbortCommand
struct AGameAIController_AbortCommand_Params
{
	class UGameAICommand*                              AbortCmd;                                                 // (CPF_Parm)
	class UClass*                                      AbortClass;                                               // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAIController.PopCommand
struct AGameAIController_PopCommand_Params
{
	class UGameAICommand*                              ToBePoppedCommand;                                        // (CPF_Parm)
};

// Function GameFramework.GameAIController.PushCommand
struct AGameAIController_PushCommand_Params
{
	class UGameAICommand*                              NewCommand;                                               // (CPF_Parm)
};

// Function GameFramework.GameAIController.AllCommands
struct AGameAIController_AllCommands_Params
{
	class UClass*                                      BaseClass;                                                // (CPF_Parm)
	class UGameAICommand*                              Cmd;                                                      // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameAICommand.HandlePathObstruction
struct UGameAICommand_HandlePathObstruction_Params
{
	class AActor*                                      BlockedBy;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICommand.MoveUnreachable
struct UGameAICommand_MoveUnreachable_Params
{
	struct FVector                                     AttemptedDest;                                            // (CPF_Parm)
	class AActor*                                      AttemptedTarget;                                          // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICommand.NotifyNeedRepath
struct UGameAICommand_NotifyNeedRepath_Params
{
};

// Function GameFramework.GameAICommand.GetDebugVerboseText
struct UGameAICommand_GetDebugVerboseText_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
struct UGameAICommand_GetDebugOverheadText_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
	TArray<struct FString>                             OutText;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameAICommand.DrawDebug
struct UGameAICommand_DrawDebug_Params
{
	class AHUD*                                        H;                                                        // (CPF_Parm)
	struct FName                                       Category;                                                 // (CPF_Parm)
};

// Function GameFramework.GameAICommand.GetDumpString
struct UGameAICommand_GetDumpString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameAICommand.Resumed
struct UGameAICommand_Resumed_Params
{
	struct FName                                       OldCommandName;                                           // (CPF_Parm)
};

// Function GameFramework.GameAICommand.Paused
struct UGameAICommand_Paused_Params
{
	class UGameAICommand*                              NewCommand;                                               // (CPF_Parm)
};

// Function GameFramework.GameAICommand.Popped
struct UGameAICommand_Popped_Params
{
};

// Function GameFramework.GameAICommand.Pushed
struct UGameAICommand_Pushed_Params
{
};

// Function GameFramework.GameAICommand.PostPopped
struct UGameAICommand_PostPopped_Params
{
};

// Function GameFramework.GameAICommand.PrePushed
struct UGameAICommand_PrePushed_Params
{
	class AGameAIController*                           AI;                                                       // (CPF_Parm)
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
struct UGameAICommand_AllowStateTransitionTo_Params
{
	struct FName                                       StateName;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICommand.AllowTransitionTo
struct UGameAICommand_AllowTransitionTo_Params
{
	class UClass*                                      AttemptCommand;                                           // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICommand.Tick
struct UGameAICommand_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
struct UGameAICommand_ShouldIgnoreNotifies_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICommand.InternalTick
struct UGameAICommand_InternalTick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GameAICommand.InternalResumed
struct UGameAICommand_InternalResumed_Params
{
	struct FName                                       OldCommandName;                                           // (CPF_Parm)
};

// Function GameFramework.GameAICommand.InternalPaused
struct UGameAICommand_InternalPaused_Params
{
	class UGameAICommand*                              NewCommand;                                               // (CPF_Parm)
};

// Function GameFramework.GameAICommand.InternalPopped
struct UGameAICommand_InternalPopped_Params
{
};

// Function GameFramework.GameAICommand.InternalPushed
struct UGameAICommand_InternalPushed_Params
{
};

// Function GameFramework.GameAICommand.InternalPrePushed
struct UGameAICommand_InternalPrePushed_Params
{
	class AGameAIController*                           AI;                                                       // (CPF_Parm)
};

// Function GameFramework.GameAICommand.InitCommand
struct UGameAICommand_InitCommand_Params
{
	class AGameAIController*                           AI;                                                       // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICommand.InitCommandUserActor
struct UGameAICommand_InitCommandUserActor_Params
{
	class AGameAIController*                           AI;                                                       // (CPF_Parm)
	class AActor*                                      UserActor;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GamePlayerController.ClientColorFade
struct AGamePlayerController_ClientColorFade_Params
{
	struct FColor                                      FadeColor;                                                // (CPF_Parm)
	unsigned char                                      FromAlpha;                                                // (CPF_Parm)
	unsigned char                                      ToAlpha;                                                  // (CPF_Parm)
	float                                              FadeTime;                                                 // (CPF_Parm)
};

// Function GameFramework.GamePlayerController.WarmupPause
struct AGamePlayerController_WarmupPause_Params
{
	bool                                               bDesiredPauseState;                                       // (CPF_Parm)
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
struct AGamePlayerController_CanUnpauseWarmup_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
struct AGamePlayerController_GetCurrentMovie_Params
{
	struct FString                                     MovieName;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function GameFramework.GamePlayerController.ClientStopMovie
struct AGamePlayerController_ClientStopMovie_Params
{
	float                                              DelayInSeconds;                                           // (CPF_Parm)
	bool                                               bAllowMovieToFinish;                                      // (CPF_Parm)
	bool                                               bForceStopNonSkippable;                                   // (CPF_Parm)
	bool                                               bForceStopLoadingMovie;                                   // (CPF_Parm)
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
struct AGamePlayerController_ClientPlayMovie_Params
{
	struct FString                                     MovieName;                                                // (CPF_Parm, CPF_NeedCtorLink)
	int                                                InStartOfRenderingMovieFrame;                             // (CPF_Parm)
	int                                                InEndOfRenderingMovieFrame;                               // (CPF_Parm)
	bool                                               bRestrictPausing;                                         // (CPF_Parm)
	bool                                               bPlayOnceFromStream;                                      // (CPF_Parm)
	bool                                               bOnlyBackButtonSkipsMovie;                                // (CPF_Parm)
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
struct AGamePlayerController_KeepPlayingLoadingMovie_Params
{
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
struct AGamePlayerController_ShowLoadingMovie_Params
{
	bool                                               bShowMovie;                                               // (CPF_Parm)
	bool                                               bPauseAfterHide;                                          // (CPF_OptionalParm, CPF_Parm)
	float                                              PauseDuration;                                            // (CPF_OptionalParm, CPF_Parm)
	float                                              KeepPlayingDuration;                                      // (CPF_OptionalParm, CPF_Parm)
	bool                                               bOverridePreviousDelays;                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GamePlayerController.SetSoundMode
struct AGamePlayerController_SetSoundMode_Params
{
	struct FName                                       InSoundModeName;                                          // (CPF_Parm)
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
struct AGamePlayerController_DoForceFeedbackForScreenShake_Params
{
	class UCameraShake*                                ShakeData;                                                // (CPF_Parm)
	float                                              Scale;                                                    // (CPF_Parm)
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
struct AGamePlayerController_NotifyCrowdAgentInRadius_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
struct AGamePlayerController_NotifyCrowdAgentRefresh_Params
{
};

// Function GameFramework.GamePlayerController.CrowdDebug
struct AGamePlayerController_CrowdDebug_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm)
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
struct AGamePlayerController_GetUIPlayerIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GamePlayerController.OnToggleMouseCursor
struct AGamePlayerController_OnToggleMouseCursor_Params
{
	class USeqAct_ToggleMouseCursor*                   inAction;                                                 // (CPF_Parm)
};

// Function GameFramework.GameCheatManager.OnRequestComplete
struct UGameCheatManager_OnRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bDidSucceed;                                              // (CPF_Parm)
};

// Function GameFramework.GameCheatManager.TestHttp
struct UGameCheatManager_TestHttp_Params
{
	struct FString                                     Verb;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Payload;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bSendParallelRequest;                                     // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameCheatManager.EnableDebugCamera
struct UGameCheatManager_EnableDebugCamera_Params
{
	bool                                               bEnableDebugText;                                         // (CPF_Parm)
};

// Function GameFramework.GameCheatManager.TeleportPawnToCamera
struct UGameCheatManager_TeleportPawnToCamera_Params
{
	bool                                               bToggleDebugCameraOff;                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameCheatManager.ToggleDebugCamera
struct UGameCheatManager_ToggleDebugCamera_Params
{
	bool                                               bDrawDebugText;                                           // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameCheatManager.PatchDebugCameraController
struct UGameCheatManager_PatchDebugCameraController_Params
{
};

// Function GameFramework.GameCrowdAgent.InitDebugColor
struct AGameCrowdAgent_InitDebugColor_Params
{
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
struct AGameCrowdAgent_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameCrowdAgent.GetDestString
struct AGameCrowdAgent_GetDestString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
struct AGameCrowdAgent_PostRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	struct FVector                                     CameraPosition;                                           // (CPF_Parm)
	struct FVector                                     CameraDir;                                                // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
struct AGameCrowdAgent_NativePostRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	struct FVector                                     CameraPosition;                                           // (CPF_Parm)
	struct FVector                                     CameraDir;                                                // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
struct AGameCrowdAgent_GeneratePathToActor_Params
{
	class AActor*                                      Goal;                                                     // (CPF_Parm)
	float                                              WithinDistance;                                           // (CPF_OptionalParm, CPF_Parm)
	bool                                               bAllowPartialPath;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
struct AGameCrowdAgent_InitNavigationHandle_Params
{
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
struct AGameCrowdAgent_OverlappedActorEvent_Params
{
	class AActor*                                      A;                                                        // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.TakeDamage
struct AGameCrowdAgent_TakeDamage_Params
{
	int                                                DamageAmount;                                             // (CPF_Parm)
	class AController*                                 EventInstigator;                                          // (CPF_Parm)
	struct FVector                                     HitLocation;                                              // (CPF_Parm)
	struct FVector                                     Momentum;                                                 // (CPF_Parm)
	class UClass*                                      DamageType;                                               // (CPF_Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (CPF_OptionalParm, CPF_Parm)
	class AActor*                                      DamageCauser;                                             // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
struct AGameCrowdAgent_FireDeathEvent_Params
{
};

// Function GameFramework.GameCrowdAgent.PlayDeath
struct AGameCrowdAgent_PlayDeath_Params
{
	struct FVector                                     KillMomentum;                                             // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
struct AGameCrowdAgent_UpdateIntermediatePoint_Params
{
	class AActor*                                      DestinationActor;                                         // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.CalcCamera
struct AGameCrowdAgent_CalcCamera_Params
{
	float                                              fDeltaTime;                                               // (CPF_Parm)
	struct FVector                                     out_CamLoc;                                               // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    out_CamRot;                                               // (CPF_Parm, CPF_OutParm)
	float                                              out_FOV;                                                  // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgent.IsIdle
struct AGameCrowdAgent_IsIdle_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
struct AGameCrowdAgent_SetCurrentBehavior_Params
{
	class UGameCrowdAgentBehavior*                     BehaviorArchetype;                                        // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.StopBehavior
struct AGameCrowdAgent_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
struct AGameCrowdAgent_HandleBehaviorEvent_Params
{
	TEnumAsByte<ECrowdBehaviorEvent>                   EventType;                                                // (CPF_Parm)
	class AActor*                                      InInstigator;                                             // (CPF_Parm)
	bool                                               bViralCause;                                              // (CPF_Parm)
	bool                                               bPropagateViralFlag;                                      // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
struct AGameCrowdAgent_ActivateInstancedBehavior_Params
{
	class UGameCrowdAgentBehavior*                     NewBehaviorObject;                                        // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
struct AGameCrowdAgent_ActivateBehavior_Params
{
	class UGameCrowdAgentBehavior*                     NewBehaviorArchetype;                                     // (CPF_Parm)
	class AActor*                                      LookAtActor;                                              // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
struct AGameCrowdAgent_ResetSeePlayer_Params
{
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
struct AGameCrowdAgent_TryRandomBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
struct AGameCrowdAgent_NotifySeePlayer_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
struct AGameCrowdAgent_PlaySpawnBehavior_Params
{
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
struct AGameCrowdAgent_HandlePotentialAgentEncounter_Params
{
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
struct AGameCrowdAgent_StopIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
struct AGameCrowdAgent_PlayIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
struct AGameCrowdAgent_OnPlayAgentAnimation_Params
{
	class USeqAct_PlayAgentAnimation*                  Action;                                                   // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
struct AGameCrowdAgent_InitializeAgent_Params
{
	class AActor*                                      SpawnLoc;                                                 // (CPF_Parm)
	TArray<struct FCrowdSpawnerPlayerInfo>             PlayerInfo;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class AGameCrowdAgent*                             AgentTemplate;                                            // (CPF_Parm)
	class UGameCrowdGroup*                             NewGroup;                                                 // (CPF_Parm)
	float                                              AgentWarmupTime;                                          // (CPF_Parm)
	bool                                               bWarmupPosition;                                          // (CPF_Parm)
	bool                                               bCheckWarmupVisibility;                                   // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
struct AGameCrowdAgent_GetAttemptedSpawnLocation_Params
{
	float                                              Pct;                                                      // (CPF_Parm)
	struct FVector                                     CurPos;                                                   // (CPF_Parm)
	float                                              CurRadius;                                                // (CPF_Parm)
	struct FVector                                     DestPos;                                                  // (CPF_Parm)
	float                                              DestRadius;                                               // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgent.SetLighting
struct AGameCrowdAgent_SetLighting_Params
{
	bool                                               bEnableLightEnvironment;                                  // (CPF_Parm)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // (CPF_Parm)
	bool                                               bCastShadows;                                             // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
struct AGameCrowdAgent_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (CPF_Parm)
	float                                              out_YL;                                                   // (CPF_Parm, CPF_OutParm)
	float                                              out_YPos;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameCrowdAgent.Destroyed
struct AGameCrowdAgent_Destroyed_Params
{
};

// Function GameFramework.GameCrowdAgent.ResetPooledAgent
struct AGameCrowdAgent_ResetPooledAgent_Params
{
};

// Function GameFramework.GameCrowdAgent.KillAgent
struct AGameCrowdAgent_KillAgent_Params
{
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
struct AGameCrowdAgent_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
struct AGameCrowdAgent_SetMaxSpeed_Params
{
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
struct AGameCrowdAgent_SetCurrentDestination_Params
{
	class AGameCrowdDestination*                       NewDest;                                                  // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
struct AGameCrowdAgent_WaitForGroupMembers_Params
{
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
struct AGameCrowdAgent_PickBehaviorFrom_Params
{
	TArray<struct FBehaviorEntry>                      BehaviorList;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FVector                                     BestCameraLoc;                                            // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgent.IsPanicked
struct AGameCrowdAgent_IsPanicked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
struct AGameCrowdAgent_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.GetCollisionExtent
struct AGameCrowdAgent_GetCollisionExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
struct AGameCrowdAgentSkeletal_CreateAttachments_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
struct AGameCrowdAgentSkeletal_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (CPF_Parm)
	float                                              PlayedTime;                                               // (CPF_Parm)
	float                                              ExcessTime;                                               // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
struct AGameCrowdAgentSkeletal_StopIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
struct AGameCrowdAgentSkeletal_PlayIdleAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
struct AGameCrowdAgentSkeletal_ClearLatentAnimation_Params
{
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
struct AGameCrowdAgentSkeletal_OnPlayAgentAnimation_Params
{
	class USeqAct_PlayAgentAnimation*                  Action;                                                   // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
struct AGameCrowdAgentSkeletal_SetRootMotion_Params
{
	bool                                               bRootMotionEnabled;                                       // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
struct AGameCrowdAgentSkeletal_PlayDeath_Params
{
	struct FVector                                     KillMomentum;                                             // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
struct AGameCrowdAgentSkeletal_SetLighting_Params
{
	bool                                               bEnableLightEnvironment;                                  // (CPF_Parm)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // (CPF_Parm)
	bool                                               bCastShadows;                                             // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
struct AGameCrowdAgentSkeletal_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdAgentSM.StopBehavior
struct AGameCrowdAgentSM_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
struct AGameCrowdAgentSM_ActivateBehavior_Params
{
	class UGameCrowdAgentBehavior*                     NewBehaviorArchetype;                                     // (CPF_Parm)
	class AActor*                                      LookAtActor;                                              // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
struct AGameCrowdAgentSM_ChangeDebugColor_Params
{
	struct FColor                                      InC;                                                      // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentSM.InitDebugColor
struct AGameCrowdAgentSM_InitDebugColor_Params
{
};

// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
struct AGameCrowdAgentSM_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
struct UGameCrowdAgentBehavior_AllowBehaviorAt_Params
{
	class AGameCrowdDestination*                       Destination;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
struct UGameCrowdAgentBehavior_AllowThisDestination_Params
{
	class AGameCrowdDestination*                       Destination;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
struct UGameCrowdAgentBehavior_PropagateViralBehaviorTo_Params
{
	class AGameCrowdAgent*                             OtherAgent;                                               // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
struct UGameCrowdAgentBehavior_GetBehaviorInstigator_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
struct UGameCrowdAgentBehavior_ActivatedBy_Params
{
	class AActor*                                      NewActionTarget;                                          // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
struct UGameCrowdAgentBehavior_GetDestinationActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
struct UGameCrowdAgentBehavior_ChangingDestination_Params
{
	class AGameCrowdDestination*                       NewDest;                                                  // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
struct UGameCrowdAgentBehavior_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
struct UGameCrowdAgentBehavior_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (CPF_Parm)
	float                                              PlayedTime;                                               // (CPF_Parm)
	float                                              ExcessTime;                                               // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
struct UGameCrowdAgentBehavior_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
struct UGameCrowdAgentBehavior_InitBehavior_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
struct UGameCrowdAgentBehavior_HandleMovement_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
struct UGameCrowdAgentBehavior_FinishedTargetRotation_Params
{
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
struct UGameCrowdAgentBehavior_CanBeUsedBy_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
	struct FVector                                     CameraLoc;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
struct UGameCrowdAgentBehavior_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
struct UGameCrowdAgentBehavior_ShouldEndIdle_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
struct UGameCrowdAgentBehavior_TriggerCrowdBehavior_Params
{
	TEnumAsByte<ECrowdBehaviorEvent>                   EventType;                                                // (CPF_Parm)
	class AActor*                                      Instigator;                                               // (CPF_Parm)
	struct FVector                                     AtLocation;                                               // (CPF_Parm)
	float                                              InRange;                                                  // (CPF_Parm)
	float                                              InDuration;                                               // (CPF_Parm)
	class AActor*                                      BaseActor;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               bRequireLOS;                                              // (CPF_OptionalParm, CPF_Parm)
	class AGameCrowdBehaviorPoint*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
struct UGameCrowdBehavior_PlayAnimation_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
struct UGameCrowdBehavior_PlayAnimation_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
struct UGameCrowdBehavior_PlayAnimation_PlayAgentAnimationNow_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
struct UGameCrowdBehavior_PlayAnimation_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (CPF_Parm)
	float                                              PlayedTime;                                               // (CPF_Parm)
	float                                              ExcessTime;                                               // (CPF_Parm)
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
struct UGameCrowdBehavior_PlayAnimation_SetSequenceOutput_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
struct UGameCrowdBehavior_PlayAnimation_FinishedTargetRotation_Params
{
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
struct UGameCrowdBehavior_PlayAnimation_InitBehavior_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
struct UGameCrowdBehavior_RunFromPanic_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
struct UGameCrowdBehavior_RunFromPanic_AllowBehaviorAt_Params
{
	class AGameCrowdDestination*                       Destination;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
struct UGameCrowdBehavior_RunFromPanic_AllowThisDestination_Params
{
	class AGameCrowdDestination*                       Destination;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
struct UGameCrowdBehavior_RunFromPanic_GetBehaviorInstigator_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
struct UGameCrowdBehavior_RunFromPanic_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
struct UGameCrowdBehavior_RunFromPanic_InitBehavior_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
struct UGameCrowdBehavior_RunFromPanic_ActivatedBy_Params
{
	class AActor*                                      NewActionTarget;                                          // (CPF_Parm)
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
struct UGameCrowdBehavior_WaitForGroup_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
struct UGameCrowdBehavior_WaitForGroup_ShouldEndIdle_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
struct UGameCrowdBehavior_WaitForGroup_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
struct UGameCrowdBehavior_WaitForGroup_InitBehavior_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
struct UGameCrowdBehavior_WaitInQueue_StopBehavior_Params
{
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
struct UGameCrowdBehavior_WaitInQueue_ShouldEndIdle_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
struct UGameCrowdBehavior_WaitInQueue_GetBehaviorString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
struct UGameCrowdBehavior_WaitInQueue_GetDestinationActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
struct UGameCrowdBehavior_WaitInQueue_ChangingDestination_Params
{
	class AGameCrowdDestination*                       NewDest;                                                  // (CPF_Parm)
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
struct UGameCrowdBehavior_WaitInQueue_HandleMovement_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
struct UGameCrowdGroup_UpdateDestinations_Params
{
	class AGameCrowdDestination*                       NewDestination;                                           // (CPF_Parm)
};

// Function GameFramework.GameCrowdGroup.RemoveMember
struct UGameCrowdGroup_RemoveMember_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdGroup.AddMember
struct UGameCrowdGroup_AddMember_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdInfoVolume.UnTouch
struct AGameCrowdInfoVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdInfoVolume.Touch
struct AGameCrowdInfoVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_EditInline)
	struct FVector                                     HitLocation;                                              // (CPF_Parm)
	struct FVector                                     HitNormal;                                                // (CPF_Parm)
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
struct AGameCrowdInteractionPoint_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (CPF_Parm)
};

// Function GameFramework.GameCrowdBehaviorPoint.Touch
struct AGameCrowdBehaviorPoint_Touch_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_EditInline)
	struct FVector                                     HitLocation;                                              // (CPF_Parm)
	struct FVector                                     HitNormal;                                                // (CPF_Parm)
};

// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
struct AGameCrowdBehaviorPoint_DestroySelf_Params
{
};

// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
struct AGameCrowdBehaviorPoint_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdDestination.DrawDebug
struct AGameCrowdDestination_DrawDebug_Params
{
	TArray<struct FCrowdSpawnerPlayerInfo>             PlayerInfo;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               bPresistent;                                              // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameCrowdDestination.GetDestinationRadius
struct AGameCrowdDestination_GetDestinationRadius_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
struct AGameCrowdDestination_PrioritizeSpawnPoint_Params
{
	TArray<struct FCrowdSpawnerPlayerInfo>             PlayerInfo;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	float                                              MaxSpawnDist;                                             // (CPF_Parm)
};

// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
struct AGameCrowdDestination_AnalyzeSpawnPoint_Params
{
	TArray<struct FCrowdSpawnerPlayerInfo>             PlayerInfo;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	float                                              MaxSpawnDistSq;                                           // (CPF_Parm)
	bool                                               bForceNavMeshPathing;                                     // (CPF_Parm)
	class UNavigationHandle*                           NavHandle;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
struct AGameCrowdDestination_GetSpawnPosition_Params
{
	class USeqAct_GameCrowdSpawner*                    Spawner;                                                  // (CPF_Parm)
	struct FVector                                     SpawnPos;                                                 // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    SpawnRot;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameCrowdDestination.GetSpawnRadius
struct AGameCrowdDestination_GetSpawnRadius_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
struct AGameCrowdDestination_AllowableDestinationFor_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestination.AtCapacity
struct AGameCrowdDestination_AtCapacity_Params
{
	unsigned char                                      CheckCnt;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
struct AGameCrowdDestination_IncrementCustomerCount_Params
{
	class AGameCrowdAgent*                             ArrivingAgent;                                            // (CPF_Parm)
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
struct AGameCrowdDestination_DecrementCustomerCount_Params
{
	class AGameCrowdAgent*                             DepartingAgent;                                           // (CPF_Parm)
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
struct AGameCrowdDestination_PickNewDestinationFor_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
	bool                                               bIgnoreRestrictions;                                      // (CPF_Parm)
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
struct AGameCrowdDestination_ReachedDestination_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdDestination.Destroyed
struct AGameCrowdDestination_Destroyed_Params
{
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
struct AGameCrowdDestination_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
struct AGameCrowdDestination_ReachedByAgent_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
	struct FVector                                     TestPosition;                                             // (CPF_Parm)
	bool                                               bTestExactly;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
struct AGameCrowdDestinationQueuePoint_HasCustomer_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
struct AGameCrowdDestinationQueuePoint_ClearQueue_Params
{
	class AGameCrowdAgent*                             OldCustomer;                                              // (CPF_Parm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
struct AGameCrowdDestinationQueuePoint_AddCustomer_Params
{
	class AGameCrowdAgent*                             NewCustomer;                                              // (CPF_Parm)
	class AGameCrowdInteractionPoint*                  PreviousPosition;                                         // (CPF_Parm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
struct AGameCrowdDestinationQueuePoint_ActuallyAdvance_Params
{
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
struct AGameCrowdDestinationQueuePoint_AdvanceCustomerTo_Params
{
	class AGameCrowdInteractionPoint*                  FrontPosition;                                            // (CPF_Parm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
struct AGameCrowdDestinationQueuePoint_ReachedDestination_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
struct AGameCrowdDestinationQueuePoint_HasSpace_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
struct AGameCrowdDestinationQueuePoint_QueueReachedBy_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
	struct FVector                                     TestPosition;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
struct AGameCrowdPopulationManager_CreateNewAgent_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class AGameCrowdDestination*                       SpawnLoc;                                                 // (CPF_Parm)
	class AGameCrowdAgent*                             AgentTemplate;                                            // (CPF_Parm)
	class UGameCrowdGroup*                             NewGroup;                                                 // (CPF_Parm)
	class AGameCrowdAgent*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.Warmup
struct AGameCrowdPopulationManager_Warmup_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                WarmupNum;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
struct AGameCrowdPopulationManager_SpawnAgent_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class AGameCrowdDestination*                       SpawnLoc;                                                 // (CPF_Parm)
	class AGameCrowdAgent*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
struct AGameCrowdPopulationManager_SpawnAgentByIdx_Params
{
	int                                                SpawnerIdx;                                               // (CPF_Parm)
	class AGameCrowdDestination*                       SpawnLoc;                                                 // (CPF_Parm)
	class AGameCrowdAgent*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
struct AGameCrowdPopulationManager_ValidateSpawnAt_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class AGameCrowdDestination*                       Candidate;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
struct AGameCrowdPopulationManager_AddPrioritizedSpawnPoint_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class AGameCrowdDestination*                       GCD;                                                      // (CPF_Parm)
};

// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
struct AGameCrowdPopulationManager_AnalyzeSpawnPoints_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                StartIndex;                                               // (CPF_Parm)
	int                                                NumToUpdate;                                              // (CPF_Parm)
};

// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
struct AGameCrowdPopulationManager_PrioritizeSpawnPoints_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
struct AGameCrowdPopulationManager_StaticGetPlayerInfo_Params
{
	TArray<struct FCrowdSpawnerPlayerInfo>             out_PlayerInfo;                                           // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
struct AGameCrowdPopulationManager_GetPlayerInfo_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
struct AGameCrowdPopulationManager_PickSpawnPoint_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class AGameCrowdDestination*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
struct AGameCrowdPopulationManager_UpdateSpawner_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	float                                              DeltaTime;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
struct AGameCrowdPopulationManager_UpdateAllSpawners_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GameCrowdPopulationManager.Tick
struct AGameCrowdPopulationManager_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
struct AGameCrowdPopulationManager_ShouldDebugDestinations_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
struct AGameCrowdPopulationManager_IsSpawningActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
struct AGameCrowdPopulationManager_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (CPF_Parm)
	float                                              out_YL;                                                   // (CPF_Parm, CPF_OutParm)
	float                                              out_YPos;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
struct AGameCrowdPopulationManager_AgentDestroyed_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
struct AGameCrowdPopulationManager_FlushAllAgents_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.FlushAgents
struct AGameCrowdPopulationManager_FlushAgents_Params
{
	struct FCrowdSpawnInfoItem                         Item;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
struct AGameCrowdPopulationManager_CreateSpawner_Params
{
	class USeqAct_GameCrowdPopulationManagerToggle*    inAction;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
struct AGameCrowdPopulationManager_SetCrowdInfoVolume_Params
{
	class AGameCrowdInfoVolume*                        Vol;                                                      // (CPF_Parm)
};

// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
struct AGameCrowdPopulationManager_RemoveSpawnPoint_Params
{
	class AGameCrowdDestination*                       GCD;                                                      // (CPF_Parm)
};

// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
struct AGameCrowdPopulationManager_AddSpawnPoint_Params
{
	class AGameCrowdDestination*                       GCD;                                                      // (CPF_Parm)
};

// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
struct AGameCrowdPopulationManager_NotifyPathChanged_Params
{
};

// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
struct AGameCrowdPopulationManager_PostBeginPlay_Params
{
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
struct AGameCrowdReplicationActor_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (CPF_Parm)
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
struct AGameExplosionActor_ChooseCameraShake_Params
{
	struct FVector                                     Epicenter;                                                // (CPF_Parm)
	class APlayerController*                           PC;                                                       // (CPF_Parm)
	class UCameraShake*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
struct AGameExplosionActor_SpawnCameraLensEffects_Params
{
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
struct AGameExplosionActor_DoExplosionCameraEffects_Params
{
};

// Function GameFramework.GameExplosionActor.DrawDebug
struct AGameExplosionActor_DrawDebug_Params
{
};

// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
struct AGameExplosionActor_DelayedExplosionDamage_Params
{
};

// Function GameFramework.GameExplosionActor.Explode
struct AGameExplosionActor_Explode_Params
{
	class UGameExplosion*                              NewExplosionTemplate;                                     // (CPF_Parm)
	struct FVector                                     Direction;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
struct AGameExplosionActor_SpawnExplosionFogVolume_Params
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
struct AGameExplosionActor_SpawnExplosionDecal_Params
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
struct AGameExplosionActor_SpawnExplosionParticleSystem_Params
{
	class UParticleSystem*                             Template;                                                 // (CPF_Parm)
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
struct AGameExplosionActor_UpdateExplosionTemplateWithPerMaterialFX_Params
{
	class UPhysicalMaterial*                           PhysMaterial;                                             // (CPF_Parm)
};

// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
struct AGameExplosionActor_SpecialCringeEffectsFor_Params
{
	class AActor*                                      Victim;                                                   // (CPF_Parm)
	float                                              VictimDist;                                               // (CPF_Parm)
};

// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
struct AGameExplosionActor_SpecialPawnEffectsFor_Params
{
	class AGamePawn*                                   VictimPawn;                                               // (CPF_Parm)
	float                                              VictimDist;                                               // (CPF_Parm)
};

// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
struct AGameExplosionActor_GetEffectCheckRadius_Params
{
	bool                                               bCauseDamage;                                             // (CPF_Parm)
	bool                                               bCauseFractureEffects;                                    // (CPF_Parm)
	bool                                               bCauseEffects;                                            // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
struct AGameExplosionActor_DoExplosionDamage_Params
{
	bool                                               bCauseDamage;                                             // (CPF_Parm)
	bool                                               bCauseEffects;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
struct AGameExplosionActor_BoxDistanceToPoint_Params
{
	struct FVector                                     Start;                                                    // (CPF_Parm)
	struct FBox                                        BBox;                                                     // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
struct AGameExplosionActor_IsBehindExplosion_Params
{
	class AActor*                                      A;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
struct AGameExplosionActor_DoFullDamageToActor_Params
{
	class AActor*                                      Victim;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
struct AGameExplosionActor_GetPhysicalMaterial_Params
{
	class UPhysicalMaterial*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
struct AGameExplosionActor_PreBeginPlay_Params
{
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
struct AGamePawn_ReattachMeshWithoutBeingSeen_Params
{
};

// Function GameFramework.GamePawn.ReattachMesh
struct AGamePawn_ReattachMesh_Params
{
};

// Function GameFramework.GamePawn.UpdateShadowSettings
struct AGamePawn_UpdateShadowSettings_Params
{
	bool                                               bInWantShadow;                                            // (CPF_Parm)
};

// Function GameFramework.DebugCameraController.ConsoleCommand
struct ADebugCameraController_ConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWriteToLog;                                              // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
struct ADebugCameraController_ShowDebugSelectedInfo_Params
{
};

// Function GameFramework.DebugCameraController.NativeInputKey
struct ADebugCameraController_NativeInputKey_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FName                                       Key;                                                      // (CPF_Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (CPF_Parm)
	float                                              AmountDepressed;                                          // (CPF_OptionalParm, CPF_Parm)
	bool                                               bGamepad;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.DebugCameraController.InitDebugInputSystem
struct ADebugCameraController_InitDebugInputSystem_Params
{
};

// Function GameFramework.DebugCameraController.DisableDebugCamera
struct ADebugCameraController_DisableDebugCamera_Params
{
};

// Function GameFramework.DebugCameraController.NormalSpeed
struct ADebugCameraController_NormalSpeed_Params
{
};

// Function GameFramework.DebugCameraController.MoreSpeed
struct ADebugCameraController_MoreSpeed_Params
{
};

// Function GameFramework.DebugCameraController.SetFreezeRendering
struct ADebugCameraController_SetFreezeRendering_Params
{
};

// Function GameFramework.DebugCameraController.OnDeactivate
struct ADebugCameraController_OnDeactivate_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
};

// Function GameFramework.DebugCameraController.OnActivate
struct ADebugCameraController_OnActivate_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
};

// Function GameFramework.DebugCameraController.PostBeginPlay
struct ADebugCameraController_PostBeginPlay_Params
{
};

// Function GameFramework.DebugCameraController.Unselect
struct ADebugCameraController_Unselect_Params
{
};

// Function GameFramework.DebugCameraController.SecondarySelect
struct ADebugCameraController_SecondarySelect_Params
{
	struct FVector                                     HitLoc;                                                   // (CPF_Parm)
	struct FVector                                     HitNormal;                                                // (CPF_Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (CPF_Parm)
};

// Function GameFramework.DebugCameraController.PrimarySelect
struct ADebugCameraController_PrimarySelect_Params
{
	struct FVector                                     HitLoc;                                                   // (CPF_Parm)
	struct FVector                                     HitNormal;                                                // (CPF_Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (CPF_Parm)
};

// Function GameFramework.MobileInputZone.AddKismetEventHandler
struct UMobileInputZone_AddKismetEventHandler_Params
{
	class USeqEvent_MobileZoneBase*                    NewHandler;                                               // (CPF_Parm)
};

// Function GameFramework.MobileInputZone.OnPostDrawZone
struct UMobileInputZone_OnPostDrawZone_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
};

// Function GameFramework.MobileInputZone.OnPreDrawZone
struct UMobileInputZone_OnPreDrawZone_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileInputZone.OnProcessSlide
struct UMobileInputZone_OnProcessSlide_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	int                                                SlideValue;                                               // (CPF_Parm)
	struct FVector2D                                   ViewportSize;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
struct UMobileInputZone_OnDoubleTapDelegate_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	struct FVector2D                                   TouchLocation;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileInputZone.OnTapDelegate
struct UMobileInputZone_OnTapDelegate_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	struct FVector2D                                   TouchLocation;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileInputZone.OnProcessInputDelegate
struct UMobileInputZone_OnProcessInputDelegate_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	int                                                Handle;                                                   // (CPF_Parm)
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	struct FVector2D                                   TouchLocation;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileInputZone.DeactivateZone
struct UMobileInputZone_DeactivateZone_Params
{
};

// Function GameFramework.MobileInputZone.ActivateZone
struct UMobileInputZone_ActivateZone_Params
{
};

// Function GameFramework.MobileHUD.RenderKismetHud
struct AMobileHUD_RenderKismetHud_Params
{
};

// Function GameFramework.MobileHUD.AddKismetRenderEvent
struct AMobileHUD_AddKismetRenderEvent_Params
{
	class USeqEvent_HudRender*                         NewEvent;                                                 // (CPF_Parm)
};

// Function GameFramework.MobileHUD.RefreshKismetLinks
struct AMobileHUD_RefreshKismetLinks_Params
{
};

// Function GameFramework.MobileHUD.DrawMobileZone_Slider
struct AMobileHUD_DrawMobileZone_Slider_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
};

// Function GameFramework.MobileHUD.DrawMobileTilt
struct AMobileHUD_DrawMobileTilt_Params
{
	class UMobilePlayerInput*                          MobileInput;                                              // (CPF_Parm)
};

// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
struct AMobileHUD_DrawMobileZone_Trackball_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
};

// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
struct AMobileHUD_DrawMobileZone_Joystick_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
};

// Function GameFramework.MobileHUD.DrawMobileZone_Button
struct AMobileHUD_DrawMobileZone_Button_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
};

// Function GameFramework.MobileHUD.DrawInputZoneOverlays
struct AMobileHUD_DrawInputZoneOverlays_Params
{
};

// Function GameFramework.MobileHUD.RenderMobileMenu
struct AMobileHUD_RenderMobileMenu_Params
{
};

// Function GameFramework.MobileHUD.ShowMobileHud
struct AMobileHUD_ShowMobileHud_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileHUD.DrawMobileDebugString
struct AMobileHUD_DrawMobileDebugString_Params
{
	float                                              XPos;                                                     // (CPF_Parm)
	float                                              YPos;                                                     // (CPF_Parm)
	struct FString                                     Str;                                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GameFramework.MobileHUD.PostRender
struct AMobileHUD_PostRender_Params
{
};

// Function GameFramework.MobileHUD.PostBeginPlay
struct AMobileHUD_PostBeginPlay_Params
{
};

// Function GameFramework.MobileMenuObject.RenderObject
struct UMobileMenuObject_RenderObject_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuObject.SetCanvasPos
struct UMobileMenuObject_SetCanvasPos_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              OffsetX;                                                  // (CPF_OptionalParm, CPF_Parm)
	float                                              OffsetY;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.MobileMenuObject.InitMenuObject
struct UMobileMenuObject_InitMenuObject_Params
{
	class UMobilePlayerInput*                          PlayerInput;                                              // (CPF_Parm)
	class UMobileMenuScene*                            Scene;                                                    // (CPF_Parm)
	int                                                ScreenWidth;                                              // (CPF_Parm)
	int                                                ScreenHeight;                                             // (CPF_Parm)
	bool                                               bIsFirstInitialization;                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuObject.GetRealPosition
struct UMobileMenuObject_GetRealPosition_Params
{
	float                                              PosX;                                                     // (CPF_Parm, CPF_OutParm)
	float                                              PosY;                                                     // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.MobileMenuObject.OnTouch
struct UMobileMenuObject_OnTouch_Params
{
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	float                                              TouchX;                                                   // (CPF_Parm)
	float                                              TouchY;                                                   // (CPF_Parm)
	class UMobileMenuObject*                           ObjectOver;                                               // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuImage.RenderObject
struct UMobileMenuImage_RenderObject_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuScene.MobileMenuCommand
struct UMobileMenuScene_MobileMenuCommand_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuScene.FindMenuObject
struct UMobileMenuScene_FindMenuObject_Params
{
	struct FString                                     Tag;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	class UMobileMenuObject*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuScene.CleanUpScene
struct UMobileMenuScene_CleanUpScene_Params
{
};

// Function GameFramework.MobileMenuScene.Closed
struct UMobileMenuScene_Closed_Params
{
};

// Function GameFramework.MobileMenuScene.Closing
struct UMobileMenuScene_Closing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuScene.MadeTopMenu
struct UMobileMenuScene_MadeTopMenu_Params
{
};

// Function GameFramework.MobileMenuScene.Opened
struct UMobileMenuScene_Opened_Params
{
	struct FString                                     Mode;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GameFramework.MobileMenuScene.OnSceneTouch
struct UMobileMenuScene_OnSceneTouch_Params
{
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	float                                              TouchX;                                                   // (CPF_Parm)
	float                                              TouchY;                                                   // (CPF_Parm)
	bool                                               bInside;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuScene.OnTouch
struct UMobileMenuScene_OnTouch_Params
{
	class UMobileMenuObject*                           Sender;                                                   // (CPF_Parm)
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	float                                              TouchX;                                                   // (CPF_Parm)
	float                                              TouchY;                                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuScene.PreRenderMenuObject
struct UMobileMenuScene_PreRenderMenuObject_Params
{
	class UMobileMenuObject*                           MenuObject;                                               // (CPF_Parm)
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              RenderDelta;                                              // (CPF_Parm)
};

// Function GameFramework.MobileMenuScene.RenderScene
struct UMobileMenuScene_RenderScene_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              RenderDelta;                                              // (CPF_Parm)
};

// Function GameFramework.MobileMenuScene.GetSceneFont
struct UMobileMenuScene_GetSceneFont_Params
{
	class UFont*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuScene.InitMenuScene
struct UMobileMenuScene_InitMenuScene_Params
{
	class UMobilePlayerInput*                          PlayerInput;                                              // (CPF_Parm)
	int                                                ScreenWidth;                                              // (CPF_Parm)
	int                                                ScreenHeight;                                             // (CPF_Parm)
	bool                                               bIsFirstInitialization;                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleY
struct UMobileMenuScene_GetGlobalScaleY_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuScene.GetGlobalScaleX
struct UMobileMenuScene_GetGlobalScaleX_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
struct UMobilePlayerInput_OpenMobileMenuMode_Params
{
	struct FString                                     MenuClassName;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Mode;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class UMobileMenuScene*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobilePlayerInput.OpenMobileMenu
struct UMobilePlayerInput_OpenMobileMenu_Params
{
	struct FString                                     MenuClassName;                                            // (CPF_Parm, CPF_NeedCtorLink)
	class UMobileMenuScene*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobilePlayerInput.MobileMenuCommand
struct UMobilePlayerInput_MobileMenuCommand_Params
{
	struct FString                                     MenuCommand;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GameFramework.MobilePlayerInput.SceneRenderToggle
struct UMobilePlayerInput_SceneRenderToggle_Params
{
};

// Function GameFramework.MobilePlayerInput.PreClientTravel
struct UMobilePlayerInput_PreClientTravel_Params
{
	struct FString                                     PendingURL;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<ETravelType>                           TravelType;                                               // (CPF_Parm)
	bool                                               bIsSeamlessTravel;                                        // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.RenderMenus
struct UMobilePlayerInput_RenderMenus_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              RenderDelta;                                              // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.CloseAllMenus
struct UMobilePlayerInput_CloseAllMenus_Params
{
};

// Function GameFramework.MobilePlayerInput.CloseMenuScene
struct UMobilePlayerInput_CloseMenuScene_Params
{
	class UMobileMenuScene*                            SceneToClose;                                             // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.OpenMenuScene
struct UMobilePlayerInput_OpenMenuScene_Params
{
	class UClass*                                      SceneClass;                                               // (CPF_Parm)
	struct FString                                     Mode;                                                     // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	class UMobileMenuScene*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
struct UMobilePlayerInput_SetMobileInputConfig_Params
{
	struct FString                                     GroupName;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GameFramework.MobilePlayerInput.ActivateInputGroup
struct UMobilePlayerInput_ActivateInputGroup_Params
{
	struct FString                                     GroupName;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function GameFramework.MobilePlayerInput.GetCurrentZones
struct UMobilePlayerInput_GetCurrentZones_Params
{
	TArray<class UMobileInputZone*>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function GameFramework.MobilePlayerInput.HasZones
struct UMobilePlayerInput_HasZones_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobilePlayerInput.FindorAddZone
struct UMobilePlayerInput_FindorAddZone_Params
{
	struct FString                                     ZoneName;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UMobileInputZone*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobilePlayerInput.FindZone
struct UMobilePlayerInput_FindZone_Params
{
	struct FString                                     ZoneName;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UMobileInputZone*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
struct UMobilePlayerInput_AddKismetRawInputEventHandler_Params
{
	class USeqEvent_MobileRawInput*                    NewHandler;                                               // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
struct UMobilePlayerInput_AddKismetEventHandler_Params
{
	class USeqEvent_MobileBase*                        NewHandler;                                               // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
struct UMobilePlayerInput_RefreshKismetLinks_Params
{
};

// Function GameFramework.MobilePlayerInput.SwapZoneOwners
struct UMobilePlayerInput_SwapZoneOwners_Params
{
};

// Function GameFramework.MobilePlayerInput.InitializeInputZones
struct UMobilePlayerInput_InitializeInputZones_Params
{
};

// Function GameFramework.MobilePlayerInput.InitTouchSystem
struct UMobilePlayerInput_InitTouchSystem_Params
{
};

// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
struct UMobilePlayerInput_ClientInitInputSystem_Params
{
};

// Function GameFramework.MobilePlayerInput.InitInputSystem
struct UMobilePlayerInput_InitInputSystem_Params
{
};

// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
struct UMobilePlayerInput_ProcessWorldTouch_Params
{
	class UMobileInputZone*                            Zone;                                                     // (CPF_Parm)
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	struct FVector2D                                   TouchLocation;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobilePlayerInput.SendInputAxis
struct UMobilePlayerInput_SendInputAxis_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Delta;                                                    // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.SendInputKey
struct UMobilePlayerInput_SendInputKey_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (CPF_Parm)
	float                                              AmountDepressed;                                          // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
struct UMobilePlayerInput_ConditionalUpdateInputZones_Params
{
	int                                                NewViewportX;                                             // (CPF_Parm)
	int                                                NewViewportY;                                             // (CPF_Parm)
	int                                                NewViewportSizeX;                                         // (CPF_Parm)
	int                                                NewViewportSizeY;                                         // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
struct UMobilePlayerInput_NativeInitializeInputZones_Params
{
	bool                                               bIsFirstInitialize;                                       // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
struct UMobilePlayerInput_NativeInitializeInputSystem_Params
{
};

// Function GameFramework.MobilePlayerInput.OnInputTouch
struct UMobilePlayerInput_OnInputTouch_Params
{
	int                                                Handle;                                                   // (CPF_Parm)
	TEnumAsByte<ETouchType>                            Type;                                                     // (CPF_Parm)
	struct FVector2D                                   TouchLocation;                                            // (CPF_Parm)
	float                                              DeviceTimestamp;                                          // (CPF_Parm)
	int                                                TouchpadIndex;                                            // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.OnPreviewTouch
struct UMobilePlayerInput_OnPreviewTouch_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm)
	int                                                TouchpadIndex;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
struct UMobilePlayerInput_OnTouchNotHandledInMenu_Params
{
};

// Function GameFramework.MobilePlayerInput.PlayerInput
struct UMobilePlayerInput_PlayerInput_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobilePlayerInput.CancelMobileInput
struct UMobilePlayerInput_CancelMobileInput_Params
{
};

// Function GameFramework.MobilePlayerInput.ProcessMobileInput
struct UMobilePlayerInput_ProcessMobileInput_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
struct UNavMeshGoal_OutOfViewFrom_Recycle_Params
{
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
struct UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params
{
	class UNavigationHandle*                           NavHandle;                                                // (CPF_Parm)
	struct FVector                                     InOutOfViewLocation;                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
struct UNavMeshGoal_OutOfViewFrom_RecycleNative_Params
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params
{
	class UNavigationHandle*                           NavHandle;                                                // (CPF_Parm)
	struct FVector                                     InLocation;                                               // (CPF_Const, CPF_Parm)
	struct FRotator                                    InRotation;                                               // (CPF_Const, CPF_Parm)
	float                                              InDistanceToCheck;                                        // (CPF_Const, CPF_Parm)
	TArray<struct FVector>                             InLocationsToCheck;                                       // (CPF_Const, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.SecondaryViewportClient.PostRender
struct USecondaryViewportClient_PostRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
};

// Function GameFramework.MobileSecondaryViewportClient.PostRender
struct UMobileSecondaryViewportClient_PostRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
struct USeqAct_GameCrowdPopulationManagerToggle_AgentDestroyed_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
struct USeqAct_GameCrowdPopulationManagerToggle_GetMaxSpawnDist_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
struct USeqAct_GameCrowdPopulationManagerToggle_FillCrowdSpawnInfoItem_Params
{
	struct FCrowdSpawnInfoItem                         out_Item;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class AGameCrowdPopulationManager*                 PopMgr;                                                   // (CPF_Parm)
};

// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
struct USeqAct_GameCrowdPopulationManagerToggle_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
struct USeqAct_GameCrowdSpawner_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
struct USeqAct_MobileSaveLoadValue_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
struct USeqAct_PlayAgentAnimation_SetCurrentAnimationActionFor_Params
{
	class AGameCrowdAgentSkeletal*                     Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
struct USeqAct_PlayAgentAnimation_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.SeqEvent_HudRender.Render
struct USeqEvent_HudRender_Render_Params
{
	class UCanvas*                                     TargetCanvas;                                             // (CPF_Parm)
	class AHUD*                                        TargetHud;                                                // (CPF_Parm)
};

// Function GameFramework.SeqEvent_HudRender.RegisterEvent
struct USeqEvent_HudRender_RegisterEvent_Params
{
};

// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
struct USeqEvent_MobileBase_AddToMobileInput_Params
{
	class UMobilePlayerInput*                          MPI;                                                      // (CPF_Parm)
};

// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
struct USeqEvent_MobileBase_RegisterEvent_Params
{
};

// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
struct USeqEvent_MobileMotion_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
struct USeqEvent_MobileZoneBase_AddToMobileInput_Params
{
	class UMobilePlayerInput*                          MPI;                                                      // (CPF_Parm)
};

// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
struct USeqEvent_MobileRawInput_RegisterEvent_Params
{
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
struct UGameCameraBase_ModifyPostProcessSettings_Params
{
	struct FPostProcessSettings                        PP;                                                       // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameCameraBase.Init
struct UGameCameraBase_Init_Params
{
};

// Function GameFramework.GameCameraBase.DisplayDebug
struct UGameCameraBase_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (CPF_Parm)
	float                                              out_YL;                                                   // (CPF_Parm, CPF_OutParm)
	float                                              out_YPos;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
struct UGameCameraBase_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	class AActor*                                      ViewTarget;                                               // (CPF_Parm)
	struct FRotator                                    out_ViewRotation;                                         // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameCameraBase.UpdateCamera
struct UGameCameraBase_UpdateCamera_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
	class AGamePlayerCamera*                           CameraActor;                                              // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FTViewTarget                                OutVT;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameCameraBase.ResetInterpolation
struct UGameCameraBase_ResetInterpolation_Params
{
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
struct UGameCameraBase_OnBecomeInActive_Params
{
	class UGameCameraBase*                             NewCamera;                                                // (CPF_Parm)
};

// Function GameFramework.GameCameraBase.OnBecomeActive
struct UGameCameraBase_OnBecomeActive_Params
{
	class UGameCameraBase*                             OldCamera;                                                // (CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
struct UGameThirdPersonCamera_ResetInterpolation_Params
{
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
struct UGameThirdPersonCamera_ModifyPostProcessSettings_Params
{
	struct FPostProcessSettings                        PP;                                                       // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
struct UGameThirdPersonCamera_OnBecomeActive_Params
{
	class UGameCameraBase*                             OldCamera;                                                // (CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
struct UGameThirdPersonCamera_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	class AActor*                                      ViewTarget;                                               // (CPF_Parm)
	struct FRotator                                    out_ViewRotation;                                         // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
struct UGameThirdPersonCamera_UpdateCameraMode_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
struct UGameThirdPersonCamera_FindBestCameraMode_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
	class UGameThirdPersonCameraMode*                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
struct UGameThirdPersonCamera_AdjustFocusPointInterpolation_Params
{
	struct FRotator                                    Delta;                                                    // (CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
struct UGameThirdPersonCamera_GetActualFocusLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
struct UGameThirdPersonCamera_UpdateFocusPoint_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
struct UGameThirdPersonCamera_ClearFocusPoint_Params
{
	bool                                               bLeaveCameraRotation;                                     // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
struct UGameThirdPersonCamera_GetFocusActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
struct UGameThirdPersonCamera_SetFocusOnActor_Params
{
	class AActor*                                      FocusActor;                                               // (CPF_Parm)
	struct FName                                       FocusBoneName;                                            // (CPF_Parm)
	struct FVector2D                                   InterpSpeedRange;                                         // (CPF_Parm)
	struct FVector2D                                   InFocusFOV;                                               // (CPF_Parm)
	float                                              CameraFOV;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               bAlwaysFocus;                                             // (CPF_OptionalParm, CPF_Parm)
	bool                                               bAdjustCamera;                                            // (CPF_OptionalParm, CPF_Parm)
	bool                                               bIgnoreTrace;                                             // (CPF_OptionalParm, CPF_Parm)
	float                                              FocusPitchOffsetDeg;                                      // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
struct UGameThirdPersonCamera_SetFocusOnLoc_Params
{
	struct FVector                                     FocusWorldLoc;                                            // (CPF_Parm)
	struct FVector2D                                   InterpSpeedRange;                                         // (CPF_Parm)
	struct FVector2D                                   InFocusFOV;                                               // (CPF_Parm)
	float                                              CameraFOV;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               bAlwaysFocus;                                             // (CPF_OptionalParm, CPF_Parm)
	bool                                               bAdjustCamera;                                            // (CPF_OptionalParm, CPF_Parm)
	bool                                               bIgnoreTrace;                                             // (CPF_OptionalParm, CPF_Parm)
	float                                              FocusPitchOffsetDeg;                                      // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
struct UGameThirdPersonCamera_AdjustTurn_Params
{
	int                                                AngleOffset;                                              // (CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
struct UGameThirdPersonCamera_EndTurn_Params
{
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
struct UGameThirdPersonCamera_BeginTurn_Params
{
	int                                                StartAngle;                                               // (CPF_Parm)
	int                                                EndAngle;                                                 // (CPF_Parm)
	float                                              TimeSec;                                                  // (CPF_Parm)
	float                                              DelaySec;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               bAlignTargetWhenFinished;                                 // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
struct UGameThirdPersonCamera_PlayerUpdateCamera_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
	class AGamePlayerCamera*                           CameraActor;                                              // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FTViewTarget                                OutVT;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
struct UGameThirdPersonCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
	class AGamePlayerCamera*                           CameraActor;                                              // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FTViewTarget                                OutVT;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
struct UGameThirdPersonCamera_GetDesiredFOV_Params
{
	class APawn*                                       ViewedPawn;                                               // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.Init
struct UGameThirdPersonCamera_Init_Params
{
};

// Function GameFramework.GameThirdPersonCamera.Reset
struct UGameThirdPersonCamera_Reset_Params
{
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
struct UGameThirdPersonCamera_CreateCameraMode_Params
{
	class UClass*                                      ModeClass;                                                // (CPF_Parm)
	class UGameThirdPersonCameraMode*                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
struct AGamePlayerCamera_AdjustFOVForViewport_Params
{
	float                                              inHorizFOV;                                               // (CPF_Parm)
	class APawn*                                       CameraTargetPawn;                                         // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
struct AGamePlayerCamera_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FRotator                                    out_ViewRotation;                                         // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
struct AGamePlayerCamera_ResetInterpolation_Params
{
};

// Function GameFramework.GamePlayerCamera.SetColorScale
struct AGamePlayerCamera_SetColorScale_Params
{
	struct FVector                                     NewColorScale;                                            // (CPF_Parm)
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
struct AGamePlayerCamera_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (CPF_Parm)
	float                                              out_YL;                                                   // (CPF_Parm, CPF_OutParm)
	float                                              out_YPos;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
struct AGamePlayerCamera_UpdateCameraLensEffects_Params
{
	struct FTViewTarget                                OutVT;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
struct AGamePlayerCamera_UpdateViewTarget_Params
{
	struct FTViewTarget                                OutVT;                                                    // (CPF_Parm, CPF_OutParm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
struct AGamePlayerCamera_ShouldConstrainAspectRatio_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
struct AGamePlayerCamera_FindBestCameraType_Params
{
	class AActor*                                      CameraTarget;                                             // (CPF_Parm)
	class UGameCameraBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GamePlayerCamera.Reset
struct AGamePlayerCamera_Reset_Params
{
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
struct AGamePlayerCamera_PostBeginPlay_Params
{
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
struct AGamePlayerCamera_CacheLastTargetBaseInfo_Params
{
	class AActor*                                      TargetBase;                                               // (CPF_Parm)
};

// Function GameFramework.GamePlayerCamera.CreateCamera
struct AGamePlayerCamera_CreateCamera_Params
{
	class UClass*                                      CameraClass;                                              // (CPF_Parm)
	class UGameCameraBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
struct UGameThirdPersonCameraMode_SetViewOffset_Params
{
	struct FViewOffsetData                             NewViewOffset;                                            // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
struct UGameThirdPersonCameraMode_ModifyPostProcessSettings_Params
{
	struct FPostProcessSettings                        PP;                                                       // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
struct UGameThirdPersonCameraMode_UpdatePostProcess_Params
{
	struct FTViewTarget                                VT;                                                       // (CPF_Const, CPF_Parm, CPF_OutParm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
struct UGameThirdPersonCameraMode_DOFTrace_Params
{
	class AActor*                                      TraceOwner;                                               // (CPF_Parm)
	struct FVector                                     StartTrace;                                               // (CPF_Parm)
	struct FVector                                     EndTrace;                                                 // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
struct UGameThirdPersonCameraMode_GetDOFFocusLoc_Params
{
	class AActor*                                      TraceOwner;                                               // (CPF_Parm)
	struct FVector                                     StartTrace;                                               // (CPF_Parm)
	struct FVector                                     EndTrace;                                                 // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
struct UGameThirdPersonCameraMode_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	class AActor*                                      ViewTarget;                                               // (CPF_Parm)
	struct FRotator                                    out_ViewRotation;                                         // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    out_DeltaRot;                                             // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
struct UGameThirdPersonCameraMode_SetFocusPoint_Params
{
	class APawn*                                       ViewedPawn;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
struct UGameThirdPersonCameraMode_GetCameraWorstCaseLoc_Params
{
	class APawn*                                       TargetPawn;                                               // (CPF_Parm)
	struct FTViewTarget                                CurrentViewTarget;                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
struct UGameThirdPersonCameraMode_GetDesiredFOV_Params
{
	class APawn*                                       ViewedPawn;                                               // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
struct UGameThirdPersonCameraMode_AdjustViewOffset_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
	struct FVector                                     Offset;                                                   // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
struct UGameThirdPersonCameraMode_OnBecomeInActive_Params
{
	class APawn*                                       TargetPawn;                                               // (CPF_Parm)
	class UGameThirdPersonCameraMode*                  NewMode;                                                  // (CPF_Parm)
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
struct UGameThirdPersonCameraMode_OnBecomeActive_Params
{
	class APawn*                                       TargetPawn;                                               // (CPF_Parm)
	class UGameThirdPersonCameraMode*                  PrevMode;                                                 // (CPF_Parm)
};

// Function GameFramework.GameThirdPersonCameraMode.Init
struct UGameThirdPersonCameraMode_Init_Params
{
};

// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
struct UGameSpecialMove_RelativeToWorldOffset_Params
{
	struct FRotator                                    InRotation;                                               // (CPF_Parm)
	struct FVector                                     RelativeSpaceOffset;                                      // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
struct UGameSpecialMove_WorldToRelativeOffset_Params
{
	struct FRotator                                    InRotation;                                               // (CPF_Parm)
	struct FVector                                     WorldSpaceOffset;                                         // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameSpecialMove.ForcePawnRotation
struct UGameSpecialMove_ForcePawnRotation_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
	struct FRotator                                    NewRotation;                                              // (CPF_Parm)
};

// Function GameFramework.GameSpecialMove.MessageEvent
struct UGameSpecialMove_MessageEvent_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm)
	class UObject*                                     Sender;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
struct UGameSpecialMove_ResetFacePreciseRotation_Params
{
};

// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
struct UGameSpecialMove_ReachedPrecisePosition_Params
{
};

// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
struct UGameSpecialMove_SetFacePreciseRotation_Params
{
	struct FRotator                                    RotationToFace;                                           // (CPF_Parm)
	float                                              InterpolationTime;                                        // (CPF_Parm)
};

// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
struct UGameSpecialMove_SetReachPreciseDestination_Params
{
	struct FVector                                     DestinationToReach;                                       // (CPF_Parm)
	bool                                               bCancel;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.GameSpecialMove.ShouldReplicate
struct UGameSpecialMove_ShouldReplicate_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
struct UGameSpecialMove_SpecialMoveFlagsUpdated_Params
{
};

// Function GameFramework.GameSpecialMove.Tick
struct UGameSpecialMove_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GameSpecialMove.SpecialMoveEnded
struct UGameSpecialMove_SpecialMoveEnded_Params
{
	struct FName                                       PrevMove;                                                 // (CPF_Parm)
	struct FName                                       NextMove;                                                 // (CPF_Parm)
};

// Function GameFramework.GameSpecialMove.SpecialMoveStarted
struct UGameSpecialMove_SpecialMoveStarted_Params
{
	bool                                               bForced;                                                  // (CPF_Parm)
	struct FName                                       PrevMove;                                                 // (CPF_Parm)
};

// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
struct UGameSpecialMove_InternalCanDoSpecialMove_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameSpecialMove.CanDoSpecialMove
struct UGameSpecialMove_CanDoSpecialMove_Params
{
	bool                                               bForceCheck;                                              // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
struct UGameSpecialMove_CanOverrideSpecialMove_Params
{
	struct FName                                       InMove;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
struct UGameSpecialMove_CanOverrideMoveWith_Params
{
	struct FName                                       NewMove;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameSpecialMove.CanChainMove
struct UGameSpecialMove_CanChainMove_Params
{
	struct FName                                       NextMove;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
struct UGameSpecialMove_ExtractSpecialMoveFlags_Params
{
	int                                                Flags;                                                    // (CPF_Parm)
};

// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
struct UGameSpecialMove_InitSpecialMoveFlags_Params
{
	int                                                out_Flags;                                                // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameSpecialMove.InitSpecialMove
struct UGameSpecialMove_InitSpecialMove_Params
{
	class AGamePawn*                                   inPawn;                                                   // (CPF_Parm)
	struct FName                                       InHandle;                                                 // (CPF_Parm)
};

// Function GameFramework.GameStateObject.Reset
struct UGameStateObject_Reset_Params
{
};

// Function GameFramework.GameStateObject.PreProcessStream
struct UGameStateObject_PreProcessStream_Params
{
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
struct UGameStatsAggregator_GetAggregateMappingIDs_Params
{
	int                                                EventID;                                                  // (CPF_Parm)
	int                                                AggregateID;                                              // (CPF_Parm, CPF_OutParm)
	int                                                TargetAggregateID;                                        // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameStatsAggregator.Reset
struct UGameStatsAggregator_Reset_Params
{
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
struct UGameStatsAggregator_PostProcessStream_Params
{
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
struct UGameStatsAggregator_PreProcessStream_Params
{
};

// Function GameFramework.DebugCameraHUD.PostRender
struct ADebugCameraHUD_PostRender_Params
{
};

// Function GameFramework.DebugCameraHUD.DisplayMaterials
struct ADebugCameraHUD_DisplayMaterials_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              DY;                                                       // (CPF_Parm)
	class UMeshComponent*                              MeshComp;                                                 // (CPF_Parm, CPF_EditInline)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.DebugCameraHUD.PostBeginPlay
struct ADebugCameraHUD_PostBeginPlay_Params
{
};

// Function GameFramework.DebugCameraInput.InputKey
struct UDebugCameraInput_InputKey_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FName                                       Key;                                                      // (CPF_Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (CPF_Parm)
	float                                              AmountDepressed;                                          // (CPF_OptionalParm, CPF_Parm)
	bool                                               bGamepad;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
struct UGameCrowdSpawnerInterface_GetMaxSpawnDist_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
struct UGameCrowdSpawnerInterface_AgentDestroyed_Params
{
	class AGameCrowdAgent*                             Agent;                                                    // (CPF_Parm)
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
struct UGameCrowdSpawnInterface_GetSpawnPosition_Params
{
	class USeqAct_GameCrowdSpawner*                    Spawner;                                                  // (CPF_Parm)
	struct FVector                                     SpawnPos;                                                 // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    SpawnRot;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
struct UGameAICmd_Hover_MoveToGoal_IsEnemyBasedOnInterpActor_Params
{
	class APawn*                                       InEnemy;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
struct UGameAICmd_Hover_MoveToGoal_HandlePathObstruction_Params
{
	class AActor*                                      BlockedBy;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
struct UGameAICmd_Hover_MoveToGoal_Pushed_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
struct UGameAICmd_Hover_MoveToGoal_MoveToGoal_Params
{
	class AGameAIController*                           AI;                                                       // (CPF_Parm)
	class AActor*                                      InGoal;                                                   // (CPF_Parm)
	float                                              InGoalDistance;                                           // (CPF_Parm)
	float                                              InHoverHeight;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
struct UGameAICmd_Hover_MoveToGoal_Mesh_DrawDebug_Params
{
	class AHUD*                                        H;                                                        // (CPF_Parm)
	struct FName                                       Category;                                                 // (CPF_Parm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
struct UGameAICmd_Hover_MoveToGoal_Mesh_IsEnemyBasedOnInterpActor_Params
{
	class APawn*                                       InEnemy;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
struct UGameAICmd_Hover_MoveToGoal_Mesh_ShouldUpdateBreadCrumbs_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
struct UGameAICmd_Hover_MoveToGoal_Mesh_HasReachedGoal_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
struct UGameAICmd_Hover_MoveToGoal_Mesh_ReEvaluatePath_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
struct UGameAICmd_Hover_MoveToGoal_Mesh_HandlePathObstruction_Params
{
	class AActor*                                      BlockedBy;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
struct UGameAICmd_Hover_MoveToGoal_Mesh_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
struct UGameAICmd_Hover_MoveToGoal_Mesh_Popped_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
struct UGameAICmd_Hover_MoveToGoal_Mesh_Pushed_Params
{
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
struct UGameAICmd_Hover_MoveToGoal_Mesh_HoverBackToMesh_Params
{
	class AGameAIController*                           AI;                                                       // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
struct UGameAICmd_Hover_MoveToGoal_Mesh_HoverToPoint_Params
{
	class AGameAIController*                           AI;                                                       // (CPF_Parm)
	struct FVector                                     InPoint;                                                  // (CPF_Parm)
	float                                              InGoalDistance;                                           // (CPF_Parm)
	float                                              InHoverHeight;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
struct UGameAICmd_Hover_MoveToGoal_Mesh_HoverToGoal_Params
{
	class AGameAIController*                           AI;                                                       // (CPF_Parm)
	class AActor*                                      InGoal;                                                   // (CPF_Parm)
	float                                              InGoalDistance;                                           // (CPF_Parm)
	float                                              InHoverHeight;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
struct UGameFixedCamera_OnBecomeActive_Params
{
	class UGameCameraBase*                             OldCamera;                                                // (CPF_Parm)
};

// Function GameFramework.GameFixedCamera.UpdateCamera
struct UGameFixedCamera_UpdateCamera_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
	class AGamePlayerCamera*                           CameraActor;                                              // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FTViewTarget                                OutVT;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
struct AGameKActorSpawnableEffect_StartScalingDown_Params
{
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
struct AGameKActorSpawnableEffect_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (CPF_Parm)
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
struct AGameKActorSpawnableEffect_PostBeginPlay_Params
{
};

// Function GameFramework.MobileDebugCameraController.SetupDebugZones
struct AMobileDebugCameraController_SetupDebugZones_Params
{
};

// Function GameFramework.MobileDebugCameraController.InitInputSystem
struct AMobileDebugCameraController_InitInputSystem_Params
{
};

// Function GameFramework.MobileDebugCameraController.OnDeactivate
struct AMobileDebugCameraController_OnDeactivate_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
};

// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
struct AMobileDebugCameraController_InitDebugInputSystem_Params
{
};

// Function GameFramework.MobileDebugCameraController.OnActivate
struct AMobileDebugCameraController_OnActivate_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
};

// Function GameFramework.MobileDebugCameraInput.InputKey
struct UMobileDebugCameraInput_InputKey_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FName                                       Key;                                                      // (CPF_Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (CPF_Parm)
	float                                              AmountDepressed;                                          // (CPF_OptionalParm, CPF_Parm)
	bool                                               bGamepad;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileDebugCameraHUD.PostRender
struct AMobileDebugCameraHUD_PostRender_Params
{
};

// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
struct AMobileDebugCameraHUD_DisplayMaterials_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              DY;                                                       // (CPF_Parm)
	class UMeshComponent*                              MeshComp;                                                 // (CPF_Parm, CPF_EditInline)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
struct AMobileDebugCameraHUD_PostBeginPlay_Params
{
};

// Function GameFramework.MobileMenuBar.UpdateItemViewports
struct UMobileMenuBar_UpdateItemViewports_Params
{
};

// Function GameFramework.MobileMenuBar.SetFirstItem
struct UMobileMenuBar_SetFirstItem_Params
{
	int                                                First;                                                    // (CPF_Parm)
};

// Function GameFramework.MobileMenuBar.RenderItem
struct UMobileMenuBar_RenderItem_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	int                                                ItemIndex;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuBar.RenderObject
struct UMobileMenuBar_RenderObject_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuBar.OnTouch
struct UMobileMenuBar_OnTouch_Params
{
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	float                                              TouchX;                                                   // (CPF_Parm)
	float                                              TouchY;                                                   // (CPF_Parm)
	class UMobileMenuObject*                           ObjectOver;                                               // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuBar.GetSelected
struct UMobileMenuBar_GetSelected_Params
{
	class UMobileMenuBarItem*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuBar.Num
struct UMobileMenuBar_Num_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuBar.AddItem
struct UMobileMenuBar_AddItem_Params
{
	class UMobileMenuBarItem*                          Item;                                                     // (CPF_Parm)
	int                                                Index;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.MobileMenuBar.InitMenuObject
struct UMobileMenuBar_InitMenuObject_Params
{
	class UMobilePlayerInput*                          PlayerInput;                                              // (CPF_Parm)
	class UMobileMenuScene*                            Scene;                                                    // (CPF_Parm)
	int                                                ScreenWidth;                                              // (CPF_Parm)
	int                                                ScreenHeight;                                             // (CPF_Parm)
	bool                                               bIsFirstInitialization;                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuBarItem.RenderItem
struct UMobileMenuBarItem_RenderItem_Params
{
	class UMobileMenuBar*                              Bar;                                                      // (CPF_Parm)
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuButton.RenderCaption
struct UMobileMenuButton_RenderCaption_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuButton.RenderObject
struct UMobileMenuButton_RenderObject_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuButton.InitMenuObject
struct UMobileMenuButton_InitMenuObject_Params
{
	class UMobilePlayerInput*                          PlayerInput;                                              // (CPF_Parm)
	class UMobileMenuScene*                            Scene;                                                    // (CPF_Parm)
	int                                                ScreenWidth;                                              // (CPF_Parm)
	int                                                ScreenHeight;                                             // (CPF_Parm)
	bool                                               bIsFirstInitialization;                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuElement.RenderElement
struct UMobileMenuElement_RenderElement_Params
{
	class UMobileMenuObject*                           Owner;                                                    // (CPF_Parm)
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	float                                              Opacity;                                                  // (CPF_Parm)
};

// Function GameFramework.MobileMenuElement.OnTouch
struct UMobileMenuElement_OnTouch_Params
{
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	float                                              TouchX;                                                   // (CPF_Parm)
	float                                              TouchY;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuGame.RestartPlayer
struct AMobileMenuGame_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuGame.StartMatch
struct AMobileMenuGame_StartMatch_Params
{
};

// Function GameFramework.MobileMenuGame.PostLogin
struct AMobileMenuGame_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuInventory.RenderDragItem
struct UMobileMenuInventory_RenderDragItem_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuInventory.RenderObject
struct UMobileMenuInventory_RenderObject_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuInventory.GetIndexOfItem
struct UMobileMenuInventory_GetIndexOfItem_Params
{
	class UMobileMenuElement*                          Item;                                                     // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
struct UMobileMenuInventory_FindSlotIndexAt_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuInventory.InitDragAt
struct UMobileMenuInventory_InitDragAt_Params
{
	int                                                TouchX;                                                   // (CPF_Parm)
	int                                                TouchY;                                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
struct UMobileMenuInventory_UpdateItemInSlot_Params
{
	int                                                InSlot;                                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuInventory.AddItemToSlot
struct UMobileMenuInventory_AddItemToSlot_Params
{
	class UMobileMenuElement*                          Element;                                                  // (CPF_Parm)
	int                                                ToSlot;                                                   // (CPF_Parm)
	class UMobileMenuElement*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
struct UMobileMenuInventory_SwapItemsInSlots_Params
{
	int                                                Slot0;                                                    // (CPF_Parm)
	int                                                Slot1;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuInventory.OnTouch
struct UMobileMenuInventory_OnTouch_Params
{
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	float                                              TouchX;                                                   // (CPF_Parm)
	float                                              TouchY;                                                   // (CPF_Parm)
	class UMobileMenuObject*                           ObjectOver;                                               // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
struct UMobileMenuInventory_CanPutItemInSlot_Params
{
	class UMobileMenuElement*                          Item;                                                     // (CPF_Parm)
	class UMobileMenuElement*                          ToSlot;                                                   // (CPF_Parm)
	int                                                ToIdx;                                                    // (CPF_Parm)
	int                                                FromIdx;                                                  // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuInventory.ScaleSlot
struct UMobileMenuInventory_ScaleSlot_Params
{
	class UMobileMenuElement*                          Slot;                                                     // (CPF_Parm)
};

// Function GameFramework.MobileMenuInventory.AddSlot
struct UMobileMenuInventory_AddSlot_Params
{
	class UMobileMenuElement*                          Slot;                                                     // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuInventory.InitMenuObject
struct UMobileMenuInventory_InitMenuObject_Params
{
	class UMobilePlayerInput*                          PlayerInput;                                              // (CPF_Parm)
	class UMobileMenuScene*                            Scene;                                                    // (CPF_Parm)
	int                                                ScreenWidth;                                              // (CPF_Parm)
	int                                                ScreenHeight;                                             // (CPF_Parm)
	bool                                               bIsFirstInitialization;                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuInventory.OnUpdateDrag
struct UMobileMenuInventory_OnUpdateDrag_Params
{
	struct FDragElementInfo                            Before;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FDragElementInfo                            After;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
struct UMobileMenuInventory_DoCanPutItemInSlot_Params
{
	class UMobileMenuInventory*                        FromInv;                                                  // (CPF_Parm)
	class UMobileMenuElement*                          Item;                                                     // (CPF_Parm)
	class UMobileMenuElement*                          ToSlot;                                                   // (CPF_Parm)
	int                                                ToIdx;                                                    // (CPF_Parm)
	int                                                FromIdx;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
struct UMobileMenuInventory_OnUpdateItemInSlot_Params
{
	class UMobileMenuInventory*                        FromInv;                                                  // (CPF_Parm)
	int                                                SlotIndex;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuLabel.RenderObject
struct UMobileMenuLabel_RenderObject_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuList.ItemScrollSize
struct UMobileMenuList_ItemScrollSize_Params
{
	class UMobileMenuListItem*                         Item;                                                     // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.RenderObject
struct UMobileMenuList_RenderObject_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuList.UpdateScroll
struct UMobileMenuList_UpdateScroll_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuList.CalculateSelectedItem
struct UMobileMenuList_CalculateSelectedItem_Params
{
	struct FSelectedMenuItem                           Selected;                                                 // (CPF_Parm, CPF_OutParm)
	float                                              ScrollAmount;                                             // (CPF_Parm)
	bool                                               bForceZeroAdjustment;                                     // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.GetItemClickPosition
struct UMobileMenuList_GetItemClickPosition_Params
{
	float                                              MouseX;                                                   // (CPF_Parm, CPF_OutParm)
	float                                              MouseY;                                                   // (CPF_Parm, CPF_OutParm)
	class UMobileMenuListItem*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.OnTouch
struct UMobileMenuList_OnTouch_Params
{
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	float                                              TouchX;                                                   // (CPF_Parm)
	float                                              TouchY;                                                   // (CPF_Parm)
	class UMobileMenuObject*                           ObjectOver;                                               // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.SetSelectedItem
struct UMobileMenuList_SetSelectedItem_Params
{
	int                                                ItemIndex;                                                // (CPF_Parm)
	bool                                               bForceAll;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.GetNumVisible
struct UMobileMenuList_GetNumVisible_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
struct UMobileMenuList_SetSelectedToVisibleIndex_Params
{
	int                                                VisibleIndex;                                             // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
struct UMobileMenuList_GetVisibleIndexOfSelected_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.GetAmountSelected
struct UMobileMenuList_GetAmountSelected_Params
{
	class UMobileMenuListItem*                         Item;                                                     // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.GetSelected
struct UMobileMenuList_GetSelected_Params
{
	class UMobileMenuListItem*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.Num
struct UMobileMenuList_Num_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuList.AddItem
struct UMobileMenuList_AddItem_Params
{
	class UMobileMenuListItem*                         Item;                                                     // (CPF_Parm)
	int                                                Index;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function GameFramework.MobileMenuList.InitMenuObject
struct UMobileMenuList_InitMenuObject_Params
{
	class UMobilePlayerInput*                          PlayerInput;                                              // (CPF_Parm)
	class UMobileMenuScene*                            Scene;                                                    // (CPF_Parm)
	int                                                ScreenWidth;                                              // (CPF_Parm)
	int                                                ScreenHeight;                                             // (CPF_Parm)
	bool                                               bIsFirstInitialization;                                   // (CPF_Parm)
};

// Function GameFramework.MobileMenuListItem.RenderItem
struct UMobileMenuListItem_RenderItem_Params
{
	class UMobileMenuList*                             List;                                                     // (CPF_Parm)
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuObjectProxy.RenderObject
struct UMobileMenuObjectProxy_RenderObject_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuObjectProxy.OnTouch
struct UMobileMenuObjectProxy_OnTouch_Params
{
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	float                                              TouchX;                                                   // (CPF_Parm)
	float                                              TouchY;                                                   // (CPF_Parm)
	class UMobileMenuObject*                           ObjectOver;                                               // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
struct UMobileMenuObjectProxy_OnRenderObject_Params
{
	class UMobileMenuObjectProxy*                      Proxy;                                                    // (CPF_Parm)
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
struct UMobileMenuObjectProxy_OnTouchEvent_Params
{
	class UMobileMenuObjectProxy*                      Proxy;                                                    // (CPF_Parm)
	TEnumAsByte<ETouchType>                            EventType;                                                // (CPF_Parm)
	float                                              TouchX;                                                   // (CPF_Parm)
	float                                              TouchY;                                                   // (CPF_Parm)
	class UMobileMenuObject*                           ObjectOver;                                               // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.MobileTouchInputVolume.HandleDragOver
struct AMobileTouchInputVolume_HandleDragOver_Params
{
};

// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
struct AMobileTouchInputVolume_HandleDoubleClick_Params
{
};

// Function GameFramework.MobileTouchInputVolume.HandleClick
struct AMobileTouchInputVolume_HandleClick_Params
{
};

// Function GameFramework.MobileTouchInputVolume.OnToggle
struct AMobileTouchInputVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              inAction;                                                 // (CPF_Parm)
};

// Function GameFramework.TouchableElement3D.HandleDragOver
struct UTouchableElement3D_HandleDragOver_Params
{
};

// Function GameFramework.TouchableElement3D.HandleDoubleClick
struct UTouchableElement3D_HandleDoubleClick_Params
{
};

// Function GameFramework.TouchableElement3D.HandleClick
struct UTouchableElement3D_HandleClick_Params
{
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
struct APlayerCollectorGame_GetSeamlessTravelActorList_Params
{
	bool                                               bToEntry;                                                 // (CPF_Parm)
	TArray<class AActor*>                              ActorList;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function GameFramework.PlayerCollectorGame.Login
struct APlayerCollectorGame_Login_Params
{
	struct FString                                     Portal;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                                 // (CPF_Const, CPF_Parm)
	struct FString                                     ErrorMessage;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.SeqEvent_HudRenderImage.Render
struct USeqEvent_HudRenderImage_Render_Params
{
	class UCanvas*                                     TargetCanvas;                                             // (CPF_Parm)
	class AHUD*                                        TargetHud;                                                // (CPF_Parm)
};

// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
struct USeqEvent_HudRenderText_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GameFramework.SeqEvent_HudRenderText.Render
struct USeqEvent_HudRenderText_Render_Params
{
	class UCanvas*                                     TargetCanvas;                                             // (CPF_Parm)
	class AHUD*                                        TargetHud;                                                // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
