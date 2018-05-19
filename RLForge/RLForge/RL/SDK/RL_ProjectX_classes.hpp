#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ProjectX._SharedHelpers
// 0x0000 (0x003C - 0x003C)
class U_SharedHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX._SharedHelpers");
		return ptr;
	}


	int STATIC_ScoreDeltaFromDefault(class UObject* Object);
	int STATIC_FindNetId(const struct FUniqueNetId& FindId, TArray<struct FUniqueNetId>* List);
	void STATIC_DrawShadowedText(class UCanvas* Canvas, const struct FString& Text, int ShadowOffsetX, int ShadowOffsetY, int ShadowAlpha);
	bool STATIC_IsInTransientPackage(class UObject* Obj);
	class APlayerController* STATIC_GetAPlayerController(class UClass* PlayerControllerClass);
	class UObject* STATIC_GetDefaultObject(class UClass* ObjClass);
	void STATIC_DumpUnreferencedAnims();
	struct FString STATIC_GetLanguageExtension();
};


// Class ProjectX._Types_X
// 0x0030 (0x006C - 0x003C)
class U_Types_X : public UObject
{
public:
	struct FScriptDelegate                             __KeyPressDelegate__Delegate;                             // 0x003C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPriviledgeChecked__Delegate;                          // 0x004C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ServiceExecutionDelegate__Delegate;                     // 0x005C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX._Types_X");
		return ptr;
	}


	void ServiceExecutionDelegate(class UPsyNetClientService_X* Service);
	struct FIntVector3 STATIC_ToIntVector3(const struct FVector& V);
	void OnPriviledgeChecked(class UPrivilegeCheck_X* PrivilegeCheck);
	bool KeyPressDelegate();
};


// Class ProjectX.ActorComponent_X
// 0x0007 (0x006C - 0x0065)
class UActorComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	unsigned long                                      bTick : 1;                                                // 0x0068(0x0004)
	unsigned long                                      bIgnoreScriptAttach : 1;                                  // 0x0068(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ActorComponent_X");
		return ptr;
	}


	void Reattach();
	void Tick(float DeltaTime);
	void Detached();
	void Attached();
	void BeginPlay();
};


// Class ProjectX.ExplosionComponent_X
// 0x0034 (0x00A0 - 0x006C)
class UExplosionComponent_X : public UActorComponent_X
{
public:
	class UDamageComponent_X*                          DamageComponent;                                          // 0x006C(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	float                                              StartRadius;                                              // 0x0070(0x0004) (CPF_Edit)
	float                                              EndRadius;                                                // 0x0074(0x0004) (CPF_Edit)
	float                                              Speed;                                                    // 0x0078(0x0004) (CPF_Edit)
	float                                              Falloff;                                                  // 0x007C(0x0004) (CPF_Edit)
	unsigned long                                      bPassThroughWorldGeometry : 1;                            // 0x0080(0x0004) (CPF_Edit)
	unsigned long                                      bIgnoreInstigator : 1;                                    // 0x0080(0x0004) (CPF_Edit)
	unsigned long                                      bDebug : 1;                                               // 0x0080(0x0004) (CPF_Edit)
	struct FVector                                     MomentumOffset;                                           // 0x0084(0x000C) (CPF_Edit)
	float                                              Lifetime;                                                 // 0x0090(0x0004) (CPF_Transient)
	TArray<class AActor*>                              DamagedActors;                                            // 0x0094(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ExplosionComponent_X");
		return ptr;
	}


	void ProcessHit(class AActor* Victim, const struct FVector& HitLocation, const struct FTraceHitInfo& ExtraHitInfo, float DamageScale);
	void Detached();
};


// Class ProjectX.FXActor_X
// 0x005C (0x026C - 0x0210)
class AFXActor_X : public AActor
{
public:
	class UFXActorEvent_X*                             SpawnState;                                               // 0x0210(0x0004)
	class UFXActorEvent_X*                             ActivationState;                                          // 0x0214(0x0004)
	TArray<struct FFXAttachment>                       Attachments;                                              // 0x0218(0x000C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FName                                       SocketOrBoneName;                                         // 0x0224(0x0008) (CPF_Edit)
	unsigned long                                      bDeactivateWhenOwnerDestroyed : 1;                        // 0x022C(0x0004) (CPF_Edit)
	unsigned long                                      bAllowShadowCasting : 1;                                  // 0x022C(0x0004) (CPF_Edit)
	unsigned long                                      bAutoActivate : 1;                                        // 0x022C(0x0004) (CPF_Edit)
	unsigned long                                      bRenderInactive : 1;                                      // 0x022C(0x0004) (CPF_Edit)
	unsigned long                                      bActive : 1;                                              // 0x022C(0x0004) (CPF_Transient)
	unsigned long                                      bPendingDestroy : 1;                                      // 0x022C(0x0004) (CPF_Transient)
	unsigned long                                      bHadOwner : 1;                                            // 0x022C(0x0004) (CPF_Const, CPF_Transient)
	class AFXActor_X*                                  Parent;                                                   // 0x0230(0x0004) (CPF_Edit)
	class AActor*                                      AttachmentActor;                                          // 0x0234(0x0004) (CPF_Transient)
	TArray<class UFXActorEvent_X*>                     FXStates;                                                 // 0x0238(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UParameterDispenser_X*                       Parameters;                                               // 0x0244(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	int                                                EditID;                                                   // 0x0248(0x0004) (CPF_Edit, CPF_Const, CPF_EditConst)
	struct FScriptDelegate                             __EventFXStatePushed__Delegate;                           // 0x024C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFXStatePopped__Delegate;                           // 0x025C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FXActor_X");
		return ptr;
	}


	void Destroyed();
	void SetStateEnabled(class UFXActorEvent_X* State, bool bEnable);
	void OnToggle(class USeqAct_Toggle* Action);
	void OnTriggerFXActor_X(class USeqAct_TriggerFXActor_X* SeqAct);
	void Inherit(class AFXActor_X* Other);
	void CopyFrom(class AFXActor_X* Other);
	void ResetParticles();
	void StopAllEffects();
	void DeactivateAndDestroy();
	void OnDetached(class UActorComponent* AC);
	void DeactivateFXComponent(class UActorComponent* AC);
	void ActivateFXComponent(class UActorComponent* AC);
	void OnAttached(class UActorComponent* AC);
	void UpdateFXStates();
	bool IsLocallyControlled();
	class AController* GetControllerOwner();
	void ToggleState(class UFXActorEvent_X* NewState);
	void RemoveState(class UFXActorEvent_X* OldState);
	void AddState(class UFXActorEvent_X* NewState);
	bool IsStateActive(class UFXActorEvent_X* InState);
	void Deactivate();
	void Activate();
	void HandleParentStatePopped(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void HandleParentStatePushed(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void SetHiddenFrom(class AActor* Other);
	void BindTo(class AFXActor_X* ParentFXActor);
	void SetAttachmentActor(class AActor* AttachToActor);
	void PostBeginPlay();
	void AllAttachments(class UClass* ComponentClass, class UActorComponent** OutComponent, int* OutAttachmentIdx);
	class UActorComponent* GetComponentByName(class UClass* ComponentClass, const struct FName& ComponentName);
	void EventFXStatePopped(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
	void EventFXStatePushed(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
};


// Class ProjectX.MICParamDispenserComponent_X
// 0x0014 (0x0080 - 0x006C)
class UMICParamDispenserComponent_X : public UActorComponent_X
{
public:
	struct FPointer                                    VfTable_IISetParameter;                                   // 0x006C(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	int                                                MaterialIndex;                                            // 0x0070(0x0004) (CPF_Edit)
	struct FName                                       AttachedComponentName;                                    // 0x0074(0x0008) (CPF_Edit)
	class UMeshComponent*                              MeshComp;                                                 // 0x007C(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MICParamDispenserComponent_X");
		return ptr;
	}


	bool __MICParamDispenserComponent_X__Attached_1(const struct FFXAttachment& A);
	void Attached();
	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
};


// Class ProjectX.ShakeComponent_X
// 0x00D8 (0x0144 - 0x006C)
class UShakeComponent_X : public UActorComponent_X
{
public:
	float                                              InnerRadius;                                              // 0x006C(0x0004) (CPF_Edit)
	float                                              OuterRadius;                                              // 0x0070(0x0004) (CPF_Edit)
	float                                              Falloff;                                                  // 0x0074(0x0004) (CPF_Edit)
	unsigned long                                      bAutoPlay : 1;                                            // 0x0078(0x0004) (CPF_Edit)
	unsigned long                                      bAutoDetach : 1;                                          // 0x0078(0x0004) (CPF_Edit)
	unsigned long                                      bOnlyAffectPlayersWithPawns : 1;                          // 0x0078(0x0004) (CPF_Edit)
	unsigned long                                      bAttenuate : 1;                                           // 0x0078(0x0004) (CPF_Edit)
	unsigned long                                      bPlaying : 1;                                             // 0x0078(0x0004) (CPF_Transient)
	unsigned long                                      bStopping : 1;                                            // 0x0078(0x0004) (CPF_Transient)
	TEnumAsByte<EShakeReceiver>                        Receiver;                                                 // 0x007C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              RadiusScale;                                              // 0x0080(0x0004) (CPF_Edit)
	float                                              BlendInTime;                                              // 0x0084(0x0004) (CPF_Edit)
	float                                              BlendOutTime;                                             // 0x0088(0x0004) (CPF_Edit)
	class UCameraShake*                                ShakeParams;                                              // 0x008C(0x0004) (CPF_Edit)
	struct FRawDistributionFloat                       AmplitudeScale;                                           // 0x0090(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionFloat                       FrequencyScale;                                           // 0x00AC(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DurationScale;                                            // 0x00C8(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	float                                              CurrentAmplitudeScale;                                    // 0x00E4(0x0004) (CPF_Const, CPF_Transient)
	float                                              CurrentFrequencyScale;                                    // 0x00E8(0x0004) (CPF_Const, CPF_Transient)
	class UForceFeedbackWaveform*                      ForceFeedbackWaveform;                                    // 0x00EC(0x0004) (CPF_Edit)
	float                                              ForceFeedbackScale;                                       // 0x00F0(0x0004) (CPF_Edit)
	float                                              ForceFeedbackBalance;                                     // 0x00F4(0x0004) (CPF_Edit)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                       // 0x00F8(0x000C) (CPF_Edit, CPF_NeedCtorLink, CPF_EditInline)
	float                                              PlayTime;                                                 // 0x0104(0x0004) (CPF_Transient)
	float                                              StopTime;                                                 // 0x0108(0x0004) (CPF_Transient)
	struct FVector                                     ShakeLocTimeOffset;                                       // 0x010C(0x000C) (CPF_Transient)
	struct FVector                                     ShakeRotTimeOffset;                                       // 0x0118(0x000C) (CPF_Transient)
	float                                              ShakeFOVTimeOffset;                                       // 0x0124(0x0004) (CPF_Transient)
	float                                              CameraShakeDuration;                                      // 0x0128(0x0004) (CPF_Transient)
	float                                              ForceFeedbackDuration;                                    // 0x012C(0x0004) (CPF_Transient)
	float                                              ForceFeedbackSamplesTime;                                 // 0x0130(0x0004) (CPF_Transient)
	class AActor*                                      PrevOwner;                                                // 0x0134(0x0004) (CPF_Transient)
	TArray<struct FShakeReceiver>                      Receivers;                                                // 0x0138(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ShakeComponent_X");
		return ptr;
	}


	bool GetColorParameter(const struct FName& InName, struct FColor* OutColor);
	bool GetVectorParameter(const struct FName& InName, struct FVector* OutVector);
	bool GetFloatParameter(const struct FName& InName, float* OutFloat);
	void SetColorParameter(const struct FName& ParameterName, const struct FColor& Param);
	void SetVectorRandParameter(const struct FName& ParameterName, struct FVector* Param, struct FVector* ParamLow);
	void SetVectorParameter(const struct FName& ParameterName, const struct FVector& Param);
	void SetFloatRandParameter(const struct FName& ParameterName, float Param, float ParamLow);
	void SetFloatParameter(const struct FName& ParameterName, float Param);
	bool IsPlaying();
	void StopShake(float InBlendOutTime);
	void InitParams();
	void PlayShake();
	void Detached();
	void Attached();
};


// Class ProjectX.AdHocBeacon_X
// 0x0008 (0x0044 - 0x003C)
class UAdHocBeacon_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	struct FPointer                                    pAdHoc;                                                   // 0x0040(0x0004) (CPF_Const, CPF_Native, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AdHocBeacon_X");
		return ptr;
	}


	int GetNodeCountMax();
	void AdHocJoinMatch();
	void AdHocCreateMatch();
	bool AdHocIsActive();
	void AdHocDisconnectFromAccessPoint();
	void AdHocConnectToAccessPoint(int ScanResultIndex);
	void AdHocRevertToInitialized();
	void AdHocScanForAccessPoints();
	void AdHocBecomeStation();
	void AdHocRejectStation(int NetworkNodeIndex);
	void AdHocBecomeAccessPoint();
	void AdHocSetAdvertiseData(const struct FString& AdvertiseData);
	void AdHocDestroy();
	void AdHocCreate();
	void AdHocCreateWithUsername(const struct FString& UserName);
	void Construct();
};


// Class ProjectX.AnimateParametersComponent_X
// 0x0033 (0x0098 - 0x0065)
class UAnimateParametersComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	TArray<struct FAnimatedFloatParam>                 FloatParameters;                                          // 0x0068(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FAnimatedVectorParam>                VectorParameters;                                         // 0x0074(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FAnimatedLinearColorParam>           ColorParameters;                                          // 0x0080(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bResetMaterialsOnComplete : 1;                            // 0x008C(0x0004) (CPF_Edit)
	float                                              AnimTime;                                                 // 0x0090(0x0004) (CPF_Transient)
	float                                              EndTime;                                                  // 0x0094(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimateParametersComponent_X");
		return ptr;
	}

};


// Class ProjectX.ArchetypePrefab_X
// 0x0018 (0x0228 - 0x0210)
class AArchetypePrefab_X : public AActor
{
public:
	TArray<class AActor*>                              PrefabArchetypes;                                         // 0x0210(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<class AActor*>                              ArchetypeInstances;                                       // 0x021C(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ArchetypePrefab_X");
		return ptr;
	}

};


// Class ProjectX.ArchetypeSpawnPoint_X
// 0x0044 (0x0254 - 0x0210)
class AArchetypeSpawnPoint_X : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;                     // 0x0210(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	struct FString                                     ArchetypePath;                                            // 0x0214(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	unsigned long                                      bSeedNavMesh : 1;                                         // 0x0220(0x0004) (CPF_Edit)
	unsigned long                                      bSpawnOnLevelStart : 1;                                   // 0x0220(0x0004) (CPF_Edit)
	unsigned long                                      bOnlyAllowOneInstance : 1;                                // 0x0220(0x0004) (CPF_Edit)
	class AActor*                                      ActorArchetype;                                           // 0x0224(0x0004) (CPF_Edit)
	class USpriteComponent*                            PlacementSprite;                                          // 0x0228(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class USkeletalMeshComponent*                      ArchetypeSkeletalMesh;                                    // 0x022C(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UStaticMeshComponent*                        ArchetypeStaticMesh;                                      // 0x0230(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	TArray<class AActor*>                              SpawnedActors;                                            // 0x0234(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class AActor*                                      SpawnedActor;                                             // 0x0240(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventSpawned__Delegate;                                 // 0x0244(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ArchetypeSpawnPoint_X");
		return ptr;
	}


	void OnSpawned(class AActor* Spawned);
	class AActor* DoSpawn();
	void OnToggle(class USeqAct_Toggle* Action);
	void OnDestroy(class USeqAct_Destroy* Action);
	void PostBeginPlay();
	void EventSpawned(class AArchetypeSpawnPoint_X* SpawnPoint, class AActor* Spawned);
};


// Class ProjectX.Aws4Signature_X
// 0x0000 (0x003C - 0x003C)
class UAws4Signature_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Aws4Signature_X");
		return ptr;
	}


	void STATIC_SignRequest(class UHttpRequestInterface* HTTPRequest);
};


// Class ProjectX.TcpBeacon
// 0x004C (0x0094 - 0x0048)
class UTcpBeacon : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0048(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	int                                                MaxConnections;                                           // 0x004C(0x0004) (CPF_Config)
	int                                                ListenPort;                                               // 0x0050(0x0004) (CPF_Config)
	struct FString                                     ConnectionClassName;                                      // 0x0054(0x000C) (CPF_Config, CPF_NeedCtorLink)
	class UClass*                                      ConnectionClass;                                          // 0x0060(0x0004)
	struct FPointer                                    ListenSocket;                                             // 0x0064(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	TArray<class UTcpConnection*>                      Connections;                                              // 0x0068(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                               // 0x0074(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                            // 0x0084(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TcpBeacon");
		return ptr;
	}


	void ReceivedBunch(class UTcpConnection* Connection);
	void OnDisconnected(class UTcpConnection* Connection);
	void OnConnected(class UTcpConnection* Connection);
	void OnConnectionRemoved(class UTcpConnection* Connection);
	void OnConnectionAdded(class UTcpConnection* Connection);
	class UTcpConnection* GetConnection(const struct FString& Address);
	void Close();
	struct FString GetExternalHostAddress();
	struct FString GetLocalHostAddress();
	bool BeginListen();
	class UTcpConnection* BeginConnect(const struct FString& Address);
	void EventDisconnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
	void EventConnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
};


// Class ProjectX.TcpMessageBeacon
// 0x0020 (0x00B4 - 0x0094)
class UTcpMessageBeacon : public UTcpBeacon
{
public:
	class UOnlineMessageComponent_X*                   MessageComponent;                                         // 0x0094(0x0004) (CPF_Const, CPF_ExportObject, CPF_Component, CPF_EditInline)
	TArray<struct FTcpMessageHandler>                  MessageHandlers;                                          // 0x0098(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;                      // 0x00A4(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TcpMessageBeacon");
		return ptr;
	}


	void BroadcastMessage(class UObject* Message);
	void SendMessage(class UTcpConnection* Connection, class UObject* Message);
	class UBeaconMessage_X* CreateMessage(class UClass* MessageClass);
	void RemoveMessageHandler(const struct FScriptDelegate& Callback);
	void AddMessageHandler(class UClass* MessageClass, const struct FScriptDelegate& Callback);
	void MessageReceivedDelegate(class UTcpConnection* Connection, class UObject* Message);
};


// Class ProjectX.BeaconMessage_X
// 0x0000 (0x003C - 0x003C)
class UBeaconMessage_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BeaconMessage_X");
		return ptr;
	}


	class UBeaconMessage_X* Broadcast();
	class UBeaconMessage_X* Send(class UTcpConnection* Connection);
};


// Class ProjectX.BugReport_X
// 0x00FC (0x0138 - 0x003C)
class UBugReport_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	struct FString                                     BugReportClassName;                                       // 0x0040(0x000C) (CPF_Config, CPF_GlobalConfig, CPF_NeedCtorLink)
	unsigned long                                      bEnableClientReports : 1;                                 // 0x004C(0x0004) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned long                                      bEnableServerReports : 1;                                 // 0x004C(0x0004) (CPF_Edit, CPF_Config, CPF_GlobalConfig)
	unsigned long                                      bUploadNextFile : 1;                                      // 0x004C(0x0004) (CPF_Const, CPF_Transient)
	unsigned long                                      bSubmitted : 1;                                           // 0x004C(0x0004) (CPF_Const, CPF_Transient)
	struct FString                                     URL;                                                      // 0x0050(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	int                                                MaxFileSizeMetabytes;                                     // 0x005C(0x0004) (CPF_Edit)
	struct FString                                     BugID;                                                    // 0x0060(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FBugReportSubmitterData                     SubmitterData;                                            // 0x006C(0x0028) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FBugReportSystemData                        SystemData;                                               // 0x0094(0x0028) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FBugReportPathData                          PathData;                                                 // 0x00BC(0x0030) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FBugReportDescriptionData                   DescriptionData;                                          // 0x00EC(0x003C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FPointer                                    LogFile;                                                  // 0x0128(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	TArray<struct FFileUploadData>                     FileUploads;                                              // 0x012C(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BugReport_X");
		return ptr;
	}


	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, bool bDidSucceed);
	void LogText(const struct FString& Str);
	void PDIReport();
	void CancelBugReport();
	void SubmitBugReport(const struct FString& Title, const struct FString& Description, const struct FString& Email);
	void StartBugReport();
	void STATIC_StaticSubmitBugReport(const struct FString& Title);
	class UBugReport_X* STATIC_CreateBugReport();
};


// Class ProjectX.CachedWebData_X
// 0x0028 (0x0064 - 0x003C)
class UCachedWebData_X : public UObject
{
public:
	TArray<unsigned char>                              Data;                                                     // 0x003C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	int                                                DataCRC;                                                  // 0x0048(0x0004) (CPF_Const)
	struct FString                                     ETag;                                                     // 0x004C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	class UError*                                      LoadError;                                                // 0x0058(0x0004) (CPF_Transient)
	class UError*                                      DownloadError;                                            // 0x005C(0x0004) (CPF_Transient)
	unsigned long                                      bNewData : 1;                                             // 0x0060(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CachedWebData_X");
		return ptr;
	}


	struct FString GetText();
	void UpdateData(TArray<unsigned char> NewData, const struct FString& NewETag);
};


// Class ProjectX.Camera_X
// 0x00F4 (0x05E0 - 0x04EC)
class ACamera_X : public ACamera
{
public:
	TArray<class UCameraState_X*>                      States;                                                   // 0x04EC(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FRotator                                    PCDeltaRotation;                                          // 0x04F8(0x000C) (CPF_Transient)
	struct FRotator                                    OldControllerRotation;                                    // 0x0504(0x000C) (CPF_Transient)
	struct FVector                                     PCDeltaLocation;                                          // 0x0510(0x000C) (CPF_Transient)
	struct FVector                                     OldControllerLocation;                                    // 0x051C(0x000C) (CPF_Transient)
	struct FCameraOrientation                          PreProcessPOV;                                            // 0x0528(0x002C) (CPF_Transient)
	struct FCameraOrientation                          PostProcessPOV;                                           // 0x0554(0x002C) (CPF_Transient)
	class UCameraStateBlender_X*                       Blender;                                                  // 0x0580(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FVector                                     ShakeLocationOffset;                                      // 0x0584(0x000C) (CPF_Const, CPF_Transient)
	struct FRotator                                    ShakeRotationOffset;                                      // 0x0590(0x000C) (CPF_Const, CPF_Transient)
	float                                              ShakeFOVOffset;                                           // 0x059C(0x0004) (CPF_Const, CPF_Transient)
	struct FColor                                      StartFadeColor;                                           // 0x05A0(0x0004) (CPF_Transient)
	struct FColor                                      EndFadeColor;                                             // 0x05A4(0x0004) (CPF_Transient)
	struct FVector                                     ClipOffset;                                               // 0x05A8(0x000C) (CPF_Transient)
	TArray<struct FLocationCameraKnock>                LocationKnocks;                                           // 0x05B4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FRotationCameraKnock>                RotationKnocks;                                           // 0x05C0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bDisableCameraShake : 1;                                  // 0x05CC(0x0004) (CPF_Transient)
	unsigned long                                      bSnapNextTransition : 1;                                  // 0x05CC(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventCameraStateChanged__Delegate;                      // 0x05D0(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Camera_X");
		return ptr;
	}


	void OnViewTargetChanged();
	void SetViewTarget(class AActor* NewViewTarget, const struct FViewTargetTransitionParams& TransitionParams);
	bool IsTransitioning();
	void HandleBlenderStateChanged(class UCameraStateBlender_X* CameraBlender);
	void SnapTransition();
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ApplyCameraModifiers(float DeltaTime, struct FTPOV* OutPOV);
	bool CameraTrace(const struct FVector& End, const struct FVector& Start, const struct FVector& Extent, struct FVector* HitLoc, class AActor** HitActor);
	class UCameraState_X* InstanceCameraState(class UCameraState_X* Archetype);
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot);
	void PostProcessCameraState(float DeltaTime, struct FCameraOrientation* OutPOV);
	void ProcessCameraState(float DeltaTime, struct FCameraOrientation* OutPOV);
	void CheckViewTarget(struct FTViewTarget* VT);
	void CopyFade(class ACamera_X* Other);
	void SetCameraFade(bool bNewEnableFading, const struct FColor& NewFadeColor, const struct FVector2D& NewFadeAlpha, float NewFadeTime, bool bNewFadeAudio);
	void UpdateFade(float DeltaTime);
	void UpdateCamera(float DeltaTime);
	void ClampPOV(struct FCameraOrientation* OutPOV);
	struct FRotator RemoveRoll(const struct FRotator& InRot);
	class UCameraState_X* GetCameraState();
	class UCameraState_X* SelectCameraState();
	void UpdateCameraState();
	void UpdateCameraKnocks(float DeltaTime, struct FCameraOrientation* OutPOV);
	void AddRotationKnock(const struct FRotationCameraKnock& Knock, float Scale);
	void AddLocationKnock(const struct FLocationCameraKnock& Knock, float Scale, const struct FRotator& Transform);
	void InstanceCameraStates();
	void InitializeFor(class APlayerController* PC);
	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void OnLoadingMovieClosesd();
	void PostBeginPlay();
	struct FVector STATIC_InterpVector(const struct FVector& OldValue, const struct FVector& NewValue, const struct FVectorInterpRate& Rate, const struct FRotator& Orientation, float DeltaTime);
	void STATIC_FinalizeOrientation(struct FCameraOrientation* OutPOV);
	struct FCameraOrientation STATIC_BlendCameraOrientations(float Alpha, struct FCameraOrientation* A, struct FCameraOrientation* B);
	void EventCameraStateChanged(class ACamera_X* Camera, class UCameraState_X* CameraState);
};


// Class ProjectX.CameraAttachmentComponent_X
// 0x0013 (0x0078 - 0x0065)
class UCameraAttachmentComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	TArray<class UActorComponent*>                     Attachments;                                              // 0x0068(0x000C) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_NeedCtorLink, CPF_EditInline)
	unsigned long                                      bDirtyTransform : 1;                                      // 0x0074(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraAttachmentComponent_X");
		return ptr;
	}

};


// Class ProjectX.CanvasTexture_X
// 0x0010 (0x013C - 0x012C)
class UCanvasTexture_X : public UTextureRenderTarget2D
{
public:
	struct FScriptDelegate                             __Draw__Delegate;                                         // 0x012C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CanvasTexture_X");
		return ptr;
	}


	void Draw(class UCanvas* C);
};


// Class ProjectX.CanvasTextureComponent_X
// 0x0017 (0x007C - 0x0065)
class UCanvasTextureComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	class UMeshComponent*                              Mesh;                                                     // 0x0068(0x0004) (CPF_Edit, CPF_Const, CPF_ExportObject, CPF_Component, CPF_EditInline)
	int                                                MaterialIndex;                                            // 0x006C(0x0004) (CPF_Edit, CPF_Const)
	struct FName                                       MaterialParamName;                                        // 0x0070(0x0008) (CPF_Edit, CPF_Const)
	class UCanvasTexture_X*                            Texture;                                                  // 0x0078(0x0004) (CPF_Edit, CPF_Const, CPF_ExportObject, CPF_NeedCtorLink, CPF_EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CanvasTextureComponent_X");
		return ptr;
	}


	void OnDraw(class UCanvas* C);
};


// Class ProjectX.PlayerController_X
// 0x0068 (0x0638 - 0x05D0)
class APlayerController_X : public APlayerController
{
public:
	class ACamera*                                     CameraArchetype;                                          // 0x05D0(0x0004) (CPF_Edit)
	class AHUD*                                        HUDArchetype;                                             // 0x05D4(0x0004) (CPF_Edit)
	class APawn*                                       OldPawnReference;                                         // 0x05D8(0x0004) (CPF_Transient)
	class AActor*                                      LockedDebugActor;                                         // 0x05DC(0x0004) (CPF_Transient)
	unsigned long                                      bPausedForExternalUI : 1;                                 // 0x05E0(0x0004) (CPF_Transient)
	class UNetConnection*                              NetConnection;                                            // 0x05E4(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventReceivedPRI__Delegate;                             // 0x05E8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPawnChange__Delegate;                              // 0x05F8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedPlayer__Delegate;                          // 0x0608(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                               // 0x0618(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerCameraChange__Delegate;                      // 0x0628(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlayerController_X");
		return ptr;
	}


	void ClientSetSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void ServerUpdateCustomMatchSettings(const struct U_Types_X_FCustomMatchSettings& Settings);
	void ServerSetParty(const struct FUniqueNetId& MemberId, const struct FUniqueNetId& NewPartyID);
	void DisconnectSplitScreenPlayer(class UPlayer* P);
	void ServerDestroy();
	void KickPlayerForReason(const struct FString& Reason, const struct FString& Title);
	void ClientNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void ServerNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void Pause();
	void RemoveOptionFromLastURL(const struct FString& OptName);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ClearOnlineDelegates();
	void RegisterOnlineDelegates();
	void NotifyTakeHit_X(class UDamageComponent_X* Damage);
	void ClientPlayForceFeedbackWaveform(class UForceFeedbackWaveform* FFWaveform, class AActor* FFWaveformInstigator);
	void ClientCommand(const struct FString& Command);
	void ServerCommand(const struct FString& Command);
	void PawnDied(class APawn* P);
	void UnPossess();
	void Possess(class APawn* aPawn, bool bVehicleTransition);
	void OnPawnChange(class APawn* OldPawn, class APawn* NewPawn);
	void PawnReferenceUpdated();
	void ClientRestart(class APawn* NewPawn);
	void GivePawn(class APawn* NewPawn);
	void InitInputSystem();
	class ACamera* GetCameraArchetype();
	void SpawnPlayerCamera();
	void OnCameraChanged(class ACamera* InCamera);
	void AddCheats(bool bForce);
	class UOnlineGameAccount_X* GetOnlineAccount();
	class UOnlinePlayer_X* GetOnlinePlayer();
	void OnReceivedPRI();
	void InitPlayerReplicationInfo();
	void Destroyed();
	void OnExternalUIChanged(bool bIsOpening);
	void SetPaused(bool bPaused);
	void ReceivedPlayer();
	class UOnlineGame_X* STATIC_GetOnlineGame();
	TScriptInterface<class UIOnlineGameHost_X> STATIC_GetOnlineGameHost();
	class UOnlineGameLanServer_X* STATIC_GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* STATIC_GetOnlineGameDedicatedServer();
	void SpawnDefaultHUD();
	void SetPRI(class APlayerReplicationInfo* PRI);
	void ReplicatedEvent(const struct FName& VarName);
	void EventPlayerCameraChange(class APlayerController_X* PC);
	void EventDestroyed(class APlayerController_X* PC);
	void EventReceivedPlayer(class APlayerController_X* PC);
	void EventPawnChange(class APlayerController_X* PC, class APawn* OldPawn, class APawn* NewPawn);
	void EventReceivedPRI(class APlayerController_X* PC);
};


// Class ProjectX.CheatManager_X
// 0x0010 (0x0064 - 0x0054)
class UCheatManager_X : public UCheatManager
{
public:
	struct FScriptDelegate                             __EventDelegateTest__Delegate;                            // 0x0054(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheatManager_X");
		return ptr;
	}


	void HandleImageDownloaded(class UOnlineImageDownloaderWeb_X* Downloader, const struct FDownloadedImage& Image);
	void DownloadImage(const struct FString& URL);
	void RandomSleep(float MinDelay, float MaxDelay, float MinSleep, float MaxSleep);
	void Sleep(float Seconds);
	void LoadKismetLevel(const struct FName& LeveFileName);
	void DrawBulletContacts(float Lifetime);
	void PrintReproPhysics(const struct FString& Command, class AActor* A);
	void ReproPhysics(class AActor* A, float LX, float LY, float LZ, float RX, float RY, float RZ, float RW, float VX, float VY, float VZ);
	void DisableCCD();
	void SimulateInputKey(const struct FName& KeyName);
	void SetNetServerMaxTickRate(float Rate);
	void ScreenShotDir(const struct FString& Directory);
	void ListVisiblePrimitives();
	void HideVisiblePrimitives(const struct FString& NameMatch, const struct FString& NameIgnore);
	void ToggleReplicateVoiceToSelf();
	void ToggleReplicateVoiceToSender();
	void EventDelegateTest();
};


// Class ProjectX.CheatObject_X
// 0x0000 (0x003C - 0x003C)
class UCheatObject_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheatObject_X");
		return ptr;
	}

};


// Class ProjectX.Compression_X
// 0x0000 (0x003C - 0x003C)
class UCompression_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Compression_X");
		return ptr;
	}


	bool Uncompress(TArray<unsigned char>* Compressed, TArray<unsigned char>* Uncompressed);
	bool Compress(TArray<unsigned char>* Uncompressed, TArray<unsigned char>* Compressed);
};


// Class ProjectX.ControlPreset_X
// 0x001C (0x0058 - 0x003C)
class UControlPreset_X : public UObject
{
public:
	TArray<struct FPlayerBinding>                      PCBindings;                                               // 0x003C(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FPlayerBinding>                      GamepadBindings;                                          // 0x0048(0x000C) (CPF_Config, CPF_NeedCtorLink)
	unsigned long                                      bRemovedPCOverrides : 1;                                  // 0x0054(0x0004)
	unsigned long                                      bRemovedGamepadOverrides : 1;                             // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ControlPreset_X");
		return ptr;
	}


	TArray<struct FPlayerBinding> GetGamepadBindings();
	TArray<struct FPlayerBinding> GetPCBindings();
};


// Class ProjectX.CRC_X
// 0x0000 (0x003C - 0x003C)
class UCRC_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CRC_X");
		return ptr;
	}


	int STATIC_GetStringCRC(const struct FString& Text, int Seed);
};


// Class ProjectX.CycleLog_X
// 0x0014 (0x005C - 0x0048)
class UCycleLog_X : public UComponent
{
public:
	int                                                MaxLogs;                                                  // 0x0048(0x0004) (CPF_Edit)
	TArray<struct FString>                             Logs;                                                     // 0x004C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                LogIndex;                                                 // 0x0058(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CycleLog_X");
		return ptr;
	}


	void AllLogs(struct FString* S);
};


// Class ProjectX.DamageComponent_X
// 0x004C (0x0094 - 0x0048)
class UDamageComponent_X : public UComponent
{
public:
	float                                              Damage;                                                   // 0x0048(0x0004) (CPF_Edit)
	float                                              InstigatorDamageScale;                                    // 0x004C(0x0004) (CPF_Edit)
	class UClass*                                      LegacyDamageType;                                         // 0x0050(0x0004) (CPF_Edit)
	class APawn*                                       Instigator;                                               // 0x0054(0x0004) (CPF_Transient)
	class AController*                                 InstigatorController;                                     // 0x0058(0x0004) (CPF_Transient)
	class AActor*                                      Source;                                                   // 0x005C(0x0004) (CPF_Transient)
	struct FVector                                     Location;                                                 // 0x0060(0x000C) (CPF_Transient)
	struct FVector                                     MomentumDir;                                              // 0x006C(0x000C) (CPF_Transient)
	struct FTraceHitInfo                               HitInfo;                                                  // 0x0078(0x001C) (CPF_Transient, CPF_Component)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DamageComponent_X");
		return ptr;
	}


	void Reset();
	float CalculateDamage(class AActor* Victim);
	void ApplyDamage(class AActor* Victim, bool bManualReset);
	class UDamageComponent_X* SetImpact(const struct FImpactInfo& Impact);
	class UDamageComponent_X* SetHitInfo(const struct FTraceHitInfo& InHitInfo);
	class UDamageComponent_X* ScaleDamage(float InScale);
	class UDamageComponent_X* SetMomentumDir(const struct FVector& InMomentumDir);
	class UDamageComponent_X* SetLocation(const struct FVector& InLocation);
	class UDamageComponent_X* SetSource(class AActor* InSource);
	void InitSource();
	class UDamageComponent_X* GetArchetype();
};


// Class ProjectX.DistributionFloatShakeParameter_X
// 0x0003 (0x0070 - 0x006D)
class UDistributionFloatShakeParameter_X : public UDistributionFloatParameterBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DistributionFloatShakeParameter_X");
		return ptr;
	}

};


// Class ProjectX.EffectsMap_X
// 0x000C (0x0048 - 0x003C)
class UEffectsMap_X : public UObject
{
public:
	TArray<struct FEffectsMapping>                     Effects;                                                  // 0x003C(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EffectsMap_X");
		return ptr;
	}


	struct FEffectsMapping GetEffects(class UPhysicalMaterial* PhysMat);
};


// Class ProjectX.EngineShare_X
// 0x00B4 (0x00F0 - 0x003C)
class UEngineShare_X : public UEngineShare
{
public:
	class UCycleLog_X*                                 TransientLog;                                             // 0x003C(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UOnlineGame_Base_X*                          OnlineGame;                                               // 0x0040(0x0004) (CPF_Transient)
	class ULocalCache_X*                               LocalCache;                                               // 0x0044(0x0004) (CPF_Transient)
	struct FString                                     ArchetypeString_OnlineGame;                               // 0x0048(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameDedicatedServer;                // 0x0054(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameLanServer;                      // 0x0060(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	unsigned long                                      bDisableSaving : 1;                                       // 0x006C(0x0004) (CPF_Transient)
	unsigned long                                      bIsShowingLoadmapMovie : 1;                               // 0x006C(0x0004) (CPF_Const, CPF_Transient)
	struct FScriptDelegate                             __EventPreExit__Delegate;                                 // 0x0070(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoadingMovieClosed__Delegate;                      // 0x0080(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPreScriptsReloaded__Delegate;                      // 0x0090(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPostScriptsReloaded__Delegate;                     // 0x00A0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventOnlineGameInitialized__Delegate;                   // 0x00B0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPreLoadMap__Delegate;                              // 0x00C0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPostLoadMap__Delegate;                             // 0x00D0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCrashed__Delegate;                                 // 0x00E0(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EngineShare_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool STATIC_IsRequestingExit();
	struct FString STATIC_GetUserAgentHeader();
	struct FString GetRegionString();
	struct FString GetPlatformString();
	void STATIC_Crash();
	bool STATIC_ConfigGetString(const struct FString& SectionName, const struct FString& KeyName, struct FString* OutValue);
	bool STATIC_ParseCommandlineString(const struct FString& Param, struct FString* OutValue);
	bool STATIC_ParseCommandlineQWORD(const struct FString& Param);
	bool STATIC_ParseCommandlineFloat(const struct FString& Param, float* OutValue);
	bool STATIC_ParseCommandlineInt(const struct FString& Param, int* OutValue);
	bool STATIC_ParseCommandlineParam(const struct FString& Param);
	void InitOnlineGame(class UOnlineSubsystem* NewOnlineSubsystem);
	bool STATIC_IsUsingNullRHI();
	bool STATIC_IsLanServer();
	bool STATIC_IsDedicatedServer();
	void EventCrashed();
	void EventPostLoadMap();
	void EventPreLoadMap(const struct FString& MapName);
	void EventOnlineGameInitialized();
	void EventPostScriptsReloaded();
	void EventPreScriptsReloaded();
	void EventLoadingMovieClosed();
	void EventPreExit();
};


// Class ProjectX.Errors_X
// 0x0120 (0x0174 - 0x0054)
class UErrors_X : public UErrorList
{
public:
	class UErrorType*                                  UnknownError;                                             // 0x0054(0x0004) (CPF_Const)
	class UPsyNetErrorType_X*                          RequestError;                                             // 0x0058(0x0004) (CPF_Const)
	class UErrorType*                                  HTTPError;                                                // 0x005C(0x0004) (CPF_Const)
	class UErrorType*                                  SessionNotActive;                                         // 0x0060(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_NotConnected;                                        // 0x0064(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_Connected;                                           // 0x0068(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_ConnectionDropped;                                   // 0x006C(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_NoNetworkConnection;                                 // 0x0070(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_ServiceUnavailable;                                  // 0x0074(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_UpdateRequired;                                      // 0x0078(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_ServersTooBusy;                                      // 0x007C(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_DuplicateLoginDetected;                              // 0x0080(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_InvalidUser;                                         // 0x0084(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_InvalidResponse;                                     // 0x0088(0x0004) (CPF_Const)
	class UErrorType*                                  OSCS_TooYoung;                                            // 0x008C(0x0004) (CPF_Const)
	class UErrorType*                                  ConnectionStatusErrors[0xB];                              // 0x0090(0x0004) (CPF_Const)
	class UErrorType*                                  VersionMismatch;                                          // 0x00BC(0x0004) (CPF_Const)
	class UErrorType*                                  NoServers;                                                // 0x00C0(0x0004) (CPF_Const)
	class UErrorType*                                  FileDoesNotExist;                                         // 0x00C4(0x0004) (CPF_Const)
	class UErrorType*                                  FileLoadFail;                                             // 0x00C8(0x0004) (CPF_Const)
	class UErrorType*                                  FileLoadCorrupt;                                          // 0x00CC(0x0004) (CPF_Const)
	class UErrorType*                                  FileMountCorrupt;                                         // 0x00D0(0x0004) (CPF_Const)
	class UErrorType*                                  FileSaveFail;                                             // 0x00D4(0x0004) (CPF_Const)
	class UErrorType*                                  FileSaveNoSpace;                                          // 0x00D8(0x0004) (CPF_Const)
	class UErrorType*                                  FileSaveCorrupt;                                          // 0x00DC(0x0004) (CPF_Const)
	class UErrorType*                                  UserBanned;                                               // 0x00E0(0x0004) (CPF_Const)
	class UErrorType*                                  NotLoggedInToPsynet;                                      // 0x00E4(0x0004) (CPF_Const)
	class UErrorType*                                  FriendsList;                                              // 0x00E8(0x0004) (CPF_Const)
	class UErrorType*                                  AuthenticationFailed;                                     // 0x00EC(0x0004) (CPF_Const)
	class UErrorType*                                  NoExportCountry;                                          // 0x00F0(0x0004) (CPF_Const)
	class UErrorType*                                  UnauthorizedAccess;                                       // 0x00F4(0x0004) (CPF_Const)
	class UErrorType*                                  ServiceNotFound;                                          // 0x00F8(0x0004) (CPF_Const)
	class UErrorType*                                  FeatureDisabled;                                          // 0x00FC(0x0004) (CPF_Const)
	class UErrorType*                                  MatchmakingDisabled;                                      // 0x0100(0x0004) (CPF_Const)
	class UErrorType*                                  PlayerNameNotSet;                                         // 0x0104(0x0004) (CPF_Const)
	class UErrorType*                                  PlayerNameAlreadyTaken;                                   // 0x0108(0x0004) (CPF_Const)
	class UErrorType*                                  PlayerNameTooShort;                                       // 0x010C(0x0004) (CPF_Const)
	class UErrorType*                                  PlayerNameTooLong;                                        // 0x0110(0x0004) (CPF_Const)
	class UErrorType*                                  PlayerNameInappropriate;                                  // 0x0114(0x0004) (CPF_Const)
	class UErrorType*                                  PlayerNameInvalidCharacter;                               // 0x0118(0x0004) (CPF_Const)
	class UErrorType*                                  PlayerNameFailed;                                         // 0x011C(0x0004) (CPF_Const)
	class UErrorType*                                  NotAuthorized;                                            // 0x0120(0x0004) (CPF_Const)
	class UErrorType*                                  SessionAlreadyActive;                                     // 0x0124(0x0004) (CPF_Const)
	class UErrorType*                                  GameServerPending;                                        // 0x0128(0x0004) (CPF_Const)
	class UErrorType*                                  CacheError;                                               // 0x012C(0x0004) (CPF_Const)
	class UErrorType*                                  WordFilterEvil;                                           // 0x0130(0x0004) (CPF_Const)
	class UErrorType*                                  WordFilterPlatformError;                                  // 0x0134(0x0004) (CPF_Const)
	class UErrorType*                                  WordFilterPlatformChatError;                              // 0x0138(0x0004) (CPF_Const)
	class UErrorType*                                  InvalidSettings;                                          // 0x013C(0x0004) (CPF_Const)
	class UErrorType*                                  Maintenance;                                              // 0x0140(0x0004) (CPF_Const)
	class UErrorType*                                  PlatformAuthError;                                        // 0x0144(0x0004) (CPF_Const)
	class UErrorType*                                  MicrotransactionAuthExpired;                              // 0x0148(0x0004) (CPF_Const)
	class UErrorType*                                  CannotFriendSelf;                                         // 0x014C(0x0004) (CPF_Const)
	class UErrorType*                                  InvalidPlayer;                                            // 0x0150(0x0004) (CPF_Const)
	class UErrorType*                                  AlreadyFriends;                                           // 0x0154(0x0004) (CPF_Const)
	class UErrorType*                                  LocalHostConnectionError;                                 // 0x0158(0x0004) (CPF_Const)
	class UErrorType*                                  UGCRestricted;                                            // 0x015C(0x0004) (CPF_Const)
	class UPsyNetErrorType_X*                          PerConBroken;                                             // 0x0160(0x0004) (CPF_Const)
	class UErrorType*                                  MicrotransactionServiceMaintenance;                       // 0x0164(0x0004) (CPF_Const)
	class UErrorType*                                  GenericStorageOutOfSync;                                  // 0x0168(0x0004) (CPF_Const)
	class UErrorType*                                  InvalidPlatform;                                          // 0x016C(0x0004) (CPF_Const)
	class UErrorType*                                  InvalidPlatformForCodeRedemption;                         // 0x0170(0x0004) (CPF_Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Errors_X");
		return ptr;
	}


	bool STATIC_DisplayPlatformError(class UErrorType* InErrorType);
};


// Class ProjectX.EventRecorder_X
// 0x0058 (0x00A0 - 0x0048)
class UEventRecorder_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0048(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	unsigned long                                      bEnabled : 1;                                             // 0x004C(0x0004) (CPF_Edit)
	TArray<struct FName>                               DisabledEvents;                                           // 0x0050(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	int                                                MaxQueuedEvents;                                          // 0x005C(0x0004) (CPF_Edit)
	int                                                MaxQueuedMinutes;                                         // 0x0060(0x0004) (CPF_Edit)
	TArray<struct FMetricsEvent>                       QueuedEvents;                                             // 0x0064(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FGuid                                       AppSessionID;                                             // 0x0070(0x0010) (CPF_Const, CPF_Transient)
	struct FGuid                                       LevelSessionID;                                           // 0x0080(0x0010) (CPF_Const, CPF_Transient)
	float                                              NextSendTime;                                             // 0x0090(0x0004) (CPF_Const, CPF_Transient)
	float                                              FloodPreventionTimeSeconds;                               // 0x0094(0x0004) (CPF_Edit)
	float                                              LastFullSendTime;                                         // 0x0098(0x0004) (CPF_Const, CPF_Transient)
	int                                                AppEventCount;                                            // 0x009C(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EventRecorder_X");
		return ptr;
	}


	void MetricsFlood(const struct FString& LastEventName);
	void SetLevelSessionID(const struct FGuid& Id);
	void Send();
	void RecordEvent(const struct FString& Category, const struct FName& Event, struct FString* Data);
	void STATIC_RecordFunction(const struct FString& Category);
};


// Class ProjectX.MetricsSystem_X
// 0x0000 (0x00A0 - 0x00A0)
class UMetricsSystem_X : public UEventRecorder_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MetricsSystem_X");
		return ptr;
	}

};


// Class ProjectX.EventRecorderGroup_X
// 0x000C (0x0054 - 0x0048)
class UEventRecorderGroup_X : public UComponent
{
public:
	struct FString                                     Category;                                                 // 0x0048(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EventRecorderGroup_X");
		return ptr;
	}


	struct FString VectorToString(const struct FVector& V);
	void STATIC_RecordFunction();
	class UEventRecorder_X* GetEventRecorder();
};


// Class ProjectX.MetricsGroup_X
// 0x0000 (0x0054 - 0x0054)
class UMetricsGroup_X : public UEventRecorderGroup_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MetricsGroup_X");
		return ptr;
	}


	class UEventRecorder_X* GetEventRecorder();
};


// Class ProjectX.FakeData_X
// 0x0298 (0x02D4 - 0x003C)
class UFakeData_X : public UObject
{
public:
	int                                                RandomSeed;                                               // 0x003C(0x0004)
	struct FFakeData1                                  Data1;                                                    // 0x0040(0x0030) (CPF_NeedCtorLink)
	struct FFakeData2                                  Data2;                                                    // 0x0070(0x0078) (CPF_NeedCtorLink)
	struct FFakeData3                                  Data3;                                                    // 0x00E8(0x00FC) (CPF_NeedCtorLink)
	struct FFakeData4                                  Data4;                                                    // 0x01E4(0x00F0) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FakeData_X");
		return ptr;
	}


	int STATIC_RandomizeValues(class UObject* Target, int InRandomSeed);
	class UFakeData_X* STATIC_RandomizeFakeData(class UFakeData_X* FakeData, int InRandomSeed);
	class UFakeData_X* STATIC_GenerateFakeData(int InRandomSeed);
};


// Class ProjectX.FXActorEvent_X
// 0x0000 (0x003C - 0x003C)
class UFXActorEvent_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.FXActorEvent_X");
		return ptr;
	}

};


// Class ProjectX.GameEngine_X
// 0x0000 (0x07DC - 0x07DC)
class UGameEngine_X : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameEngine_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnlineSubsystemInitialized();
};


// Class ProjectX.GameInfo_X
// 0x0038 (0x0424 - 0x03EC)
class AGameInfo_X : public AFrameworkGame
{
public:
	class AGameReplicationInfo*                        GameReplicationInfoArchetype;                             // 0x03EC(0x0004) (CPF_Edit)
	class APlayerController*                           PlayerControllerArchetype;                                // 0x03F0(0x0004) (CPF_Edit)
	class APawn*                                       PawnArchetype;                                            // 0x03F4(0x0004) (CPF_Edit)
	TArray<struct FPauserData>                         PCPausers;                                                // 0x03F8(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSpawned__Delegate;                                 // 0x0404(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInit__Delegate;                                    // 0x0414(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameInfo_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ClientMapLoadFail(const struct FUniqueNetId& PlayerID, const struct FString& MapName);
	void RemovePauser(class APlayerController* PC, bool bForceRemove);
	void AddPauser(class APlayerController* PC);
	void SetPaused(class APlayerController* PC, bool bPause);
	void TogglePause(class APlayerController* PC);
	bool IsPaused(class APlayerController* PC);
	TScriptInterface<class UIOnlineGameHost_X> GetOnlineGameHost();
	class UOnlineGameLanServer_X* STATIC_GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* STATIC_GetOnlineGameDedicatedServer();
	class UOnlineGame_Base_X* STATIC_GetOnlineGame();
	void EndOnlineGame();
	void Logout(class AController* Exiting);
	void GenericPlayerInitialization(class AController* C);
	void STATIC_DisconnectExistingPlayer(struct FUniqueNetId* PlayerID);
	class APlayerController* Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage);
	void PreLogin(const struct FString& Options, const struct FString& Address, const struct FUniqueNetId& UniqueId, bool bSupportsAuth, struct FString* ErrorMessage);
	void UpdateGameSettingsCounts();
	void PostBeginPlay();
	bool ProcessServerLogin();
	void RegisterServer();
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class ANavigationPoint* StartSpot);
	void Killed_X(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UDamageComponent_X* Damage);
	void AdjustDamage_X(class APawn* injured, class UDamageComponent_X* Damage);
	void PreBeginPlay();
	class APlayerController* SpawnPlayerController(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	class UClass* STATIC_SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	struct FString STATIC_GetDefaultGameClassPath(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
	void PDI(class UClass* ActorClass, bool bOnlybDebug);
	void InitGame(const struct FString& Options, struct FString* ErrorMessage);
	void EventInit(class AGameInfo_X* G, const struct FString& Options);
	void EventSpawned(class AGameInfo_X* G);
};


// Class ProjectX.GameSetting_X
// 0x0000 (0x003C - 0x003C)
class UGameSetting_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameSetting_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsSetting(const struct FName& SettingName);
	void AddGameSettingToList(class UOnlineGameSettings_X* OnlineGameSettings, TArray<class UGameSetting_X*>* GameSettingsArray);
};


// Class ProjectX.GameSettingCategory_X
// 0x001C (0x0058 - 0x003C)
class UGameSettingCategory_X : public UObject
{
public:
	TArray<struct FName>                               SelectedNames;                                            // 0x003C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bHidden : 1;                                              // 0x0048(0x0004) (CPF_Edit, CPF_Const)
	TArray<class UGameSetting_X*>                      GameSettings;                                             // 0x004C(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameSettingCategory_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	int GetGameSettingIndex(const struct FName& SettingName);
	bool HasSetting(const struct FName& SettingName);
	void GetSelectedGameSettings(TArray<class UGameSetting_X*>* SelectedGameSettings);
	class UGameSetting_X* GetFirstSelectedGameSetting();
	void ClearSelected();
	void AddSelectedSetting(const struct FName& NewSelectedName);
	void SetGameSettings(TArray<class UGameSetting_X*> NewGameSettings);
};


// Class ProjectX.GameViewportClient_X
// 0x0048 (0x018C - 0x0144)
class UGameViewportClient_X : public UGameViewportClient
{
public:
	unsigned long                                      bHandCursor : 1;                                          // 0x0144(0x0004) (CPF_Transient)
	int                                                MaxSplitScreenPlayers;                                    // 0x0148(0x0004) (CPF_Const)
	struct FScriptDelegate                             __EventLocalPlayerJoin__Delegate;                         // 0x014C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLocalPlayerLeave__Delegate;                        // 0x015C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNotifyConnectionError__Delegate;                   // 0x016C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryPlayerChange__Delegate;                     // 0x017C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameViewportClient_X");
		return ptr;
	}


	void OnPrimaryPlayerSwitch(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	bool ForceRemovePlayer(class ULocalPlayer* ExPlayer);
	bool RemovePlayer(class ULocalPlayer* ExPlayer);
	bool RemovePlayerByID(int ControllerId);
	void SetHardwareMouseCursorVisibility(bool bIsVisible);
	void NotifyConnectionError(TEnumAsByte<EProgressMessageType> MessageType, const struct FString& Message, const struct FString& Title);
	class ULocalPlayer* CreatePlayer(int ControllerId, bool bSpawnActor, struct FString* OutError);
	void NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	bool IsGameRecordingEnabled();
	float GetDefaultSafeZone();
	void FlashWindow();
	void SaveCurrentWindowState();
	void SaveWindowState(int ResX, int ResY, bool bFullScreen, bool bBorderless, bool bVsync);
	bool GetAvailableResolutions(TArray<struct FIntPoint>* Resolutions);
	bool GetAvailableResolutionsStr(TArray<struct FString>* Resolutions);
	bool IsBorderlessViewport();
	struct FIntPoint GetViewportSizePoint();
	struct FString GetViewportSizeStr();
	class UGameViewportClient_X* STATIC_GetInstance();
	void EventPrimaryPlayerChange(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	void EventNotifyConnectionError(const struct FString& Title, const struct FString& Message);
	void EventLocalPlayerLeave(class ULocalPlayer* OldPlayer);
	void EventLocalPlayerJoin(class ULocalPlayer* NewPlayer);
};


// Class ProjectX.GFxDataRow_X
// 0x0018 (0x0054 - 0x003C)
class UGFxDataRow_X : public UObject
{
public:
	struct FName                                       TableName;                                                // 0x003C(0x0008) (CPF_Edit, CPF_Const)
	class UClass*                                      ProxyClass;                                               // 0x0044(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      bLevelTransitionPersistent : 1;                           // 0x0048(0x0004) (CPF_Edit)
	class UObject*                                     ProxyObject;                                              // 0x004C(0x0004) (CPF_Const, CPF_Transient)
	class UGFxShell_X*                                 Shell;                                                    // 0x0050(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataRow_X");
		return ptr;
	}


	class UGFxObject* FlashEventObject();
	struct FString FlashEventString();
	float FlashEventFloat();
	int FlashEventInt();
	void FlashEventVoid();
	void SetProxy(class UObject* InProxyObject);
	void OnRemoved();
	void OnShellSet();
};


// Class ProjectX.GFxDataSingleton_X
// 0x0000 (0x0054 - 0x0054)
class UGFxDataSingleton_X : public UGFxDataRow_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataSingleton_X");
		return ptr;
	}

};


// Class ProjectX.GFxShell_X
// 0x0060 (0x00B4 - 0x0054)
class UGFxShell_X : public UGFxDataSingleton_X
{
public:
	class UGFxMoviePlayer_X*                           MoviePlayerArchetype;                                     // 0x0054(0x0004) (CPF_Edit)
	class ULocalPlayer_X*                              Player;                                                   // 0x0058(0x0004) (CPF_Const, CPF_Transient)
	unsigned long                                      bGamePaused : 1;                                          // 0x005C(0x0004) (CPF_DataBinding)
	unsigned long                                      bWasFullscreen : 1;                                       // 0x005C(0x0004) (CPF_Const, CPF_Transient)
	float                                              LeftX;                                                    // 0x0060(0x0004) (CPF_DataBinding)
	float                                              LeftY;                                                    // 0x0064(0x0004) (CPF_DataBinding)
	float                                              RightX;                                                   // 0x0068(0x0004) (CPF_DataBinding)
	float                                              RightY;                                                   // 0x006C(0x0004) (CPF_DataBinding)
	TArray<class UGFxMoviePlayer_X*>                   Movies;                                                   // 0x0070(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	class UGFxDataStore_X*                             DataStore;                                                // 0x007C(0x0004) (CPF_Const, CPF_ExportObject, CPF_Component, CPF_EditInline)
	TEnumAsByte<EUINavigationMode>                     NavigationMode;                                           // 0x0080(0x0001) (CPF_Transient)
	TEnumAsByte<EInputPlatformType>                    InputType;                                                // 0x0081(0x0001) (CPF_Const, CPF_Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;                     // 0x0084(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInputTypeChanged__Delegate;                        // 0x0094(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedInput__Delegate;                           // 0x00A4(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxShell_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMouseKeyPressed(const struct FName& Key, bool bPressed);
	void SetAllowAnyPlayerInput(bool bAllow);
	void HandlePauseChanged();
	void OnShowKeyboardCanceled();
	void OnShowKeyboardComplete(const struct FString& NewText);
	void HandleShowKeyboardComplete(const struct FString& NewText, bool bCanceled);
	struct FString PasteFromClipboard();
	void CopyToClipboard(const struct FString& ClipboardText);
	void HideKeyboard();
	bool ShowKeyboard(const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, const struct FString& DefaultText, int MaxLength);
	void SetGamePaused(bool bPaused);
	void ExitToMainMenu();
	void ExitGame();
	void HandleMovieInputCaptureChanged(class UGFxMoviePlayer_X* MoviePlayer);
	void TriggerDataCallbacks();
	void Tick(float DeltaTime);
	void OnMovieClosed(class UGFxMoviePlayer_X* Movie);
	void OnMovieStarted(class UGFxMoviePlayer_X* Movie);
	void StopMovie(class UGFxMoviePlayer_X* Movie);
	void StartMovie(class UGFxMoviePlayer_X* Movie);
	void Stop();
	void OnStart();
	void Start(class ULocalPlayer_X* InPlayer);
	void EventReceivedInput(class UGFxShell_X* InShell);
	void EventInputTypeChanged(class UGFxShell_X* InShell);
	void EventInputCaptureChanged(class UGFxShell_X* InShell);
};


// Class ProjectX.GFxDataStore_X
// 0x0058 (0x00A0 - 0x0048)
class UGFxDataStore_X : public UComponent
{
public:
	TArray<struct FGFxDataStoreTable>                  Tables;                                                   // 0x0048(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FGFxDirtyTable>                      DirtyTables;                                              // 0x0054(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FMap_Mirror                                 ObjectNameToTable;                                        // 0x0060(0x003C) (CPF_Const, CPF_Native, CPF_Transient)
	unsigned long                                      bDebugGetValue : 1;                                       // 0x009C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataStore_X");
		return ptr;
	}


	void ExportFakeData(const struct FName& TableName);
	void PrintData(const struct FName& TableName);
	int GetObjectRow(class UGFxDataRow_X* O);
	void AllObjects(class UClass* ObjClass, class UGFxDataRow_X** OutObject, int* Row);
	class UGFxDataRow_X* GetObject(class UClass* ObjClass, int Row);
	void RemoveObject(class UGFxDataRow_X* O);
	void BindObject(class UGFxDataRow_X* Object, int Row);
	class UGFxDataRow_X* CreateObject(class UClass* ObjClass, int Row);
	void RemoveAllObjects(class UClass* ObjClass);
	void SetObjectCount(class UClass* ObjClass, int Count);
	int GetObjectCount(class UClass* ObjClass);
	void EmptyTables();
	void EmptyTable(const struct FName& Table);
	void RemoveRow(const struct FName& Table, int Row);
	void SetRowCount(const struct FName& Table, int Count);
	int GetRowCount(const struct FName& Table);
	struct FASValue GetValue(const struct FName& Table, int Row, const struct FName& Column);
	void SetASValue(const struct FName& Table, int Row, const struct FName& Column, struct FASValue* Value);
	void SetTextureValue(const struct FName& Table, int Row, const struct FName& Column, class UTexture* Value);
	void SetStringValue(const struct FName& Table, int Row, const struct FName& Column, const struct FString& Value);
	void SetQWordValue(const struct FName& Table, int Row, const struct FName& Column);
	void SetFloatValue(const struct FName& Table, int Row, const struct FName& Column, float Value);
	void SetIntValue(const struct FName& Table, int Row, const struct FName& Column, int Value);
	void SetBoolValue(const struct FName& Table, int Row, const struct FName& Column, bool Value);
	void SetDirty(const struct FName& TableName, int RowNum, const struct FName& Value);
};


// Class ProjectX.GFxEngine_X
// 0x0054 (0x0110 - 0x00BC)
class UGFxEngine_X : public UGFxEngine
{
public:
	class UGFxShell_X*                                 ShellArchetype;                                           // 0x00BC(0x0004)
	TArray<class UGFxShell_X*>                         Shells;                                                   // 0x00C0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FDirtyObject>                        DirtyObjects;                                             // 0x00CC(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bAnyShellHasInput : 1;                                    // 0x00D8(0x0004) (CPF_Transient)
	TEnumAsByte<EInputPlatformType>                    AvailableGamepadType;                                     // 0x00DC(0x0001) (CPF_Const, CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	struct FScriptDelegate                             __EventShellCreated__Delegate;                            // 0x00E0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAvailableGamepadTypeChanged__Delegate;             // 0x00F0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameSessionEnded__Delegate;                        // 0x0100(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxEngine_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnGameSessionEnded();
	void STATIC_GetFlashKey(const struct FName& UnrealKey, int* KeyCode, int* MouseButton);
	void UpdateHardwareMouseCursorVisibility();
	void HandleShellInputTypeChanged(class UGFxShell_X* InShell);
	void HandleGFxEnabledChanged(class UGameViewportClient* GVC);
	void HandleShellInputCaptureChanged(class UGFxShell_X* InShell);
	void FlushDirtyObjects();
	void Tick(float DeltaTime);
	class UGFxShell_X* FindShell(class ULocalPlayer_X* ForPlayer);
	void OnShellDestroyed(class UGFxShell_X* Shell);
	void DestroyShell(class ULocalPlayer* ForPlayer);
	class UGFxShell_X* CreateShell();
	class UGFxShell_X* GetShell(class ULocalPlayer_X* ForPlayer);
	void SetShellArchetype(class UGFxShell_X* InShellArchetype);
	class UGFxEngine_X* STATIC_GetInstance(class UClass* Type);
	void EventGameSessionEnded();
	void EventAvailableGamepadTypeChanged(class UGFxEngine_X* Engine);
	void EventShellCreated(class UGFxEngine_X* Engine, class UGFxShell_X* Shell);
};


// Class ProjectX.GFxMoviePlayer_X
// 0x00D0 (0x023C - 0x016C)
class UGFxMoviePlayer_X : public UGFxMoviePlayer
{
public:
	class UGFxShell_X*                                 Shell;                                                    // 0x016C(0x0004) (CPF_Const, CPF_Transient)
	class UGFxDataStore_X*                             DataStore;                                                // 0x0170(0x0004) (CPF_Const, CPF_ExportObject, CPF_Transient, CPF_Component, CPF_EditInline)
	TArray<class UGFxDataCallback_X*>                  DataCallbacks;                                            // 0x0174(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<class UGFxObjectReference_X*>               ActionScriptClasses;                                      // 0x0180(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FMap_Mirror                                 ActionScriptClassMap;                                     // 0x018C(0x003C) (CPF_Const, CPF_Native, CPF_Transient)
	TArray<struct FString>                             CursorScenes;                                             // 0x01C8(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FString>                             InputScenes;                                              // 0x01D4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FString>                             CaptureScenes;                                            // 0x01E0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FName                                       DebugTableCallback;                                       // 0x01EC(0x0008) (CPF_Edit)
	struct FName                                       DebugColumnCallback;                                      // 0x01F4(0x0008) (CPF_Edit)
	class UGFxObjectReference_X*                       ShellHooksClass;                                          // 0x01FC(0x0004) (CPF_Const, CPF_Transient)
	TArray<class UGFxSoundPack_X*>                     LoadedSoundPacks;                                         // 0x0200(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStarted__Delegate;                                 // 0x020C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClosed__Delegate;                                  // 0x021C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;                     // 0x022C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxMoviePlayer_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetAllowAnyPlayerInput(bool bAllow);
	bool PopString(const struct FString& Value, TArray<struct FString>* Items);
	void SetGlobalRTCP(const struct FName& Key, float Value);
	void StopAllSounds(class UGFxSoundPack_X* SoundPack);
	void StopSound(const struct FName& EventName);
	void PlaySound(const struct FName& EventName);
	void PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName);
	class AActor* GetSoundSource();
	void UpdateCursorVisibility();
	void SetCaptureAllInput(bool bNewCaptureInput, const struct FString& SceneName);
	void SetReceiveInput(bool bNewReceiveInput, const struct FString& SceneName);
	void SetCursorVisible(bool bVisible, const struct FString& SceneName);
	void InitShellHooks();
	void InitDataHooks();
	void OnClose();
	bool Start(bool StartPaused);
	void EventInputCaptureChanged(class UGFxMoviePlayer_X* Player);
	void EventClosed(class UGFxMoviePlayer_X* Player);
	void EventStarted(class UGFxMoviePlayer_X* Player);
};


// Class ProjectX.GFxObjectReference_X
// 0x0030 (0x006C - 0x003C)
class UGFxObjectReference_X : public UObject
{
public:
	int                                                Value[0xC];                                               // 0x003C(0x0004) (CPF_Const, CPF_Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxObjectReference_X");
		return ptr;
	}

};


// Class ProjectX.GFxDataCallback_X
// 0x0015 (0x0081 - 0x006C)
class UGFxDataCallback_X : public UGFxObjectReference_X
{
public:
	struct FName                                       Table;                                                    // 0x006C(0x0008) (CPF_Transient)
	int                                                Row;                                                      // 0x0074(0x0004) (CPF_Transient)
	struct FName                                       Column;                                                   // 0x0078(0x0008) (CPF_Transient)
	TEnumAsByte<EDataCallbackType>                     Type;                                                     // 0x0080(0x0001) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxDataCallback_X");
		return ptr;
	}

};


// Class ProjectX.GFxSoundPack_X
// 0x0018 (0x0054 - 0x003C)
class UGFxSoundPack_X : public UObject
{
public:
	struct FString                                     ExportClassName;                                          // 0x003C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FSoundPackSoundRef>                  Sounds;                                                   // 0x0048(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxSoundPack_X");
		return ptr;
	}


	bool ToggleSound(int Idx, class AActor* Target, bool bPlay);
	void StopAll(class AActor* Target);
	bool StopSound(const struct FName& SoundName, class AActor* Target);
	bool PlaySound(const struct FName& SoundName, class AActor* Target);
};


// Class ProjectX.InterpComponent_X
// 0x00DF (0x0144 - 0x0065)
class UInterpComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB];                                       // 0x0065(0x000B) MISSED OFFSET
	struct FMatrix                                     InterpStart;                                              // 0x0070(0x0040) (CPF_Const, CPF_Transient)
	struct FMatrix                                     InterpEnd;                                                // 0x00B0(0x0040) (CPF_Const, CPF_Transient)
	struct FMatrix                                     InterpLocalToWorld;                                       // 0x00F0(0x0040) (CPF_Const, CPF_Transient)
	float                                              InterpStartTime;                                          // 0x0130(0x0004) (CPF_Transient)
	float                                              InterpEndTime;                                            // 0x0134(0x0004) (CPF_Transient)
	TArray<struct FAttachment>                         Attachments;                                              // 0x0138(0x000C) (CPF_Const, CPF_Component, CPF_DuplicateTransient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.InterpComponent_X");
		return ptr;
	}


	void DetachComponent(class UActorComponent* Component);
	void AttachComponent(class UActorComponent* Component, const struct FVector& RelativeLocation, const struct FRotator& RelativeRotation, const struct FVector& RelativeScale);
};


// Class ProjectX.JsonTests_X
// 0x0000 (0x003C - 0x003C)
class UJsonTests_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.JsonTests_X");
		return ptr;
	}


	bool STATIC_ToJsonAndBack(class UObject* Target);
	void STATIC_RunJsonTests(int RandomSeed);
};


// Class ProjectX.LanBeacon_X
// 0x0020 (0x0068 - 0x0048)
class ULanBeacon_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0048(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	struct FPointer                                    LanBeacon;                                                // 0x004C(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	int                                                LanAnnouncePort;                                          // 0x0050(0x0004) (CPF_Const, CPF_Config)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0054(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LanBeacon_X.QueryNonce
	TEnumAsByte<ELanBeaconState>                       BeaconState;                                              // 0x005C(0x0001) (CPF_Const)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	class UOnlineMessageComponent_X*                   MessageComponent;                                         // 0x0060(0x0004) (CPF_Const, CPF_ExportObject, CPF_Component, CPF_EditInline)
	int                                                MaxPacketSize;                                            // 0x0064(0x0004) (CPF_Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanBeacon_X");
		return ptr;
	}


	bool BroadcastMessage(class UObject* Message);
	bool BroadcastData(TArray<unsigned char>* Data);
	void Stop();
	bool Start(TEnumAsByte<ELanBeaconState> InitialState);
};


// Class ProjectX.LensFlareComponent_X
// 0x005C (0x0290 - 0x0234)
class ULensFlareComponent_X : public ULensFlareComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                                   // 0x0234(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	struct FRawDistributionFloat                       AlphaOverTime;                                            // 0x0238(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionVector                      ColorOverTime;                                            // 0x0254(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	TArray<struct FLensFlareFloatParamCurve>           MaterialFloatParamValuesOverTime;                         // 0x0270(0x000C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FName                                       SourceColorParamName;                                     // 0x027C(0x0008) (CPF_Edit, CPF_Const)
	struct FName                                       SourceColorAlphaParamName;                                // 0x0284(0x0008) (CPF_Edit, CPF_Const)
	float                                              AttachTime;                                               // 0x028C(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LensFlareComponent_X");
		return ptr;
	}


	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
};


// Class ProjectX.LocalCache_X
// 0x0058 (0x0094 - 0x003C)
class ULocalCache_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	TArray<struct FPointer>                            ImportTasks;                                              // 0x0040(0x000C) (CPF_Native, CPF_Transient, CPF_AlwaysInit)
	TArray<struct FCacheImportCallbackData>            ImportCallbacks;                                          // 0x004C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FPointer>                            ExportTasks;                                              // 0x0058(0x000C) (CPF_Native, CPF_Transient, CPF_AlwaysInit)
	TArray<struct FCacheExportCallbackData>            ExportCallbacks;                                          // 0x0064(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bDebug : 1;                                               // 0x0070(0x0004) (CPF_Edit)
	struct FScriptDelegate                             __EventImportFinished__Delegate;                          // 0x0074(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventExportFinished__Delegate;                          // 0x0084(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalCache_X");
		return ptr;
	}


	bool HasActiveTasks();
	void ExportObjectAsync(class UObject* CacheObject, const struct FString& Path, const struct FScriptDelegate& Callback);
	void ImportObjectAsync(class UObject* CacheObject, const struct FString& Path, const struct FScriptDelegate& Callback);
	class UError* ImportObject(class UObject* CacheObject, const struct FString& Path);
	void EventExportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void EventImportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
};


// Class ProjectX.LocalPlayer_X
// 0x0004 (0x03F8 - 0x03F4)
class ULocalPlayer_X : public ULocalPlayer
{
public:
	class UOnlinePlayer_X*                             OnlinePlayer;                                             // 0x03F4(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalPlayer_X");
		return ptr;
	}


	bool SpawnPlayActor(const struct FString& URL, struct FString* OutError);
	void NotifyServerConnectionOpen();
	void OnRemoved();
	void OnCreated();
};


// Class ProjectX.MapFlythroughProfiler_X
// 0x0048 (0x0258 - 0x0210)
class AMapFlythroughProfiler_X : public AActor
{
public:
	float                                              Accel;                                                    // 0x0210(0x0004) (CPF_Edit)
	float                                              TurnRate;                                                 // 0x0214(0x0004) (CPF_Edit)
	float                                              ProfileTime;                                              // 0x0218(0x0004) (CPF_Edit)
	float                                              FinishTime;                                               // 0x021C(0x0004) (CPF_Transient)
	float                                              Speed;                                                    // 0x0220(0x0004) (CPF_Transient)
	struct FRenderProfile                              Profile;                                                  // 0x0224(0x0024) (CPF_Transient)
	struct FScriptDelegate                             __EventFinished__Delegate;                                // 0x0248(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MapFlythroughProfiler_X");
		return ptr;
	}


	void SetupPlayers();
	void PostBeginPlay();
	void EventFinished(class AMapFlythroughProfiler_X* Profiler);
};


// Class ProjectX.ObjectListComponent_X
// 0x0028 (0x0070 - 0x0048)
class UObjectListComponent_X : public UComponent
{
public:
	TArray<class UObject*>                             Objects;                                                  // 0x0048(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FObjectListListener>                 Listeners;                                                // 0x0054(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __ObjectListenerCallback__Delegate;                       // 0x0060(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ObjectListComponent_X");
		return ptr;
	}


	int GetCount();
	void Merge(TArray<class UObject*> NewList);
	void RemoveObject(class UObject* NewObj);
	void AddObject(class UObject* NewObj);
	void RemoveListener(class UObject* Listener, class UClass* ObjClass);
	void AddListener(const struct FScriptDelegate& OnAdd, const struct FScriptDelegate& OnRemove, class UClass* ObjClass);
	void AllObjects(class UClass* BaseClass, class UClass* InterfaceClass, class UObject** Obj);
	void ObjectListenerCallback(class UObject* Obj);
};


// Class ProjectX.OnlineConfig_X
// 0x0010 (0x004C - 0x003C)
class UOnlineConfig_X : public UObject
{
public:
	unsigned long                                      bAllowOnServer : 1;                                       // 0x003C(0x0004) (CPF_Edit)
	TArray<struct FModifierSubscription>               AllSubscriptions;                                         // 0x0040(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineConfig_X");
		return ptr;
	}


	void UnsubscribeModifiers();
	void ModifyObjects(class UClass* ObjClass, const struct FScriptDelegate& ApplyCallback, const struct FScriptDelegate& ResetCallback);
	void Undo();
	void Apply();
};


// Class ProjectX.CrossplayConfig_X
// 0x000C (0x0058 - 0x004C)
class UCrossplayConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FCrossplayGroup>                     Groups;                                                   // 0x004C(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CrossplayConfig_X");
		return ptr;
	}


	bool PlatformsShareGroup(TEnumAsByte<EOnlinePlatform> Platform1, TEnumAsByte<EOnlinePlatform> Platform2);
};


// Class ProjectX.PhysicsConfig_X
// 0x004C (0x0098 - 0x004C)
class UPhysicsConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FString>                             EnabledFeatures;                                          // 0x004C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FString>                             DisabledFeatures;                                         // 0x0058(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FCarInteractionConfig                       CarInteractionSettings;                                   // 0x0064(0x0020)
	struct FSuperSonicConfig                           SuperSonicSettings;                                       // 0x0084(0x000C)
	unsigned long                                      bUseAckermannSteering : 1;                                // 0x0090(0x0004)
	unsigned long                                      bPredictContacts : 1;                                     // 0x0090(0x0004)
	unsigned long                                      bEnableSimTimeScaling : 1;                                // 0x0090(0x0004)
	unsigned long                                      bQuantizePhysics : 1;                                     // 0x0090(0x0004)
	float                                              FixedAdjustSimTimeRate;                                   // 0x0094(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PhysicsConfig_X");
		return ptr;
	}


	void DisableFeature(const struct FString& Feature);
	void EnableFeature(const struct FString& Feature);
	void Reset();
	void Apply();
};


// Class ProjectX.PsyNetConfig_X
// 0x001C (0x0068 - 0x004C)
class UPsyNetConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bAllowPerCon : 1;                                         // 0x004C(0x0004) (CPF_Edit)
	unsigned long                                      bAllowPsyNetParty : 1;                                    // 0x004C(0x0004) (CPF_Edit)
	unsigned long                                      bSendPingMessage : 1;                                     // 0x004C(0x0004) (CPF_Edit)
	unsigned long                                      bAllowServerBacktraceUploads : 1;                         // 0x004C(0x0004) (CPF_Edit)
	unsigned long                                      bAllowClientBacktraceUploads : 1;                         // 0x004C(0x0004) (CPF_Edit)
	int                                                PerConMaxInvalidMessages;                                 // 0x0050(0x0004) (CPF_Edit)
	int                                                PerConMaxDisconnects;                                     // 0x0054(0x0004) (CPF_Edit)
	int                                                PerConMaxErrors;                                          // 0x0058(0x0004) (CPF_Edit)
	float                                              PerConErrorWindow;                                        // 0x005C(0x0004) (CPF_Edit)
	float                                              PerConTimeout;                                            // 0x0060(0x0004) (CPF_Edit)
	float                                              PerConPingInterval;                                       // 0x0064(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetConfig_X");
		return ptr;
	}

};


// Class ProjectX.RPCConfig_X
// 0x0018 (0x0064 - 0x004C)
class URPCConfig_X : public UOnlineConfig_X
{
public:
	TArray<class UClass*>                              DisabledClasses;                                          // 0x004C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FString>                             DisabledServices;                                         // 0x0058(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPCConfig_X");
		return ptr;
	}


	bool IsRPCDisabled(class URPC_X* RPC);
};


// Class ProjectX.OnlineGameSearch_X
// 0x0030 (0x0124 - 0x00F4)
class UOnlineGameSearch_X : public UOnlineGameSearch
{
public:
	TArray<struct FString>                             InclusiveGameTagsArray;                                   // 0x00F4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FString>                             ExclusiveGameTagsArray;                                   // 0x0100(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     MapName;                                                  // 0x010C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     GameTagsDelimiter;                                        // 0x0118(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameSearch_X");
		return ptr;
	}


	bool GetStringProperty(int PropertyId, struct FString* Value);
	struct FString GetExclusiveGameTags();
	struct FString GetInclusiveGameTags();
	void SetMap(const struct FString& inMapName);
	void SetExclusiveGameTags(TArray<struct FString> inGameTagsArray);
	void SetInclusiveGameTags(TArray<struct FString> inGameTagsArray);
};


// Class ProjectX.OnlineGameSettings_X
// 0x0038 (0x00A4 - 0x006C)
class UOnlineGameSettings_X : public USettings
{
public:
	int                                                NumPublicConnections;                                     // 0x006C(0x0004)
	int                                                NumOpenPublicConnections;                                 // 0x0070(0x0004)
	TArray<class UGameSettingCategory_X*>              GameSettingCategories;                                    // 0x0074(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bOffline : 1;                                             // 0x0080(0x0004) (CPF_Transient)
	int                                                MinimumPlayersRequired;                                   // 0x0084(0x0004)
	int                                                NumSecondsWaitingForPlayers;                              // 0x0088(0x0004)
	int                                                SearchScore;                                              // 0x008C(0x0004)
	float                                              LogTime;                                                  // 0x0090(0x0004) (CPF_Transient, CPF_DataBinding)
	struct FScriptDelegate                             __EventNumPlayersUpdated__Delegate;                       // 0x0094(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameSettings_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool Equals(class UOnlineGameSettings_X* OtherGameSettings);
	void CalculateMinAndMaxNumPlayers();
	void CopyFrom(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingPlaylist_X* GetPlaylist();
	bool IsValid();
	void RemoveMismatchedTags(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingCategory_X* GetGameSettingCategoryByName(const struct FName& CategoryName);
	void SetIntProperty(int PropertyId, int Value);
	void SetGameTag(const struct FName& NewGameTag);
	void UpdateFromURL(class AGameInfo* Game, struct FString* URL);
	bool HasSetting(const struct FName& SettingName);
	void GetActiveGameSettings(TArray<class UGameSetting_X*>* GameSettings);
	class UGameSetting_X* GetGameSetting(const struct FString& SettingName, class UGameSettingCategory_X** Category);
	struct FString GetGameTags();
	bool GetStringProperty(int PropertyId, struct FString* Value);
	void Init();
	void EventNumPlayersUpdated(class UOnlineGameSettings_X* GameSettings, int NewMinimumPlayersRequired);
};


// Class ProjectX.OnlineLegalText_X
// 0x0020 (0x0068 - 0x0048)
class UOnlineLegalText_X : public UComponent
{
public:
	struct FString                                     Folder;                                                   // 0x0048(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UCachedWebData_X*                            CachedData;                                               // 0x0054(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventNewText__Delegate;                                 // 0x0058(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineLegalText_X");
		return ptr;
	}


	void HandleWebText(class UCachedWebData_X* InCachedData);
	struct FString GetWebUrl();
	struct FString GetPlatformString();
	struct FString GetRelativeUrl();
	struct FString GetText();
	void Sync();
	void EventNewText(class UOnlineLegalText_X* Text);
};


// Class ProjectX.OnlineMessage_X
// 0x0000 (0x003C - 0x003C)
class UOnlineMessage_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineMessage_X");
		return ptr;
	}

};


// Class ProjectX.OnlineMessageComponent_X
// 0x0024 (0x006C - 0x0048)
class UOnlineMessageComponent_X : public UComponent
{
public:
	class USerializer_X*                               Serializer;                                               // 0x0048(0x0004) (CPF_Edit)
	class UCompression_X*                              Compressor;                                               // 0x004C(0x0004) (CPF_Edit)
	TArray<struct FOnlineMessageHandler>               MessageHandlers;                                          // 0x0050(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;                      // 0x005C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineMessageComponent_X");
		return ptr;
	}


	class UOnlineMessageComponent_X* EnableCompression(bool bEnabled);
	class UOnlineMessageComponent_X* SetSerializer(class USerializer_X* InSerializer);
	void InvokeHandlers(class UObject* Message);
	class UObject* DeserializeMessage(class UObject* MessageOuter, TArray<unsigned char>* Data);
	bool SerializeMessage(class UObject* Message, TArray<unsigned char>* OutData);
	class UOnlineMessage_X* CreateMessage(class UClass* MessageClass, class UObject* MessageOuter);
	void RemoveMessageHandler(const struct FScriptDelegate& Callback);
	void AddMessageHandler(class UClass* MessageClass, const struct FScriptDelegate& Callback);
	void MessageReceivedDelegate(class UOnlineMessageComponent_X* Component, class UObject* Message);
};


// Class ProjectX.ParameterDispenser_X
// 0x004C (0x0094 - 0x0048)
class UParameterDispenser_X : public UComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                                   // 0x0048(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	TArray<struct FNameParamPair>                      NameParams;                                               // 0x004C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FFloatParamPair>                     FloatParams;                                              // 0x0058(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FVectorParamPair>                    VectorParams;                                             // 0x0064(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FColorParamPair>                     ColorParams;                                              // 0x0070(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FActorParamPair>                     ActorParams;                                              // 0x007C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<TScriptInterface<class UISetParameter>>     AllComponents;                                            // 0x0088(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParameterDispenser_X");
		return ptr;
	}


	void Inherit(class UParameterDispenser_X* Other);
	void ResetMaterials();
	void ApplyAllParameters(const TScriptInterface<class UISetParameter>& ActorComp);
	class AActor* GetActorParameter(const struct FName& Key);
	void SetActorParameter(const struct FName& Key, class AActor* Value);
	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
	void RemoveComponent(const TScriptInterface<class UISetParameter>& ActorComp);
	void AddComponent(const TScriptInterface<class UISetParameter>& ActorComp);
};


// Class ProjectX.ParticleModuleVelocitySurfaceNormal_X
// 0x0024 (0x0070 - 0x004C)
class UParticleModuleVelocitySurfaceNormal_X : public UParticleModuleVelocityBase
{
public:
	struct FName                                       MeshActorParamName;                                       // 0x004C(0x0008) (CPF_Edit)
	struct FRawDistributionFloat                       VelocityMultiplier;                                       // 0x0054(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleVelocitySurfaceNormal_X");
		return ptr;
	}

};


// Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X
// 0x0000 (0x0070 - 0x0070)
class UParticleModuleVelocitySurfaceNormalStatic_X : public UParticleModuleVelocitySurfaceNormal_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X");
		return ptr;
	}

};


// Class ProjectX.ParticleModuleWind_X
// 0x0038 (0x0080 - 0x0048)
class UParticleModuleWind_X : public UParticleModuleWorldForcesBase
{
public:
	struct FRawDistributionFloat                       StrengthScaleOverLife;                                    // 0x0048(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	struct FRawDistributionFloat                       AccelerationOverLife;                                     // 0x0064(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ParticleModuleWind_X");
		return ptr;
	}

};


// Class ProjectX.Pawn_X
// 0x005C (0x04F0 - 0x0494)
class APawn_X : public APawn
{
public:
	float                                              GravityScale;                                             // 0x0494(0x0004) (CPF_Edit)
	class UDamageComponent_X*                          LegacyTakeDamageComponent;                                // 0x0498(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class AController*                                 PreviousController;                                       // 0x049C(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventTakeDamage__Delegate;                              // 0x04A0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventHealDamage__Delegate;                              // 0x04B0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDied__Delegate;                                    // 0x04C0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                               // 0x04D0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAnimEnd__Delegate;                                 // 0x04E0(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Pawn_X");
		return ptr;
	}


	bool IsSameTeam(class APawn* Other);
	void Destroyed();
	float GetGravityZ();
	void NotifyTakeHit_X(class UDamageComponent_X* Damage);
	void PlayDeath_X(class UDamageComponent_X* Damage);
	void PlayHit_X(class UDamageComponent_X* Damage);
	void OnDied(class UDamageComponent_X* Damage);
	bool Died_X(class AController* Killer, class UDamageComponent_X* Damage);
	void AdjustDamage_X(class UDamageComponent_X* Damage);
	void OnTakeDamage(class UDamageComponent_X* Damage);
	bool TakeDamage_X(class UDamageComponent_X* Damage);
	void OnHealDamage(int Amount);
	bool HealDamage(int Amount, class AController* Healer, class UClass* DamageType);
	void TakeDamage(int Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void Suicide();
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void PlayerChangedTeam();
	void OnControllerChanged();
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void UpdateControllerRef();
	void ReplicatedEvent(const struct FName& VarName);
	void EventAnimEnd(class APawn_X* ForPawn, class UAnimNodeSequence* SeqNode);
	void EventDestroyed(class APawn_X* Pawn);
	void EventDied(class APawn_X* Pawn, class UDamageComponent_X* Damage);
	void EventHealDamage(class APawn_X* Pawn, int Amount);
	void EventTakeDamage(class APawn_X* Pawn, class UDamageComponent_X* Damage);
};


// Class ProjectX.PerCon_X
// 0x0024 (0x0060 - 0x003C)
class UPerCon_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                                   // 0x003C(0x0004)
	TEnumAsByte<EPerConStatus>                         Status;                                                   // 0x0040(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FString                                     BrokenReason;                                             // 0x0044(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStatusChanged__Delegate;                           // 0x0050(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PerCon_X");
		return ptr;
	}


	void HandleConfigChanged();
	void SetStatus(TEnumAsByte<EPerConStatus> InStatus);
	void SetBroken(const struct FString& Reason);
	void SetEnabled(bool bEnable);
	void EventStatusChanged(class UPerCon_X* PerCon);
};


// Class ProjectX.PhysicalMaterialProperty_X
// 0x0008 (0x0044 - 0x003C)
class UPhysicalMaterialProperty_X : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       SurfaceType;                                              // 0x003C(0x0008) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PhysicalMaterialProperty_X");
		return ptr;
	}

};


// Class ProjectX.PlayerInput_X
// 0x00C0 (0x0330 - 0x0270)
class UPlayerInput_X : public UPlayerInput
{
public:
	float                                              GamepadDeadzone;                                          // 0x0270(0x0004) (CPF_Config)
	TArray<struct FGamepadDeadzoneSettings>            GamepadDeadzones;                                         // 0x0274(0x000C) (CPF_Config, CPF_NeedCtorLink)
	float                                              KeyboardAxisBlendTime;                                    // 0x0280(0x0004) (CPF_Config)
	TArray<struct FKeyboardAxisBlendSettings>          KeyboardAxisBlendTimes;                                   // 0x0284(0x000C) (CPF_Config, CPF_NeedCtorLink)
	struct FName                                       CurrentKey;                                               // 0x0290(0x0008) (CPF_Const, CPF_Transient)
	struct FName                                       ActiveDPadButton;                                         // 0x0298(0x0008) (CPF_Const, CPF_Transient)
	struct FName                                       LastDoubleTapKey;                                         // 0x02A0(0x0008) (CPF_Const, CPF_Transient)
	TArray<struct FName>                               DisabledActions;                                          // 0x02A8(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FName>                               DisabledActionsUntilNextUse;                              // 0x02B4(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FBindingAction>                      Actions;                                                  // 0x02C0(0x000C) (CPF_NeedCtorLink)
	class UControlPreset_X*                            ControlPreset;                                            // 0x02CC(0x0004)
	TArray<struct FPlayerBinding>                      PCBindings;                                               // 0x02D0(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FPlayerBinding>                      GamepadBindings;                                          // 0x02DC(0x000C) (CPF_Config, CPF_NeedCtorLink)
	float                                              TapTime;                                                  // 0x02E8(0x0004) (CPF_Config)
	float                                              DoubleTapTime;                                            // 0x02EC(0x0004) (CPF_Config)
	TArray<struct FPointer>                            HeldBindings;                                             // 0x02F0(0x000C) (CPF_Native, CPF_Transient)
	unsigned long                                      bDebugInput : 1;                                          // 0x02FC(0x0004) (CPF_Transient)
	unsigned long                                      bAbsorbCurrentKeyPress : 1;                               // 0x02FC(0x0004) (CPF_Const, CPF_Transient)
	struct FScriptDelegate                             __EventActionToggled__Delegate;                           // 0x0300(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBindingsChanged__Delegate;                         // 0x0310(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSetBindingsToUserBindings__Delegate;               // 0x0320(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlayerInput_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FName STATIC_GetKeyForActionArray(const struct FName& Action, TArray<struct FPlayerBinding>* PlayerBindings);
	void AbsorbCurrentKeyPress();
	void SetBindings(TArray<struct FPlayerBinding>* PC, TArray<struct FPlayerBinding>* Gamepad);
	void ClearDisableActionUntilNextUseList();
	void DisableActionUntilNextUse(const struct FName& ActionName);
	void ClearDisabledActions();
	void RemoveFromDisabledActions(const struct FName& ActionName);
	void AddToDisabledActions(const struct FName& ActionName);
	void ReleaseKey(const struct FName& Key, bool bTriggerEvents);
	struct FString STATIC_GetUIKey(const struct FName& KeyName);
	void InitInputSystem();
	void ResetInput();
	void SetControlPreset(const struct FName& PresetName);
	void EventSetBindingsToUserBindings(class UPlayerInput_X* PlayerInput);
	void EventBindingsChanged(class UPlayerInput_X* PlayerInput);
	void EventActionToggled(class UPlayerInput_X* PlayerInput, const struct FName& ActionName, bool bEnabled);
};


// Class ProjectX.PointLightComponent_X
// 0x0008 (0x0214 - 0x020C)
class UPointLightComponent_X : public UPointLightComponent
{
public:
	class UDistributionFloatConstantCurve*             BrightnessOverTime;                                       // 0x020C(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	float                                              AttachTime;                                               // 0x0210(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PointLightComponent_X");
		return ptr;
	}

};


// Class ProjectX.PsyNet_X
// 0x0070 (0x00AC - 0x003C)
class UPsyNet_X : public UObject
{
public:
	TEnumAsByte<EDatabaseEnvironment>                  Environment;                                              // 0x003C(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FString                                     EnvironmentName;                                          // 0x0040(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FPsyNetKeys                                 Keys;                                                     // 0x004C(0x0030) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	class UStringMap*                                  Headers;                                                  // 0x007C(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UPsyNetServiceSubscriptions_X*               Services;                                                 // 0x0080(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                                  // 0x0084(0x0004)
	float                                              LastReportCheaterTime;                                    // 0x0088(0x0004)
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedIn__Delegate;                   // 0x008C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedOut__Delegate;                  // 0x009C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNet_X");
		return ptr;
	}


	void STATIC_ReportCheater(const struct FUniqueNetId& Id, const struct FString& Reason);
	TArray<unsigned char> STATIC_DecodeBinaryDataFromString(const struct FString& S);
	struct FString STATIC_EncodeBinaryDataToString(TArray<unsigned char> B);
	struct FString STATIC_AssignQWordToString();
	void STATIC_AssignStringToQWord(const struct FString& S);
	float STATIC_GetRetryDelay(int Failures, TArray<float> Delays);
	void STATIC_ConnectionChangedIP(const struct FUniqueNetId& PlayerID);
	void STATIC_NetworkError(const struct FUniqueNetId& PlayerID, const struct FString& Reason);
	void InitHeaders();
	void NotifyWhenLoggedIn(const struct FScriptDelegate& LoginCallback, const struct FScriptDelegate& LogoutCallback);
	void SetPrimaryAuthedConnection(class UPsyNetConnection_X* Connection);
	void HandleConnectionChanged(class UPsyNetConnection_X* Connection);
	class UPsyNetConnection_X* GetPrimaryConnection();
	void HandleServiceExecuted(class UPsyNetServiceProvider_X* P, class UPsyNetClientService_X* Service);
	void InitServices();
	void Init();
	void Flush(float TimeoutSeconds);
	class URPC_X* STATIC_QueueRPC(class URPC_X* RPC);
	class URPC_X* STATIC_RPC(class UClass* RPCClass);
	class UPsyNet_X* STATIC_GetInstance();
	void EventPrimaryPlayerLoggedOut();
	void EventPrimaryPlayerLoggedIn();
};


// Class ProjectX.PsyNetClientService_X
// 0x0018 (0x0054 - 0x003C)
class UPsyNetClientService_X : public UObject
{
public:
	struct FString                                     Service;                                                  // 0x003C(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	int                                                Version;                                                  // 0x0048(0x0004) (CPF_Edit, CPF_Const)
	class UError*                                      Error;                                                    // 0x004C(0x0004) (CPF_Const)
	class UPsyNetConnection_X*                         Connection;                                               // 0x0050(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetClientService_X");
		return ptr;
	}


	void Execute();
	void SetError(class UError* InError);
};


// Class ProjectX.PsyNetClientServiceCollection_X
// 0x000C (0x0048 - 0x003C)
class UPsyNetClientServiceCollection_X : public UObject
{
public:
	TArray<class UPsyNetClientService_X*>              ServiceArchetypes;                                        // 0x003C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetClientServiceCollection_X");
		return ptr;
	}


	class UPsyNetClientService_X* GetServiceArchetype(const struct FString& ServiceName, int Version);
	void CollectServiceArchetypes();
	void Construct();
};


// Class ProjectX.PsyNetConnection_X
// 0x00AC (0x00E8 - 0x003C)
class UPsyNetConnection_X : public UObject
{
public:
	float                                              MaintenanceTime;                                          // 0x003C(0x0004) (CPF_Edit)
	class UPsyNet_X*                                   PsyNet;                                                   // 0x0040(0x0004)
	class UOnlineSubsystem*                            OnlineSub;                                                // 0x0044(0x0004)
	class UStringMap*                                  Headers;                                                  // 0x0048(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UPsyNetRequestQue_X*                         RequestQue;                                               // 0x004C(0x0004)
	class URPCQueue_X*                                 RPCQueue;                                                 // 0x0050(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UPsyNetServiceProvider_X*                    ServiceProvider;                                          // 0x0054(0x0004)
	class UPsyNetMessenger_X*                          Messenger;                                                // 0x0058(0x0004)
	class UPerCon_X*                                   PerCon;                                                   // 0x005C(0x0004)
	class UPerConMonitor_X*                            PerConMonitor;                                            // 0x0060(0x0004)
	class UPerConMetrics_X*                            PerConMetrics;                                            // 0x0064(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	unsigned long                                      bAuthorized : 1;                                          // 0x0068(0x0004)
	unsigned long                                      bConnected : 1;                                           // 0x0068(0x0004)
	unsigned long                                      bPerConConnected : 1;                                     // 0x0068(0x0004)
	unsigned long                                      bMonitorPerCon : 1;                                       // 0x0068(0x0004) (CPF_Const, CPF_Config)
	class UError*                                      DisabledError;                                            // 0x006C(0x0004)
	TArray<class UError*>                              DisabledErrorStack;                                       // 0x0070(0x000C) (CPF_NeedCtorLink)
	class UError*                                      MaintenanceError;                                         // 0x007C(0x0004)
	class UError*                                      DuplicateLoginError;                                      // 0x0080(0x0004)
	class UError*                                      NoInternetError;                                          // 0x0084(0x0004)
	struct FScriptDelegate                             __EventConnected__Delegate;                               // 0x0088(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                            // 0x0098(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConConnected__Delegate;                         // 0x00A8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConDisconnected__Delegate;                      // 0x00B8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEnabled__Delegate;                                 // 0x00C8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisabled__Delegate;                                // 0x00D8(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetConnection_X");
		return ptr;
	}


	void SendPingMessage();
	void WatchPerConConnection(const struct FScriptDelegate& OnConnected, const struct FScriptDelegate& OnDisconnected);
	void WatchConnection(const struct FScriptDelegate& OnConnected, const struct FScriptDelegate& OnDisconnected);
	void Dispose();
	void UpdateLinkConnection(bool bHasConnection);
	void ClearDuplicateLoginError();
	void OnDuplicateLogin();
	void HandleDuplicateLoginMessage(class UPsyNetClientService_X* Service);
	void HandleWebSocketDisconnect(class UPsyNetMessengerWebSocket_X* WS, int Code, const struct FString& Reason);
	void HandleWebSocketConnect(class UPsyNetMessengerWebSocket_X* WS);
	bool HasWebSocketConnection();
	void UpdateConnectionState();
	void ClearMaintenance();
	void HandleErrorRPC(class URPCQueue_X* InQueue, class URPC_X* InRPC, class UError* Error);
	class UError* UpdateDisabledError(class UError* Error, class UErrorType* Type, bool bIsError);
	void AddDisabledError(class UError* Error);
	void RemoveDisabledError(class UError* Error);
	void Flush(float TimeoutSeconds);
	class URPC_X* QueueRPC(class URPC_X* RPC);
	class URPC_X* RPC(class UClass* RPCClass);
	bool ProcessServiceCall(class UPsyNetMessage_X* Message);
	void ProcessMessage(class UPsyNetMessage_X* Message);
	void ReceiveMessage(class UPsyNetMessage_X* Message);
	class USendRequestTask* SendRequest(class UPsyNetMessage_X* Request);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void RemoveHeader(const struct FString& Key);
	void SetHeader(const struct FString& Key, const struct FString& Value);
	void SetAuthorized(bool bAuth);
	class UStringMap* BuildHandshakeHeaders();
	class UPsyNetMessenger_X* CreateWebSocketMessenger();
	class UPsyNetMessenger_X* CreateHttpMessenger();
	TEnumAsByte<EPsyNetTransportType> GetTransportType();
	void KillMessenger();
	void InitMessenger();
	void InitServiceProvider();
	void HandlePerConStatusChanged(class UPerCon_X* P);
	void InitPerCon();
	void InitRPCQueue();
	void InitRequestQue();
	void InitHeaders();
	void Construct();
	void EventDisabled(class UPsyNetConnection_X* Connection);
	void EventEnabled(class UPsyNetConnection_X* Connection);
	void EventPerConDisconnected(class UPsyNetConnection_X* Connection);
	void EventPerConConnected(class UPsyNetConnection_X* Connection);
	void EventDisconnected(class UPsyNetConnection_X* Connection);
	void EventConnected(class UPsyNetConnection_X* Connection);
};


// Class ProjectX.PsyNetErrorType_X
// 0x0000 (0x0048 - 0x0048)
class UPsyNetErrorType_X : public UErrorType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetErrorType_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetLocator_X
// 0x0028 (0x0064 - 0x003C)
class UPsyNetLocator_X : public UObject
{
public:
	struct FString                                     DevLocalURL;                                              // 0x003C(0x000C) (CPF_Edit, CPF_Const, CPF_Config, CPF_NeedCtorLink)
	struct FString                                     TestURL;                                                  // 0x0048(0x000C) (CPF_Edit, CPF_Const, CPF_Config, CPF_NeedCtorLink)
	struct FString                                     ProductionURL;                                            // 0x0054(0x000C) (CPF_Edit, CPF_Const, CPF_Config, CPF_NeedCtorLink)
	unsigned long                                      bUseEnvironmentURL : 1;                                   // 0x0060(0x0004) (CPF_Edit, CPF_Const, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetLocator_X");
		return ptr;
	}


	struct FString STATIC_GetURL(TEnumAsByte<EDatabaseEnvironment> Environment);
};


// Class ProjectX.PsyNetLocatorHttp_X
// 0x0000 (0x0064 - 0x0064)
class UPsyNetLocatorHttp_X : public UPsyNetLocator_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetLocatorHttp_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetLocatorWebSocket_X
// 0x0000 (0x0064 - 0x0064)
class UPsyNetLocatorWebSocket_X : public UPsyNetLocator_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetLocatorWebSocket_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetMessage_X
// 0x0010 (0x004C - 0x003C)
class UPsyNetMessage_X : public UObject
{
public:
	class UStringMap*                                  Headers;                                                  // 0x003C(0x0004) (CPF_Const, CPF_ExportObject, CPF_Component, CPF_EditInline)
	TArray<unsigned char>                              Body;                                                     // 0x0040(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessage_X");
		return ptr;
	}


	struct FString GetBodyText();
	void SetBodyText(const struct FString& Value);
	void SetBody(TArray<unsigned char>* Value);
};


// Class ProjectX.PsyNetMessenger_X
// 0x0010 (0x004C - 0x003C)
class UPsyNetMessenger_X : public UObject
{
public:
	struct FScriptDelegate                             __EventMessageReceived__Delegate;                         // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessenger_X");
		return ptr;
	}


	void Dispose();
	void EventMessageReceived(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void Connect();
};


// Class ProjectX.PsyNetMessengerHttp_X
// 0x000C (0x0058 - 0x004C)
class UPsyNetMessengerHttp_X : public UPsyNetMessenger_X
{
public:
	struct FString                                     URL;                                                      // 0x004C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessengerHttp_X");
		return ptr;
	}


	void CopyHeadersToMessage(class UWebRequest_X* From, class UPsyNetMessage_X* To);
	void CopyHeadersToRequest(class UPsyNetMessage_X* From, class UWebRequest_X* To);
	void HandleWebRequestComplete(const struct FString& PsyRequestID, class UWebRequest_X* Request, class UAsyncTask* Task);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void Init(TEnumAsByte<EDatabaseEnvironment> Environment);
};


// Class ProjectX.PsyNetMessengerWebSocket_X
// 0x007C (0x00C8 - 0x004C)
class UPsyNetMessengerWebSocket_X : public UPsyNetMessenger_X
{
public:
	float                                              MessageSendTimeout;                                       // 0x004C(0x0004) (CPF_Edit)
	class UStringMap*                                  HandshakeHeaders;                                         // 0x0050(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FString                                     URL;                                                      // 0x0054(0x000C) (CPF_NeedCtorLink)
	class UWebSocketConnection_X*                      Connection;                                               // 0x0060(0x0004)
	TArray<struct FQueuedPsyNetMessage>                QueuedMessages;                                           // 0x0064(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bAllowConnect : 1;                                        // 0x0070(0x0004)
	class UPsyNetConfig_X*                             PsyNetConfig;                                             // 0x0074(0x0004)
	struct FScriptDelegate                             __EventStartConnect__Delegate;                            // 0x0078(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStartConnectFail__Delegate;                        // 0x0088(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                               // 0x0098(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                            // 0x00A8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInvalidMessageReceived__Delegate;                  // 0x00B8(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMessengerWebSocket_X");
		return ptr;
	}


	void __PsyNetMessengerWebSocket_X__SendQueuedMessages_1(const struct FQueuedPsyNetMessage& QueuedMessage);
	void Dispose();
	void HandleReceivedBunch(class UTcpConnection* C);
	void SerializeMessage(class UPsyNetMessage_X* Message);
	void FailQueuedMessages(class UError* Error);
	void TimeoutQueuedMessages();
	void SendMessageWithTask(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void SendQueuedMessages();
	void QueueMessage(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void StripHandshakeHeaders(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void Reconnect();
	float GetReconnectDelay();
	void DelayReconnect();
	void HandleDisconnected(class UWebSocketConnection_X* InConnection);
	void HandleConnected(class UWebSocketConnection_X* InConnection);
	void Disconnect();
	void Connect();
	bool IsConnected();
	void Init(TEnumAsByte<EDatabaseEnvironment> Environment, class UStringMap* InHandshakeHeaders);
	void EventInvalidMessageReceived(class UPsyNetMessengerWebSocket_X* Messenger, const struct FString& MessageSubstring);
	void EventDisconnected(class UPsyNetMessengerWebSocket_X* Messenger, int Code, const struct FString& Reason);
	void EventConnected(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnectFail(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnect(class UPsyNetMessengerWebSocket_X* Messenger);
};


// Class ProjectX.PsyNetServiceSerializer_X
// 0x0000 (0x003C - 0x003C)
class UPsyNetServiceSerializer_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetServiceSerializer_X");
		return ptr;
	}


	struct FString STATIC_SerializeResponse(class UPsyNetClientService_X* Service);
	void STATIC_DeserializeRequest(const struct FString& JSON, class UPsyNetClientService_X* Service);
};


// Class ProjectX.PsyNetServiceSubscriptions_X
// 0x000C (0x0054 - 0x0048)
class UPsyNetServiceSubscriptions_X : public UComponent
{
public:
	TArray<struct FServiceSubscription>                Subscriptions;                                            // 0x0048(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetServiceSubscriptions_X");
		return ptr;
	}


	void NotifyServiceExecuted(class UPsyNetClientService_X* Service);
	void UnsubscribeAll(class UObject* Listener);
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* ServiceClass, const struct FScriptDelegate& Callback);
};


// Class ProjectX.PsyNetStaticData_X
// 0x0040 (0x0088 - 0x0048)
class UPsyNetStaticData_X : public UComponent
{
public:
	unsigned long                                      bDebug : 1;                                               // 0x0048(0x0004) (CPF_Edit)
	unsigned long                                      bVerifySignature : 1;                                     // 0x0048(0x0004) (CPF_Edit)
	unsigned long                                      bLoaded : 1;                                              // 0x0048(0x0004) (CPF_Transient)
	class UCacheTimer_X*                               CacheTimer;                                               // 0x004C(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UOnlineResource_X*                           WebData;                                                  // 0x0050(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	TArray<class UObject*>                             DefaultComponents;                                        // 0x0054(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<class UObject*>                             DownloadedObjects;                                        // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<class UObject*>                             RegisteredObjects;                                        // 0x006C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoaded__Delegate;                                  // 0x0078(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetStaticData_X");
		return ptr;
	}


	void UpdateRegisteredObjects();
	bool LoadFromUTF8(TArray<unsigned char>* SignedData);
	bool LoadFromSignedUTF8(TArray<unsigned char>* SignedData);
	void InstanceComponents();
	void HandleDataChanged(class UOnlineResource_X* Resource);
	void RetrySync();
	void HandleGetURLFail(class URPC_X* RPC);
	void HandleGetURL(class URPC_GetStaticDataURL_X* RPC);
	void Sync();
	void HandleCacheExpired(class UCacheTimer_X* Timer);
	void HandlePsyNetLogOut();
	void HandlePsyNetLogin();
	void Init();
	void EventLoaded(class UPsyNetStaticData_X* Data);
};


// Class ProjectX.RadialBlurComponent_X
// 0x0008 (0x00D8 - 0x00D0)
class URadialBlurComponent_X : public URadialBlurComponent
{
public:
	float                                              FadeTime;                                                 // 0x00D0(0x0004) (CPF_Edit)
	float                                              FadeFalloff;                                              // 0x00D4(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RadialBlurComponent_X");
		return ptr;
	}

};


// Class ProjectX.RandomStream_X
// 0x0008 (0x0044 - 0x003C)
class URandomStream_X : public UObject
{
public:
	struct FRandomStream_Mirror                        Stream;                                                   // 0x003C(0x0004) (CPF_Native)
	int                                                CurrentSeed;                                              // 0x0040(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RandomStream_X");
		return ptr;
	}


	void SetCurrentSeed(int NewSeed);
	float GetNextValue();
};


// Class ProjectX.RenderProfiler_X
// 0x002C (0x023C - 0x0210)
class ARenderProfiler_X : public AActor
{
public:
	float                                              TimePerPrimitive;                                         // 0x0210(0x0004) (CPF_Edit)
	TArray<struct FPrimitiveComponentProfile>          PrimitiveProfiles;                                        // 0x0214(0x000C) (CPF_Transient, CPF_Component, CPF_NeedCtorLink)
	int                                                CurrentIndex;                                             // 0x0220(0x0004) (CPF_Transient)
	unsigned long                                      bInclusive : 1;                                           // 0x0224(0x0004) (CPF_Transient)
	float                                              PrimitiveTime;                                            // 0x0228(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventFinished__Delegate;                                // 0x022C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RenderProfiler_X");
		return ptr;
	}


	void SetupPlayers();
	void PostBeginPlay();
	void EventFinished(class ARenderProfiler_X* Profiler);
};


// Class ProjectX.RPC_X
// 0x0060 (0x009C - 0x003C)
class URPC_X : public UObject
{
public:
	struct FString                                     Service;                                                  // 0x003C(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	int                                                Version;                                                  // 0x0048(0x0004) (CPF_Edit)
	TArray<float>                                      RetryDelays;                                              // 0x004C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bRetry : 1;                                               // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bAllowBatching : 1;                                       // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bRequiresAuth : 1;                                        // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bDisposed : 1;                                            // 0x0058(0x0004) (CPF_Transient)
	float                                              ServiceFailRetryDelay;                                    // 0x005C(0x0004) (CPF_Edit)
	TEnumAsByte<ERPCPriority>                          Priority;                                                 // 0x0060(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	class UError*                                      Error;                                                    // 0x0064(0x0004) (CPF_Const, CPF_Transient)
	class UAsyncTask*                                  Task;                                                     // 0x0068(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventSuccess__Delegate;                                 // 0x006C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFail__Delegate;                                    // 0x007C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventComplete__Delegate;                                // 0x008C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_X");
		return ptr;
	}


	class URPC_X* SetRequiresAuth(bool bRequired);
	void NotifySuccess();
	void NotifyError(class UError* InError);
	bool ShouldResendOnFail(class UError* InError);
	class UErrorType* OverrideErrorType(class UErrorType* ErrorType);
	void OnComplete();
	void OnFail();
	void OnSuccess();
	void Dispose();
	class UAsyncTask* CreateTask(const struct FScriptDelegate& InCallback);
	class URPC_X* NotifyOnComplete(const struct FScriptDelegate& Callback);
	class URPC_X* NotifyOnFail(const struct FScriptDelegate& Callback);
	class URPC_X* NotifyOnSuccess(const struct FScriptDelegate& Callback);
	class UObject* GetResponseObject();
	void EventComplete(class URPC_X* RPC);
	void EventFail(class URPC_X* RPC);
	void EventSuccess(class URPC_X* RPC);
};


// Class ProjectX.RPC_CrashReport_X
// 0x0000 (0x009C - 0x009C)
class URPC_CrashReport_X : public URPC_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CrashReport_X");
		return ptr;
	}

};


// Class ProjectX.RPC_RecordMetrics_X
// 0x0034 (0x00D0 - 0x009C)
class URPC_RecordMetrics_X : public URPC_X
{
public:
	struct FGuid                                       AppSessionID;                                             // 0x009C(0x0010)
	struct FGuid                                       LevelSessionID;                                           // 0x00AC(0x0010)
	float                                              CurrentTimeSeconds;                                       // 0x00BC(0x0004)
	int                                                FirstEventIndex;                                          // 0x00C0(0x0004)
	TArray<struct FMetricsEvent>                       Events;                                                   // 0x00C4(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RecordMetrics_X");
		return ptr;
	}

};


// Class ProjectX.RPCQueue_X
// 0x0098 (0x00E0 - 0x0048)
class URPCQueue_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0048(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	float                                              AuthTimeoutSeconds;                                       // 0x004C(0x0004) (CPF_Edit)
	int                                                MaxRPCsPerBatch;                                          // 0x0050(0x0004) (CPF_Edit)
	unsigned long                                      bSignRequest : 1;                                         // 0x0054(0x0004) (CPF_Edit)
	unsigned long                                      bVerifySignedResponse : 1;                                // 0x0054(0x0004) (CPF_Edit)
	unsigned long                                      bAuthorized : 1;                                          // 0x0054(0x0004)
	class URPCConfig_X*                                RPCConfig;                                                // 0x0058(0x0004) (CPF_Edit)
	TArray<struct FPendingRPC>                         PendingRPCs;                                              // 0x005C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<class URPCBatch_X*>                         PendingBatches;                                           // 0x0068(0x000C) (CPF_NeedCtorLink)
	struct FMap_Mirror                                 ServiceFailureDelayTimes;                                 // 0x0074(0x003C) (CPF_Const, CPF_Native)
	struct FScriptDelegate                             __EventRPCError__Delegate;                                // 0x00B0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBatchError__Delegate;                              // 0x00C0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SendRequestDelegate__Delegate;                          // 0x00D0(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPCQueue_X");
		return ptr;
	}


	void OnError(class URPC_X* RPC, class UError* Error);
	class UPsyNetMetrics_X* GetPsyNetMetrics();
	void RecordBatchMetrics(class URPCBatch_X* Batch);
	void HandleBatchComplete(class URPCBatch_X* Batch, class UPsyNetMessage_X* Response, class UError* Error);
	void CreateBatch(class UPsyNetMessage_X* Message, TArray<struct FPendingRPC>* BatchRPCs);
	void STATIC_SignatureMismatch(int ServiceID);
	void FailAllPending(class UError* Error);
	void FailPending(class URPC_X* RPC, class UError* Error);
	void TickReceive();
	void TickSend();
	void QueueRPC(class URPC_X* RPC);
	class USendRequestTask* SendRequestDelegate(class UPsyNetMessage_X* Message);
	void EventBatchError(class URPCQueue_X* RPCQueue, class UError* Error);
	void EventRPCError(class URPCQueue_X* RPCQueue, class URPC_X* RPC, class UError* Error);
};


// Class ProjectX.RPCBatch_X
// 0x0040 (0x007C - 0x003C)
class URPCBatch_X : public UObject
{
public:
	float                                              SendTime;                                                 // 0x003C(0x0004)
	TArray<struct FPendingRPC>                         Requests;                                                 // 0x0040(0x000C) (CPF_NeedCtorLink)
	TArray<struct FRPCResponse>                        Responses;                                                // 0x004C(0x000C) (CPF_NeedCtorLink)
	struct FRPCError                                   Error;                                                    // 0x0058(0x0018) (CPF_NeedCtorLink)
	class UPsyNetMessage_X*                            RequestMessage;                                           // 0x0070(0x0004)
	class UPsyNetMessage_X*                            ResponseMessage;                                          // 0x0074(0x0004)
	class UError*                                      ResponseError;                                            // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPCBatch_X");
		return ptr;
	}

};


// Class ProjectX.SeqAct_NonNativeUpdate_X
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_NonNativeUpdate_X : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqAct_NonNativeUpdate_X");
		return ptr;
	}


	bool Update(float dt);
};


// Class ProjectX.SequenceCondition_X
// 0x0000 (0x00E4 - 0x00E4)
class USequenceCondition_X : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SequenceCondition_X");
		return ptr;
	}


	void Activated();
};


// Class ProjectX.Serializer_X
// 0x0000 (0x003C - 0x003C)
class USerializer_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Serializer_X");
		return ptr;
	}


	void DeserializeObject(class UObject* Target, TArray<unsigned char>* InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>* OutData);
};


// Class ProjectX.JSONSerializer_X
// 0x0004 (0x0040 - 0x003C)
class UJSONSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bDebug : 1;                                               // 0x003C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.JSONSerializer_X");
		return ptr;
	}


	struct FString STATIC_func();
	void STATIC_DecodeObject(class UObject* Target, struct FString* Stream);
	void STATIC_EncodeObject(class UObject* Target, struct FString* Stream);
	void DeserializeObject(class UObject* Target, TArray<unsigned char>* InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>* OutData);
};


// Class ProjectX.ObjectSerializer_X
// 0x0004 (0x0040 - 0x003C)
class UObjectSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bPersistent : 1;                                          // 0x003C(0x0004) (CPF_Edit)
	unsigned long                                      bDebug : 1;                                               // 0x003C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ObjectSerializer_X");
		return ptr;
	}


	void DeserializeObject(class UObject* Target, TArray<unsigned char>* InData);
	void SerializeObject(class UObject* Target, TArray<unsigned char>* OutData);
};


// Class ProjectX.StateObject_X
// 0x0004 (0x0040 - 0x003C)
class UStateObject_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                               // 0x003C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.StateObject_X");
		return ptr;
	}


	void InitExecution();
	void Destroyed();
	void Destroy();
};


// Class ProjectX.TickableStateObject_X
// 0x0018 (0x0058 - 0x0040)
class UTickableStateObject_X : public UStateObject_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0040(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	unsigned long                                      bTickWhenGamePaused : 1;                                  // 0x0044(0x0004) (CPF_Edit)
	unsigned long                                      bAutoTick : 1;                                            // 0x0044(0x0004) (CPF_Edit, CPF_Const)
	TArray<struct FTimerData>                          Timers;                                                   // 0x0048(0x000C) (CPF_Const, CPF_NeedCtorLink)
	float                                              LatentFloat;                                              // 0x0054(0x0004) (CPF_Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TickableStateObject_X");
		return ptr;
	}


	void Sleep(float Seconds);
	void Tick(float DeltaTime);
	void ProcessState(float DeltaSeconds);
	void UpdateTimers(float DeltaSeconds);
	void NativeTick(float DeltaTime);
	void Destroy();
	void SetTickable(bool bTick);
	bool IsTimerActive(const struct FName& inTimerFunc, class UObject* inObj);
	void PauseTimer(bool bPause, const struct FName& inTimerFunc, class UObject* inObj);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(const struct FName& inTimerFunc, class UObject* inObj);
	void SetStateTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc);
	void SetTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc, class UObject* inObj);
};


// Class ProjectX.Online_X
// 0x0008 (0x0060 - 0x0058)
class UOnline_X : public UTickableStateObject_X
{
public:
	class UOnlineSubsystem*                            OnlineSub;                                                // 0x0058(0x0004) (CPF_Transient)
	class UPsyNet_X*                                   PsyNet;                                                   // 0x005C(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Online_X");
		return ptr;
	}


	struct FString STATIC_BuildAddress(const struct FString& Host, int Port, const struct FString& IP);
	bool IsInOnlineGame();
	bool IsInMainMenu();
	class AGRI_X* GetGRI();
	class AWorldInfo* GetWorldInfo();
	struct FUniqueNetId STATIC_CreateUniqueNetID(TEnumAsByte<EOnlinePlatform> Platform, const struct FString& PlatformName);
	bool STATIC_UniqueLobbyIDIsSet(const struct FUniqueLobbyId& InID);
	struct FUniqueLobbyId STATIC_StringToUniqueLobbyId(const struct FString& InID);
	struct FString STATIC_UniqueLobbyIdToString(const struct FUniqueLobbyId& InID);
	struct FUniqueNetId STATIC_GetUniqueNetIDWithoutSplitscreenID(const struct FUniqueNetId& Id);
	struct FUniqueNetId STATIC_GetPrimaryIDForGuest(const struct FUniqueNetId& InGuestID);
	bool STATIC_UniqueNetIDIsGuest(const struct FUniqueNetId& InID);
	bool STATIC_UniqueNetIDIsValid(const struct FUniqueNetId& InID);
	struct FUniqueNetId STATIC_StringToUniqueNetId(const struct FString& InID);
	struct FString STATIC_UniqueNetIdToString(const struct FUniqueNetId& InID);
	int STATIC_FindUniqueNetID(TArray<struct FUniqueNetId>* List, struct FUniqueNetId* Search);
	class UError* GetConnectionStatusError(int ErrorCode, class UError* FallbackError);
	void OnExit();
	void OnNewGame();
	void OnMainMenuOpened();
	void HandleGRISpawned(class AGRI_X* GRI);
	void OnInit();
	void Init(class UOnlineSubsystem* NewOnlineSubsystem);
};


// Class ProjectX.OnlineGame_Base_X
// 0x0080 (0x00E0 - 0x0060)
class UOnlineGame_Base_X : public UOnline_X
{
public:
	struct FString                                     OnlineSubPlayerInterfaceName;                             // 0x0060(0x000C) (CPF_Edit, CPF_Config, CPF_NeedCtorLink)
	struct FString                                     OnlineSubGameInterfaceName;                               // 0x006C(0x000C) (CPF_Edit, CPF_Config, CPF_NeedCtorLink)
	class UOnlineGameSettings_X*                       DefaultGameSettingsArchetype;                             // 0x0078(0x0004) (CPF_Edit)
	class UOnlineGameSettings_X*                       GameSettings;                                             // 0x007C(0x0004) (CPF_Transient)
	class UOnlineGamePlaylists_X*                      Playlists;                                                // 0x0080(0x0004) (CPF_Edit)
	class UOnlineImageDownloaderWeb_X*                 ImageDownloader;                                          // 0x0084(0x0004)
	class UOnlineGameDLC_X*                            DLC;                                                      // 0x0088(0x0004) (CPF_Edit)
	class UOnlineGameSkill_X*                          Skill;                                                    // 0x008C(0x0004) (CPF_Edit)
	class UOnlineGamePlayerTitles_X*                   PlayerTitles;                                             // 0x0090(0x0004) (CPF_Edit)
	struct FString                                     StartServerCommand;                                       // 0x0094(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	class UWebCache_X*                                 WebCache;                                                 // 0x00A0(0x0004)
	class UPsyNetStaticData_X*                         PsyNetStaticData;                                         // 0x00A4(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	unsigned long                                      bLockGameSettings : 1;                                    // 0x00A8(0x0004) (CPF_Transient)
	TEnumAsByte<EOnlineServerConnectionStatus>         CurrentConnectionStatus;                                  // 0x00AC(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	struct FString                                     ServerName;                                               // 0x00B0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     CachedOptions;                                            // 0x00BC(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UOnlineConfigDispatcher_X*                   OnlineConfigDispatcher;                                   // 0x00C8(0x0004) (CPF_Transient)
	class UOnlineGameWordFilter_X*                     WordFilter;                                               // 0x00CC(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventInternetConnectionChanged__Delegate;               // 0x00D0(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGame_Base_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool HasInternetConnection();
	int GetPort();
	struct FString GetExternalHostAddress(bool bWithPort);
	struct FString GetLocalHostAddress(bool bWithPort);
	void HandleInternetConnectionChanged(bool bConnected);
	void HandleConnectionStatusChanged(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	void SetDefaultSearchType(class UClass* OnlineSearchClass);
	void KickAllPlayers(const struct FString& Reason);
	void DelayedShutdownServer();
	void OnExit();
	int GetPlaylistPlayerCount(class UGameSettingPlaylist_X* Playlist);
	void OnNewSettingsChosen(int PlaylistId);
	void UpdateGameSettingsPlayerCount(int NumPlayers);
	void UpdateGameSettings(class UOnlineGameSettings_X* InGameSettings, const struct FString& Options);
	class UOnlineGameSettings_X* CreateOnlineGameSettings(const struct FString& Options);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void InitOnlineSubsystemInterfaces();
	void OnInit();
	void EventInternetConnectionChanged(bool bConnected);
};


// Class ProjectX.OnlineGame_X
// 0x009C (0x017C - 0x00E0)
class UOnlineGame_X : public UOnlineGame_Base_X
{
public:
	class UOnlineGameAccount_X*                        Account;                                                  // 0x00E0(0x0004) (CPF_Edit)
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                              // 0x00E4(0x0004) (CPF_Edit)
	class UOnlineGamePrivateMatch_X*                   PrivateMatch;                                             // 0x00E8(0x0004) (CPF_Edit)
	class UOnlineGameServerBrowser_X*                  ServerBrowser;                                            // 0x00EC(0x0004) (CPF_Edit)
	class UOnlineGameLanBrowser_X*                     LanBrowser;                                               // 0x00F0(0x0004) (CPF_Edit)
	class UOnlineGameLeaderboards_X*                   Leaderboards;                                             // 0x00F4(0x0004) (CPF_Edit)
	class UOnlineGamePopulation_X*                     Population;                                               // 0x00F8(0x0004) (CPF_Transient)
	class UOnlineGameCommunity_X*                      Community;                                                // 0x00FC(0x0004) (CPF_Transient)
	class UOnlineGameVoice_X*                          Voice;                                                    // 0x0100(0x0004) (CPF_Transient)
	class UOnlineGameParty_X*                          Party;                                                    // 0x0104(0x0004) (CPF_Edit)
	class UOnlineGameInvite_X*                         GameInvite;                                               // 0x0108(0x0004) (CPF_Edit)
	class UOnlineGameJoinGame_X*                       JoinGame;                                                 // 0x010C(0x0004) (CPF_Edit)
	class UOnlineGameRegions_X*                        Regions;                                                  // 0x0110(0x0004) (CPF_Edit)
	class UOnlineGamePrivileges_X*                     Privileges;                                               // 0x0114(0x0004)
	class UOnlineGameWordFilterProcessor_X*            WordFilterProcessor;                                      // 0x0118(0x0004) (CPF_Transient)
	class UOnlineGameVersion_X*                        GameVersion;                                              // 0x011C(0x0004) (CPF_Transient)
	class UOnlinePlayer_X*                             PlayerArchetype;                                          // 0x0120(0x0004) (CPF_Edit)
	TArray<class UOnlinePlayer_X*>                     OnlinePlayers;                                            // 0x0124(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UOnlineLegalText_X*                          Eula;                                                     // 0x0130(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UOnlineLegalText_X*                          PrivacyPolicy;                                            // 0x0134(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UOnlineLegalText_X*                          ToS;                                                      // 0x0138(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	unsigned long                                      bRequestPublicIP : 1;                                     // 0x013C(0x0004) (CPF_Config)
	struct FString                                     PublicIP;                                                 // 0x0140(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnectionError__Delegate;                         // 0x014C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerPsyNetLogin__Delegate;                       // 0x015C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerPsyNetLogout__Delegate;                      // 0x016C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGame_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void HandlePublicIPComplete(class URPC_GetPublicIP_X* RPC);
	void HandlePsyNetLogin(class UPsyNetConnection_X* Connection);
	void NotifyPlayerPsyNetLogout(const struct FScriptDelegate& Callback);
	void NotifyPlayerPsyNetLogin(const struct FScriptDelegate& Callback);
	bool IsSignedIn(int ControllerId);
	bool CheckUpToDate(class UError** Error);
	bool CheckNotTooYoung(class UError** Error);
	class UError* GetPsyNetLoginError(class UOnlinePlayer_X* OnlinePlayer);
	bool CheckPsyNetConnection(class UError** Error);
	bool ValidateUserOnlineAccount(class UError** Error);
	bool CheckInternetConnection(class UError** Error);
	bool IsOnlinePlayerID(const struct FUniqueNetId& PlayerID);
	class UOnlinePlayer_X* GetOnlinePlayerByID(const struct FUniqueNetId& PlayerID);
	void OnNewSettingsChosen(int PlaylistId);
	struct FUniqueNetId GetPrimaryPlayerID();
	class UOnlinePlayer_X* GetPrimaryPlayer();
	void RemoveOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void AddOnlinePlayer(class UOnlinePlayer_X* OnlinePlayer);
	class UOnlinePlayer_X* CreateOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void SetPlayedWith(const struct FUniqueNetId& PlayerID);
	void GetPlayerAvatar(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate, TEnumAsByte<EAvatarSize> Size);
	void ClearPendingAvatarDownloads();
	void SetVoiceVolume(float NewValue);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnMainMenuOpened();
	void HandlePlayerLogin(class UOnlinePlayer_X* OnlinePlayer, class UError* Error);
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	bool IsLoggedInToPsyNet(class UOnlinePlayer_X* OnlinePlayer);
	void OnInit();
	void EventPlayerPsyNetLogout(class UOnlinePlayer_X* Player);
	void EventPlayerPsyNetLogin(class UOnlinePlayer_X* Player);
	void EventConnectionError(class UError* Error, class UOnlinePlayer_X* Player);
};


// Class ProjectX.OnlineGameServer_X
// 0x0004 (0x00E4 - 0x00E0)
class UOnlineGameServer_X : public UOnlineGame_Base_X
{
public:
	class UPsyNetConnection_X*                         PsyNetConnection;                                         // 0x00E0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameServer_X");
		return ptr;
	}


	void OnExit();
	void OnInit();
};


// Class ProjectX.PresetMutators_X
// 0x0028 (0x0064 - 0x003C)
class UPresetMutators_X : public UObject
{
public:
	TArray<struct FCategorySettingPair>                PresetTags;                                               // 0x003C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FName>                               RequiresMaps;                                             // 0x0048(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bLockSettings : 1;                                        // 0x0054(0x0004)
	struct FString                                     OverrideName;                                             // 0x0058(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PresetMutators_X");
		return ptr;
	}

};


// Class ProjectX.OnlineGameDedicatedServer_X
// 0x0168 (0x024C - 0x00E4)
class UOnlineGameDedicatedServer_X : public UOnlineGameServer_X
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E4(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDedicatedServer_X.GameServerID
	struct FString                                     GameServerHost;                                           // 0x00EC(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UOnlineGameStats_X*                          GameStats;                                                // 0x00F8(0x0004) (CPF_Transient)
	class UOnlineGameDedicatedServerRegistration_X*    Registration;                                             // 0x00FC(0x0004) (CPF_Edit)
	class UOnlineGameReservations_X*                   Reservations;                                             // 0x0100(0x0004) (CPF_Edit)
	class UClanforgeReservation_X*                     Clanforge;                                                // 0x0104(0x0004) (CPF_Transient)
	struct FString                                     Region;                                                   // 0x0108(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                CurrentPlaylistId;                                        // 0x0114(0x0004)
	int                                                MutatorIndex;                                             // 0x0118(0x0004)
	float                                              AverageMMR;                                               // 0x011C(0x0004) (CPF_Transient)
	int                                                MachineId;                                                // 0x0120(0x0004) (CPF_Transient)
	struct U_Types_X_FCustomMatchSettings              CustomMatch;                                              // 0x0124(0x0060) (CPF_Transient, CPF_NeedCtorLink)
	struct FUniqueNetId                                CustomMatchOwner;                                         // 0x0184(0x0048) (CPF_Transient)
	unsigned long                                      bQueuedShutdown : 1;                                      // 0x01CC(0x0004) (CPF_Transient)
	unsigned long                                      bFindingReplacementServer : 1;                            // 0x01CC(0x0004) (CPF_Transient)
	unsigned long                                      bDisableMatchmakingBan : 1;                               // 0x01CC(0x0004) (CPF_Transient)
	unsigned long                                      bBotTest : 1;                                             // 0x01CC(0x0004) (CPF_Transient)
	struct FString                                     MatchGUID;                                                // 0x01D0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFoundNewDedicatedServerForPlayers__Delegate;       // 0x01DC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAverageMMRChanged__Delegate;                       // 0x01EC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlaylistSet__Delegate;                             // 0x01FC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrivateMatchSettingsChanged__Delegate;             // 0x020C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInactive__Delegate;                                // 0x021C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventActive__Delegate;                                  // 0x022C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                        // 0x023C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameDedicatedServer_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMatchID(const struct FString& Id);
	void CreateMatchID();
	struct FName GetCurrentMapName();
	void ClearMatchmakingBan(const struct FUniqueNetId& PlayerID);
	void IssueMatchmakingBan(const struct FUniqueNetId& PlayerID, const struct FString& Reason);
	unsigned char GetTeamNum(const struct FUniqueNetId& PlayerID);
	bool KickPlayersOnGameEventDestroyed();
	bool IsRankedMatch();
	class UGameSettingPlaylist_X* GetPlaylist();
	void OnExit();
	void HandleNewServerIPRPC(class URPC_CheckReplacementDedicatedServer_X* RPC);
	void CheckNewServerIP();
	void CheckNewServerTimeout();
	void CheckStartShutdown(int GameTimeRemaining);
	bool AllowServerMigration();
	void UpdateGameTime(int TimeSeconds);
	void FindNewDedicatedServerForPlayers(const struct FScriptDelegate& InDelegate);
	bool IsInPostGameLobby();
	bool IsTravellingToNextMap();
	void UpdateOnlineGame();
	bool AllowSplitscreenJoinRankedMatch();
	bool AllowSplitscreenJoin(class APlayerReplicationInfo* PrimaryPRI, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void TravelToMap(const struct FString& ServerCommand);
	void GotoPrivateMatchMap(const struct FName& MapName, int GameMode, const struct FString& GameTags);
	void GotoNextPrivateMatchMap();
	void OnPrivateEventDestroyed();
	struct FString GetStartServerCommand();
	struct FName GetNextRandomMapName(int GameMode);
	struct FName GetNextMapName(int GameMode);
	struct U_Types_X_FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(const struct FUniqueNetId& NewOwner);
	void SetCustomSettings(const struct U_Types_X_FCustomMatchSettings& Settings);
	void SetupPrivateMatch(const struct U_Types_X_FCustomMatchSettings& Settings, const struct FUniqueNetId& Creator);
	void GoToNextMap();
	struct FName GetNextMutatorMapName();
	void GoToMap(const struct FString& MapName);
	struct FString GetPlaylistTags();
	void UpdateAverageMMR();
	void ClearSettings();
	void SetPlaylist(int PlaylistId);
	void HandleReservationsUpdated();
	void InitClanforge();
	void OnInit();
	void EventMatchGUIDChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventActive(class UOnlineGameDedicatedServer_X* Server);
	void EventInactive(class UOnlineGameDedicatedServer_X* Server);
	void EventPrivateMatchSettingsChanged(class UOnlineGameDedicatedServer_X* Server, const struct U_Types_X_FCustomMatchSettings& NewSettings);
	void EventPlaylistSet(class UOnlineGameDedicatedServer_X* Server);
	void EventAverageMMRChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventFoundNewDedicatedServerForPlayers(const struct FString& NewIP);
};


// Class ProjectX.OnlineGameDLC_X
// 0x0030 (0x0090 - 0x0060)
class UOnlineGameDLC_X : public UOnline_X
{
public:
	int                                                SyncInterval;                                             // 0x0060(0x0004) (CPF_Edit)
	float                                              PlayerOwnershipSyncInterval;                              // 0x0064(0x0004)
	TArray<struct FPlayerDLCInfo>                      PlayerDLCInfos;                                           // 0x0068(0x000C) (CPF_NeedCtorLink)
	TArray<struct FSteamWebRequestData>                SteamWebRequests;                                         // 0x0074(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventValidationReady__Delegate;                         // 0x0080(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameDLC_X");
		return ptr;
	}


	bool DoesPlayerOwnDLC(struct FUniqueNetId* PlayerID, struct FName* DLCName);
	void HandleGetPublisherAppOwnership(class UWebRequest_X* Request);
	void OnMatchFinished();
	void SyncPlayerDLC(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	void UpdatePlayerDLCInfo(int PlayerInfoIndex);
	int CreatePlayerDLCInfo(struct FUniqueNetId* PlayerID);
	bool IsPlayerReadyForValidation(struct FUniqueNetId* PlayerID);
	void EventValidationReady();
};


// Class ProjectX.OnlineGameLeaderboards_X
// 0x0068 (0x00C8 - 0x0060)
class UOnlineGameLeaderboards_X : public UOnline_X
{
public:
	int                                                NumResults;                                               // 0x0060(0x0004) (CPF_Edit)
	TArray<struct FCachedLeaderboardData>              CachedLeaderboards;                                       // 0x0064(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                NumFriendsLeaderboardRequests;                            // 0x0070(0x0004) (CPF_Transient)
	struct FName                                       CurrentLeaderboardID;                                     // 0x0074(0x0008) (CPF_Transient)
	int                                                CurrentFriendIndex;                                       // 0x007C(0x0004) (CPF_Transient)
	unsigned long                                      bGlobalLeaderboards : 1;                                  // 0x0080(0x0004) (CPF_Transient)
	class URPC_X*                                      GetLoaderboardPlayerValueRPC;                             // 0x0084(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __OnGetLeaderboardPlayerValue__Delegate;                  // 0x0088(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNewLeaderboard__Delegate;                          // 0x0098(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetLeaderboardFailed__Delegate;                    // 0x00A8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLeaderboardAvatarFound__Delegate;                  // 0x00B8(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLeaderboards_X");
		return ptr;
	}


	bool IsSkillLeaderboard(const struct FString& NewLeaderboardID, int* Playlist);
	TArray<struct FLeaderboardData> SortLeaderboardDataMMR(TArray<struct FLeaderboardData> Leaderboard);
	TArray<struct FLeaderboardData> SortLeaderboardData(TArray<struct FLeaderboardData> Leaderboard);
	void HandleGetLeaderboardFriendsRPC(class URPC_GetLeaderboardRankForUsersBase_X* RPC);
	void DispatchLeaderboardFriendsRequest();
	void GetLeaderboardsForAllFriends(const struct FName& LeaderboardId);
	void GetLeaderboardFriends(class UOnlinePlayer_X* OnlinePlayer, const struct FName& NewLeaderboardID, const struct FScriptDelegate& NewDelegate, const struct FScriptDelegate& FailedDelegate);
	void HandleGetAvatar(const struct FUniqueNetId& PlayerID, class UTexture* Avatar, const struct FString& OnlinePlayerName);
	void RequestPlayerAvatar(const struct FUniqueNetId& PlayerID);
	void RequestClearPendingAvatarDownloads();
	void HandleGetLeaderboardRPC(class URPC_GetLeaderboardBase_X* RPC);
	void GetLeaderboard(const struct FName& NewLeaderboardID, bool bGlobal, const struct FScriptDelegate& NewDelegate, const struct FScriptDelegate& FailedDelegate);
	bool GetCachedLeaderboardData(const struct FName& LeaderboardId, TArray<struct FLeaderboardData>* LeaderboardDataList);
	int CalcDivision(float TopValue, float Value);
	void GetRankForPrimaryPlayer(const struct FName& LeaderboardId, int Value, int* Rank, int* Division);
	void HandleGetLeaderboardPlayerValueRPC(class URPC_GetLeaderboardValueForUserBase_X* RPC);
	void GetLeaderboardPlayerValue(const struct FName& NewLeaderboardID, const struct FScriptDelegate& NewDelegate);
	struct FString GetCurrentPlatformName();
	void EventLeaderboardAvatarFound(class UTexture* Avatar, struct FUniqueNetId* PlayerNetId);
	void EventGetLeaderboardFailed(class UError* Error);
	void EventNewLeaderboard(const struct FName& NewLeaderboardID, TArray<struct FLeaderboardData>* NewLeaderboardData);
	void OnGetLeaderboardPlayerValue(class UOnlineGameLeaderboards_X* LeaderboardsRef, const struct FName& LeaderboardId, class UError* Error, struct FLeaderboardData* PlayerLeaderboardData);
};


// Class ProjectX.OnlineGameReservations_X
// 0x0068 (0x00C8 - 0x0060)
class UOnlineGameReservations_X : public UOnline_X
{
public:
	TArray<class URPC_GetKeys_X*>                      GetKeysRPCs;                                              // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	float                                              ExtraMapLoadTime;                                         // 0x006C(0x0004) (CPF_Edit)
	float                                              WaitForReservationsTimeout;                               // 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bAllowPrivateMatchCrossPlayDisable : 1;                   // 0x0074(0x0004) (CPF_Edit)
	unsigned long                                      bSkipReservationCheck : 1;                                // 0x0074(0x0004) (CPF_Transient)
	unsigned long                                      bSinglePlayerMatchmaking : 1;                             // 0x0074(0x0004) (CPF_Transient)
	unsigned long                                      bServerTraveling : 1;                                     // 0x0074(0x0004) (CPF_Transient)
	unsigned long                                      bScrambleTeams : 1;                                       // 0x0074(0x0004) (CPF_Transient)
	unsigned long                                      bMatchStarted : 1;                                        // 0x0074(0x0004) (CPF_Transient)
	class UTcpMessageBeacon*                           Beacon;                                                   // 0x0078(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	TArray<struct FReservationData>                    Players;                                                  // 0x007C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FTeamPairHistory>                    TeamPairHistories;                                        // 0x0088(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UCrossplayConfig_X*                          Crossplay;                                                // 0x0094(0x0004) (CPF_Edit)
	class UMapPrefsConfig_X*                           MapPrefsConfig;                                           // 0x0098(0x0004) (CPF_Edit)
	TArray<struct FPendingReservation>                 PendingReservations;                                      // 0x009C(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;                     // 0x00A8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMigrationJoinOccurred__Delegate;                   // 0x00B8(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameReservations_X");
		return ptr;
	}


	bool __OnlineGameReservations_X__HasTimeoutPlayers_1(const struct FReservationData& P);
	bool __OnlineGameReservations_X__HasMultipleReservedTeams_2(int TeamID);
	int __OnlineGameReservations_X__HasMultipleReservedTeams_1(const struct FReservationData& P);
	bool __OnlineGameReservations_X__AllPlayersReserved_1(const struct FReservationData& P);
	bool __OnlineGameReservations_X__AllPlayersInGame_1(const struct FReservationData& P);
	void __OnlineGameReservations_X__SetServerTraveling_1(const struct FPendingReservation& P);
	struct FUniqueNetId __OnlineGameReservations_X__GetPlayerIDs_1(const struct FReservationData& Player);
	TArray<struct FUniqueNetId> GetPlayerIDs(TArray<struct FUniqueNetId>* MapLocal_A3ACE0E142E57EEF350A85962FA43367);
	float GetMapLoadTimeout(TEnumAsByte<EOnlinePlatform> Platform);
	void GetAccumulatedPrefs(TArray<struct FName>* Likes, TArray<struct FName>* Dislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UReservationsMetrics_X* GetMetrics();
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	bool HasSplitscreenPlayers();
	void SetParty(const struct FUniqueNetId& MemberId, const struct FUniqueNetId& PartyID);
	struct FUniqueNetId GetPartyID(const struct FUniqueNetId& PlayerID);
	unsigned char GetTeamNum(const struct FUniqueNetId& PlayerID);
	struct FString GetPlayersPlatformsString();
	struct FString GetPlatformsString(TArray<TEnumAsByte<EOnlinePlatform>>* Platforms);
	TArray<TEnumAsByte<EOnlinePlatform>> GetPlayerPlatforms();
	bool CanPlayTogether(TEnumAsByte<EOnlinePlatform> Platform1, TEnumAsByte<EOnlinePlatform> Platform2);
	bool CanAcceptReservationsForPlatform(class UAddReservationMessagePublic_X* Message);
	bool ShouldCheckPlatformRestrictions(class UAddReservationMessagePublic_X* Message);
	TEnumAsByte<EOnlinePlatform> GetExclusivePlatform();
	bool CanAcceptReservations(class UAddReservationMessagePublic_X* Message);
	void GetPlayerCounts(int* Team0Reserved, int* Team0Joined, int* Team1Reserved, int* Team1Joined);
	void NotifyReservationsUpdated();
	void OnReservationsUpdated();
	void CheckMapLoadTimeout();
	void StartMapLoadTimeout();
	void SyncSkills();
	void HackForceNotServerTravelling();
	void SetServerTraveling(bool bTraveling);
	void CloseConnection(int Index);
	void RemoveReservationIndex(int Index);
	int AddSpecialReservation(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, const struct FUniqueNetId& PartyID);
	void HandleTeamChanged(class APRI_X* PRI);
	void RemoveReservation(const struct FUniqueNetId& PlayerID);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	bool AllPlayersInGame();
	bool AllPlayersReserved();
	bool HasGameEnded();
	bool HasGameStarted();
	bool CanStartMatch();
	bool HasMultipleReservedTeams(TArray<int>* MapLocal_99DD9A664610E8442E60998AA61A3A8D, TArray<int>* FilterLocal_391DC98744E3120C5AB096AC4F4E6BA9, TArray<int>* DistinctLocal_6ADF41694D884B685CFB20AB4926964C);
	bool HasTimeoutPlayers();
	bool HasJoiningPlayers();
	bool IsEmpty();
	bool IsNearlyFull();
	bool IsFull();
	int GetNumReservedPlayers();
	bool IsCustomMatch();
	void HandleReservationDisconnected(class UTcpConnection* Connection);
	void ClearGetKeysRPCs();
	void ClearTeamHistory();
	void ClearReservations();
	void Reset();
	void STATIC_RecordTeamHistory(TArray<struct FReservationData>* TestPlayers, TArray<struct FTeamPairHistory>* History);
	void ScrambleTeams();
	void UpdateTeams();
	void AssignTeamsByPartySize();
	bool STATIC_AssignScrambledTeams(int TeamSize, TArray<struct FTeamPairHistory>* History, TArray<struct FReservationData>* TestPlayers);
	bool STATIC_AssignTeams(int TeamSize, TArray<struct FReservationData>* TestPlayers);
	void HandleSkillSynced(class UOnlineGameSkill_X* SkillSystem, const struct FUniqueNetId& PlayerID, class UError* Error);
	bool AllowSplitscreenJoin(class APlayerReplicationInfo* PrimaryPRI, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	bool IsCheatingSplitscreenReservation(class UAddReservationMessage_X* Message);
	bool IsCheatingSplitscreen(const struct FUniqueNetId& PrimaryPlayerID, const struct FUniqueNetId& SplitscreenPlayerID);
	struct FReservationData CreateReservationData(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, const struct FUniqueNetId& PartyID, TEnumAsByte<EReservationStatus> Status);
	void NotAllPlayersJoined();
	void DisconnectExistingPlayers(class UAddReservationMessage_X* ReservationMessage);
	void SetPlayers(TArray<struct FReservationData>* TempPlayers);
	TArray<struct FReservationData> AddPlayersFromReservationMessage(class UAddReservationMessage_X* ReservationMessage, class UTcpConnection* Connection);
	bool IsUnique(TArray<struct FName>* Prefs);
	void ForcePrivateMatch(const struct U_Types_X_FCustomMatchSettings& InSettings, struct FUniqueNetId* StructInitializer_E138B606443F3318C9334EB8E6BB135E);
	bool HandlePrivateReservation(class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message, struct FPendingReservation* StructInitializer_D1CF160745977122662004957506A9E6);
	void SendGetKeysRPCs(class UTcpConnection* Connection, class UAddReservationMessage_X* Message);
	void HandlePrivateReservationMessage(class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message);
	bool CanAcceptReservationsForServerKey(class UAddReservationMessagePublic_X* Message, bool bServerKey);
	void RemoveKeysRPC(class URPC_GetKeys_X* RPC);
	void HandleGetKeysRPCFail(class URPC_GetKeys_X* RPC);
	void AddNetworkKeys(class URPC_GetKeys_X* RPC);
	void ProcessReservationMessage(class UTcpConnection* Connection, class UAddReservationMessage_X* Message);
	void HandleGetKeysRPCSuccess(class URPC_GetKeys_X* RPC);
	void HandleGetKeysRPC(class URPC_GetKeys_X* RPC);
	void StartMatch();
	class UReservationsReadyMessage_X* CreateReadyMessage();
	bool ShouldSyncSkills();
	bool IsSoloPlaylist(int PlaylistId);
	bool HandlePublicReservation(class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message, struct FPendingReservation* StructInitializer_61C32F984FB1273BF691FDB58457E469);
	void HandlePublicReservationMessage(class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message);
	void HandlePingMessage(class UTcpConnection* Connection, class UObject* Message);
	void OnInit();
	void EventMigrationJoinOccurred();
	void EventReservationsUpdated();
};


// Class ProjectX.OnlineGameStats_X
// 0x0000 (0x0060 - 0x0060)
class UOnlineGameStats_X : public UOnline_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameStats_X");
		return ptr;
	}


	void UploadStats(const struct FString& StatType, TArray<struct FUploadStatDataSet>* DataSet);
};


// Class ProjectX.OnlinePlayer_X
// 0x00FC (0x015C - 0x0060)
class UOnlinePlayer_X : public UOnline_X
{
public:
	class UOnlinePlayerFriends_X*                      Friends;                                                  // 0x0060(0x0004) (CPF_Edit)
	class UOnlinePlayerAuthentication_X*               Authentication;                                           // 0x0064(0x0004) (CPF_Edit)
	class UPsyNetConnection_X*                         PsyNetConnection;                                         // 0x0068(0x0004) (CPF_Edit)
	class UOnlinePlayerStorage_X*                      Storage;                                                  // 0x006C(0x0004) (CPF_Edit)
	struct FString                                     PlayerName;                                               // 0x0070(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // 0x007C(0x0048) (CPF_Transient)
	TEnumAsByte<ELoginStatus>                          LoginStatus;                                              // 0x00C4(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	int                                                LocalPlayerNum;                                           // 0x00C8(0x0004) (CPF_Transient)
	unsigned long                                      bLoggingIn : 1;                                           // 0x00CC(0x0004)
	unsigned long                                      bLoggingOut : 1;                                          // 0x00CC(0x0004)
	class UError*                                      LoginError;                                               // 0x00D0(0x0004) (CPF_Transient)
	class UError*                                      LoginStatusError;                                         // 0x00D4(0x0004)
	class UError*                                      BannedError;                                              // 0x00D8(0x0004)
	struct FScriptDelegate                             __EventLoginComplete__Delegate;                           // 0x00DC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLogoutComplete__Delegate;                          // 0x00EC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginStatusChanged__Delegate;                      // 0x00FC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCountryUpdated__Delegate;                          // 0x010C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCanPlayOnlineChanged__Delegate;                    // 0x011C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventShowKeyboardComplete__Delegate;                    // 0x012C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPreFlushExit__Delegate;                            // 0x013C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventOnlineNameChanged__Delegate;                       // 0x014C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayer_X");
		return ptr;
	}


	void GetPlayersLikesDislikes(class UGameSettingPlaylist_X* Playlist, TArray<struct FName>* PlayerLikes, TArray<struct FName>* PlayerDislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsGuestAccount();
	void SetPlayerName(const struct FString& InName);
	void UpdateSplitscreenId();
	bool IsUpdateRequired();
	struct FString GetOnlineName();
	struct FString GetLocalName();
	struct FString GetRemoteName(int LocalPlayerIndex);
	void HandleCanPlayOnlineChanged(unsigned char LocalUserNum);
	void OnExit();
	TEnumAsByte<EFeaturePrivilegeLevel> CanPlayOnline();
	void HandlePlayerCountryReceived(const struct FUniqueNetId& InPlayerId, const struct FString& Country);
	void GetPlayerCountry(const struct FScriptDelegate& Handler);
	TEnumAsByte<EFeaturePrivilegeLevel> CanCommunicateText(bool bTryToResolve);
	void OpenErrorDialog(TEnumAsByte<EPS4ErrorDialog> ErrorCode);
	void OpenPS4DisplayMode(TEnumAsByte<EPS4DisplayMode> DisplayMode, TArray<struct FString> Targets, int ServiceLabel);
	void ResetControllerColor(int InControllerID);
	void SetControllerColor(int InControllerID, const struct FColor& NewColor);
	void PostActivityFeedMessage(const struct FString& Id, TArray<struct FString> StringReplaceList);
	TArray<unsigned long> GetSyncedAchievements(unsigned char LocalUserNum);
	void UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	void UpdateStat(const struct FName& StatName, int Points);
	void HandleShowKeyboardComplete(bool bWasSuccessful);
	void HideKeyboard();
	bool ShowKeyboard(const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, const struct FString& DefaultText, int MaxLength, const struct FScriptDelegate& OnCompleteDelegate, int LocalPlayerNumOverride);
	void OnNewGame();
	void HandleControllerChange(int InControllerID, bool bIsConnected);
	void HandleUserLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	bool IsLoggedIn(bool bRequireOnlineLogin);
	void HandleLogoutComplete(bool bWasSuccessful);
	void HandleLoginChanged(unsigned char PlayerNum);
	void HandleLoginFailed(unsigned char PlayerNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	void Logout(const struct FScriptDelegate& Callback);
	void Login(const struct FString& LoginName, const struct FString& LoginPassword, const struct FScriptDelegate& Callback);
	void OnRemoved();
	void InitPlayer();
	bool IsPrimaryPlayer();
	void HandleErrorRPC(class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error);
	void HandlePsyNetDisconnect(class UPsyNetConnection_X* Connection);
	void UpdatePsyNetEnabled();
	void HandleBanned(class UOnlinePlayerAuthentication_X* Auth);
	void HandleAuthLoginChange(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLoginRPC(class UOnlinePlayerAuthentication_X* Auth, class URPC_LoginAuthPlayer_X* RPC);
	bool UseWebSocket(class URPC_LoginAuthPlayer_X* RPC);
	void OnInit();
	void Construct();
	class UOnlineGame_X* GetOnlineGame();
	void EventOnlineNameChanged(class UOnlinePlayer_X* Player);
	void EventPreFlushExit();
	void EventShowKeyboardComplete(const struct FString& NewText, bool bCanceled);
	void EventCanPlayOnlineChanged(class UOnlinePlayer_X* Player);
	void EventCountryUpdated(const struct FString& Country);
	void EventLoginStatusChanged(class UOnlinePlayer_X* Player);
	void EventLogoutComplete(class UOnlinePlayer_X* Player);
	void EventLoginComplete(class UOnlinePlayer_X* Player, class UError* Error);
};


// Class ProjectX.OnlinePlayerAuthentication_X
// 0x0128 (0x0188 - 0x0060)
class UOnlinePlayerAuthentication_X : public UOnline_X
{
public:
	class URPC_LoginAuthPlayer_X*                      LoginRPC;                                                 // 0x0060(0x0004) (CPF_Transient)
	struct FUniqueNetId                                LoggedInPlayerId;                                         // 0x0064(0x0048) (CPF_Transient)
	struct FString                                     LoggedInPlayerName;                                       // 0x00AC(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlinePlayerAuthentication_X.PlayerUID
	struct FString                                     Platform;                                                 // 0x00C0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bLoggedIn : 1;                                            // 0x00CC(0x0004)
	unsigned long                                      bPlatformTokenAuthenticationFailed : 1;                   // 0x00CC(0x0004) (CPF_Transient)
	unsigned long                                      bSkipAuth : 1;                                            // 0x00CC(0x0004)
	class UError*                                      AuthLoginError;                                           // 0x00D0(0x0004)
	float                                              BannedUntilTime;                                          // 0x00D4(0x0004) (CPF_Transient)
	struct FString                                     BannedReason;                                             // 0x00D8(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FString>                             BannedCitations;                                          // 0x00E4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     EncryptedAuthTicket;                                      // 0x00F0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                AuthRequestFailureMax;                                    // 0x00FC(0x0004) (CPF_Config)
	int                                                AuthRequestRetryTime;                                     // 0x0100(0x0004) (CPF_Const)
	int                                                AuthRequestFailureCount;                                  // 0x0104(0x0004) (CPF_Transient)
	struct FString                                     AuthenticatedName;                                        // 0x0108(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TEnumAsByte<EPlayerAuthState>                      PlayerAuthState;                                          // 0x0114(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	float                                              LoginRetryDelay;                                          // 0x0118(0x0004) (CPF_Edit)
	float                                              DelayBetweenAuthRPCs;                                     // 0x011C(0x0004) (CPF_Edit)
	float                                              LastSendAuthRPCTime;                                      // 0x0120(0x0004)
	class UOnlineGameTrial_X*                          Trial;                                                    // 0x0124(0x0004) (CPF_Edit)
	struct FScriptDelegate                             __EventLoginChanged__Delegate;                            // 0x0128(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginSuccessRPC__Delegate;                         // 0x0138(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBanned__Delegate;                                  // 0x0148(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAuthenticatedNameChanged__Delegate;                // 0x0158(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerAuthStateChanged__Delegate;                  // 0x0168(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginResult__Delegate;                             // 0x0178(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerAuthentication_X");
		return ptr;
	}


	struct FString GetDebugName();
	void GotoAuthState(const struct FName& AuthStateName);
	bool IsBanned();
	int GetGameVersion();
	struct FName GetFeatureSet();
	struct FString GetBuildRegion();
	void HandleTrialStatusChanged(class UOnlineGameTrial_X* InTrial);
	void OnChangeAuthenticatedName(const struct FString& NewName);
	bool NeedToAuthenticateName();
	void HandleAuthTicket(bool bSuccess, const struct FString& AuthTicket);
	bool RequestAuthTicket();
	bool RequiresAuthTicket();
	void ReLogin();
	void Logout();
	void SetAuthLoginError(class UError* E);
	void UpdateLoginState();
	void UpdateAuthLoginError();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLinkStatusChanged(bool B);
	void HandleConnectionChanged(class UPsyNetConnection_X* C);
	void HandleLoginStatusChanged(class UOnlinePlayer_X* Player);
	int GetBannedMinutesRemaining();
	bool ParseBanned(class URPC_LoginAuthPlayer_X* RPC);
	void SetDefaultPlayerAuthState();
	void SetPlayerAuthState(TEnumAsByte<EPlayerAuthState> InPlayerAuthState);
	void ReceiveAuthenticatedName(const struct FString& ReceivedName);
	void OnLoginFailRPC(class URPC_LoginAuthPlayer_X* RPC);
	void OnLoginSuccessRPC(class URPC_LoginAuthPlayer_X* RPC, TArray<struct FString>* ArrayInitializer_3FECFA6840935F1CF8959F95E7DE8878);
	void SendLoginRPC();
	void PsyNetLogin(const struct FScriptDelegate& Callback);
	void OnRemoved();
	void OnInit();
	void EventLoginResult(class UOnlinePlayerAuthentication_X* Auth);
	void EventPlayerAuthStateChanged(class UOnlinePlayerAuthentication_X* Auth);
	void EventAuthenticatedNameChanged(class UOnlinePlayerAuthentication_X* Auth);
	void EventBanned(class UOnlinePlayerAuthentication_X* Auth);
	void EventLoginSuccessRPC(class UOnlinePlayerAuthentication_X* Auth, class URPC_LoginAuthPlayer_X* RPC);
	void EventLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
};


// Class ProjectX.SystemInfo_X
// 0x0000 (0x003C - 0x003C)
class USystemInfo_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SystemInfo_X");
		return ptr;
	}


	void STATIC_GetNetworkInfo(TArray<struct FString>* Types);
	void STATIC_GetOSInfo(struct FString* Type, struct FString* Bit);
	void STATIC_GetVideoCardInfo(struct FString* CardName, int* RAM);
	void STATIC_GetMemoryInfo(float* Physical, float* PageFile, float* Virtual, int* Used, int* Allocated);
	void STATIC_GetCPUInfo(struct FString* Type, struct FString* Description, struct FString* Cores, struct FString* Threads);
	bool STATIC_IsSupported();
};


// Class ProjectX.TickActorComponent_X
// 0x0023 (0x0088 - 0x0065)
class UTickActorComponent_X : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	TArray<struct FTimerData>                          Timers;                                                   // 0x0068(0x000C) (CPF_Const, CPF_NeedCtorLink)
	unsigned long                                      bTick : 1;                                                // 0x0074(0x0004) (CPF_Const)
	struct FScriptDelegate                             __EventTick__Delegate;                                    // 0x0078(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TickActorComponent_X");
		return ptr;
	}


	void SetTickable(bool bWantsTick);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(const struct FName& inTimerFunc, class UObject* inObj);
	void SetTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc, class UObject* inObj);
	void EventTick(float DeltaTime);
};


// Class ProjectX.Timers_X
// 0x0004 (0x0040 - 0x003C)
class UTimers_X : public UObject
{
public:
	class UTickComponent_X*                            TickComponent;                                            // 0x003C(0x0004) (CPF_ExportObject, CPF_Transient, CPF_Component, CPF_EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Timers_X");
		return ptr;
	}


	bool STATIC_IsDelegateActive(const struct FScriptDelegate& Callback);
	void STATIC_ClearDelegate(const struct FScriptDelegate& Callback);
	void STATIC_SetDelegate(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
	float STATIC_GetRemainingTime(class UObject* Obj, const struct FName& FuncName);
	float STATIC_GetRate(class UObject* Obj, const struct FName& FuncName);
	float STATIC_GetCount(class UObject* Obj, const struct FName& FuncName);
	void STATIC_ClearAll(class UObject* Obj);
	void STATIC_Clear(class UObject* Obj, const struct FName& FuncName);
	bool STATIC_IsActive(class UObject* Obj, const struct FName& FuncName);
	void STATIC_Set(class UObject* Obj, const struct FName& FuncName, float Rate, bool bLoop);
};


// Class ProjectX.TimersComponent_X
// 0x000C (0x0054 - 0x0048)
class UTimersComponent_X : public UComponent
{
public:
	TArray<struct FTimerData>                          Timers;                                                   // 0x0048(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TimersComponent_X");
		return ptr;
	}


	bool STATIC_IsDelegateActive(const struct FScriptDelegate& Callback);
	void STATIC_ClearDelegate(const struct FScriptDelegate& Callback);
	void STATIC_SetDelegate(const struct FScriptDelegate& Callback, float Rate, bool bLoop);
	float GetRemainingTimeForTimer(const struct FName& inTimerFunc, class UObject* inObj);
	float GetTimerRate(const struct FName& inTimerFunc, class UObject* inObj);
	float GetTimerCount(const struct FName& inTimerFunc, class UObject* inObj);
	void NotifyStateChanged(const struct FName& OldStateName);
	void UpdateTimers(float DeltaSeconds);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(const struct FName& inTimerFunc, class UObject* inObj);
	bool IsTimerActive(const struct FName& inTimerFunc, class UObject* inObj);
	void SetStateTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc);
	void SetTimer(float InRate, bool inbLoop, const struct FName& inTimerFunc, class UObject* inObj);
};


// Class ProjectX.TickComponent_X
// 0x0018 (0x006C - 0x0054)
class UTickComponent_X : public UTimersComponent_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0054(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	unsigned long                                      bTickWhenGamePaused : 1;                                  // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bTick : 1;                                                // 0x0058(0x0004) (CPF_Const)
	struct FScriptDelegate                             __TickDelegate__Delegate;                                 // 0x005C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TickComponent_X");
		return ptr;
	}


	void SetTickable(bool bWantsTick);
	void TickDelegate(float DeltaTime);
};


// Class ProjectX.UIStrings_X
// 0x0000 (0x003C - 0x003C)
class UUIStrings_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UIStrings_X");
		return ptr;
	}

};


// Class ProjectX.WebRequest_X
// 0x0054 (0x0090 - 0x003C)
class UWebRequest_X : public UObject
{
public:
	unsigned long                                      bZipRequest : 1;                                          // 0x003C(0x0004) (CPF_Edit)
	unsigned long                                      bZipResponse : 1;                                         // 0x003C(0x0004) (CPF_Edit)
	unsigned long                                      bConnectionReset : 1;                                     // 0x003C(0x0004) (CPF_Const, CPF_Transient)
	TEnumAsByte<EWebRequestState>                      RequestState;                                             // 0x0040(0x0001) (CPF_Const, CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x0044(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                              // 0x0050(0x0004) (CPF_Transient)
	class UHttpResponseInterface*                      HttpResponse;                                             // 0x0054(0x0004) (CPF_Const, CPF_Transient)
	TArray<unsigned char>                              Content;                                                  // 0x0058(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     StringContent;                                            // 0x0064(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<unsigned char>                              ResponseData;                                             // 0x0070(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	class UError*                                      Error;                                                    // 0x007C(0x0004) (CPF_Const, CPF_Transient)
	struct FScriptDelegate                             __EventCompleted__Delegate;                               // 0x0080(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebRequest_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetError(class UError* InError);
	bool HasInternetConnection();
	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ConstructHttpRequest();
	struct FString GetResponseHeader(const struct FString& Key);
	struct FString GetResponseString();
	bool HasNewData();
	bool IsSuccess();
	bool IsError();
	bool IsComplete();
	bool IsSent();
	class UHttpRequestInterface* GetHttpRequest();
	class UWebRequest_X* Send(const struct FString& InURL, const struct FScriptDelegate& OnCompleteCallback);
	void PrepareRequest(const struct FString& InURL);
	void SetContentFromString(const struct FString& ContentString);
	void SetContent(TArray<unsigned char>* ContentBytes);
	struct FString GetETag();
	void SetETag(const struct FString& ETag);
	class UWebRequest_X* SetHeader(const struct FString& Key, const struct FString& Value);
	class UWebRequest_X* AddPlayerIDParam(const struct FUniqueNetId& PlayerID);
	class UWebRequest_X* AddStringParam(const struct FString& Key, const struct FString& Value);
	class UWebRequest_X* AddFloatParam(const struct FString& Key, float Value);
	class UWebRequest_X* AddQwordParam(const struct FString& Key);
	class UWebRequest_X* AddIntParam(const struct FString& Key, int Value);
	class UWebRequest_X* STATIC_Create();
	void EventCompleted(class UWebRequest_X* Request);
};


// Class ProjectX.AnimNodeBlendBase_X
// 0x0014 (0x0128 - 0x0114)
class UAnimNodeBlendBase_X : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                                // 0x0114(0x0004) (CPF_Edit)
	TArray<float>                                      ChildBlendTimes;                                          // 0x0118(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bRebuildChildren : 1;                                     // 0x0124(0x0004) (CPF_Edit)
	unsigned long                                      bChildrenUpdated : 1;                                     // 0x0124(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeBlendBase_X");
		return ptr;
	}


	void SetActiveChildNamed(const struct FName& ChildName, bool bForce);
	float GetAnimDuration(int ChildIndex);
	float GetBlendTime(int ChildIndex, bool bGetDefault);
};


// Class ProjectX.AnimNodeSeries_X
// 0x000C (0x0134 - 0x0128)
class UAnimNodeSeries_X : public UAnimNodeBlendBase_X
{
public:
	unsigned long                                      bActive : 1;                                              // 0x0128(0x0004) (CPF_Transient)
	unsigned long                                      bInitialized : 1;                                         // 0x0128(0x0004) (CPF_Const, CPF_Transient)
	class UAnimNodeSequence*                           IntroAnim;                                                // 0x012C(0x0004) (CPF_Const, CPF_Transient)
	class UAnimNodeSequence*                           OutroAnim;                                                // 0x0130(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeSeries_X");
		return ptr;
	}

};


// Class ProjectX.AnimNodeSequence_X
// 0x0014 (0x0154 - 0x0140)
class UAnimNodeSequence_X : public UAnimNodeSequence
{
public:
	float                                              AnimSetBlendTime;                                         // 0x0140(0x0004) (CPF_Edit)
	unsigned long                                      bResetOnRelevant : 1;                                     // 0x0144(0x0004) (CPF_Edit)
	class UAnimSequence*                               PrevAnimSeq;                                              // 0x0148(0x0004) (CPF_Transient)
	int                                                PrevAnimLinkupIndex;                                      // 0x014C(0x0004) (CPF_Transient)
	float                                              BlendTimeLeft;                                            // 0x0150(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeSequence_X");
		return ptr;
	}

};


// Class ProjectX.AnimNodePose_X
// 0x0000 (0x0154 - 0x0154)
class UAnimNodePose_X : public UAnimNodeSequence_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodePose_X");
		return ptr;
	}


	void PlayAnim(bool bLoop, float InRate, float StartTime);
};


// Class ProjectX.AnimNodeSlot_X
// 0x0000 (0x0114 - 0x0114)
class UAnimNodeSlot_X : public UAnimNodeSlot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNodeSlot_X");
		return ptr;
	}


	void AddNodeToGroup(const struct FName& GroupName);
	float PlaySettings(const struct FCustomAnimSettings& Settings);
};


// Class ProjectX.AnimNotify_PlayParticleEffect_X
// 0x0008 (0x006C - 0x0064)
class UAnimNotify_PlayParticleEffect_X : public UAnimNotify_PlayParticleEffect
{
public:
	class UParticleSystemComponent*                    PSC;                                                      // 0x0064(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UAnimNodeSequence*                           CachedAnimSequence;                                       // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AnimNotify_PlayParticleEffect_X");
		return ptr;
	}


	void OnParticleSystemFinished(class UParticleSystemComponent* Component);
	void NotifyEnd(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
	void Notify(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
};


// Class ProjectX.TcpConnection
// 0x009C (0x00D8 - 0x003C)
class UTcpConnection : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	float                                              InitialConnectionTimeout;                                 // 0x0040(0x0004) (CPF_Config)
	float                                              ConnectionTimeout;                                        // 0x0044(0x0004) (CPF_Config)
	struct FPointer                                    Socket;                                                   // 0x0048(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	TEnumAsByte<ETcpConnectionState>                   ConnectionState;                                          // 0x004C(0x0001) (CPF_Const, CPF_Transient)
	TEnumAsByte<EWebSocketState>                       WebSocketState;                                           // 0x004D(0x0001) (CPF_Const, CPF_Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              LastReceiveTime;                                          // 0x0050(0x0004) (CPF_Const, CPF_Transient)
	TArray<unsigned char>                              InBytes;                                                  // 0x0054(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<unsigned char>                              OutBytes;                                                 // 0x0060(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<int>                                        OutMessageLengths;                                        // 0x006C(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<unsigned char>                              QueuedWebSocketBytes;                                     // 0x0078(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<int>                                        QueuedWebSocketMessageLengths;                            // 0x0084(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<unsigned char>                              InBytesDecoded;                                           // 0x0090(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<unsigned char>                              BunchBytes;                                               // 0x009C(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                               // 0x00A8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                            // 0x00B8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedBunch__Delegate;                           // 0x00C8(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TcpConnection");
		return ptr;
	}


	void OnDisconnected();
	void OnConnected();
	void Close();
	struct FString GetRemoteAddress();
	struct FString GetAddress();
	void EventReceivedBunch(class UTcpConnection* Connection);
	void EventDisconnected(class UTcpConnection* Connection);
	void EventConnected(class UTcpConnection* Connection);
};


// Class ProjectX.WebSocketConnection_X
// 0x0014 (0x00EC - 0x00D8)
class UWebSocketConnection_X : public UTcpConnection
{
public:
	float                                              PingInterval;                                             // 0x00D8(0x0004) (CPF_Config)
	struct FString                                     ClosedReason;                                             // 0x00DC(0x000C) (CPF_Const, CPF_NeedCtorLink)
	int                                                ClosedCode;                                               // 0x00E8(0x0004) (CPF_Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebSocketConnection_X");
		return ptr;
	}


	void Close();
	bool BeginWebSocketConnect(const struct FString& Address, class UStringMap* HandshakeHeaders);
	bool BeginConnect(const struct FString& Address);
};


// Class ProjectX.PrivilegeCheck_X
// 0x005C (0x0098 - 0x003C)
class UPrivilegeCheck_X : public UObject
{
public:
	TArray<int>                                        ControllerIDs;                                            // 0x003C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bHasRestriction : 1;                                      // 0x0048(0x0004) (CPF_Transient)
	unsigned long                                      bFinished : 1;                                            // 0x0048(0x0004) (CPF_Transient)
	TArray<TEnumAsByte<EFeaturePrivilege>>             PendingPrivileges;                                        // 0x004C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                FailedControllerID;                                       // 0x0058(0x0004) (CPF_Transient)
	TEnumAsByte<EFeaturePrivilege>                     FailedPrivilege;                                          // 0x005C(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<int>                                        PendingControllerIDs;                                     // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     CheckDelegates;                                           // 0x006C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             EventFinished;                                            // 0x0078(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CheckDelegate__Delegate;                                // 0x0088(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PrivilegeCheck_X");
		return ptr;
	}


	bool HasFeatureRestriction(int* OutControllerID, TEnumAsByte<EFeaturePrivilege>* OutFailedPrivilege);
	void OnFinished();
	void Fail(const struct FString& Reason);
	void HandlePrivilege(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> Level);
	void CheckPrivilege();
	void CheckPsyNet();
	void ValidateUserOnlineAccount();
	void CheckInternet();
	class UPrivilegeCheck_X* RequirePrivilege(TEnumAsByte<EFeaturePrivilege> Privilege);
	class UPrivilegeCheck_X* RequirePsyNet();
	class UPrivilegeCheck_X* RequireUserOnlineAccount();
	class UPrivilegeCheck_X* RequireInternet();
	void StartNextCheck();
	void Start();
	void Init(int ControllerId);
	void CheckDelegate();
};


// Class ProjectX.ActivateAnimSeriesComponent_X
// 0x0008 (0x0074 - 0x006C)
class UActivateAnimSeriesComponent_X : public UActorComponent_X
{
public:
	struct FName                                       AnimNodeName;                                             // 0x006C(0x0008) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ActivateAnimSeriesComponent_X");
		return ptr;
	}


	void SetAnimSeriesActiveInComponent(class USkeletalMeshComponent* SKC, bool bActive);
	void SetAnimSeriesActive(bool bActive);
	void Detached();
	void Attached();
};


// Class ProjectX.AddReservationMessage_X
// 0x0058 (0x0094 - 0x003C)
class UAddReservationMessage_X : public UBeaconMessage_X
{
public:
	TArray<struct FReservationPlayerData>              Players;                                                  // 0x003C(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyLeaderID;                                            // 0x0048(0x0048)
	unsigned long                                      bDisableCrossPlay : 1;                                    // 0x0090(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AddReservationMessage_X");
		return ptr;
	}


	void GetPlayerMapPrefs(const struct FUniqueNetId& PlayerID, TArray<struct FName>* Likes, TArray<struct FName>* Dislikes);
	class UAddReservationMessage_X* SetDisableCrossPlay(bool bValue);
	class UAddReservationMessage_X* AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, bool bRemotePlayer);
	class UAddReservationMessage_X* AddOnlinePlayer(class UOnlinePlayer_X* Player, bool bFriendJoin);
	class UAddReservationMessage_X* AddPlayers();
};


// Class ProjectX.OnlineGameParty_X
// 0x027C (0x02DC - 0x0060)
class UOnlineGameParty_X : public UOnline_X
{
public:
	TArray<struct FPartyMember>                        PartyMembers;                                             // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FUniqueLobbyId                              PartyID;                                                  // 0x006C(0x000C) (CPF_Transient)
	struct FUniqueNetId                                PartyLeader;                                              // 0x0078(0x0048) (CPF_Transient)
	int                                                MaxPartySize;                                             // 0x00C0(0x0004) (CPF_Const)
	class UOnlineMessageComponent_X*                   MessageComponent;                                         // 0x00C4(0x0004) (CPF_Const, CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UPartyMessage_SearchStatus_X*                PendingSearchStatus;                                      // 0x00C8(0x0004) (CPF_Transient)
	class UPartyMessage_SearchStatus_X*                NullSearchStatus;                                         // 0x00CC(0x0004)
	int                                                PartyTimeout;                                             // 0x00D0(0x0004) (CPF_Edit, CPF_Const)
	int                                                CurrentPartySize;                                         // 0x00D4(0x0004) (CPF_Transient)
	unsigned long                                      LastbSearchingStatus : 1;                                 // 0x00D8(0x0004) (CPF_Transient)
	unsigned long                                      LastLockStatus : 1;                                       // 0x00D8(0x0004) (CPF_Transient)
	struct FName                                       LastSearchState;                                          // 0x00DC(0x0008) (CPF_Transient)
	struct FPartyJoinMatchSettings                     MatchSettings;                                            // 0x00E4(0x002C) (CPF_Transient, CPF_NeedCtorLink)
	TEnumAsByte<EPartyProcessingStatus>                ProcessingStatus;                                         // 0x0110(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	int                                                PendingPartyLocalPlayerNum;                               // 0x0114(0x0004) (CPF_Transient)
	struct FUniqueLobbyId                              PendingPartyId;                                           // 0x0118(0x000C) (CPF_Transient)
	struct FPendingInviteData                          PendingInvite;                                            // 0x0124(0x0014)
	struct FString                                     NotInSameOnlineGameError;                                 // 0x0138(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     MissingLicenseAgreementError;                             // 0x0144(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	class UPartyConfig_X*                              PartyConfig;                                              // 0x0150(0x0004) (CPF_Edit)
	class UOnlineGameTrial_X*                          Trial;                                                    // 0x0154(0x0004) (CPF_Edit)
	class UPsyNetConfig_X*                             Config;                                                   // 0x0158(0x0004) (CPF_Edit)
	TScriptInterface<class UOnlineLobbyInterface>      PlatformLobbyInterface;                                   // 0x015C(0x0008)
	class UParties_X*                                  PsyNetLobbyInterface;                                     // 0x0164(0x0004)
	int                                                CreatePartyLocalPlayerNum;                                // 0x0168(0x0004)
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                            // 0x016C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerInvited__Delegate;                           // 0x017C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyChanged__Delegate;                            // 0x018C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartySizeChanged__Delegate;                        // 0x019C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchStatusChanged__Delegate;                     // 0x01AC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyError__Delegate;                              // 0x01BC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyJoinGameError__Delegate;                      // 0x01CC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyJoinGameSuccess__Delegate;                    // 0x01DC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyDestroyed__Delegate;                          // 0x01EC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConfirmJoinGameMessage__Delegate;                  // 0x01FC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLeaderLeftOnlineGame__Delegate;                    // 0x020C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventProcessingStatusChanged__Delegate;                 // 0x021C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisableCrossPlayChanged__Delegate;                 // 0x022C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerTradingChanged__Delegate;                    // 0x023C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInviteToTrade__Delegate;                           // 0x024C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAcceptedInviteToTrade__Delegate;                   // 0x025C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCloseInviteToTrade__Delegate;                      // 0x026C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReadyToTrade__Delegate;                            // 0x027C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNotReadyToTrade__Delegate;                         // 0x028C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTradeReady__Delegate;                              // 0x029C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAnotherInviteToTrade__Delegate;                    // 0x02AC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerInMatchChanged__Delegate;                    // 0x02BC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerIsCurrentlyTrading__Delegate;                // 0x02CC(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameParty_X");
		return ptr;
	}


	void HandlePartyConfigChanged();
	void HandleMessageForMetrics(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandlePlayerTradeComplete(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void SendPlayerTradeComplete();
	void SendPlayerTradeCompleteAndClear(bool bWasCanceled);
	void HandleReadyToTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void ReadyToTrade(bool bReadyToTrade);
	void SetPartyMessageHandlerTradeProductUpdate(bool bAddHandler);
	void ClearLocalTradingPlayer(bool bWasCanceled);
	bool ClearTradingPlayer(const struct FUniqueNetId& PartyMemberID);
	void HandleAcceptInviteToTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	bool CanAcceptTrade();
	void AcceptInviteToTrade(bool bAccepted);
	struct FGuid ResolveGuids(struct FGuid* A, struct FGuid* B);
	struct FUniqueNetId GetTradingPlayerID();
	struct FString GetTradingPlayerName();
	void HandleInviteToTradeMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_InviteToTrade_X* Message);
	void InvitePlayerToTrade(const struct FUniqueNetId& InMemberId);
	bool IsPlayerTrading(const struct FUniqueNetId& InMemberId);
	void SetPlayersTrading(const struct FUniqueNetId& InMember1Id, const struct FUniqueNetId& InMember2Id, bool bTrading);
	struct FString GetMemberName(const struct FUniqueNetId& InMemberId);
	TArray<struct FUniqueNetId> GetOrderedPartyMemberIDs();
	TArray<struct FUniqueNetId> GetPartyMemberIDs();
	void HandleSessionCreated();
	bool IsProcessing();
	void SetProcessingStatus(TEnumAsByte<EPartyProcessingStatus> Status);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetPlayerRatingString(const struct FUniqueNetId& PlayerID, int Playlist);
	void OnPartyError(class UError* Error);
	void HandlePartyError(const struct FString& Error);
	void OnPartyChanged();
	bool TryGetValueInt(const struct FString& Key, TArray<struct FLobbyMetaData>* MetaData, int* Value);
	bool PartyHasDisableCrossPlay();
	void SetDisableCrossPlayForMember(const struct FUniqueNetId& PartyMemberID, bool bDisableCrossPlay);
	void HandleDisableCrossPlayMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastDisableCrossPlay();
	struct FString GetAnyLoggedInRestrictionPlayerName();
	struct FString GetAnyAppOwnerRestrictionPlayerName();
	struct FString GetMatchmakingRestrictionError();
	bool IsPlayerInMainMenu(const struct FUniqueNetId& MemberId);
	bool IsPlayerInMatch(const struct FUniqueNetId& MemberId);
	void SetAvailableForMatchmakingForMember(const struct FUniqueNetId& PartyMemberID, int MatchmakeRestrictions);
	void HandleMatchmakingAvailability(class UOnlineMessageComponent_X* Component, class UObject* Message);
	int BuildMatchmakingRestrictions();
	void BroadcastMatchmakingAvailabilityDelayed();
	void BroadcastMatchmakingAvailability();
	void BroadcastAllLocalPlayers();
	void BroadcastLocalPlayersDelayed();
	void BroadcastLocalPlayers();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLocalPlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerLeave(class ULocalPlayer* Player);
	void UpdatePartyMember(class ULocalPlayer_X* Player);
	void HandleOnlinePlayerNameChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerJoin(class ULocalPlayer* Player);
	void ProcessLocalPlayersMessage(class UPartyMessage_LocalPlayers_X* Message);
	void HandleLocalPlayers(class UOnlineMessageComponent_X* Component, class UObject* ObjMessage);
	bool AllowSplitScreenPlayer(int ControllerId, class UError** OutError);
	int GetPartySize();
	void HandleSearchStatus(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastSearchStatus();
	class UPartyMessage_SearchStatus_X* GetSearchStatusMessage();
	bool TogglePartyLock();
	int GetMaxPartySize();
	bool AllowPartySize(int InSize);
	bool IsPartyOverFull();
	bool AllowNewMember();
	void UpdatePartyLock();
	void HandleFindGameStateChanged(const struct FName& NewState);
	void ClearLastServerAddress();
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnNewSettingsChosen(int PlaylistId);
	void OnNewGame();
	void SetMatchmakingSearching(bool bState);
	void SetSearchState(const struct FName& SearchState);
	struct FUniqueNetId GetLocalMemberId();
	bool IsMemberLocal(const struct FUniqueNetId& MemberId);
	bool HasRemoteMember();
	void OnPartyLeaderChanged();
	void HandleKickMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandleLobbySettingsUpdateMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_LobbySettings_X* LobbySettingsMessage);
	void HandleLobbyDestroyed(TEnumAsByte<ELobbyKickReason> Reason, struct FUniqueLobbyId* LobbyId);
	void HandleLobbyReceiveBinaryData(int MemberIndex, struct FActiveLobbyInfo* LobbyInfo, TArray<unsigned char>* Data);
	void RemoveAllPartyMembers();
	void RemovePartyMemberByLocalPlayer(class ULocalPlayer* Player);
	void RemovePartyMemberByID(const struct FUniqueNetId& MemberId);
	int AddPartyMember(const struct FUniqueNetId& PrimaryMemberId, const struct FUniqueNetId& MemberId, const struct FString& MemberName, int ControllerId);
	void OnEditExistingPartyMember(int PartyMemberIdx);
	void OnAddNewPartyMember(int PartyMemberIdx);
	void UpdatePartyInfo(struct FActiveLobbyInfo* Lobby);
	void UpdatePartyLeader(struct FActiveLobbyInfo* Lobby);
	void HandleLobbySettingsUpdated(struct FActiveLobbyInfo* Lobby);
	void OnNewLobby();
	void HandleJoinLobby(bool bWasSuccessful, const struct FString& Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyUID);
	void BroadcastStateDelayed();
	void BroadcastState();
	void HandleLobbyMemberStatusUpdate(int MemberIndex, int InstigatorIndex, const struct FString& Status, struct FActiveLobbyInfo* LobbyInfo);
	void CancelJoinGameFromPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void HandlePartyJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	void HandleConfirmJoinGame(const struct FPartyJoinMatchSettings& InSettings);
	bool JoinFriend(const struct FUniqueNetId& PartyMemberID);
	bool WantsToFollowTheLeaderOutOfGame();
	bool IsInSameMatch(const struct FUniqueNetId& PartyMemberA, const struct FUniqueNetId& PartymemberB);
	void HandlePartyJoinGame(class UOnlineMessageComponent_X* Component, class UObject* MessageObject);
	bool CanBroadcastMatchmakingMessages();
	void BroadcastPartyServer();
	void HandleServerReserved();
	void HandleJoinGameComplete(bool bSuccess, const struct FString& FailReason);
	struct FPartyMemberServer GetPartyMemberServer(struct FPartyMemberServer* StructInitializer_A3C9294343DC71519051B9A47B7F01E6);
	void HandlePartyMemberJoinGame(class UOnlineMessageComponent_X* Component, class UPartyMessage_PartyMemberJoinGame_X* MessageObject);
	bool SetPartyMemberJoinGame(struct FUniqueNetId* PlayerID, struct FPartyMemberServer* Server);
	void BroadcastPartyMember(const struct FUniqueNetId& PlayerID, const struct FPartyMemberServer& Server);
	void BroadcastLobbySettings(const struct FActiveLobbyInfo& LobbyInfo);
	bool SetLeader(const struct FUniqueNetId& NewLeader);
	bool IsPrimaryPlayerIndex(int MemberIdx);
	bool IsPrimaryPlayer(struct FUniqueNetId* PlayerID);
	bool IsPlayerInParty(struct FUniqueNetId* PlayerID);
	bool KickPlayer(const struct FUniqueNetId& PlayerID, TEnumAsByte<ELobbyKickReason> Reason);
	bool ShowInviteUI(unsigned char LocalUserNum);
	bool LeaveParty(const struct FString& Reason, struct FUniqueLobbyId* StructInitializer_4DE53ED8481323C017937A83D381B98A);
	bool IsInCurrentGame(const struct FUniqueNetId& MemberId);
	bool IsPartyLeader();
	bool IsInParty();
	void HandleJoinPartyPrivilegeCheck(class UPrivilegeCheck_X* PrivilegeCheck);
	void JoinParty(int LocalPlayerNum, struct FUniqueLobbyId* InPartyId, struct FPendingInviteData* StructInitializer_1096097E4AF451C9BCEF39BEC97A17DD);
	void CheckPartyTimeout();
	void StartPartyTimeout();
	void OnPartyCreated(bool bWasSuccessful, const struct FString& Error, struct FUniqueLobbyId* InPartyId);
	bool CreatePartyInternal();
	bool CreateParty(int LocalPlayerNum, const struct FScriptDelegate& Handler);
	TScriptInterface<class UOnlineLobbyInterface> GetCreatePartyPlatformInterface();
	bool ShouldCreatePsyNetParty();
	void SetLobbyInterfacePsyNet();
	void HandlePlayerInvitedPsyNet(bool bAccepted, struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId);
	void HandlePlayerInvitedPlatform(bool bAccepted, struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId);
	void HandlePlayerInvited(bool bAccepted, struct FUniqueLobbyId* InLobbyId, struct FUniqueNetId* FriendId);
	void HandlePartySizeTracker(class UOnlineGameParty_X* PartyObject);
	void HandlePrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, const struct FUniqueNetId& PlayerID);
	class UPartyMetrics_X* GetMetrics();
	void SetLobbyInterface(const TScriptInterface<class UOnlineLobbyInterface>& Lobby);
	bool IsUsingPsyNetParty();
	void InitLobbyInterfaces();
	void OnInit();
	void EventPlayerIsCurrentlyTrading(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventPlayerInMatchChanged(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventAnotherInviteToTrade(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventTradeReady(class UOnlineGameParty_X* PartyObject);
	void EventNotReadyToTrade(class UOnlineGameParty_X* PartyObject);
	void EventReadyToTrade(class UOnlineGameParty_X* PartyObject);
	void EventCloseInviteToTrade(class UOnlineGameParty_X* PartyObject, bool bWasCanceled);
	void EventAcceptedInviteToTrade(class UOnlineGameParty_X* PartyObject);
	void EventInviteToTrade(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId);
	void EventPlayerTradingChanged(class UOnlineGameParty_X* PartyObject, const struct FUniqueNetId& InMemberId, bool bIsPlayerTrading);
	void EventDisableCrossPlayChanged(class UOnlineGameParty_X* PartyObject);
	void EventProcessingStatusChanged(class UOnlineGameParty_X* PartyObject);
	void EventLeaderLeftOnlineGame(class UOnlineGameParty_X* PartyObject);
	void EventConfirmJoinGameMessage(class UOnlineGameParty_X* PartyObject);
	void EventPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameSuccess(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameError(class UOnlineGameParty_X* PartyObject, const struct FString& LocalizedErrorString);
	void EventPartyError(class UOnlineGameParty_X* PartyObject, class UError* Error);
	void EventSearchStatusChanged(class UOnlineGameParty_X* PartyObject, class UPartyMessage_SearchStatus_X* StatusMessage);
	void EventPartySizeChanged(class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize);
	void EventPartyChanged(class UOnlineGameParty_X* PartyObject);
	void EventPlayerInvited(class UOnlineGameParty_X* PartyObject, struct FUniqueLobbyId* InPartyId, struct FUniqueNetId* FriendId);
	void EventPartyCreated(class UOnlineGameParty_X* PartyObject, bool bWasSuccessful);
};


// Class ProjectX.OnlineGameAccount_X
// 0x002C (0x008C - 0x0060)
class UOnlineGameAccount_X : public UOnline_X
{
public:
	class UOnlinePlayer_X*                             PrimaryPlayer;                                            // 0x0060(0x0004) (CPF_Transient)
	float                                              UpdateCurrentGameTaskTimer;                               // 0x0064(0x0004) (CPF_Edit)
	int                                                CurrentPlaylistId;                                        // 0x0068(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventPrimaryPlayerIdChanged__Delegate;                  // 0x006C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCurrentPlaylistSet__Delegate;                      // 0x007C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameAccount_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnMainMenuOpened();
	int GetNumLocalPlayers();
	void SendUpdatePlayerCurrentGameRPC();
	void SendUpdatePlayerCurrentGameRequest();
	void UpdateCurrentGame();
	void ClearCurrentPlaylist();
	void SetCurrentPlaylist(int PlaylistId);
	void HandleServerAddressChanged();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandlePlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void OnPrimaryPlayerIdChanged();
	void SetPrimaryPlayer(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventCurrentPlaylistSet(class UOnlineGameAccount_X* InAccount, class UGameSettingPlaylist_X* NewPlaylist);
	void EventPrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, const struct FUniqueNetId& PlayerID);
};


// Class ProjectX.AddReservationMessagePrivate_X
// 0x0060 (0x00F4 - 0x0094)
class UAddReservationMessagePrivate_X : public UAddReservationMessage_X
{
public:
	struct U_Types_X_FCustomMatchSettings              Settings;                                                 // 0x0094(0x0060) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AddReservationMessagePrivate_X");
		return ptr;
	}


	struct FString GetDebugString();
	class UAddReservationMessagePrivate_X* SetSettings(struct U_Types_X_FCustomMatchSettings* InSettings);
};


// Class ProjectX.AddReservationMessagePublic_X
// 0x0024 (0x00B8 - 0x0094)
class UAddReservationMessagePublic_X : public UAddReservationMessage_X
{
public:
	struct FJoinMatchSettings                          Settings;                                                 // 0x0094(0x0018) (CPF_NeedCtorLink)
	TArray<struct FOnlinePlayerMapPrefs>               MapPrefs;                                                 // 0x00AC(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AddReservationMessagePublic_X");
		return ptr;
	}


	class UAddReservationMessage_X* AddPlayers();
	void SetPlayerPref(class UGameSettingPlaylist_X* Playlist, class UOnlinePlayer_X* OnlinePlayer);
	void GetPlayerMapPrefs(const struct FUniqueNetId& PlayerID, TArray<struct FName>* Likes, TArray<struct FName>* Dislikes);
	class UAddReservationMessage_X* AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, bool bRemotePlayer);
	struct FString GetDebugString();
	struct FString GetPlayerDebugString(const struct FReservationPlayerData& Player);
	class UAddReservationMessagePublic_X* SetSettings(struct FJoinMatchSettings* InSettings);
};


// Class ProjectX.OnlineGameSkill_X
// 0x0040 (0x00A0 - 0x0060)
class UOnlineGameSkill_X : public UOnline_X
{
public:
	TArray<class UPlaylistSkillCache_X*>               Playlists;                                                // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FPlayerSeasonRewardProgress>         SeasonRewards;                                            // 0x006C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FSkillSyncRequest>                   SyncRequests;                                             // 0x0078(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        SkillsSyncedPlayers;                                      // 0x0084(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSkillSynced__Delegate;                             // 0x0090(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameSkill_X");
		return ptr;
	}


	bool SkillsSynced(const struct FUniqueNetId& PlayerID);
	int GetHighestSkillTier(const struct FUniqueNetId& PlayerID);
	struct FPlayerSeasonRewardProgress GetPlayerSeasonRewardProgress(const struct FUniqueNetId& PlayerID);
	class UPlaylistSkillCache_X* GetPlaylistSkillCache(int Playlist);
	void HandleSkillsUpdateFailed(class URPC_X* RPC);
	void SetPlayerSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void ReplicateSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void HandleSkillsUpdated(class URPC_X* RPC, struct FPlayerSeasonRewardProgress* StructInitializer_08BAB49D41724EA0B7E1A9B18AAB6510);
	void SubmitMatch(class UMatchRecorder_X* MatchRecorder, const struct FString& MatchGUID);
	void Clear();
	float STATIC_GetMMR(float Mu, float Sigma);
	float GetPlayerMMR(const struct FUniqueNetId& PlayerID, int Playlist);
	struct FPlayerSkillRating GetPlayerRating(const struct FUniqueNetId& PlayerID, int Playlist);
	void OnSkillSynced(const struct FUniqueNetId& PlayerID, class UError* Error);
	void CacheSeasonReward(const struct FPlayerSeasonRewardProgress& Reward);
	void HandleSkillRequestCompleteRPC(class URPC_GetPlayerSkill_X* RPC);
	void SyncPlayerSkill(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	void CacheSkill(const struct FPlayerSkillRating& Rating, int Playlist);
	void PreCacheSkill(const struct FPlayerSkillRating& Rating, int Playlist);
	int STATIC_GetSkillPlaylistID(int PlaylistId);
	void EventSkillSynced(class UOnlineGameSkill_X* Skill, const struct FUniqueNetId& PlayerID, class UError* Error);
};


// Class ProjectX.OnlineGamePlaylists_X
// 0x0024 (0x0084 - 0x0060)
class UOnlineGamePlaylists_X : public UOnline_X
{
public:
	class UClass*                                      PlaylistClass;                                            // 0x0060(0x0004) (CPF_Edit)
	TArray<class UGameSettingPlaylist_X*>              DownloadedPlaylists;                                      // 0x0064(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class URankedConfig_X*                             RankedConfig;                                             // 0x0070(0x0004) (CPF_Edit)
	struct FScriptDelegate                             __EventPlaylistsChanged__Delegate;                        // 0x0074(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePlaylists_X");
		return ptr;
	}


	TArray<struct FName> GetAccessiblePlaylists(TArray<struct FName> SelectedPlaylists);
	bool IsRankedEnabled();
	bool IsRankedPlaylistID(int PlaylistId);
	bool IsRankedPlaylistName(const struct FName& PlaylistName);
	void NamesToIDs(TArray<struct FName>* Names, TArray<int>* Ids);
	struct FString GetPlaylistFriendlyName(int PlaylistId);
	void CopyPlaylistGameTags();
	void HandlePlaylistsChanged(class UObjectProvider* Provider);
	int NameToID(const struct FName& PlaylistName);
	class UGameSettingPlaylist_X* GetPlaylistByID(int PlaylistId);
	class UGameSettingPlaylist_X* GetPlaylistByName(const struct FName& PlaylistName);
	bool IsPlaylistEnabled(class UGameSettingPlaylist_X* Playlist);
	void NotifyWhenChanged(const struct FScriptDelegate& Callback);
	void OnInit();
	void EventPlaylistsChanged(class UOnlineGamePlaylists_X* PlaylistsObj);
};


// Class ProjectX.GameSettingPlaylist_X
// 0x0044 (0x0080 - 0x003C)
class UGameSettingPlaylist_X : public UGameSetting_X
{
public:
	struct FString                                     Title;                                                    // 0x003C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     Description;                                              // 0x0048(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	int                                                PlayerCount;                                              // 0x0054(0x0004) (CPF_Edit)
	unsigned long                                      bStandard : 1;                                            // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bRanked : 1;                                              // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bSolo : 1;                                                // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bNew : 1;                                                 // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bApplyQuitPenalty : 1;                                    // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bAllowClubs : 1;                                          // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bHidden : 1;                                              // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bPlayersVSBots : 1;                                       // 0x0058(0x0004) (CPF_Edit)
	int                                                PlaylistId;                                               // 0x005C(0x0004) (CPF_Edit)
	TArray<class UPresetMutators_X*>                   PresetMutators;                                           // 0x0060(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FName                                       MapName;                                                  // 0x006C(0x0008) (CPF_Edit)
	struct FString                                     ServerCommand;                                            // 0x0074(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameSettingPlaylist_X");
		return ptr;
	}


	bool ShouldUpdateSkills();
	bool STATIC_IsValidID(int InPlaylistID);
	bool IsValid();
	struct FString GetLocalizedDescription();
	struct FString GetLocalizedName();
	void Setup(class UPlaylistSettings_X* Settings);
};


// Class ProjectX.SeqEvent_Spawned_X
// 0x0004 (0x0118 - 0x0114)
class USeqEvent_Spawned_X : public USequenceEvent
{
public:
	class AActor*                                      Spawned;                                                  // 0x0114(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqEvent_Spawned_X");
		return ptr;
	}


	void STATIC_TriggerFor(class AActor* A);
};


// Class ProjectX.CameraStateBlender_X
// 0x0088 (0x00D0 - 0x0048)
class UCameraStateBlender_X : public UComponent
{
public:
	struct FCameraTransition                           Transition;                                               // 0x0048(0x0048) (CPF_Transient)
	struct FCameraOrientation                          TransitionDelta;                                          // 0x0090(0x002C) (CPF_Transient)
	class UCameraState_X*                              CameraState;                                              // 0x00BC(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventBlenderStateChanged__Delegate;                     // 0x00C0(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraStateBlender_X");
		return ptr;
	}


	bool IsTransitioning();
	void BlendCameraState(float DeltaTime, struct FCameraOrientation* OutPOV);
	void PostProcessPOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void Tick(float DeltaTime);
	void ClearTransitionDelta();
	void ClearTransition();
	bool TransitionToState(class UCameraState_X* NewState);
	void Snap();
	void EventBlenderStateChanged(class UCameraStateBlender_X* CameraBender);
};


// Class ProjectX.CameraState_X
// 0x001C (0x005C - 0x0040)
class UCameraState_X : public UStateObject_X
{
public:
	struct FViewTargetTransitionParams                 DefaultBlendParams;                                       // 0x0040(0x0010) (CPF_Edit)
	class AWorldInfo*                                  WorldInfo;                                                // 0x0050(0x0004) (CPF_Transient)
	class ACamera_X*                                   Camera;                                                   // 0x0054(0x0004) (CPF_Transient)
	unsigned long                                      bCanSwivel : 1;                                           // 0x0058(0x0004) (CPF_Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraState_X");
		return ptr;
	}


	void OnSnap();
	void ModifyPostProcessSettings(struct FPostProcessSettings* PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator* OutViewRotation, struct FRotator* OutDeltaRot);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void Tick(float DeltaTime);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetEndBlendParams(class UCameraState_X* NewState);
	struct FViewTargetTransitionParams GetStartBlendParams(class UCameraState_X* PreviousState);
	bool ShouldKeepExecuting();
	bool ShouldExecute();
	void Init(class ACamera_X* InCamera);
};


// Class ProjectX.CameraUtils_X
// 0x0000 (0x003C - 0x003C)
class UCameraUtils_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraUtils_X");
		return ptr;
	}


	void STATIC_BlendPOVs(const struct FCameraOrientation& FromPOV, const struct FCameraOrientation& ToPOV, float Percent, struct FCameraOrientation* OutPOV);
	float STATIC_GetBlendPercent(const struct FViewTargetTransitionParams& BlendParams, float Time);
	bool STATIC_IsPointInView(const struct FVector& Point, const struct FVector& ViewStart, const struct FRotator& ViewRotation, float FOV);
	float STATIC_GetFrustumDistanceFromWidth(float FOV, float Width, float AspectRatio);
	float STATIC_GetFrustumDistanceFromHeight(float FOV, float Height);
	void STATIC_GetFrustumSize(float Dist, float FOV, float AspectRatio, float* OutWidth, float* OutHeight);
	void STATIC_CalculateDistanceRotation(const struct FVector& Focus, const struct FVector& Origin, float* OutDistance, struct FRotator* OutRotation);
};


// Class ProjectX.CameraModifier_CameraShake_X
// 0x0000 (0x0068 - 0x0068)
class UCameraModifier_CameraShake_X : public UCameraModifier_CameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraModifier_CameraShake_X");
		return ptr;
	}


	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void RemoveCameraShake(class UCameraShake* Shake);
};


// Class ProjectX.CameraState_CamActor_X
// 0x015C (0x01B8 - 0x005C)
class UCameraState_CamActor_X : public UCameraState_X
{
public:
	unsigned long                                      bUseOverridePostProcess : 1;                              // 0x005C(0x0004) (CPF_Edit)
	class ACameraActor*                                CamActor;                                                 // 0x0060(0x0004) (CPF_Transient)
	struct FPostProcessSettings                        PrevPost;                                                 // 0x0064(0x0150) (CPF_Transient, CPF_NeedCtorLink)
	float                                              PrevPostAlpha;                                            // 0x01B4(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraState_CamActor_X");
		return ptr;
	}


	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetBlendParams(class UCameraState_X* PrevState);
	bool ShouldExecute();
};


// Class ProjectX.CDN_X
// 0x0018 (0x0054 - 0x003C)
class UCDN_X : public UObject
{
public:
	struct FString                                     URL;                                                      // 0x003C(0x000C) (CPF_Config, CPF_NeedCtorLink)
	struct FString                                     BlogURL;                                                  // 0x0048(0x000C) (CPF_Config, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CDN_X");
		return ptr;
	}

};


// Class ProjectX.HUD_X
// 0x000C (0x04A4 - 0x0498)
class AHUD_X : public AHUD
{
public:
	class UObject*                                     ShowDebugObject;                                          // 0x0498(0x0004) (CPF_Transient)
	class UDebugDrawer_X*                              DebugDrawer;                                              // 0x049C(0x0004) (CPF_Transient)
	class UTexture*                                    DebugTexture;                                             // 0x04A0(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.HUD_X");
		return ptr;
	}


	void SetShowDebugObject(class UObject* inObj);
	void ShowDebugInfo(float* out_YL, float* out_YPos);
	void ShowDebug(const struct FName& DebugType);
	void DebugCategory(const struct FName& DebugType);
	void DebugCategorySwitch(bool bForward);
	void DrawPauseScreen();
	bool ShouldShowConsoleMessage(const struct FConsoleMessage& InConsoleMessage);
	void DrawDebugTexture();
	void DrawHUD();
	void PostBeginPlay();
};


// Class ProjectX.OnlineImageDownloaderWeb_X
// 0x001C (0x0058 - 0x003C)
class UOnlineImageDownloaderWeb_X : public UObject
{
public:
	TArray<struct FDownloadedImageRequest>             Requests;                                                 // 0x003C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventImageDownloaded__Delegate;                         // 0x0048(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineImageDownloaderWeb_X");
		return ptr;
	}


	void OnDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestOnlineImage(const struct FString& URL, bool bSRGB, const struct FScriptDelegate& Callback);
	void EventImageDownloaded(class UOnlineImageDownloaderWeb_X* Downloader, const struct FDownloadedImage& Image);
};


// Class ProjectX.__CheatManager_X__RandomSleep_1
// 0x0010 (0x004C - 0x003C)
class U__CheatManager_X__RandomSleep_1 : public UObject
{
public:
	float                                              MinDelay;                                                 // 0x003C(0x0004)
	float                                              MaxDelay;                                                 // 0x0040(0x0004)
	float                                              MinSleep;                                                 // 0x0044(0x0004)
	float                                              MaxSleep;                                                 // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__CheatManager_X__RandomSleep_1");
		return ptr;
	}


	void __CheatManager_X__RandomSleep_1();
};


// Class ProjectX.ITakeDamage_X
// 0x0000 (0x003C - 0x003C)
class UITakeDamage_X : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ITakeDamage_X");
		return ptr;
	}


	bool TakeDamage_X(class UDamageComponent_X* Damage);
};


// Class ProjectX.DebugDrawer_X
// 0x0030 (0x00B0 - 0x0080)
class UDebugDrawer_X : public UDebugDrawer
{
public:
	float                                              textscale;                                                // 0x0080(0x0004) (CPF_Edit)
	class UCanvas*                                     Canvas;                                                   // 0x0084(0x0004) (CPF_Transient)
	TArray<struct FName>                               DebugCategories;                                          // 0x0088(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FName>                               PossibleDebugCategories;                                  // 0x0094(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	float                                              CharWidth;                                                // 0x00A0(0x0004) (CPF_Transient)
	float                                              LastWidestElement;                                        // 0x00A4(0x0004) (CPF_Transient)
	unsigned long                                      bHideDebug : 1;                                           // 0x00A8(0x0004) (CPF_Transient)
	float                                              OffsetX;                                                  // 0x00AC(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DebugDrawer_X");
		return ptr;
	}


	void DrawHeader();
	void DrawSpacer(float Height);
	void DrawBackground(float Width, float Height);
	void FinishDrawDebug();
	void StartDrawDebug(class UCanvas* C);
	void PrintText(const struct FString& Text, const struct FColor& InColor);
	void PrintProperty(const struct FString& PropertyName, const struct FString& Value);
	void PrintSeperater();
	void UpdateCanvasIndentation();
	void EndSection();
	void StartSection();
	void SetPos(float X, float Y);
	bool ShouldDisplayDebug(const struct FName& Category);
};


// Class ProjectX.OnlineGameLanServer_X
// 0x00AC (0x0190 - 0x00E4)
class UOnlineGameLanServer_X : public UOnlineGameServer_X
{
public:
	class UOnlineGameLanReservations_X*                Reservations;                                             // 0x00E4(0x0004) (CPF_Edit)
	struct U_Types_X_FCustomMatchSettings              CustomMatch;                                              // 0x00E8(0x0060) (CPF_Transient, CPF_NeedCtorLink)
	struct FUniqueNetId                                CustomMatchOwner;                                         // 0x0148(0x0048) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLanServer_X");
		return ptr;
	}


	void StartReservationTimeout();
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	bool AllowSplitscreenJoin(class APlayerReplicationInfo* PrimaryPRI, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	void TravelToMap(const struct FString& ServerCommand);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void GoToNextMap();
	void ClearSettings();
	void HandleReservationsTimeout();
	struct U_Types_X_FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(const struct FUniqueNetId& NewOwner);
	void SetupPrivateMatch(const struct U_Types_X_FCustomMatchSettings& Settings, const struct FUniqueNetId& Creator);
	void OnInit();
};


// Class ProjectX.IOnlineGameHost_X
// 0x0000 (0x003C - 0x003C)
class UIOnlineGameHost_X : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.IOnlineGameHost_X");
		return ptr;
	}


	struct FUniqueNetId GetCustomMatchOwner();
	struct U_Types_X_FCustomMatchSettings GetCustomMatchSettings();
	bool AllowSplitscreenJoin(class APlayerReplicationInfo* PrimaryPRI, const struct FUniqueNetId& PlayerID, const struct FString& PlayerName, struct FString* Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
};


// Class ProjectX.Explosion_X
// 0x000C (0x021C - 0x0210)
class AExplosion_X : public AActor
{
public:
	class UExplosionComponent_X*                       ExplosionComponent;                                       // 0x0210(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	class AFXActor_X*                                  FXActorArchetype;                                         // 0x0214(0x0004) (CPF_Edit, CPF_Net)
	class AFXActor_X*                                  FXActor;                                                  // 0x0218(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Explosion_X");
		return ptr;
	}


	void Destroyed();
	void ForceNetRelevant();
	void SetFXActorArchetype(class AFXActor_X* A);
	void SpawnFX();
	void PostBeginPlay();
	void ReplicatedEvent(const struct FName& VarName);
};


// Class ProjectX.SeqAct_TriggerFXActor_X
// 0x0008 (0x0104 - 0x00FC)
class USeqAct_TriggerFXActor_X : public USequenceAction
{
public:
	class UFXActorEvent_X*                             Event;                                                    // 0x00FC(0x0004) (CPF_Edit)
	class AActor*                                      AttachTo;                                                 // 0x0100(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqAct_TriggerFXActor_X");
		return ptr;
	}

};


// Class ProjectX.GameInfo_MapProfiler_X
// 0x0000 (0x0424 - 0x0424)
class AGameInfo_MapProfiler_X : public AGameInfo_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GameInfo_MapProfiler_X");
		return ptr;
	}


	void GenericPlayerInitialization(class AController* C);
	class APlayerController* SpawnPlayerController(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
};


// Class ProjectX.PlaylistSettings_X
// 0x0044 (0x0080 - 0x003C)
class UPlaylistSettings_X : public UObject
{
public:
	struct FString                                     Title;                                                    // 0x003C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     Description;                                              // 0x0048(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	int                                                PlaylistId;                                               // 0x0054(0x0004) (CPF_Edit)
	int                                                PlayerCount;                                              // 0x0058(0x0004) (CPF_Edit)
	unsigned long                                      bStandard : 1;                                            // 0x005C(0x0004) (CPF_Edit)
	unsigned long                                      bRanked : 1;                                              // 0x005C(0x0004) (CPF_Edit)
	unsigned long                                      bSolo : 1;                                                // 0x005C(0x0004) (CPF_Edit)
	unsigned long                                      bHidden : 1;                                              // 0x005C(0x0004) (CPF_Edit)
	unsigned long                                      bNew : 1;                                                 // 0x005C(0x0004) (CPF_Edit)
	unsigned long                                      bApplyQuitPenalty : 1;                                    // 0x005C(0x0004) (CPF_Edit)
	unsigned long                                      bAllowClubs : 1;                                          // 0x005C(0x0004) (CPF_Edit)
	unsigned long                                      bPlayersVSBots : 1;                                       // 0x005C(0x0004) (CPF_Edit)
	TArray<class UPresetMutators_X*>                   PresetMutators;                                           // 0x0060(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FName                                       MapName;                                                  // 0x006C(0x0008) (CPF_Edit)
	struct FString                                     ServerCommand;                                            // 0x0074(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlaylistSettings_X");
		return ptr;
	}

};


// Class ProjectX.OnlineGameJoinGame_X
// 0x0230 (0x0290 - 0x0060)
class UOnlineGameJoinGame_X : public UOnline_X
{
public:
	int                                                JoinCountdownTime;                                        // 0x0060(0x0004) (CPF_Edit)
	struct FString                                     FailCommand;                                              // 0x0064(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     LoadingScreenCommand;                                     // 0x0070(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UTcpMessageBeacon*                           ReservationBeacon;                                        // 0x007C(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FString                                     WaitingForPlayersString;                                  // 0x0080(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     ReservationNotRespondingString;                           // 0x008C(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     ReservationFullString;                                    // 0x0098(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     PartyTeamReservationFullString;                           // 0x00A4(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     NoFriendJoinPrivateMatchString;                           // 0x00B0(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     BeaconTimedOutString;                                     // 0x00BC(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     NotAllPlayersJoinedString;                                // 0x00C8(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     CanceledString;                                           // 0x00D4(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     SecurityKeyAcquisitionFailed;                             // 0x00E0(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     SecurityKeyVerificationFailed;                            // 0x00EC(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     SendingReservationMessage;                                // 0x00F8(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     JoiningPartyLeadersGame;                                  // 0x0104(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     InvalidPassword;                                          // 0x0110(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     WrongPlaylistString;                                      // 0x011C(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     MatchEndedString;                                         // 0x0128(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     CrossplayDisabled;                                        // 0x0134(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     ServerBeaconAddress;                                      // 0x0140(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     ServerGameAddress;                                        // 0x014C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FJoinMatchSettings                          Settings;                                                 // 0x0158(0x0018) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     PendingFailMessage;                                       // 0x0170(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     PendingBugItMessage;                                      // 0x017C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<class UPlayer*>                             JoinedPlayers;                                            // 0x0188(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              CustomMatch;                                              // 0x0194(0x0060) (CPF_NeedCtorLink)
	TArray<class URPC_GenerateKeys_X*>                 GenerateKeysRPCs;                                         // 0x01F4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventJoinGameComplete__Delegate;                        // 0x0200(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStatusUpdate__Delegate;                            // 0x0210(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCountdownStarted__Delegate;                        // 0x0220(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCountdownEnded__Delegate;                          // 0x0230(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServerBeaconAddressChanged__Delegate;              // 0x0240(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServerReserved__Delegate;                          // 0x0250(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                        // 0x0260(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventJoiningGame__Delegate;                             // 0x0270(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMaxPlayersChanged__Delegate;                       // 0x0280(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameJoinGame_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsInTransition();
	void SendPing();
	void GotoJoinGameState(const struct FName& NewStateName);
	void HandleConnectionResponse(class UTcpConnection* Connection, class UObject* Message);
	void HandleReservationResponse(class UTcpConnection* Connection, class UObject* Message);
	void NotifyConnectionFailed(const struct FString& Message);
	void OnJoinGameComplete(bool bSuccess, const struct FString& FailReason, const struct FString& BugItReason);
	void SetServerBeaconAddress(const struct FString& NewValue);
	void ClearServerData();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	bool IsJoiningGame();
	void CancelJoin();
	bool StartJoinPrivateMatch(const struct FString& BeaconAddress, const struct FJoinMatchSettings& JoinSettings, struct U_Types_X_FCustomMatchSettings* InSettings);
	bool StartJoin(const struct FString& BeaconAddress, const struct FJoinMatchSettings& JoinSettings);
	void OnInit();
	void EventMaxPlayersChanged(class UOnlineGameJoinGame_X* OnlineGameJoinGame, int MaxPlayers);
	void EventJoiningGame(class UOnlineGameJoinGame_X* OnlineGameJoinGame);
	void EventPasswordRequired();
	void EventServerReserved();
	void EventServerBeaconAddressChanged();
	void EventCountdownEnded();
	void EventCountdownStarted();
	void EventStatusUpdate(const struct FString& NewStatus);
	void EventJoinGameComplete(bool bSuccess, const struct FString& FailReason);
};


// Class ProjectX.GFxModal_X
// 0x0048 (0x0084 - 0x003C)
class UGFxModal_X : public UObject
{
public:
	struct FString                                     ActionScriptModalName;                                    // 0x003C(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	class UGFxObject*                                  GFxPopup;                                                 // 0x0048(0x0004)
	TArray<struct FScriptDelegate>                     Callbacks;                                                // 0x004C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     ConfirmString;                                            // 0x0058(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FScriptDelegate                             __ClickDelegate__Delegate;                                // 0x0064(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClosed__Delegate;                                  // 0x0074(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GFxModal_X");
		return ptr;
	}


	void Close();
	void FlashAddButton(const struct FString& Label);
	void FlashAddCancelButton(const struct FString& LocalizedText);
	void HandleButtonClicked(int Index);
	class UGFxModal_X* AddButton(const struct FString& Label, const struct FScriptDelegate& OnClick);
	class UGFxModal_X* AddCancelButton(const struct FString& LocalizedText, const struct FScriptDelegate& OnClick);
	class UGFxModal_X* SetCancellable(bool bCancellable);
	class UGFxModal_X* SetDefaultSelectedButtonIndex(int buttonIndex);
	class UGFxModal_X* SetIcon(const struct FString& IconName);
	class UGFxModal_X* SetBody(const struct FString& LocalizedText);
	class UGFxModal_X* SetTitle(const struct FString& LocalizedText);
	void SetGFxObject(class UGFxObject* Obj);
	void EventClosed(class UGFxModal_X* Modal);
	void ClickDelegate(class UGFxModal_X* Modal);
};


// Class ProjectX.GRI_X
// 0x0340 (0x05A0 - 0x0260)
class AGRI_X : public AGameReplicationInfo
{
public:
	int                                                ReplicatedGamePlaylist;                                   // 0x0260(0x0004) (CPF_Net, CPF_Transient)
	int                                                ReplicatedGameMutatorIndex;                               // 0x0264(0x0004) (CPF_Net, CPF_Transient)
	struct FReplicatedReservationData                  Reservations[0x8];                                        // 0x0268(0x0058) (CPF_Net, CPF_Transient, CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0528(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.GRI_X.GameServerID
	unsigned long                                      bGameStarted : 1;                                         // 0x0530(0x0004) (CPF_Net, CPF_Transient)
	unsigned long                                      bGameEnded : 1;                                           // 0x0530(0x0004) (CPF_Transient)
	struct FString                                     MatchGUID;                                                // 0x0534(0x000C) (CPF_Net, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSpawned__Delegate;                                 // 0x0540(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameDataSelected__Delegate;                        // 0x0550(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;                     // 0x0560(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServerNameChanged__Delegate;                       // 0x0570(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameStarted__Delegate;                             // 0x0580(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;                        // 0x0590(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GRI_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMatchGUID(const struct FString& Id);
	void HandleMatchGUIDChanged(class UOnlineGameDedicatedServer_X* OnlineGameDS);
	bool IsPlaylistRanked();
	class UGameSettingPlaylist_X* GetPlaylist();
	bool PlayerIsInCurrentGame(const struct FUniqueNetId& MemberId);
	struct FString GetReservationDebugString(const struct FReplicatedReservationData& Data);
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicated();
	class UOnlineGame_Base_X* GetOnlineGameBase();
	class UOnlineGame_X* GetOnlineGame();
	bool HasSelectedGameData();
	void SetGameStarted();
	void SetOfflineGameData(const struct FName& PlaylistName);
	void NotifyOnGameDataSelected(const struct FScriptDelegate& Callback);
	void SetGameData(int NewPlaylistID, int MutatorIndex);
	void HandleGamePlaylistSet(class UOnlineGameDedicatedServer_X* DedicatedServer);
	void OnReservationsUpdated();
	void SetReservations(TArray<struct FReplicatedReservationData> InReservations, struct FReplicatedReservationData* StructInitializer_E33543F14C338208BDFDCF952BBC2178);
	struct FReplicatedReservationData ConvertReservation(const struct FReservationData& Data, struct FReplicatedReservationData* StructInitializer_3530B06A48595778390342B5B33DAEBE);
	void UpdateReservations(TArray<struct FReplicatedReservationData>* MapLocal_B39003BB4A12FCF20B975E8FD17E3B32);
	void ReplicatedEvent(const struct FName& VarName);
	void PostBeginPlay();
	void EventMatchGUIDChanged(class AGRI_X* GRI);
	void EventGameStarted(class AGRI_X* GRI);
	void EventServerNameChanged(class AGRI_X* GRI);
	void EventReservationsUpdated(class AGRI_X* GRI);
	void EventGameDataSelected(int PlaylistId, int MutatorIndex);
	void EventSpawned(class AGRI_X* GRI);
};


// Class ProjectX.LanMessage_X
// 0x0008 (0x0044 - 0x003C)
class ULanMessage_X : public UOnlineMessage_X
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x003C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.LanMessage_X.Nonce

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_X");
		return ptr;
	}


	bool Broadcast();
	class ULanMessage_X* SetNonce();
};


// Class ProjectX.LanMessage_HostQuery_X
// 0x0068 (0x00AC - 0x0044)
class ULanMessage_HostQuery_X : public ULanMessage_X
{
public:
	struct U_Types_X_FCustomMatchSettings              Filter;                                                   // 0x0044(0x0060) (CPF_NeedCtorLink)
	int                                                BuildID;                                                  // 0x00A4(0x0004)
	unsigned long                                      bHost : 1;                                                // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_HostQuery_X");
		return ptr;
	}


	class ULanMessage_HostQuery_X* SetHost(bool bValue);
	class ULanMessage_HostQuery_X* SetBuildID(int InBuildID);
	class ULanMessage_HostQuery_X* SetFilter(const struct U_Types_X_FCustomMatchSettings& InFilter);
};


// Class ProjectX.LanMessage_HostResponse_X
// 0x0090 (0x00D4 - 0x0044)
class ULanMessage_HostResponse_X : public ULanMessage_X
{
public:
	struct FServerResult                               Result;                                                   // 0x0044(0x0078) (CPF_NeedCtorLink)
	struct FString                                     ServerID;                                                 // 0x00BC(0x000C) (CPF_NeedCtorLink)
	struct FString                                     MetaData;                                                 // 0x00C8(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_HostResponse_X");
		return ptr;
	}


	struct FString GetDebugString();
	class ULanMessage_HostResponse_X* SetMetaData(const struct FString& InMetaData);
	class ULanMessage_HostResponse_X* SetServerID(const struct FString& InServerID);
	class ULanMessage_HostResponse_X* SetResult(const struct FServerResult& InResult);
};


// Class ProjectX.LanMessage_Ping_X
// 0x0000 (0x0044 - 0x0044)
class ULanMessage_Ping_X : public ULanMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanMessage_Ping_X");
		return ptr;
	}

};


// Class ProjectX.MatchEndedMessage_X
// 0x0000 (0x003C - 0x003C)
class UMatchEndedMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchEndedMessage_X");
		return ptr;
	}

};


// Class ProjectX.MaterialEffect_X
// 0x0030 (0x0098 - 0x0068)
class UMaterialEffect_X : public UMaterialEffect
{
public:
	struct FName                                       TimeParamName;                                            // 0x0068(0x0008) (CPF_Edit)
	float                                              FadeInTime;                                               // 0x0070(0x0004) (CPF_Edit)
	float                                              FadeInFalloff;                                            // 0x0074(0x0004) (CPF_Edit)
	float                                              FadeOutTime;                                              // 0x0078(0x0004) (CPF_Edit)
	float                                              FadeOutFalloff;                                           // 0x007C(0x0004) (CPF_Edit)
	float                                              ActiveTime;                                               // 0x0080(0x0004) (CPF_Edit)
	float                                              ValueMin;                                                 // 0x0084(0x0004) (CPF_Edit)
	float                                              ValueMax;                                                 // 0x0088(0x0004) (CPF_Edit)
	class UMaterialInstanceConstant*                   MatInst;                                                  // 0x008C(0x0004) (CPF_Transient)
	TEnumAsByte<EMaterialEffectStage>                  Stage;                                                    // 0x0090(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              StageTime;                                                // 0x0094(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MaterialEffect_X");
		return ptr;
	}


	struct FString GetActiveEffects();
	bool HasAnyEffectsActive();
	float GetMaterialParameterValue(const struct FName& MaterialParamName);
	void SetMaterialParameterLinearColorValue(const struct FName& MaterialParamName, const struct FLinearColor& NewValue);
	void SetMaterialParameterValue(const struct FName& MaterialParamName, float NewValue);
	void HandleParametersChanged();
	void UpdateFade(float Alpha);
	void SetStage(TEnumAsByte<EMaterialEffectStage> NewStage);
	bool Tick(float dt);
	void End();
	void Start();
	void Init();
	bool IsInitialized();
};


// Class ProjectX.OnlineGamePlayerTitles_X
// 0x0054 (0x00B4 - 0x0060)
class UOnlineGamePlayerTitles_X : public UOnline_X
{
public:
	float                                              PlayerTitleCacheTime;                                     // 0x0060(0x0004) (CPF_Edit)
	struct FName                                       XpTitleID;                                                // 0x0064(0x0008) (CPF_Edit)
	TArray<struct FCachedTitleData>                    TitleCache;                                               // 0x006C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FCachedPlayerData>                   PlayerCache;                                              // 0x0078(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerTitledUpdated__Delegate;                     // 0x0084(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTitleDataUpdated__Delegate;                        // 0x0094(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedPlayerTitles__Delegate;                    // 0x00A4(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePlayerTitles_X");
		return ptr;
	}


	void HandlePlayerTitlesSynced(class UOnlineGamePlayerTitles_X* TitlesObj, const struct FUniqueNetId& PlayerID);
	void SyncPlayerTitlesAndData(const struct FUniqueNetId& PlayerID);
	struct FPlayerTitleData GetTitleData(const struct FName& TitleId);
	struct FString GetContent(const struct FString& Text, const struct FString& Key);
	void HandleTitleText(class UWebRequest_X* WebRequest);
	void SyncTitleData(const struct FName& TitleId, const struct FScriptDelegate& Callback);
	TArray<struct FName> GetPlayerTitles(const struct FUniqueNetId& PlayerID);
	void HandlePlayerTitlesRPC(class URPC_GetPlayerTitles_X* RPC);
	void SyncPlayerTitles(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	void HandlePlayerPsyNetLogin(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventReceivedPlayerTitles(class UOnlineGamePlayerTitles_X* Titles);
	void EventTitleDataUpdated(class UOnlineGamePlayerTitles_X* Titles, const struct FName& TitleId);
	void EventPlayerTitledUpdated(class UOnlineGamePlayerTitles_X* Titles, const struct FUniqueNetId& PlayerID);
};


// Class ProjectX.OnlineConfigDispatcher_X
// 0x0004 (0x0040 - 0x003C)
class UOnlineConfigDispatcher_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                               // 0x003C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineConfigDispatcher_X");
		return ptr;
	}


	struct FString GetDebugString(class UOnlineConfig_X* Config);
	void UndoConfigObject(class UOnlineConfig_X* Config);
	void ApplyConfigObject(class UOnlineConfig_X* Config);
	void Construct();
};


// Class ProjectX.WebCache_X
// 0x0020 (0x005C - 0x003C)
class UWebCache_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                               // 0x003C(0x0004) (CPF_Edit)
	TArray<struct FCachedDataRequest>                  Requests;                                                 // 0x0040(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __CachedTextCallback__Delegate;                           // 0x004C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WebCache_X");
		return ptr;
	}


	struct FString GetRequestDebugString(const struct FCachedDataRequest& Request);
	void HandleWebRequest(class UWebRequest_X* WebRequest);
	void DownloadData(const struct FString& URL, const struct FString& ETag);
	void HandleLoadFromCache(class ULocalCache_X* Cache, class UCachedWebData_X* CacheObject, class UError* Error);
	void GetData(const struct FString& URL, const struct FScriptDelegate& Callback);
	struct FString STATIC_GetCachedPath(const struct FString& URL);
	void CachedTextCallback(class UCachedWebData_X* CachedData);
};


// Class ProjectX.OnlineGameWordFilter_X
// 0x0030 (0x0090 - 0x0060)
class UOnlineGameWordFilter_X : public UOnline_X
{
public:
	TArray<struct FFilterPair>                         Filtered;                                                 // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UWordFilterConfig_X*                         Config;                                                   // 0x006C(0x0004) (CPF_Edit)
	struct FScriptDelegate                             __EventCommentSanitized__Delegate;                        // 0x0070(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCommentError__Delegate;                            // 0x0080(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameWordFilter_X");
		return ptr;
	}


	struct FString SanitizePhraseAndNotify(const struct FString& Comment, const struct FScriptDelegate& Callback);
	struct FString STATIC_SanitizePhrase(const struct FString& Comment);
	class UError* CreateError(TEnumAsByte<EWordFilterUsage> Usage, struct FWordFilterResult* Result);
	void HandleCommentSanitized(struct FWordFilterResult* Result);
	TEnumAsByte<EWordFilterUsage> UpdateUsage(TEnumAsByte<EWordFilterUsage> OldUsage, TEnumAsByte<EWordFilterUsage> NewUsage);
	struct FString InternalSanitize(const struct FString& Comment, const struct FScriptDelegate& Callback, const struct FScriptDelegate& ErrorCallback, TEnumAsByte<EWordFilterUsage> Usage, const struct FUniqueNetId& PlayerID);
	bool IsPending(const struct FString& Comment);
	struct FString SanitizeChat(const struct FString& Comment, const struct FScriptDelegate& Callback, const struct FScriptDelegate& ErrorCallback, const struct FUniqueNetId& PlayerID);
	struct FString Sanitize(const struct FString& Comment, const struct FScriptDelegate& Callback, const struct FScriptDelegate& ErrorCallback, const struct FUniqueNetId& PlayerID);
	void OnMainMenuOpened();
	void EventCommentError(const struct FString& OriginalPhrase, class UError* Error);
	void EventCommentSanitized(const struct FString& Original, const struct FString& Sanitized);
};


// Class ProjectX.OnlineGameWordFilterProcessor_X
// 0x0020 (0x0080 - 0x0060)
class UOnlineGameWordFilterProcessor_X : public UOnline_X
{
public:
	float                                              ResponseDelay;                                            // 0x0060(0x0004) (CPF_Const)
	TArray<struct FWordFilterRequest>                  SanitizeCallbacks;                                        // 0x0064(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;                     // 0x0070(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameWordFilterProcessor_X");
		return ptr;
	}


	void TriggerCallbacks(int Index);
	void ProcessSanitizedDelayed();
	void HandleWordSanitized(class UWebRequest_X* Request);
	bool SanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate);
	void OnSanitizeStringComplete(const struct FString& Original, const struct FString& Sanitized);
};


// Class ProjectX.OnlineGamePrivileges_X
// 0x0030 (0x0090 - 0x0060)
class UOnlineGamePrivileges_X : public UOnline_X
{
public:
	TArray<class UPrivilegeCheck_X*>                   PendingChecks;                                            // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bIsCheckingPrivileges : 1;                                // 0x006C(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventCheckingPrivilegesChanged__Delegate;               // 0x0070(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrivilegeCheckRestriction__Delegate;               // 0x0080(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePrivileges_X");
		return ptr;
	}


	bool IsCheckingPrivileges();
	void RemoveCallback(const struct FScriptDelegate& Callback);
	void HandlePrivilegeCheckFinished(class UPrivilegeCheck_X* PrivilegeCheck);
	class UPrivilegeCheck_X* CreatePrivilegeCheck(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToUseUGC(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToPlayOnline(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToUsePsyNet(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToViewLeaderboards(int ControllerId, const struct FScriptDelegate& Callback);
	void TryToBrowseInternet(int ControllerId, const struct FScriptDelegate& Callback);
	void EventPrivilegeCheckRestriction(class UPrivilegeCheck_X* Check);
	void EventCheckingPrivilegesChanged(class UOnlineGamePrivileges_X* PrivilegesObject);
};


// Class ProjectX.OnlineGameRegions_X
// 0x006C (0x00CC - 0x0060)
class UOnlineGameRegions_X : public UOnline_X
{
public:
	float                                              PingRegionsCacheTime;                                     // 0x0060(0x0004) (CPF_Edit)
	float                                              LastPingRegionsTime;                                      // 0x0064(0x0004) (CPF_Transient)
	int                                                RegionIdxPingCur;                                         // 0x0068(0x0004)
	TArray<struct FRegionData>                         RegionList;                                               // 0x006C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<int>                                        SortedRegions;                                            // 0x0078(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FCachedRegionPing>                   CachedRegionPings;                                        // 0x0084(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UTcpMessageBeacon*                           Beacon;                                                   // 0x0090(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	unsigned long                                      bWaitingToPingRegions : 1;                                // 0x0094(0x0004) (CPF_Transient)
	unsigned long                                      bPingingRegions : 1;                                      // 0x0094(0x0004) (CPF_Transient)
	unsigned long                                      bServersPinged : 1;                                       // 0x0094(0x0004) (CPF_Transient)
	int                                                NumServersPinged;                                         // 0x0098(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventRegionsSynced__Delegate;                           // 0x009C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                           // 0x00AC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsError__Delegate;                            // 0x00BC(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameRegions_X");
		return ptr;
	}


	bool Exists(const struct FString& RegionName);
	void SetCachedRegionPings(TArray<struct FCachedRegionPing>* InCachedRegionPings);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void NotifyWhenSynced(const struct FScriptDelegate& Callback);
	struct FString GetRegionsDebugString();
	struct FString GetFriendlyRegionsString();
	struct FString GetFriendlySortedRegionsString();
	struct FString GetSortedRegionsString();
	int SortRegionDelegate(int A, int B);
	void OnAllRegionsPinged();
	void HandlePingMessage(class UTcpConnection* Connection, class UObject* PingMessage);
	void PingRegionsPieceWise(int PingCount);
	void HandleGetPingRegionListRPC(class URPC_GetGameServerPingList_X* RPC);
	void PingRegions(const struct FScriptDelegate& Callback);
	void HandleRegionsChanged(class UObjectProvider* Op);
	void OnInit();
	void EventRegionsError(class UOnlineGameRegions_X* RegionsObj, class UError* Error);
	void EventRegionsPinged(class UOnlineGameRegions_X* RegionsObj);
	void EventRegionsSynced(class UOnlineGameRegions_X* RegionsObj);
};


// Class ProjectX.OnlineGameInvite_X
// 0x00D4 (0x0134 - 0x0060)
class UOnlineGameInvite_X : public UOnline_X
{
public:
	struct FUniqueNetId                                FriendJoinPlayerID;                                       // 0x0060(0x0048) (CPF_Transient)
	struct FString                                     UnableToFindFriendsGameString;                            // 0x00A8(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     AlreadyInSameServerString;                                // 0x00B4(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     FriendNotJoinable;                                        // 0x00C0(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     GameInviteBeaconAddress;                                  // 0x00CC(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FName                                       ActionRequired;                                           // 0x00D8(0x0008) (CPF_Transient)
	class UOnlineGameTrial_X*                          Trial;                                                    // 0x00E0(0x0004) (CPF_Edit)
	struct FScriptDelegate                             __EventGameInviteAccepted__Delegate;                      // 0x00E4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameInviteComplete__Delegate;                      // 0x00F4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConfirmationRequired__Delegate;                    // 0x0104(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;                        // 0x0114(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetPartyInviteAccepted__Delegate;               // 0x0124(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameInvite_X");
		return ptr;
	}


	void OnGameInviteComplete(bool bSuccess, const struct FString& FailReason);
	void JoinGameInviteGame(const struct FJoinMatchSettings& Settings);
	void OnGameInviteAccepted(const struct FString& ErrorString, struct FOnlineGameSearchResult* InviteResult);
	void OnInit();
	void EventPsyNetPartyInviteAccepted(const struct FString& PartyID);
	void EventPasswordRequired();
	void EventConfirmationRequired(const struct FName& ConfirmationReason);
	void EventGameInviteComplete(bool bSuccess, const struct FString& FailReason);
	void EventGameInviteAccepted();
};


// Class ProjectX.OnlineGameVoice_X
// 0x0010 (0x0070 - 0x0060)
class UOnlineGameVoice_X : public UOnline_X
{
public:
	struct FScriptDelegate                             __EventPlayerTalking__Delegate;                           // 0x0060(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameVoice_X");
		return ptr;
	}


	unsigned char GetControllerId(class APlayerReplicationInfo* PRI);
	int GetNumTalkers();
	bool IsRemotePlayerTalking(class APlayerReplicationInfo* PRI);
	void HandlePlayerTalkingStateChange(const struct FUniqueNetId& PlayerID, bool bTalking);
	void UnregisterTalker(class UOnlinePlayer_X* Player);
	void RegisterTalker(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventPlayerTalking(class UOnlineGameVoice_X* SelfRef, const struct FUniqueNetId& PlayerID, bool bTalking);
};


// Class ProjectX.OnlineGameCommunity_X
// 0x0004 (0x0064 - 0x0060)
class UOnlineGameCommunity_X : public UOnline_X
{
public:
	class UOnlineGameBlog_X*                           BlogSync;                                                 // 0x0060(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameCommunity_X");
		return ptr;
	}


	void OnInit();
};


// Class ProjectX.OnlineGamePopulation_X
// 0x002C (0x008C - 0x0060)
class UOnlineGamePopulation_X : public UOnline_X
{
public:
	float                                              UpdatePopulationDelay;                                    // 0x0060(0x0004) (CPF_Edit)
	float                                              LastUpdatePopulationTime;                                 // 0x0064(0x0004) (CPF_Transient)
	unsigned long                                      bDownloadingPopulation : 1;                               // 0x0068(0x0004) (CPF_Transient)
	int                                                TotalPlayers;                                             // 0x006C(0x0004) (CPF_Transient)
	TArray<struct UOnlineGamePopulation_X_FPlaylistPopulation> Populations;                                              // 0x0070(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetPlaylistPopulations__Delegate;                  // 0x007C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePopulation_X");
		return ptr;
	}


	void HandleGotAllPopulationPlaylistsRPC(class URPC_GetPopulation_X* RPC);
	void GetPlaylistPopulations(const struct FScriptDelegate& NewDelegate);
	void EventGetPlaylistPopulations(class UOnlineGamePopulation_X* PopulationsObject);
};


// Class ProjectX.OnlineGameLanBrowser_X
// 0x00E0 (0x0140 - 0x0060)
class UOnlineGameLanBrowser_X : public UOnline_X
{
public:
	struct FString                                     StartSearchFailString;                                    // 0x0060(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     SearchingString;                                          // 0x006C(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     FoundServerString;                                        // 0x0078(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Filter;                                                   // 0x0084(0x0060) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bIsHostQuery : 1;                                         // 0x00E4(0x0004) (CPF_Transient)
	float                                              SearchTimeout;                                            // 0x00E8(0x0004) (CPF_Edit, CPF_Const)
	class ULanBeacon_X*                                LanBeacon;                                                // 0x00EC(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FScriptDelegate                             __EventSearchNewResponse__Delegate;                       // 0x00F0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchStatus__Delegate;                            // 0x0100(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchStateChanged__Delegate;                      // 0x0110(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                          // 0x0120(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchError__Delegate;                             // 0x0130(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLanBrowser_X");
		return ptr;
	}


	void CreateLanGame(const struct U_Types_X_FCustomMatchSettings& MatchSettings, struct FServerResult* HostResponse);
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnSearchComplete(bool bCancelled);
	void OnSearchError(const struct FString& Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(const struct U_Types_X_FCustomMatchSettings& InFilter, bool bHostQuery);
	class UOnlineGameLanBrowser_X* ClearCompleteDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearNewResponseDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearStateChangedDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearStatusDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* ClearErrorDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetCompleteDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetNewResponseDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetStateChangedDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetStatusDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameLanBrowser_X* SetErrorDelegate(const struct FScriptDelegate& Callback);
	void OnInit();
	void EventSearchError(const struct FString& NewStatus);
	void EventSearchComplete(bool bCancelled);
	void EventSearchStateChanged(const struct FName& SearchState);
	void EventSearchStatus(const struct FString& NewStatus);
	void EventSearchNewResponse(struct FServerResult* Result);
};


// Class ProjectX.OnlineGameServerBrowser_X
// 0x00C4 (0x0124 - 0x0060)
class UOnlineGameServerBrowser_X : public UOnline_X
{
public:
	struct FString                                     PreferredRegion;                                          // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Filter;                                                   // 0x006C(0x0060) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     StartSearchFailString;                                    // 0x00CC(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     NoResultsFound;                                           // 0x00D8(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     NotLoggedInToPsynet;                                      // 0x00E4(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	float                                              SearchTimeout;                                            // 0x00F0(0x0004) (CPF_Edit, CPF_Const)
	struct FScriptDelegate                             __EventSearchComplete__Delegate;                          // 0x00F4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchError__Delegate;                             // 0x0104(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBrowserError__Delegate;                            // 0x0114(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameServerBrowser_X");
		return ptr;
	}


	void HandleGameServerList(class URPC_CustomGameServerGet_X* RPC);
	struct FString GetFriendlyRegionString();
	struct FString GetRegionsString();
	void OnSearchComplete(TArray<struct FServerResult>* Results);
	void OnSearchError(const struct FString& Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(const struct U_Types_X_FCustomMatchSettings& InFilter, const struct FString& InPreferredRegion);
	class UOnlineGameServerBrowser_X* SetCompleteDelegate(const struct FScriptDelegate& Callback);
	class UOnlineGameServerBrowser_X* SetErrorDelegate(const struct FScriptDelegate& Callback);
	void EventBrowserError(class UOnlineGameServerBrowser_X* Browser, class UError* Error);
	void EventSearchError(const struct FString& NewStatus);
	void EventSearchComplete(TArray<struct FServerResult>* Results);
};


// Class ProjectX.OnlineGameMatchmakingBase_X
// 0x0054 (0x00B4 - 0x0060)
class UOnlineGameMatchmakingBase_X : public UOnline_X
{
public:
	class UCheckReservation_X*                         CheckReservation;                                         // 0x0060(0x0004) (CPF_Transient)
	class UAsyncTask*                                  StartMatchmakingTask;                                     // 0x0064(0x0004) (CPF_Transient)
	struct FString                                     PingingRegionsString;                                     // 0x0068(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameComplete__Delegate;                        // 0x0074(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameStatus__Delegate;                          // 0x0084(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameError__Delegate;                           // 0x0094(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameStateChanged__Delegate;                    // 0x00A4(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameMatchmakingBase_X");
		return ptr;
	}


	class UCheckReservation_X* CreateCheckReservation();
	void GotoMatchmakingState(const struct FName& StateName);
	void ClearStartMatchmakingRPC();
	void ClearCheckReservation();
	void OnSearchComplete(bool bCanceled);
	void Cancel();
	bool IsSearching();
	class UOnlineGameMatchmakingBase_X* AddFindGameStateChangedDelegate(const struct FScriptDelegate& NewDelegate);
	class UOnlineGameMatchmakingBase_X* AddFindGameCompleteDelegate(const struct FScriptDelegate& HandleFindGameComplete);
	class UOnlineGameMatchmakingBase_X* AddFindGameErrorDelegate(const struct FScriptDelegate& HandleFindGameError);
	class UOnlineGameMatchmakingBase_X* AddFindGameStatusChangedDelegate(const struct FScriptDelegate& HandleFindGameStatusChanged);
	void EventFindGameStateChanged(const struct FName& NewState);
	void EventFindGameError(const struct FString& NewStatus);
	void EventFindGameStatus(const struct FString& NewStatus);
	void EventFindGameComplete(bool bCancelled);
};


// Class ProjectX.OnlineGamePrivateMatch_X
// 0x00BC (0x0170 - 0x00B4)
class UOnlineGamePrivateMatch_X : public UOnlineGameMatchmakingBase_X
{
public:
	struct FString                                     PreferredRegion;                                          // 0x00B4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     SearchingString;                                          // 0x00C0(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     StartSearchFailString;                                    // 0x00CC(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     FoundServerString;                                        // 0x00D8(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     AlreadyJoiningGameString;                                 // 0x00E4(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     TimeoutString;                                            // 0x00F0(0x000C) (CPF_Edit, CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct U_Types_X_FCustomMatchSettings              Settings;                                                 // 0x00FC(0x0060) (CPF_Transient, CPF_NeedCtorLink)
	float                                              SearchTimeout;                                            // 0x015C(0x0004) (CPF_Edit, CPF_Const)
	struct FScriptDelegate                             __EventPrivateMatchError__Delegate;                       // 0x0160(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGamePrivateMatch_X");
		return ptr;
	}


	struct FString GetFriendlyRegionString();
	void OnPrivateMatchError(const struct FString& Message);
	bool StartSearch(const struct FString& InPreferredRegion, const struct U_Types_X_FCustomMatchSettings& InSettings);
	void EventPrivateMatchError(class UOnlineGamePrivateMatch_X* InPrivateMatch, class UError* Error);
};


// Class ProjectX.OnlineGameMatchmaking_X
// 0x0098 (0x014C - 0x00B4)
class UOnlineGameMatchmaking_X : public UOnlineGameMatchmakingBase_X
{
public:
	TArray<int>                                        PreferredPlaylists;                                       // 0x00B4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FString>                             PreferredRegions;                                         // 0x00C0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     SearchingString;                                          // 0x00CC(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     StartSearchFailString;                                    // 0x00D8(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     FoundServerString;                                        // 0x00E4(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     PlaylistsHaveChangedString;                               // 0x00F0(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     MatchmakingAttemptString;                                 // 0x00FC(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	float                                              MatchmakingStartTime;                                     // 0x0108(0x0004) (CPF_Transient)
	int                                                MatchmakingBanTime;                                       // 0x010C(0x0004)
	unsigned long                                      bIgnoreSkill : 1;                                         // 0x0110(0x0004) (CPF_Transient)
	float                                              MatchmakingDisabledDuration;                              // 0x0114(0x0004) (CPF_Edit)
	float                                              MatchmakingDisabledUntilTime;                             // 0x0118(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventStartSearch__Delegate;                             // 0x011C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchmakingError__Delegate;                        // 0x012C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchmakingCanceledOnPartySizeChanged__Delegate;   // 0x013C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameMatchmaking_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsMatchmakingDisabled();
	class UMatchmakingMetrics_X* GetMetrics();
	void SetSkillIgnored(bool bIgnore);
	void ToggleSkill();
	void ClearMatchmakingBanTime();
	void SetMatchmakingBanTime(int Duration);
	void HandlePartySizeChanged(class UOnlineGameParty_X* PartyObject, int NewSize, int OldSize);
	void HandlePartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void OnFindGameWarning(const struct FString& FailReason);
	void GetGameServerID();
	int SortPlaylists(int A, int B);
	struct FString GetPartyMembersString();
	struct FString GetLocalizedRegionsString();
	struct FString GetRegionsString();
	struct FString GetLocalizedPlaylistsString();
	struct FString GetPlaylistsString();
	void OnExit();
	bool StartSearch(TArray<int> InPreferredPlaylists, TArray<struct FString> InPreferredRegions, TArray<int>* SortLocal_54F51C1549DFF6DBE8070A88AD1B704F);
	void OnInit();
	void EventMatchmakingCanceledOnPartySizeChanged(class UOnlineGameMatchmaking_X* InMatchMaking);
	void EventMatchmakingError(class UOnlineGameMatchmaking_X* InMatchMaking, class UError* Error);
	void EventStartSearch(class UOnlineGameMatchmakingBase_X* InMatchMaking);
};


// Class ProjectX.OnlineGameTrial_X
// 0x0024 (0x0084 - 0x0060)
class UOnlineGameTrial_X : public UOnline_X
{
public:
	unsigned long                                      bForceTrial : 1;                                          // 0x0060(0x0004) (CPF_Edit)
	unsigned long                                      bTrialEnabled : 1;                                        // 0x0060(0x0004) (CPF_Transient)
	unsigned long                                      bPsyNetTrialDataSet : 1;                                  // 0x0060(0x0004) (CPF_Transient)
	int                                                MinutesRemaining;                                         // 0x0064(0x0004) (CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameTrial_X.LastPlayedTime
	int                                                SecondsPlayed;                                            // 0x0070(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventUpdated__Delegate;                                 // 0x0074(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameTrial_X");
		return ptr;
	}


	void OnChanged();
	void HandleMapChanged();
	void OverrideTrialMode(bool bTrial);
	void SetUpdateTimer();
	void SetTime(int InMinutesRemaining);
	void CommitTimePlayed();
	void AccummulateTimePlayed(int InSecondsPlayed);
	float GetSecondsSinceLastPlayTime();
	void HandleGetTrialDataRPC(class URPC_GetTrialData_X* RPC);
	void SyncTrialData();
	void HandlePsyNetLogin();
	void UpdateTrialStatus();
	bool IsTrialExpired();
	bool IsFullVersion();
	bool IsTrialVersion();
	void OnInit();
	void EventUpdated(class UOnlineGameTrial_X* Trial);
};


// Class ProjectX.OnlineGameVersion_X
// 0x0004 (0x0064 - 0x0060)
class UOnlineGameVersion_X : public UOnline_X
{
public:
	unsigned long                                      bUpdateRequired : 1;                                      // 0x0060(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameVersion_X");
		return ptr;
	}


	void HandleError(class UError* Error);
	void HandleServerBrowserError(class UOnlineGameServerBrowser_X* Browser, class UError* Error);
	void HandlePrivateMatchError(class UOnlineGamePrivateMatch_X* InPrivateMatch, class UError* Error);
	void HandleRegionsError(class UOnlineGameRegions_X* InRegions, class UError* Error);
	void HandleMatchmakingError(class UOnlineGameMatchmaking_X* InMatchMaking, class UError* Error);
	void OnInit();
};


// Class ProjectX.LanBrowser_X
// 0x0000 (0x003C - 0x003C)
class ULanBrowser_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanBrowser_X");
		return ptr;
	}


	class UAsyncTask* JoinServer(const struct FString& ServerID, const struct FString& Options);
	class ULanSearchTask* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(const struct FString& MetaData);
	class UAsyncTask* CreateServer(const struct FString& MetaData);
	void HandleGameInfoSpawned(class AGameInfo_X* G);
	void Construct();
};


// Class ProjectX.UdpLanBrowser_X
// 0x001C (0x0058 - 0x003C)
class UUdpLanBrowser_X : public ULanBrowser_X
{
public:
	float                                              SearchTimeout;                                            // 0x003C(0x0004) (CPF_Edit, CPF_Const)
	class ULanBeacon_X*                                LanBeacon;                                                // 0x0040(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class ULanSearchTask*                              SearchTask;                                               // 0x0044(0x0004)
	TArray<class ULanServerRecord_X*>                  SearchResults;                                            // 0x0048(0x000C) (CPF_NeedCtorLink)
	class UUdpLanServer_X*                             LocalServer;                                              // 0x0054(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpLanBrowser_X");
		return ptr;
	}


	class UAsyncTask* JoinServer(const struct FString& ServerID, const struct FString& Options);
	void HandleSearchTimeout();
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class ULanMessage_HostResponse_X* Response);
	void SearchTaskDisposed();
	class ULanSearchTask* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(const struct FString& MetaData);
	class UAsyncTask* CreateServer(const struct FString& MetaData);
};


// Class ProjectX.SystemMetrics_X
// 0x0000 (0x0054 - 0x0054)
class USystemMetrics_X : public UMetricsGroup_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SystemMetrics_X");
		return ptr;
	}


	void Specs(const struct FOSMetrics& OS, const struct FCpuMetrics& CPU, const struct FMemoryMetrics& Memory, const struct FVideoCardMetrics& Video, const struct FNetworkAdapterMetrics& Network);
	void RecordSpecs();
};


// Class ProjectX.RPC_GetPublicIP_X
// 0x000C (0x00A8 - 0x009C)
class URPC_GetPublicIP_X : public URPC_X
{
public:
	struct FString                                     IP;                                                       // 0x009C(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPublicIP_X");
		return ptr;
	}

};


// Class ProjectX.RPC_UpdatePlayerPlaylist_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_UpdatePlayerPlaylist_X : public URPC_X
{
public:
	int                                                Playlist;                                                 // 0x009C(0x0004)
	int                                                NumLocalPlayers;                                          // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdatePlayerPlaylist_X");
		return ptr;
	}


	class URPC_UpdatePlayerPlaylist_X* SetNumLocalPlayers(int InNumLocalPlayers);
	class URPC_UpdatePlayerPlaylist_X* SetPlaylist(int InPlaylist);
};


// Class ProjectX.OnlineStaticTextSync_X
// 0x0044 (0x008C - 0x0048)
class UOnlineStaticTextSync_X : public UComponent
{
public:
	struct FString                                     URL;                                                      // 0x0048(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	int                                                CacheMinutes;                                             // 0x0054(0x0004) (CPF_Edit)
	struct FString                                     Text;                                                     // 0x0058(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	float                                              LastUpdateTime;                                           // 0x0064(0x0004) (CPF_Transient)
	unsigned long                                      bSyncing : 1;                                             // 0x0068(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventTextChanged__Delegate;                             // 0x006C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTextSynced__Delegate;                              // 0x007C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineStaticTextSync_X");
		return ptr;
	}


	void SetText(const struct FString& NewText);
	void ParseBlogInfo();
	void HandleTextSync(class UWebRequest_X* Request);
	void GetText(const struct FScriptDelegate& Callback);
	struct FString STATIC_GetDBEnvironment();
	void EventTextSynced(class UOnlineStaticTextSync_X* TextSync);
	void EventTextChanged(class UOnlineStaticTextSync_X* TextSync);
};


// Class ProjectX.OnlineGameBlog_X
// 0x0010 (0x009C - 0x008C)
class UOnlineGameBlog_X : public UOnlineStaticTextSync_X
{
public:
	class UBlogTiles_X*                                BlogTiles;                                                // 0x008C(0x0004) (CPF_Transient)
	TArray<struct FMotDMessage>                        MotDAdditionalMessages;                                   // 0x0090(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameBlog_X");
		return ptr;
	}


	struct FString __OnlineGameBlog_X__GetMotD_1(const struct FMotDMessage& M);
	void AddUniqueMotDMessage(const struct FString& NewMessage, const struct FName& NewMessageTag);
	void AddAdditionalMotDMessage(const struct FString& NewMessage, const struct FName& NewMessageTag, struct FMotDMessage* StructInitializer_0D747921458E714842ED6ABA13828394);
	void RemoveAdditionalMessagesByTag(const struct FName& MessageTag, TArray<struct FMotDMessage>* FilterLocal_A59E71A64C2DE15FB4C60597F193658E);
	struct FString GetMotD(TArray<struct FString>* MapLocal_CA03414C403F21C256FC37A9A3AE8A3C);
	void ParseBlogInfo();
	void Init();
};


// Class ProjectX.__OnlineGameBlog_X__RemoveAdditionalMessagesByTag_1
// 0x0008 (0x0044 - 0x003C)
class U__OnlineGameBlog_X__RemoveAdditionalMessagesByTag_1 : public UObject
{
public:
	struct FName                                       MessageTag;                                               // 0x003C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlineGameBlog_X__RemoveAdditionalMessagesByTag_1");
		return ptr;
	}


	bool __OnlineGameBlog_X__RemoveAdditionalMessagesByTag_1(const struct FMotDMessage& M);
};


// Class ProjectX.BlogTiles_X
// 0x0034 (0x0070 - 0x003C)
class UBlogTiles_X : public UObject
{
public:
	TArray<class UBlogTile_X*>                         CarouselTiles;                                            // 0x003C(0x000C) (CPF_NeedCtorLink)
	TArray<class UBlogTile_X*>                         RLCSTiles;                                                // 0x0048(0x000C) (CPF_NeedCtorLink)
	TArray<class UBlogTile_X*>                         CommunityTiles;                                           // 0x0054(0x000C) (CPF_NeedCtorLink)
	struct FString                                     MotD;                                                     // 0x0060(0x000C) (CPF_NeedCtorLink)
	int                                                NumOfCarouselTiles;                                       // 0x006C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BlogTiles_X");
		return ptr;
	}


	void __BlogTiles_X__UTCtoEpochArray_1(class UBlogTile_X* BlogTile);
	void UTCtoEpochArray(TArray<class UBlogTile_X*>* BlogTiles);
	void UTCtoEpoch();
};


// Class ProjectX.OnlineGameDedicatedServerRegistration_X
// 0x0018 (0x0078 - 0x0060)
class UOnlineGameDedicatedServerRegistration_X : public UOnline_X
{
public:
	class UServerConfig_X*                             Config;                                                   // 0x0060(0x0004) (CPF_Edit)
	class UCacheTimer_X*                               HeartbeatTimer;                                           // 0x0064(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	int                                                GameTimeTimer;                                            // 0x0068(0x0004) (CPF_Edit)
	int                                                GameTimeSeconds;                                          // 0x006C(0x0004) (CPF_Transient)
	class URPC_X*                                      UpdateGameServerRPC;                                      // 0x0070(0x0004) (CPF_Transient)
	float                                              PsyNetDisconnectShutdownTime;                             // 0x0074(0x0004) (CPF_Edit, CPF_Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameDedicatedServerRegistration_X");
		return ptr;
	}


	void __OnlineGameDedicatedServerRegistration_X__HandleCreateServerSucces_1(class UCacheTimer_X* Timer);
	void UpdateCustomGame();
	struct FString GetExclusivePlatformString(TEnumAsByte<EOnlinePlatform> Platform);
	void UpdateGameTime(int TimeSeconds);
	bool ShouldShutdownWhenEmpty();
	void TimerShutdownWhenEmpty();
	void HandleUpdateServerFailed(class URPC_UpdateGameServer_X* RPC);
	void HandleUpdateServerSucces(class URPC_UpdateGameServer_X* RPC);
	void HandleCreateServerFailed(class URPC_CreateGameServer_X* RPC);
	void HandleCreateServerSucces(class URPC_CreateGameServer_X* RPC, struct U_Types_X_FCustomMatchSettings* StructInitializer_14E09D8340DA5A9574562EB9797B070B);
	void SetServerNotJoinable();
	void SendUpdateServerRPC();
	struct FString GetServerType();
	void SendCreateServerRPC();
	void SendUpdateRequest();
	void UpdateServer();
	void HandleConfigUpdate();
	void UnregisterServer();
	void RegisterServer();
	void OnInit();
};


// Class ProjectX.OnlinePlayerPermissions_X
// 0x002C (0x0068 - 0x003C)
class UOnlinePlayerPermissions_X : public UObject
{
public:
	float                                              SyncDelay;                                                // 0x003C(0x0004) (CPF_Edit)
	TArray<struct FUniqueNetId>                        PendingPlayerRequests;                                    // 0x0040(0x000C) (CPF_NeedCtorLink)
	TArray<struct FPlayerPermissionsList>              PlayerPermissions;                                        // 0x004C(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventUpdated__Delegate;                                 // 0x0058(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerPermissions_X");
		return ptr;
	}


	bool HasPermission(const struct FUniqueNetId& PlayerID, TEnumAsByte<EOnlinePlayerPermission> Permission);
	void HandlePlayerPermissions(class URPC_GetPlayerPermissions_X* RPC);
	void SendRequest();
	void SyncPermissions(const struct FUniqueNetId& PlayerID);
	void EventUpdated(class UOnlinePlayerPermissions_X* Permissions);
};


// Class ProjectX.RPC_CheckReplacementDedicatedServer_X
// 0x0028 (0x00C4 - 0x009C)
class URPC_CheckReplacementDedicatedServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x009C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_CheckReplacementDedicatedServer_X.ServerID
	unsigned long                                      bFoundReplacement : 1;                                    // 0x00A4(0x0004) (CPF_Transient)
	struct FCheckReplacementDedicatedServerData        Server;                                                   // 0x00A8(0x001C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CheckReplacementDedicatedServer_X");
		return ptr;
	}


	struct FString GetServerAddress();
	class URPC_CheckReplacementDedicatedServer_X* SetServerID();
};


// Class ProjectX.RPC_AddQuitter_X
// 0x0054 (0x00F0 - 0x009C)
class URPC_AddQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)
	struct FString                                     Reason;                                                   // 0x00E4(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_AddQuitter_X");
		return ptr;
	}


	class URPC_AddQuitter_X* SetReason(const struct FString& InReason);
	class URPC_AddQuitter_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};


// Class ProjectX.RPC_RemoveQuitter_X
// 0x0048 (0x00E4 - 0x009C)
class URPC_RemoveQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RemoveQuitter_X");
		return ptr;
	}


	class URPC_RemoveQuitter_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};


// Class ProjectX.ClanforgeReservation_X
// 0x0048 (0x0084 - 0x003C)
class UClanforgeReservation_X : public UObject
{
public:
	struct FString                                     ReserveURLs[0x3];                                         // 0x003C(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<EReserveState>                         ReserveState;                                             // 0x0060(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	TArray<float>                                      RetryDelays;                                              // 0x0064(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	int                                                SendFailures;                                             // 0x0070(0x0004) (CPF_Transient)
	TArray<class UWebRequest_X*>                       QueuedRequests;                                           // 0x0074(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UWebRequest_X*                               PendingRequest;                                           // 0x0080(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ClanforgeReservation_X");
		return ptr;
	}


	void HandleRetry();
	void Retry();
	void HandleSendComplete(class UWebRequest_X* Request);
	void ProcessNextRequest();
	void Send(const struct FString& URL);
	void SetReserveState(TEnumAsByte<EReserveState> NewState);
	void HandleActivate(class UOnlineGameDedicatedServer_X* Server);
	void HandleInactive(class UOnlineGameDedicatedServer_X* Server);
	void Init(class UOnlineGameDedicatedServer_X* Server, const struct FString& ReserveURL, const struct FString& UnreserveURL);
};


// Class ProjectX.RPC_DeactivateGameServer_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_DeactivateGameServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x009C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_DeactivateGameServer_X.ServerID

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_DeactivateGameServer_X");
		return ptr;
	}


	class URPC_DeactivateGameServer_X* SetServerID();
};


// Class ProjectX.CacheTimer_X
// 0x001C (0x0064 - 0x0048)
class UCacheTimer_X : public UComponent
{
public:
	float                                              CacheTimeoutSeconds;                                      // 0x0048(0x0004) (CPF_Edit)
	float                                              CacheExpireTime;                                          // 0x004C(0x0004) (CPF_Transient)
	unsigned long                                      bEnabled : 1;                                             // 0x0050(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventExpired__Delegate;                                 // 0x0054(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CacheTimer_X");
		return ptr;
	}


	float GetRandomCacheTimeoutTime();
	void OnExpired();
	void OnDisabled();
	void OnEnabled();
	void SetEnabled(bool bEnableExpiration);
	void Reset();
	bool IsExpired();
	void EventExpired(class UCacheTimer_X* Timer);
};


// Class ProjectX.RPC_SetServerNotJoinable_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_SetServerNotJoinable_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x009C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_SetServerNotJoinable_X.ServerID

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetServerNotJoinable_X");
		return ptr;
	}


	class URPC_SetServerNotJoinable_X* SetServerID();
};


// Class ProjectX.RPC_UpdateCustomGameServer_X
// 0x0020 (0x00BC - 0x009C)
class URPC_UpdateCustomGameServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x009C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_UpdateCustomGameServer_X.ServerID
	struct FString                                     ServerName;                                               // 0x00A4(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Password;                                                 // 0x00B0(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateCustomGameServer_X");
		return ptr;
	}


	class URPC_UpdateCustomGameServer_X* SetPassword(const struct FString& InPassword);
	class URPC_UpdateCustomGameServer_X* SetServerName(const struct FString& InServerName);
	class URPC_UpdateCustomGameServer_X* SetServerID();
};


// Class ProjectX.RPC_UpdateGameServer_X
// 0x004C (0x00E8 - 0x009C)
class URPC_UpdateGameServer_X : public URPC_X
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x009C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_UpdateGameServer_X.ServerID
	int                                                Playlist;                                                 // 0x00A4(0x0004)
	int                                                MaxPlayers;                                               // 0x00A8(0x0004)
	int                                                NumPlayersTeam1;                                          // 0x00AC(0x0004)
	int                                                NumPlayersTeam2;                                          // 0x00B0(0x0004)
	int                                                ReservationsTeam1;                                        // 0x00B4(0x0004)
	int                                                ReservationsTeam2;                                        // 0x00B8(0x0004)
	unsigned long                                      bIsPostGame : 1;                                          // 0x00BC(0x0004)
	int                                                TimeRemaining;                                            // 0x00C0(0x0004)
	struct FString                                     ExclusivePlatform;                                        // 0x00C4(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             PlayersPlatforms;                                         // 0x00D0(0x000C) (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                // 0x00DC(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateGameServer_X");
		return ptr;
	}


	class URPC_UpdateGameServer_X* SetPlayersPlatforms(TArray<struct FString> InPlayersPlatforms);
	class URPC_UpdateGameServer_X* SetExclusivePlatform(const struct FString& InExclusivePlatform);
	class URPC_UpdateGameServer_X* SetTimeRemaining(int InTimeRemaining);
	class URPC_UpdateGameServer_X* SetIsPostGame(bool bInIsPostGame);
	class URPC_UpdateGameServer_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
	class URPC_UpdateGameServer_X* SetReservationsTeam2(int InReservationsTeam2);
	class URPC_UpdateGameServer_X* SetReservationsTeam1(int InReservationsTeam1);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam2(int InNumPlayersTeam2);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam1(int InNumPlayersTeam1);
	class URPC_UpdateGameServer_X* SetMaxPlayers(int InMaxPlayers);
	class URPC_UpdateGameServer_X* SetPlaylist(int InPlaylist);
	class URPC_UpdateGameServer_X* SetServerID();
};


// Class ProjectX.RPC_CreateGameServer_X
// 0x004C (0x00E8 - 0x009C)
class URPC_CreateGameServer_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                               // 0x009C(0x000C) (CPF_NeedCtorLink)
	int                                                MachineId;                                                // 0x00A8(0x0004)
	struct FString                                     IP;                                                       // 0x00AC(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Region;                                                   // 0x00B8(0x000C) (CPF_NeedCtorLink)
	int                                                BuildID;                                                  // 0x00C4(0x0004)
	struct FString                                     ServerType;                                               // 0x00C8(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D4(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_CreateGameServer_X.ServerID
	struct FString                                     Host;                                                     // 0x00DC(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CreateGameServer_X");
		return ptr;
	}


	class URPC_CreateGameServer_X* SetBuildID(int InBuildID);
	class URPC_CreateGameServer_X* SetRegion(const struct FString& InRegion);
	class URPC_CreateGameServer_X* SetIP(const struct FString& InIP);
	class URPC_CreateGameServer_X* SetMachineID(int InMachineID);
	class URPC_CreateGameServer_X* SetServerType(const struct FString& InServerType);
	class URPC_CreateGameServer_X* SetServerName(const struct FString& InServerName);
};


// Class ProjectX.ServerConfig_X
// 0x0004 (0x0050 - 0x004C)
class UServerConfig_X : public UOnlineConfig_X
{
public:
	float                                              HeartbeatSeconds;                                         // 0x004C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ServerConfig_X");
		return ptr;
	}

};


// Class ProjectX.PartyErrors_X
// 0x0064 (0x00B8 - 0x0054)
class UPartyErrors_X : public UErrorList
{
public:
	class UErrorType*                                  CreatePartyFailed;                                        // 0x0054(0x0004) (CPF_Const)
	class UErrorType*                                  CreatePartyFailedTeamFull;                                // 0x0058(0x0004) (CPF_Const)
	class UErrorType*                                  CreatePlayerFailedPartyFull;                              // 0x005C(0x0004) (CPF_Const)
	class UErrorType*                                  InvitePlayerToPartyFailedPartyFull;                       // 0x0060(0x0004) (CPF_Const)
	class UErrorType*                                  JoinPartyFailedPartyFull;                                 // 0x0064(0x0004) (CPF_Const)
	class UErrorType*                                  JoinPartyFailedPartyMatchmaking;                          // 0x0068(0x0004) (CPF_Const)
	class UErrorType*                                  JoinPartyFailedPartyInGame;                               // 0x006C(0x0004) (CPF_Const)
	class UErrorType*                                  KickedFromParty;                                          // 0x0070(0x0004) (CPF_Const)
	class UErrorType*                                  PartyDestroyedConnectionError;                            // 0x0074(0x0004) (CPF_Const)
	class UErrorType*                                  PartyDestroyedSignedOut;                                  // 0x0078(0x0004) (CPF_Const)
	class UErrorType*                                  JoinPartyFailed;                                          // 0x007C(0x0004) (CPF_Const)
	class UErrorType*                                  JoinPartyFailedNotAllowed;                                // 0x0080(0x0004) (CPF_Const)
	class UErrorType*                                  JoinPartyFailedNotJoinable;                               // 0x0084(0x0004) (CPF_Const)
	class UErrorType*                                  PartyBuildID;                                             // 0x0088(0x0004) (CPF_Const)
	class UErrorType*                                  PartyNotFound;                                            // 0x008C(0x0004) (CPF_Const)
	class UErrorType*                                  UserNotOwner;                                             // 0x0090(0x0004) (CPF_Const)
	class UErrorType*                                  PartyIsFull;                                              // 0x0094(0x0004) (CPF_Const)
	class UErrorType*                                  CannotAddToParty;                                         // 0x0098(0x0004) (CPF_Const)
	class UErrorType*                                  UserListInvalid;                                          // 0x009C(0x0004) (CPF_Const)
	class UErrorType*                                  InvalidOwner;                                             // 0x00A0(0x0004) (CPF_Const)
	class UErrorType*                                  ChatDisabled;                                             // 0x00A4(0x0004) (CPF_Const)
	class UErrorType*                                  MissingOrExpiredInvite;                                   // 0x00A8(0x0004) (CPF_Const)
	class UErrorType*                                  MemberNotFound;                                           // 0x00AC(0x0004) (CPF_Const)
	class UErrorType*                                  PartyIdConflict;                                          // 0x00B0(0x0004) (CPF_Const)
	class UErrorType*                                  CannotKickSelf;                                           // 0x00B4(0x0004) (CPF_Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyErrors_X");
		return ptr;
	}

};


// Class ProjectX.ReservationsFullMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsFullMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsFullMessage_X");
		return ptr;
	}

};


// Class ProjectX.ReservationsTeamFullMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsTeamFullMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsTeamFullMessage_X");
		return ptr;
	}

};


// Class ProjectX.ReservationsWaitingMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsWaitingMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsWaitingMessage_X");
		return ptr;
	}

};


// Class ProjectX.ReservationsReadyMessage_X
// 0x0018 (0x0054 - 0x003C)
class UReservationsReadyMessage_X : public UBeaconMessage_X
{
public:
	struct FString                                     ServerAddress;                                            // 0x003C(0x000C) (CPF_NeedCtorLink)
	TArray<int>                                        ProductIDs;                                               // 0x0048(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsReadyMessage_X");
		return ptr;
	}


	class UReservationsReadyMessage_X* SetProductIDs(TArray<int> InProductIDs);
	class UReservationsReadyMessage_X* SetServerAddress(const struct FString& InAddress);
};


// Class ProjectX.ReservationsTimedOutMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsTimedOutMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsTimedOutMessage_X");
		return ptr;
	}

};


// Class ProjectX.ReservationsPrivateMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsPrivateMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsPrivateMessage_X");
		return ptr;
	}

};


// Class ProjectX.ReservationsPasswordMessage_X
// 0x0001 (0x003D - 0x003C)
class UReservationsPasswordMessage_X : public UBeaconMessage_X
{
public:
	TEnumAsByte<EPasswordFailureReason>                Reason;                                                   // 0x003C(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsPasswordMessage_X");
		return ptr;
	}


	class UReservationsPasswordMessage_X* SetReason(TEnumAsByte<EPasswordFailureReason> InReason);
};


// Class ProjectX.ReservationsWrongPlaylistMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsWrongPlaylistMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsWrongPlaylistMessage_X");
		return ptr;
	}

};


// Class ProjectX.ReservationsKeysFailedMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsKeysFailedMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsKeysFailedMessage_X");
		return ptr;
	}

};


// Class ProjectX.ReservationCrossplayDisabledMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationCrossplayDisabledMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationCrossplayDisabledMessage_X");
		return ptr;
	}

};


// Class ProjectX.ReservationsMaxPlayersMessage_X
// 0x0004 (0x0040 - 0x003C)
class UReservationsMaxPlayersMessage_X : public UBeaconMessage_X
{
public:
	int                                                MaxPlayerCount;                                           // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsMaxPlayersMessage_X");
		return ptr;
	}


	class UReservationsMaxPlayersMessage_X* SetMaxPlayerCount(int inMaxPlayerCount);
};


// Class ProjectX.PingMessage_X
// 0x0004 (0x0040 - 0x003C)
class UPingMessage_X : public UBeaconMessage_X
{
public:
	unsigned long                                      bIsResponse : 1;                                          // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PingMessage_X");
		return ptr;
	}


	class UPingMessage_X* SetIsResponse();
};


// Class ProjectX.RPC_KeysBase_X
// 0x0044 (0x00E0 - 0x009C)
class URPC_KeysBase_X : public URPC_X
{
public:
	struct FString                                     ServerHost;                                               // 0x009C(0x000C) (CPF_NeedCtorLink)
	int                                                ServerPort;                                               // 0x00A8(0x0004)
	struct FString                                     Key;                                                      // 0x00AC(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     IV;                                                       // 0x00B8(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     HMACKey;                                                  // 0x00C4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     SessionId;                                                // 0x00D0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bPrimaryPlayer : 1;                                       // 0x00DC(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_KeysBase_X");
		return ptr;
	}


	class URPC_KeysBase_X* SetPrimaryPlayer();
	class URPC_KeysBase_X* SetServerAddress(const struct FString& ServerAddress);
};


// Class ProjectX.RPC_GenerateKeys_X
// 0x0000 (0x00E0 - 0x00E0)
class URPC_GenerateKeys_X : public URPC_KeysBase_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GenerateKeys_X");
		return ptr;
	}

};


// Class ProjectX.OnlineGameLanReservations_X
// 0x0020 (0x0080 - 0x0060)
class UOnlineGameLanReservations_X : public UOnline_X
{
public:
	class ULanBeacon_X*                                LanBeacon;                                                // 0x0060(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UTcpMessageBeacon*                           Beacon;                                                   // 0x0064(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	float                                              ReservationTimeout;                                       // 0x0068(0x0004) (CPF_Edit)
	unsigned long                                      bServerTraveling : 1;                                     // 0x006C(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventReservationsTimeout__Delegate;                     // 0x0070(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameLanReservations_X");
		return ptr;
	}


	void HackForceNotServerTravelling();
	void SetServerTraveling(bool bTraveling);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	int GetNumPlayers();
	void AllowPlayerLogin(const struct FString& Options, const struct FUniqueNetId& PlayerID, struct FString* ErrorMessage);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void Reset();
	void CheckReservationTimeout();
	bool HandlePublicReservation(class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message);
	void HandlePublicReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void StartReservationTimeout();
	bool HandlePrivateReservation(class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message);
	void HandlePrivateReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandlePingMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnInit();
	void EventReservationsTimeout();
};


// Class ProjectX.RPC_GetLeaderboardValueForUserBase_X
// 0x0060 (0x00FC - 0x009C)
class URPC_GetLeaderboardValueForUserBase_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)
	struct FString                                     LeaderboardId;                                            // 0x00E4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bHasSkill : 1;                                            // 0x00F0(0x0004) (CPF_Transient)
	unsigned long                                      bHasValue : 1;                                            // 0x00F0(0x0004) (CPF_Transient)
	int                                                Value;                                                    // 0x00F4(0x0004) (CPF_Transient)
	float                                              MMR;                                                      // 0x00F8(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardValueForUserBase_X");
		return ptr;
	}


	class URPC_GetLeaderboardValueForUserBase_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};


// Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X
// 0x0004 (0x0100 - 0x00FC)
class URPC_GetSkillLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	int                                                Playlist;                                                 // 0x00FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X");
		return ptr;
	}


	class URPC_GetSkillLeaderboardValueForUser_X* SetPlaylist(int InPlaylist);
};


// Class ProjectX.RPC_GetLeaderboardValueForUser_X
// 0x000C (0x0108 - 0x00FC)
class URPC_GetLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	struct FString                                     Stat;                                                     // 0x00FC(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardValueForUser_X");
		return ptr;
	}


	class URPC_GetLeaderboardValueForUser_X* SetStat(const struct FString& InStat);
};


// Class ProjectX.RPC_GetLeaderboardBase_X
// 0x001C (0x00B8 - 0x009C)
class URPC_GetLeaderboardBase_X : public URPC_X
{
public:
	unsigned long                                      bDisableCrossPlay : 1;                                    // 0x009C(0x0004)
	struct FString                                     LeaderboardId;                                            // 0x00A0(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FGetLeaderboardPlatformBaseData>     Platforms;                                                // 0x00AC(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardBase_X");
		return ptr;
	}


	class URPC_GetLeaderboardBase_X* SetDisableCrossPlay(bool InDisableCrossPlay);
};


// Class ProjectX.RPC_GetSkillLeaderboard_X
// 0x0004 (0x00BC - 0x00B8)
class URPC_GetSkillLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	int                                                Playlist;                                                 // 0x00B8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboard_X");
		return ptr;
	}


	class URPC_GetSkillLeaderboard_X* SetPlaylist(int InPlaylist);
};


// Class ProjectX.RPC_GetLeaderboard_X
// 0x000C (0x00C4 - 0x00B8)
class URPC_GetLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	struct FString                                     Stat;                                                     // 0x00B8(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboard_X");
		return ptr;
	}


	class URPC_GetLeaderboard_X* SetStat(const struct FString& InStat);
};


// Class ProjectX.OnlinePlayerFriends_X
// 0x009C (0x00FC - 0x0060)
class UOnlinePlayerFriends_X : public UOnline_X
{
public:
	TArray<struct FOnlineFriend>                       CachedFriends;                                            // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFriendsListChanged__Delegate;                      // 0x006C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetFriendRequestSentSuccess__Delegate;          // 0x007C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetPlayerSearch__Delegate;                      // 0x008C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetPendingFriendRequests__Delegate;             // 0x009C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConReceivedFriendChatMessage__Delegate;         // 0x00AC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConReceivedFriendAcceptedRequest__Delegate;     // 0x00BC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConReceivedFriendFriendStatusUpdate__Delegate;  // 0x00CC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConReceivedIncomingFriendRequest__Delegate;     // 0x00DC(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConReceivedPlayerUnfriended__Delegate;          // 0x00EC(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerFriends_X");
		return ptr;
	}


	void __OnlinePlayerFriends_X__OnInit_5(class UPsyNetService_PlayerUnfriended_X* N);
	void __OnlinePlayerFriends_X__OnInit_4(class UPsyNetService_IncomingFriendRequest_X* N);
	void __OnlinePlayerFriends_X__OnInit_3(class UPsyNetService_FriendStatusUpdate_X* N);
	void __OnlinePlayerFriends_X__OnInit_2(class UPsyNetService_FriendAcceptedRequest_X* N);
	void __OnlinePlayerFriends_X__OnInit_1(class UPsyNetService_FriendChatReceived_X* N);
	void SendChatMessage(const struct FString& InMessage, const struct FUniqueNetId& Recipient);
	void ShowPlayerCard(const struct FUniqueNetId& FriendId);
	void SetRichPresence(unsigned char LocalUserNum, const struct FString& PresenceString, const struct FString& GameDataString);
	void RemoveFriend(const struct FUniqueNetId& FriendId);
	void DeclineFriendRequest(const struct FUniqueNetId& FriendId);
	void AcceptFriendRequest(const struct FUniqueNetId& FriendId);
	class UAsyncTask* AddFriend(const struct FUniqueNetId& FriendId, const struct FScriptDelegate& Callback);
	struct FString GetFriendPresence(const struct FOnlineFriend& Friend);
	bool IsFriendJoinable(const struct FUniqueNetId& FriendId);
	struct FString GetFriendName(const struct FUniqueNetId& FriendId);
	bool IsFriend(const struct FUniqueNetId& FriendId);
	void HandleFriendsChange();
	void HandleFriendPresenceChange(const struct FUniqueNetId& FriendId);
	void MergeFriendLists(TArray<struct FOnlineFriend> OtherList, TArray<struct FOnlineFriend>* MainList);
	void GetFriendsFromOnlineSub();
	void UpdateFriendsList(const struct FScriptDelegate& HandleFriendsListChanged);
	void RemoveFriendsListChangedDelegate(const struct FScriptDelegate& HandleFriendsListChanged);
	void AddFriendsListChangedDelegate(const struct FScriptDelegate& HandleFriendsListChanged);
	void HandleDownloadFriendsComplete(bool bWasSuccessful);
	void DownloadFriendsList();
	void HandleLoginStatusChanged(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventPerConReceivedPlayerUnfriended(const struct FUniqueNetId& SenderId);
	void EventPerConReceivedIncomingFriendRequest(const struct FOnlineFriend& FriendData);
	void EventPerConReceivedFriendFriendStatusUpdate(const struct FOnlineFriend& FriendData);
	void EventPerConReceivedFriendAcceptedRequest(const struct FOnlineFriend& FriendData);
	void EventPerConReceivedFriendChatMessage(const struct FString& InMessage, const struct FUniqueNetId& SenderId, bool bIsLocal);
	void EventPsyNetPendingFriendRequests(TArray<struct FOnlineFriend> FriendData);
	void EventPsyNetPlayerSearch(TArray<struct FOnlineFriend> FriendData, const struct FString& SearchString);
	void EventPsyNetFriendRequestSentSuccess(const struct FUniqueNetId& FriendId);
	void EventFriendsListChanged(class UOnlinePlayerFriends_X* FriendsRef, class UError* Error);
};


// Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X
// 0x0024 (0x00C0 - 0x009C)
class URPC_GetLeaderboardRankForUsersBase_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                // 0x009C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     LeaderboardId;                                            // 0x00A8(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FGetLeaderboardRankForUserData>      Players;                                                  // 0x00B4(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X");
		return ptr;
	}


	class URPC_GetLeaderboardRankForUsersBase_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
};


// Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X
// 0x0004 (0x00C4 - 0x00C0)
class URPC_GetSkillLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	int                                                Playlist;                                                 // 0x00C0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X");
		return ptr;
	}


	class URPC_GetSkillLeaderboardRankForUsers_X* SetPlaylist(int InPlaylist);
};


// Class ProjectX.RPC_GetLeaderboardRankForUsers_X
// 0x000C (0x00CC - 0x00C0)
class URPC_GetLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	struct FString                                     Stat;                                                     // 0x00C0(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardRankForUsers_X");
		return ptr;
	}


	class URPC_GetLeaderboardRankForUsers_X* SetStat(const struct FString& InStat);
};


// Class ProjectX.CheckReservation_X
// 0x0044 (0x0080 - 0x003C)
class UCheckReservation_X : public UObject
{
public:
	float                                              StartDelay;                                               // 0x003C(0x0004) (CPF_Edit)
	float                                              Rate;                                                     // 0x0040(0x0004) (CPF_Edit)
	float                                              HeartbeatDelay;                                           // 0x0044(0x0004) (CPF_Edit)
	float                                              LastMatchmakingHeartbeatTime;                             // 0x0048(0x0004) (CPF_Transient)
	struct FScriptDelegate                             CheckReservationDelegate;                                 // 0x004C(0x0010) (CPF_Transient, CPF_NeedCtorLink)
	class UAsyncTask*                                  CheckReservationTask;                                     // 0x005C(0x0004) (CPF_Transient)
	struct FScriptDelegate                             FoundReservationCallback;                                 // 0x0060(0x0010) (CPF_Transient, CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartSearch__Delegate;                                // 0x0070(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheckReservation_X");
		return ptr;
	}


	void HandleReservationNotFound();
	void HandleFoundReservation(const struct FCheckReservationData& Reservation);
	void SendRequest();
	void Cancel();
	bool IsSearching();
	void StartSearch(const struct FScriptDelegate& Callback, const struct FScriptDelegate& ReservationDelegate);
	class UCheckReservation_X* NotifyOnStartSearch(const struct FScriptDelegate& Callback);
	void OnStartSearch(class UAsyncTask* Task);
};


// Class ProjectX.MatchmakingMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UMatchmakingMetrics_X : public UMetricsGroup_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchmakingMetrics_X");
		return ptr;
	}


	void RankedReconnect(const struct FString& Address);
	void End();
	void FoundServer(const struct FString& Address, const struct FString& ServerName, int Playlist);
	void RecordFoundServer(struct FCheckReservationData* Reservation);
	void Cancel();
	void ErrorID(int Error);
	void ErrorUnknown(const struct FString& Message);
	void RecordError(const struct FString& Error);
	void Start(TArray<struct FString> Regions, TArray<int> Playlists, bool bDisableCrossPlay);
};


// Class ProjectX.RPC_PlayerCancelMatchmaking_X
// 0x0000 (0x009C - 0x009C)
class URPC_PlayerCancelMatchmaking_X : public URPC_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerCancelMatchmaking_X");
		return ptr;
	}

};


// Class ProjectX.RPC_StartMatchmaking_X
// 0x0044 (0x00E0 - 0x009C)
class URPC_StartMatchmaking_X : public URPC_X
{
public:
	TArray<struct FString>                             Regions;                                                  // 0x009C(0x000C) (CPF_NeedCtorLink)
	TArray<int>                                        Playlists;                                                // 0x00A8(0x000C) (CPF_NeedCtorLink)
	int                                                SecondsSearching;                                         // 0x00B4(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_StartMatchmaking_X.CurrentServerId
	unsigned long                                      bDisableCrossPlay : 1;                                    // 0x00C0(0x0004)
	struct FString                                     PartyID;                                                  // 0x00C4(0x000C) (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PartyMembers;                                             // 0x00D0(0x000C) (CPF_NeedCtorLink)
	float                                              BannedSecondsRemaining;                                   // 0x00DC(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_StartMatchmaking_X");
		return ptr;
	}


	class URPC_StartMatchmaking_X* SetIgnoreSkill(bool bInIgnoreSkill);
	class URPC_StartMatchmaking_X* SetPartyId(const struct FString& InPartyId);
	class URPC_StartMatchmaking_X* SetPartyMembers(TArray<struct FUniqueNetId> InPartyMembers);
	class URPC_StartMatchmaking_X* SetDisableCrossPlay(bool bInDisableCrossplay);
	class URPC_StartMatchmaking_X* SetCurrentServerID();
	class URPC_StartMatchmaking_X* SetSecondsSearching(int InSecondsSearching);
	class URPC_StartMatchmaking_X* SetPlaylists(TArray<int> InPlaylists);
	class URPC_StartMatchmaking_X* SetRegions(TArray<struct FString> InRegions);
};


// Class ProjectX.Parties_X
// 0x019C (0x01D8 - 0x003C)
class UParties_X : public UObject
{
public:
	struct FActiveLobbyInfo                            ActiveLobby;                                              // 0x003C(0x0024) (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyLeaderID;                                            // 0x0060(0x0048)
	class UPsyNet_X*                                   PsyNet;                                                   // 0x00A8(0x0004)
	class UOnlineGameParty_X*                          OnlineGameParty;                                          // 0x00AC(0x0004)
	class UPartyMessageQueue_X*                        MessageQueue;                                             // 0x00B0(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UPsyNetConnection_X*                         PsyNetConnection;                                         // 0x00B4(0x0004)
	class UPsyNetChannel_X*                            PsyNetChannel;                                            // 0x00B8(0x0004)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                            // 0x00BC(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	unsigned long                                      bRejoiningParty : 1;                                      // 0x00C0(0x0004)
	float                                              SecondToWaitForPerConReconnect;                           // 0x00C4(0x0004) (CPF_Edit)
	struct FScriptDelegate                             __EventShowInviteUI__Delegate;                            // 0x00C8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;                        // 0x00D8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyError__Delegate;                                 // 0x00E8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;                        // 0x00F8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;                        // 0x0108(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;                          // 0x0118(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;                        // 0x0128(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;                  // 0x0138(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;                    // 0x0148(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;                        // 0x0158(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;                     // 0x0168(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                              // 0x0178(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                                // 0x0188(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLobbyInvitePending__Delegate;                      // 0x0198(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                             // 0x01A8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyChatRecieved__Delegate;                       // 0x01B8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;                      // 0x01C8(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Parties_X");
		return ptr;
	}


	void HandlePsyNetPartyInviteAccepted(const struct FString& PartyID, struct FUniqueNetId* StructInitializer_2B535D4A4AFA5CA7E097E793607FCC59);
	struct FString GetPsyNetPartyID();
	struct FUniqueNetId FindPartyLeaderID(TArray<struct FPsyNetPartyMember>* Members, struct FUniqueNetId* StructInitializer_983440134D32BEF6CA9A589A30BD2789);
	void HandleOwnerChanged(class UPsyNetService_PartyOwnerChanged_X* Notification);
	void HandleChatNotification(class UPsyNetService_PartyChat_X* Notifications);
	void HandleSystemNotification(class UPsyNetService_PartySystem_X* Notifications);
	void HandleUserKicked(class UPsyNetService_PartyUserKicked_X* Notification);
	void HandleUserDisconnected(class UPsyNetService_PartyUserDisconnected_X* Notification);
	void HandleUserLeft(class UPsyNetService_PartyUserLeft_X* Notification);
	void HandleUserJoined(class UPsyNetService_PartyUserJoined_X* Notification);
	void HandleMemberStatusUpdate(const struct FUniqueNetId& MemberUID, const struct FString& Status);
	void HandleUserInvitedResponse(const struct FUniqueLobbyId& LobbyId, const struct FUniqueNetId& ForUserId, bool bAccepted);
	void HandleUserInvited(class UPsyNetService_PartyUserInvited_X* Notifications);
	void SetRejoiningParty(bool bRejoining);
	void HandleChannelClosed(class UPsyNetChannel_X* InChannel);
	class UPsyNetChannel_X* CreatePsyNetChannel(const struct FString& PartyID);
	void SetPsyNetSubscriptions(class UPsyNetServiceSubscriptions_X* InSubscriptions);
	void SetPsyNetChannel(class UPsyNetChannel_X* InChannel);
	void TimeoutPerconReconnect();
	void SetPsyNetConnection(class UPsyNetConnection_X* InConnection);
	void ClearLobbyData(struct FActiveLobbyInfo* StructInitializer_2F9F074246A35757421DC6A4EE518EBD);
	void DestroyLobby(TEnumAsByte<ELobbyKickReason> Reason);
	void HandlePerConDisconnected(class UPsyNetConnection_X* Connection);
	void HandlePerConConnected(class UPsyNetConnection_X* Connection);
	void HandlePartyInfoFail(class URPC_X* RPC);
	void HandlePartyInfoSuccess(class URPC_PartyInfo_X* RPC_PartyInfo);
	void GetPartyInfo();
	class UOnlinePlayer_X* GetPrimaryPlayer();
	void OnExit();
	bool IsInLobby();
	void Construct();
	struct FUniqueLobbyId STATIC_CreatePartyID(const struct FString& S);
	void ClearHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void AddHostStartPlayTogetherDelegate(const struct FScriptDelegate& InDelegate);
	void OnHostStartPlayTogether(unsigned char LocalUserNum);
	int FindMemberId(struct FLobbyMember* MemberData);
	int PlayerIdToMemberId(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID, int* MemberIndex);
	struct FUniqueNetId MemberIdToPlayerId(int MemberId, struct FUniqueLobbyId* LobbyId, int* MemberIndex);
	bool KickPlayer(TEnumAsByte<ELobbyKickReason> Reason, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId);
	bool InviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool InviteToActiveLobby(struct FUniqueNetId* PlayerID);
	void HandleLobbyOwnerChangeFailed(class URPC_PartyChangeOwner_X* RPC_PartyChangeOwner);
	void HandleLobbyOwnerChangeSuccess(class URPC_PartyChangeOwner_X* RpcPartyChangeOwner);
	bool SetLobbyOwner(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwnerId);
	bool SetLobbyLock(bool bLocked, struct FUniqueLobbyId* LobbyId);
	bool SetLobbyType(TEnumAsByte<ELobbyVisibility> Type, struct FUniqueLobbyId* LobbyId);
	bool SetLobbyServer(const struct FString& ServerIP, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID);
	bool RemoveLobbySetting(const struct FString& Key, struct FUniqueLobbyId* LobbyId);
	bool SetLobbySetting(const struct FString& Key, const struct FString& Value, struct FUniqueLobbyId* LobbyId);
	bool GetLobbyAdmin(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId);
	bool SendLobbyBinaryData(struct FUniqueLobbyId* LobbyId, TArray<unsigned char>* Data);
	bool SendLobbyMessage(const struct FString& Message, struct FUniqueLobbyId* LobbyId);
	bool SetLobbyUserSetting(const struct FString& Key, const struct FString& Value, struct FUniqueLobbyId* LobbyId);
	bool LeaveLobby(struct FUniqueLobbyId* LobbyId);
	void RemoveLobbyMember(const struct FUniqueNetId& PlayerUID);
	void AddLobbyMember(const struct FUniqueNetId& PlayerUID, const struct FString& UserName);
	void HandleLobbyJoinFailed(class URPC_PartyJoin_X* RpcPartyJoin);
	void HandleLobbyJoinSucceeded(class URPC_PartyJoin_X* RpcPartyJoin);
	bool JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId* LobbyId);
	bool UpdateFoundLobbies(const struct FUniqueLobbyId& LobbyId);
	int FindMemberIndex(const struct FUniqueNetId& MemberId);
	bool FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, TEnumAsByte<ELobbyDistance> Distance);
	void HandleLobbyCreateFailed(class URPC_PartyCreate_X* RpcPartyCreate);
	void HandleLobbyCreated(class URPC_PartyCreate_X* RpcPartyCreate);
	bool CreateLobby(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings);
	void EventPartyChatRecieved(const struct FUniqueNetId& PlayerID, const struct FString& Text);
	void ClearLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void AddLobbyDestroyedDelegate(const struct FScriptDelegate& LobbyDestroyedDelegate);
	void OnLobbyDestroyed(TEnumAsByte<ELobbyKickReason> Reason, struct FUniqueLobbyId* LobbyId);
	void RemoveLocalPlayerFromSession(struct FUniqueNetId* PartyMember);
	void AddLocalPartyMemberToSession(struct FUniqueNetId* NewPartyMember);
	bool GetLobbyMembers(struct FUniqueLobbyId* LobbyId, TArray<struct FLobbyMember>* Members);
	void PlayTogether_Invite(const struct FString& InviteMessage, struct FUniqueLobbyId* LobbyId);
	void EventLobbyInvitePending(const struct FUniqueLobbyId& LobbyId, const struct FUniqueNetId& FromUserId, const struct FString& FromUserName);
	void ClearLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void AddLobbyInviteDelegate(const struct FScriptDelegate& LobbyInviteDelegate);
	void OnLobbyInvite(bool bAccepted, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* FriendId);
	void ClearLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void AddLobbyJoinGameDelegate(const struct FScriptDelegate& LobbyJoinGameDelegate);
	void OnLobbyJoinGame(const struct FString& ServerIP, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueNetId* ServerID);
	void TriggerLobbyReceiveBinaryDataDelegate(int MemberIndex, TArray<unsigned char> Data);
	void ClearLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void AddLobbyReceiveBinaryDataDelegate(const struct FScriptDelegate& LobbyReceiveBinaryDataDelegate);
	void OnLobbyReceiveBinaryData(int MemberIndex, struct FActiveLobbyInfo* LobbyInfo, TArray<unsigned char>* Data);
	void ClearLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void AddLobbyReceiveMessageDelegate(const struct FScriptDelegate& LobbyReceiveMessageDelegate);
	void OnLobbyReceiveMessage(int MemberIndex, const struct FString& Type, const struct FString& Message, struct FActiveLobbyInfo* LobbyInfo);
	void ClearLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void AddLobbyMemberStatusUpdateDelegate(const struct FScriptDelegate& LobbyMemberStatusUpdateDelegate);
	void TriggerLobbyMemberStatusUpdateDelegates(int MemberIndex, int InstigatorIndex, const struct FString& Status);
	void OnLobbyMemberStatusUpdate(int MemberIndex, int InstigatorIndex, const struct FString& Status, struct FActiveLobbyInfo* LobbyInfo);
	void ClearLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void AddLobbyMemberSettingsUpdateDelegate(const struct FScriptDelegate& LobbyMemberSettingsUpdateDelegate);
	void OnLobbyMemberSettingsUpdate(int MemberIndex, struct FActiveLobbyInfo* LobbyInfo);
	void ClearLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void AddLobbySettingsUpdateDelegate(const struct FScriptDelegate& LobbySettingsUpdateDelegate);
	void OnLobbySettingsUpdate(struct FActiveLobbyInfo* LobbyInfo);
	void ClearJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void AddJoinLobbyCompleteDelegate(const struct FScriptDelegate& JoinLobbyCompleteDelegate);
	void OnJoinLobbyComplete(bool bWasSuccessful, const struct FString& Error, struct FActiveLobbyInfo* LobbyInfo, struct FUniqueLobbyId* LobbyId);
	void ClearFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void AddFindLobbiesCompleteDelegate(const struct FScriptDelegate& FindLobbiesCompleteDelegate);
	void OnFindLobbiesComplete(bool bWasSuccessful, TArray<struct FBasicLobbyInfo>* LobbyList);
	void ClearLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void AddLobbySessionCreatedDelegate(const struct FScriptDelegate& LobbySessionCreatedDelegate);
	void OnLobbySessionCreated();
	void ClearLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void AddLobbyErrorDelegate(const struct FScriptDelegate& LobbyErrorDelegate);
	void OnLobbyError(const struct FString& Error);
	void ClearCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void AddCreateLobbyCompleteDelegate(const struct FScriptDelegate& CreateLobbyCompleteDelegate);
	void OnCreateLobbyComplete(bool bWasSuccessful, const struct FString& Error, struct FUniqueLobbyId* LobbyId);
	void EventShowInviteUI();
};


// Class ProjectX.PartyMessage_X
// 0x0048 (0x0084 - 0x003C)
class UPartyMessage_X : public UOnlineMessage_X
{
public:
	struct FUniqueNetId                                Sender;                                                   // 0x003C(0x0048) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_X");
		return ptr;
	}


	bool Broadcast();
};


// Class ProjectX.PartyMessage_SearchStatus_X
// 0x000C (0x0090 - 0x0084)
class UPartyMessage_SearchStatus_X : public UPartyMessage_X
{
public:
	struct FName                                       SearchState;                                              // 0x0084(0x0008)
	unsigned long                                      bIsSearching : 1;                                         // 0x008C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_SearchStatus_X");
		return ptr;
	}


	class UPartyMessage_SearchStatus_X* SetIsSearching(bool bValue);
	class UPartyMessage_SearchStatus_X* SetSearchState(const struct FName& InSearchState);
};


// Class ProjectX.PartyMessage_LobbySettings_X
// 0x0004 (0x0088 - 0x0084)
class UPartyMessage_LobbySettings_X : public UPartyMessage_X
{
public:
	int                                                BuildID;                                                  // 0x0084(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_LobbySettings_X");
		return ptr;
	}


	class UPartyMessage_LobbySettings_X* SetBuildID(int InBuildID);
};


// Class ProjectX.PartyMessage_Kick_X
// 0x0091 (0x0115 - 0x0084)
class UPartyMessage_Kick_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                KickPlayer;                                               // 0x0084(0x0048)
	struct FUniqueNetId                                Instigator;                                               // 0x00CC(0x0048)
	TEnumAsByte<ELobbyKickReason>                      KickReason;                                               // 0x0114(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_Kick_X");
		return ptr;
	}


	class UPartyMessage_Kick_X* SetReason(TEnumAsByte<ELobbyKickReason> InKickReason);
	class UPartyMessage_Kick_X* SetInstigator(const struct FUniqueNetId& InPlayer);
	class UPartyMessage_Kick_X* SetKicked(const struct FUniqueNetId& InPlayer);
};


// Class ProjectX.PartyMessage_LocalPlayers_X
// 0x0058 (0x00DC - 0x0084)
class UPartyMessage_LocalPlayers_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PrimaryMemberId;                                          // 0x0084(0x0048)
	TArray<struct FSimplePartyMember>                  Members;                                                  // 0x00CC(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bFromLeader : 1;                                          // 0x00D8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_LocalPlayers_X");
		return ptr;
	}


	class UPartyMessage_LocalPlayers_X* SetFromLeader(bool bIsLeader);
	void AddMember(const struct FPartyMember& Member);
	class UPartyMessage_LocalPlayers_X* AddPlayer(const struct FUniqueNetId& PlayerID, const struct FString& PlayerName);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayer(class UOnlinePlayer_X* Player);
	class UPartyMessage_LocalPlayers_X* SetPrimaryMemberId(const struct FUniqueNetId& InPrimaryMemberId);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayers();
};


// Class ProjectX.PartyMessage_MatchmakingAvailability_X
// 0x004C (0x00D0 - 0x0084)
class UPartyMessage_MatchmakingAvailability_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                                 // 0x0084(0x0048)
	int                                                MatchmakeRestrictions;                                    // 0x00CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_MatchmakingAvailability_X");
		return ptr;
	}


	class UPartyMessage_MatchmakingAvailability_X* SetMatchmakeRestrictions(int InRestrictions);
	class UPartyMessage_MatchmakingAvailability_X* SetMemberId(const struct FUniqueNetId& InMemberId);
};


// Class ProjectX.PartyMessage_JoinGame_X
// 0x002C (0x00B0 - 0x0084)
class UPartyMessage_JoinGame_X : public UPartyMessage_X
{
public:
	struct FPartyJoinMatchSettings                     Settings;                                                 // 0x0084(0x002C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_JoinGame_X");
		return ptr;
	}


	class UPartyMessage_JoinGame_X* SetSettings(struct FPartyJoinMatchSettings* InSettings);
};


// Class ProjectX.PartyMessage_PartyMemberJoinGame_X
// 0x0064 (0x00E8 - 0x0084)
class UPartyMessage_PartyMemberJoinGame_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x0084(0x0048)
	struct FPartyMemberServer                          Server;                                                   // 0x00CC(0x001C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_PartyMemberJoinGame_X");
		return ptr;
	}


	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberID(const struct FUniqueNetId& InPlayerId);
	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberServer(struct FPartyMemberServer* InServer);
};


// Class ProjectX.PartyMessage_DisableCrossPlay_X
// 0x004C (0x00D0 - 0x0084)
class UPartyMessage_DisableCrossPlay_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                MemberId;                                                 // 0x0084(0x0048)
	unsigned long                                      bDisableCrossPlay : 1;                                    // 0x00CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_DisableCrossPlay_X");
		return ptr;
	}


	class UPartyMessage_DisableCrossPlay_X* SetDisableCrossPlay(bool InDisableCrossPlay);
	class UPartyMessage_DisableCrossPlay_X* SetMemberId(const struct FUniqueNetId& InMemberId);
};


// Class ProjectX.PartyMessage_InviteToTrade_X
// 0x0048 (0x00CC - 0x0084)
class UPartyMessage_InviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                           // 0x0084(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_InviteToTrade_X");
		return ptr;
	}


	class UPartyMessage_InviteToTrade_X* SetInviteMemberId(const struct FUniqueNetId& InMemberId);
};


// Class ProjectX.PartyMessage_AcceptInviteToTrade_X
// 0x005C (0x00E0 - 0x0084)
class UPartyMessage_AcceptInviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                           // 0x0084(0x0048)
	unsigned long                                      bInviteAccepted : 1;                                      // 0x00CC(0x0004)
	struct FGuid                                       TradeId;                                                  // 0x00D0(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_AcceptInviteToTrade_X");
		return ptr;
	}


	class UPartyMessage_AcceptInviteToTrade_X* SetTradeId(const struct FGuid& InTradeId);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteAccepted(bool bInInviteAccepted);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteMemberId(const struct FUniqueNetId& InMemberId);
};


// Class ProjectX.PartyMessage_PlayerTradeComplete_X
// 0x0048 (0x00CC - 0x0084)
class UPartyMessage_PlayerTradeComplete_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                          // 0x0084(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_PlayerTradeComplete_X");
		return ptr;
	}


	class UPartyMessage_PlayerTradeComplete_X* SetTradingMemberId(const struct FUniqueNetId& InMemberId);
};


// Class ProjectX.PartyMetrics_X
// 0x000C (0x0060 - 0x0054)
class UPartyMetrics_X : public UMetricsGroup_X
{
public:
	struct FPartyMetricsData                           PartyData;                                                // 0x0054(0x000C) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMetrics_X");
		return ptr;
	}


	void PartyChannelBroken(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, int MissingMessageID);
	void PartyMessage(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FName& MessageType);
	void PartyChanged(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, bool bLeader, int PartySize, int LocalPlayers, int RemotePlayers);
	struct FPartyMetricsData CreatePartyMetricsData(class UOnlineGameParty_X* Party);
	void RecordPartyChanged(class UOnlineGameParty_X* Party);
	void PartyError(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Error);
	void PartyKickRemotePlayer(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Reason);
	void PartyKickLocalPlayer(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Reason);
	void PartyLeave(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Reason);
	void PartyCreationFailed(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID, const struct FString& Error);
	void PartyCreated(const struct FUniqueLobbyId& PartyID, const struct FUniqueNetId& LeaderID);
};


// Class ProjectX.PartyConfig_X
// 0x0004 (0x0050 - 0x004C)
class UPartyConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCompressMessages : 1;                                    // 0x004C(0x0004) (CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyConfig_X");
		return ptr;
	}

};


// Class ProjectX.PartyMessage_ReadyToTrade_X
// 0x004C (0x00D0 - 0x0084)
class UPartyMessage_ReadyToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                                          // 0x0084(0x0048)
	unsigned long                                      bReadyToTrade : 1;                                        // 0x00CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessage_ReadyToTrade_X");
		return ptr;
	}


	class UPartyMessage_ReadyToTrade_X* SetReadyToTrade(bool bInReadyToTrade);
	class UPartyMessage_ReadyToTrade_X* SetTradingMemberId(const struct FUniqueNetId& InTradingMemberId);
};


// Class ProjectX.RPC_GetPlayerTitles_X
// 0x0054 (0x00F0 - 0x009C)
class URPC_GetPlayerTitles_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)
	TArray<struct FString>                             Titles;                                                   // 0x00E4(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerTitles_X");
		return ptr;
	}


	class URPC_GetPlayerTitles_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};


// Class ProjectX.RankedConfig_X
// 0x0030 (0x007C - 0x004C)
class URankedConfig_X : public UOnlineConfig_X
{
public:
	struct FString                                     SeasonEndTime;                                            // 0x004C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	int                                                ReconnectTimeoutSeconds;                                  // 0x0058(0x0004) (CPF_Edit)
	TArray<int>                                        SkillTierToSeasonRewardLevel;                             // 0x005C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<int>                                        SeasonRewardRequiredWinsPerLevel;                         // 0x0068(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0074(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RankedConfig_X.SeasonEndTimeSeconds

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RankedConfig_X");
		return ptr;
	}


	bool HasSeasonEnded();
	int GetSeasonTimeRemaining();
	void Apply();
};


// Class ProjectX.RPC_GetPopulation_X
// 0x000C (0x00A8 - 0x009C)
class URPC_GetPopulation_X : public URPC_X
{
public:
	TArray<struct FGetPopulationData>                  Playlists;                                                // 0x009C(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPopulation_X");
		return ptr;
	}

};


// Class ProjectX.RPC_PlayerCancelPrivateMatch_X
// 0x0000 (0x009C - 0x009C)
class URPC_PlayerCancelPrivateMatch_X : public URPC_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerCancelPrivateMatch_X");
		return ptr;
	}

};


// Class ProjectX.RPC_PlayerSearchPrivateMatch_X
// 0x000C (0x00A8 - 0x009C)
class URPC_PlayerSearchPrivateMatch_X : public URPC_X
{
public:
	struct FString                                     Region;                                                   // 0x009C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerSearchPrivateMatch_X");
		return ptr;
	}


	class URPC_PlayerSearchPrivateMatch_X* SetRegion(const struct FString& InRegion);
};


// Class ProjectX.Region_X
// 0x000C (0x0048 - 0x003C)
class URegion_X : public UObject
{
public:
	struct FString                                     Label;                                                    // 0x003C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.Region_X");
		return ptr;
	}

};


// Class ProjectX.RPC_GetGameServerPingList_X
// 0x000C (0x00A8 - 0x009C)
class URPC_GetGameServerPingList_X : public URPC_X
{
public:
	TArray<struct FGetGameServerPingListData>          Servers;                                                  // 0x009C(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetGameServerPingList_X");
		return ptr;
	}


	void OnSuccess();
};


// Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X
// 0x0000 (0x003C - 0x003C)
class UOnlineGameReservations_AssignTeamsByParty_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X");
		return ptr;
	}


	int STATIC_PartySort(const struct FPartyByTeam& Left, const struct FPartyByTeam& Right);
	void STATIC_AssignTeams(int TeamSize, TArray<struct FReservationData>* TestPlayers);
};


// Class ProjectX.ReservationsMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UReservationsMetrics_X : public UMetricsGroup_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsMetrics_X");
		return ptr;
	}


	void NotAllPlayersJoined();
	void GetKeysInvalidOrigin();
	void GetKeysFailed();
	void ReservationsFull();
	void PlatformExclusiveReservation();
	void WrongReservationPlaylist();
	void InvalidReservationPlaylist();
	void RankedReconnect();
	void RankedReconnectFinished();
	void FriendJoin();
	void FriendJoinEmpty();
	void FriendJoinRanked();
	void FirstReservation(int Playlist);
};


// Class ProjectX.MapPrefsConfig_X
// 0x000C (0x0058 - 0x004C)
class UMapPrefsConfig_X : public UOnlineConfig_X
{
public:
	float                                              PreferenceWeight;                                         // 0x004C(0x0004) (CPF_Edit)
	int                                                MaxLikes;                                                 // 0x0050(0x0004) (CPF_Edit)
	int                                                MaxDislikes;                                              // 0x0054(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MapPrefsConfig_X");
		return ptr;
	}

};


// Class ProjectX.PRI_X
// 0x0030 (0x0360 - 0x0330)
class APRI_X : public APlayerReplicationInfo
{
public:
	struct FScriptDelegate                             __EventPlayerNameChanged__Delegate;                       // 0x0330(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventUniqueIdChanged__Delegate;                         // 0x0340(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTeamChanged__Delegate;                             // 0x0350(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PRI_X");
		return ptr;
	}


	void OnUniqueIdChanged();
	void SetUniqueId(const struct FUniqueNetId& PlayerUniqueId);
	void RegisterPlayerWithSession();
	void AddPlayerHistoryKey(class UOnlineRecentPlayersList* PlayersList);
	void OnTeamChanged();
	void SetPlayerTeam(class ATeamInfo* NewTeam);
	void OnOwnerChanged();
	void SetPlayerName(const struct FString& S);
	void ReplicatedEvent(const struct FName& VarName);
	void EventTeamChanged(class APRI_X* PRI);
	void EventUniqueIdChanged(class APRI_X* PRI);
	void EventPlayerNameChanged(class APRI_X* PRI);
};


// Class ProjectX.RPC_GetKeys_X
// 0x0054 (0x0134 - 0x00E0)
class URPC_GetKeys_X : public URPC_KeysBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x00E0(0x0048)
	unsigned long                                      bServerKey : 1;                                           // 0x0128(0x0004) (CPF_Transient)
	class UAddReservationMessage_X*                    Message;                                                  // 0x012C(0x0004) (CPF_Transient)
	class UTcpConnection*                              Connection;                                               // 0x0130(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetKeys_X");
		return ptr;
	}


	class URPC_GetKeys_X* SetPlayer(const struct FUniqueNetId& InPlayerId);
};


// Class ProjectX.RPC_CustomGameServerGet_X
// 0x0030 (0x00CC - 0x009C)
class URPC_CustomGameServerGet_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                               // 0x009C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Password;                                                 // 0x00A8(0x000C) (CPF_NeedCtorLink)
	TArray<struct FFindPrivateServerResult>            Servers;                                                  // 0x00B4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FServerResult>                       Results;                                                  // 0x00C0(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CustomGameServerGet_X");
		return ptr;
	}


	void OnSuccess();
	class URPC_CustomGameServerGet_X* SetPassword(const struct FString& InPassword);
	class URPC_CustomGameServerGet_X* SetServerName(const struct FString& InServerName);
};


// Class ProjectX.PlaylistSkillCache_X
// 0x000C (0x0048 - 0x003C)
class UPlaylistSkillCache_X : public UObject
{
public:
	TArray<struct FPlayerSkillRating>                  Players;                                                  // 0x003C(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PlaylistSkillCache_X");
		return ptr;
	}


	int GetPlayerIndex(const struct FUniqueNetId& PlayerID);
	struct FPlayerSkillRating GetPlayerRating(const struct FUniqueNetId& PlayerID);
	void ClearSkill(const struct FUniqueNetId& PlayerID);
	void CacheSkill(const struct FPlayerSkillRating& Rating);
	void PreCacheSkill(const struct FPlayerSkillRating& Rating);
};


// Class ProjectX.RPC_GetPlayerSkill_X
// 0x005C (0x00F8 - 0x009C)
class URPC_GetPlayerSkill_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)
	TArray<struct FGetPlayerSkillData>                 Skills;                                                   // 0x00E4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FRPCRewardLevelData                         RewardLevels;                                             // 0x00F0(0x0008) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerSkill_X");
		return ptr;
	}


	class URPC_GetPlayerSkill_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};


// Class ProjectX.RPC_UpdateSkills_X
// 0x0080 (0x011C - 0x009C)
class URPC_UpdateSkills_X : public URPC_X
{
public:
	class UMatchRecorder_X*                            MatchRecorder;                                            // 0x009C(0x0004) (CPF_Transient)
	struct FString                                     MatchGUID;                                                // 0x00A0(0x000C) (CPF_NeedCtorLink)
	int                                                Playlist;                                                 // 0x00AC(0x0004)
	struct FRecordedMatchData                          Match;                                                    // 0x00B0(0x001C)
	TArray<struct FSkillMatchPlayer>                   Winners;                                                  // 0x00CC(0x000C) (CPF_NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Losers;                                                   // 0x00D8(0x000C) (CPF_NeedCtorLink)
	struct FGuid                                       AppSessionID;                                             // 0x00E4(0x0010)
	struct FGuid                                       LevelSessionID;                                           // 0x00F4(0x0010)
	TArray<struct FPlayerSkillRating>                  NewSkills;                                                // 0x0104(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FRPCPlayerRewardLevelData>           NewRewardLevels;                                          // 0x0110(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateSkills_X");
		return ptr;
	}


	struct FSkillMatchPlayer CreateSkillMatchPlayer(const struct FUniqueNetId& PlayerID, float PctTimePlayed, bool bQuitter);
	class URPC_UpdateSkills_X* SetMetrics(class UMetricsSystem_X* MetricsSystem);
	class URPC_UpdateSkills_X* SetMatch(class UMatchRecorder_X* InRecorder);
	class URPC_UpdateSkills_X* SetMatchGUID(const struct FString& InGuid);
};


// Class ProjectX.MatchRecorder_X
// 0x0038 (0x0074 - 0x003C)
class UMatchRecorder_X : public UObject
{
public:
	struct FRecordedMatchData                          Match;                                                    // 0x003C(0x001C) (CPF_Transient)
	TArray<struct FRecordedMatchPlayer>                Players;                                                  // 0x0058(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	float                                              TotalTimePlayed;                                          // 0x0064(0x0004) (CPF_Transient)
	TArray<struct FUniqueNetId>                        PartyIDs;                                                 // 0x0068(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.MatchRecorder_X");
		return ptr;
	}


	void GetSkillMatchPlayers(TArray<struct FSkillMatchPlayer>* Winners, TArray<struct FSkillMatchPlayer>* Losers);
	struct FSkillMatchPlayer GetSkillMatchPlayer(const struct FRecordedMatchPlayer& Player);
	void Finish(int InWinningTeam, int InTeam0Score, int InTeam1Score, int InPlaylist, bool bInOvertime);
	void AccumulateTime(float DeltaTime);
	void RemovePlayer(const struct FUniqueNetId& PlayerID, bool bPenalize);
	void AddPlayer(const struct FUniqueNetId& PlayerID, int Team, const struct FUniqueNetId& PartyID);
};


// Class ProjectX.RPC_UpdateLeaderboard_X
// 0x000C (0x00A8 - 0x009C)
class URPC_UpdateLeaderboard_X : public URPC_X
{
public:
	TArray<struct FUploadStatDataSet>                  Updates;                                                  // 0x009C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateLeaderboard_X");
		return ptr;
	}


	class URPC_UpdateLeaderboard_X* SetUpdates(TArray<struct FUploadStatDataSet>* InUpdates);
};


// Class ProjectX.WordFilterConfig_X
// 0x0004 (0x0050 - 0x004C)
class UWordFilterConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSanitizeEntirePhrase : 1;                                // 0x004C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.WordFilterConfig_X");
		return ptr;
	}

};


// Class ProjectX.OnlinePlayerStorage_X
// 0x0010 (0x0070 - 0x0060)
class UOnlinePlayerStorage_X : public UOnline_X
{
public:
	class UOnlinePlayerStorageQueue_X*                 Queue;                                                    // 0x0060(0x0004)
	class UOnlinePlayerStorageSync_X*                  Sync;                                                     // 0x0064(0x0004)
	class UOnlinePlayerStorageManifest_X*              Manifest;                                                 // 0x0068(0x0004)
	class USerializer_X*                               Serializer;                                               // 0x006C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorage_X");
		return ptr;
	}


	void OnInit();
};


// Class ProjectX.RPC_LoginAuthPlayer_X
// 0x0098 (0x0134 - 0x009C)
class URPC_LoginAuthPlayer_X : public URPC_X
{
public:
	struct FString                                     Platform;                                                 // 0x009C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                               // 0x00A8(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PlayerID;                                                 // 0x00B4(0x000C) (CPF_NeedCtorLink)
	int                                                GameVersion;                                              // 0x00C0(0x0004)
	struct FString                                     Language;                                                 // 0x00C4(0x000C) (CPF_NeedCtorLink)
	struct FString                                     AuthTicket;                                               // 0x00D0(0x000C) (CPF_NeedCtorLink)
	struct FString                                     BuildRegion;                                              // 0x00DC(0x000C) (CPF_NeedCtorLink)
	struct FName                                       FeatureSet;                                               // 0x00E8(0x0008)
	unsigned long                                      bTrial : 1;                                               // 0x00F0(0x0004)
	unsigned long                                      bSkipAuth : 1;                                            // 0x00F0(0x0004)
	unsigned long                                      UseWebSocket : 1;                                         // 0x00F0(0x0004) (CPF_Transient)
	struct FString                                     SessionId;                                                // 0x00F4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     PsyToken;                                                 // 0x0100(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                BannedMinutes;                                            // 0x010C(0x0004) (CPF_Transient)
	struct FString                                     BannedMessage;                                            // 0x0110(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     VerifiedPlayerName;                                       // 0x011C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FString>                             BannedCitations;                                          // 0x0128(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_LoginAuthPlayer_X");
		return ptr;
	}


	class URPC_LoginAuthPlayer_X* SetTrial(bool bIsTrial);
	class URPC_LoginAuthPlayer_X* SetFeatureSet(const struct FName& InFeatureSet);
	class URPC_LoginAuthPlayer_X* SetBuildRegion(const struct FString& InBuildRegion);
	class URPC_LoginAuthPlayer_X* SetAuthTicket(const struct FString& InAuthTicket);
	class URPC_LoginAuthPlayer_X* SetLanguage(const struct FString& InLanguage);
	class URPC_LoginAuthPlayer_X* SetGameVersion(int InGameVersion);
	class URPC_LoginAuthPlayer_X* SetPlayerID();
	class URPC_LoginAuthPlayer_X* SetPlayerName(const struct FString& InPlayerName);
	class URPC_LoginAuthPlayer_X* SetPlatform(const struct FString& InPlatform);
};


// Class ProjectX.PsyNetService_FriendChatReceived_X
// 0x0060 (0x00B4 - 0x0054)
class UPsyNetService_FriendChatReceived_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                FromPlayerID;                                             // 0x0054(0x0048)
	struct FString                                     Message;                                                  // 0x009C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      IsLocalMessage : 1;                                       // 0x00A8(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00AC(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.PsyNetService_FriendChatReceived_X.TimeStamp

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendChatReceived_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PersonaInfo_X
// 0x006C (0x00C0 - 0x0054)
class UPsyNetService_PersonaInfo_X : public UPsyNetClientService_X
{
public:
	struct FOnlinePersonaData                          FromPlayer;                                               // 0x0054(0x006C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PersonaInfo_X");
		return ptr;
	}


	TEnumAsByte<EOnlineFriendState> GetOnlineState();
	struct FOnlineFriend GetData();
};


// Class ProjectX.PsyNetService_FriendAcceptedRequest_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetService_FriendAcceptedRequest_X : public UPsyNetService_PersonaInfo_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendAcceptedRequest_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_FriendStatusUpdate_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetService_FriendStatusUpdate_X : public UPsyNetService_PersonaInfo_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_FriendStatusUpdate_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_IncomingFriendRequest_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetService_IncomingFriendRequest_X : public UPsyNetService_PersonaInfo_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_IncomingFriendRequest_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PlayerUnfriended_X
// 0x0048 (0x009C - 0x0054)
class UPsyNetService_PlayerUnfriended_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x0054(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PlayerUnfriended_X");
		return ptr;
	}

};


// Class ProjectX.PostProcessManager_X
// 0x0054 (0x0090 - 0x003C)
class UPostProcessManager_X : public UObject
{
public:
	class ULocalPlayer*                                PlayerOwner;                                              // 0x003C(0x0004) (CPF_Transient)
	TArray<class UMaterialEffect_X*>                   ActiveEffects;                                            // 0x0040(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UTickComponent_X*                            TickComponent;                                            // 0x004C(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	unsigned long                                      bNeedsReset : 1;                                          // 0x0050(0x0004) (CPF_Transient)
	TArray<struct FPPEffectDefaults>                   EffectDefaults;                                           // 0x0054(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FPPPersistentEffectDefaults>         PersistentEffectDefaults;                                 // 0x0060(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FPPChainInfo>                        ActiveChains;                                             // 0x006C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FPPChainInfo>                        ChainDefaults;                                            // 0x0078(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FPostProcessOverride>                PostProcessOverrides;                                     // 0x0084(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PostProcessManager_X");
		return ptr;
	}


	int GetNextPostProcessOverride();
	void TogglePostProcessSettings(const struct FName& Id, bool bEnabled);
	void SetMaterialEffectValue(const struct FName& EffectName, float NewValue);
	void ResetEffectsToDefaults(bool bRebuildPostProcessChains);
	void ToggleChainNamed(class UPostProcessChain* Chain, const struct FName& ChainName, bool bEnabled);
	void StopChainNamed(const struct FName& ChainName);
	void StartChainNamed(class UPostProcessChain* Chain, const struct FName& ChainName);
	bool RemovePostProcessChain(int OldChain);
	int AddPostProcessChain(class UPostProcessChain* NewChain, const struct FName& ChainName);
	class UMaterialEffect_X* GetEffect(const struct FName& EffectName);
	void TickPostProcess(float dt);
	void ToggleEffect(class UMaterialEffect_X* Effect, bool bEnabled);
	void StopEffectNamed(const struct FName& EffectName);
	void StartEffectNamed(const struct FName& EffectName);
	void ToggleEffectNamed(const struct FName& EffectName, bool bEnabled);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UUberPostProcessEffect* GetUberPostProcessEffect();
	class UPostProcessChain* GetPlayerChain();
	void Exit();
	void Init(class APlayerController_X* NewOwner);
};


// Class ProjectX.PsyNetMetrics_X
// 0x0018 (0x006C - 0x0054)
class UPsyNetMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FServiceMetricsData>                 ServiceData;                                              // 0x0054(0x000C) (CPF_NeedCtorLink)
	TArray<struct FServiceErrorData>                   ErrorData;                                                // 0x0060(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetMetrics_X");
		return ptr;
	}


	void ServiceErrors(TArray<struct FServiceErrorData> Errors);
	void ServiceCalls(TArray<struct FServiceMetricsData> Services);
	void HandleMapChange(const struct FString& M);
	void RecordServiceError(const struct FString& Service, class UError* Error);
	void RecordServiceCall(const struct FString& Service, float Latency);
};


// Class ProjectX.__RPCQueue_X__CreateBatch_1
// 0x0004 (0x0040 - 0x003C)
class U__RPCQueue_X__CreateBatch_1 : public UObject
{
public:
	class URPCBatch_X*                                 Batch;                                                    // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__RPCQueue_X__CreateBatch_1");
		return ptr;
	}


	void __RPCQueue_X__CreateBatch_1(class UPsyNetMessage_X* Response, class UError* Error);
};


// Class ProjectX.SendRequestTask
// 0x0034 (0x00B8 - 0x0084)
class USendRequestTask : public UAsyncResult
{
public:
	class UPsyNetMessage_X*                            Result;                                                   // 0x0084(0x0004)
	struct FScriptDelegate                             __EventSendRequestTaskResult__Delegate;                   // 0x0088(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSendRequestTaskResultComplete__Delegate;           // 0x0098(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SendRequestTaskResultDelegate__Delegate;                // 0x00A8(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SendRequestTask");
		return ptr;
	}


	class USendRequestTask* STATIC_CreateResultError(class UError* InError);
	class USendRequestTask* STATIC_CreateResult(class UPsyNetMessage_X* InResult);
	void ClearCallbacks();
	class USendRequestTask* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class USendRequestTask* SetResult(class UPsyNetMessage_X* InResult, class UError* InError);
	class USendRequestTask* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class USendRequestTask* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UPsyNetMessage_X* SendRequestTaskResultDelegate();
	void EventSendRequestTaskResultComplete(class UPsyNetMessage_X* OutResult, class UError* OutError);
	void EventSendRequestTaskResult(class UPsyNetMessage_X* OutResult);
};


// Class ProjectX.NetMetrics_X
// 0x0000 (0x0054 - 0x0054)
class UNetMetrics_X : public UMetricsGroup_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.NetMetrics_X");
		return ptr;
	}


	void RpcSignatureMismatch(int ServiceID);
	void ConnectionChangedIP(const struct FUniqueNetId& PlayerID);
	void PlayerNetworkError(const struct FUniqueNetId& PlayerID, const struct FString& Reason);
	void PlayerTimeout(const struct FUniqueNetId& PlayerID);
	void PlayerNetwork(const struct FUniqueNetId& PlayerID, int PingMin, int PingMax, int PingAvg, int PktLossRateMin, int PktLossRateMax, int PktLossAvg, int InBpsMax, int InBpsAvg, int OutBpsMax, int OutBpsAvg);
	void RecordPlayerNetwork(class APlayerController* PC);
};


// Class ProjectX.RPC_ReportCheater_X
// 0x0054 (0x00F0 - 0x009C)
class URPC_ReportCheater_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)
	struct FString                                     Reason;                                                   // 0x00E4(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ReportCheater_X");
		return ptr;
	}


	class URPC_ReportCheater_X* SetReason(const struct FString& InReason);
	class URPC_ReportCheater_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};


// Class ProjectX.PsyNetServiceProvider_X
// 0x0024 (0x0060 - 0x003C)
class UPsyNetServiceProvider_X : public UObject
{
public:
	class UPsyNetClientServiceCollection_X*            ServiceCollection;                                        // 0x003C(0x0004)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                            // 0x0040(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	TArray<class UPsyNetChannel_X*>                    Channels;                                                 // 0x0044(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServiceExecuted__Delegate;                         // 0x0050(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetServiceProvider_X");
		return ptr;
	}


	void FinalizeServiceTask(class UPsyNetClientService_X* Service, class UExecuteServiceTask* Task, class UError* Error);
	void PrintServiceResult(const struct FString& ServiceName, class UError* Error);
	class UExecuteServiceTask* ExecuteServiceMessage(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	bool IsServiceRequest(class UPsyNetMessage_X* Message);
	class UExecuteServiceTask* ExecuteNotification(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	void SetResponse(class UPsyNetClientService_X* Service, class UError* Error, class UPsyNetMessage_X* Response);
	class UExecuteServiceTask* ExecuteRequest(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Request, class UPsyNetMessage_X* Response);
	void HandleChannelClosed(class UPsyNetChannel_X* Channel);
	class UPsyNetChannel_X* CreateChannel(const struct FString& ChannelName);
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* ServiceClass, const struct FScriptDelegate& Callback);
	void Construct();
	void EventServiceExecuted(class UPsyNetServiceProvider_X* ServiceProvider, class UPsyNetClientService_X* Service);
};


// Class ProjectX.ReservationsSettingUpMatchMessage_X
// 0x0000 (0x003C - 0x003C)
class UReservationsSettingUpMatchMessage_X : public UBeaconMessage_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ReservationsSettingUpMatchMessage_X");
		return ptr;
	}

};


// Class ProjectX.__RPC_X__CreateTask_1
// 0x0010 (0x004C - 0x003C)
class U__RPC_X__CreateTask_1 : public UObject
{
public:
	struct FScriptDelegate                             InCallback;                                               // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__RPC_X__CreateTask_1");
		return ptr;
	}


	void __RPC_X__CreateTask_1(class UError* Err);
};


// Class ProjectX.RPC_Test_X
// 0x0138 (0x01D4 - 0x009C)
class URPC_Test_X : public URPC_X
{
public:
	struct FString                                     TestParamLocalizedString;                                 // 0x009C(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     TestParamString;                                          // 0x00A8(0x000C) (CPF_NeedCtorLink)
	struct FRPCTestParam                               TestParamStruct;                                          // 0x00B4(0x0078) (CPF_NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestParamStructs;                                         // 0x012C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     TestResultLocalizedString;                                // 0x0138(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     TestResultString;                                         // 0x0144(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FRPCTestParam                               TestResultStruct;                                         // 0x0150(0x0078) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestResultStructs;                                        // 0x01C8(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_Test_X");
		return ptr;
	}


	bool Check(bool Assertion, const struct FString& Message);
	bool CheckParamArraysMatch(TArray<struct FRPCTestParam> A, TArray<struct FRPCTestParam> B, const struct FString& Message);
	bool CheckItemArraysMatch(TArray<struct FRPCTestItem> A, TArray<struct FRPCTestItem> B, const struct FString& Message);
	bool CheckStringArraysMatch(TArray<struct FString> A, TArray<struct FString> B, const struct FString& Message);
	bool CheckItemsMatch(const struct FRPCTestItem& A, const struct FRPCTestItem& B, const struct FString& Message);
	bool CheckParamsMatch(const struct FRPCTestParam& A, const struct FRPCTestParam& B, const struct FString& Message);
	bool ValidateResults();
	void OnComplete();
	TArray<struct FRPCTestParam> GetRandomTestParams();
	struct FRPCTestParam GetRandomTestParam();
	TArray<struct FRPCTestItem> GetRandomTestItems();
	struct FRPCTestItem GetRandomTestItem();
	void Init();
};


// Class ProjectX.TestsHelper_X
// 0x0000 (0x003C - 0x003C)
class UTestsHelper_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TestsHelper_X");
		return ptr;
	}


	struct FString STATIC_GetRandomUppercaseString();
	TArray<struct FString> STATIC_GetRandomStringArray();
	struct FString STATIC_GetRandomString();
};


// Class ProjectX.SeqAct_SpawnArchetype_X
// 0x0030 (0x012C - 0x00FC)
class USeqAct_SpawnArchetype_X : public USequenceAction
{
public:
	class AActor*                                      ActorArchetype;                                           // 0x00FC(0x0004) (CPF_Edit)
	struct FVector                                     Velocity;                                                 // 0x0100(0x000C) (CPF_Edit)
	float                                              Speed;                                                    // 0x010C(0x0004) (CPF_Edit)
	TArray<class AActor*>                              SpawnOwners;                                              // 0x0110(0x000C) (CPF_NeedCtorLink)
	TArray<class AActor*>                              SpawnPoints;                                              // 0x011C(0x000C) (CPF_NeedCtorLink)
	class AActor*                                      Spawned;                                                  // 0x0128(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SeqAct_SpawnArchetype_X");
		return ptr;
	}


	void Init(class AActor* SpawnedActor);
	void Activated();
};


// Class ProjectX.RPC_TestPlayerID_X
// 0x0090 (0x012C - 0x009C)
class URPC_TestPlayerID_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)
	struct FUniqueNetId                                ResponsePlayerID;                                         // 0x00E4(0x0048) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_TestPlayerID_X");
		return ptr;
	}


	void OnSuccess();
	void Init();
};


// Class ProjectX.RPC_RecordMatch_X
// 0x0070 (0x010C - 0x009C)
class URPC_RecordMatch_X : public URPC_X
{
public:
	class UMatchRecorder_X*                            MatchRecorder;                                            // 0x009C(0x0004) (CPF_Transient)
	struct FString                                     MatchGUID;                                                // 0x00A0(0x000C) (CPF_NeedCtorLink)
	struct FRecordedMatchData                          Match;                                                    // 0x00AC(0x001C)
	struct FString                                     MatchName;                                                // 0x00C8(0x000C) (CPF_NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Winners;                                                  // 0x00D4(0x000C) (CPF_NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Losers;                                                   // 0x00E0(0x000C) (CPF_NeedCtorLink)
	struct FGuid                                       AppSessionID;                                             // 0x00EC(0x0010)
	struct FGuid                                       LevelSessionID;                                           // 0x00FC(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RecordMatch_X");
		return ptr;
	}


	class URPC_RecordMatch_X* SetMetrics(class UMetricsSystem_X* MetricsSystem);
	class URPC_RecordMatch_X* SetMatchName(const struct FString& InName);
	class URPC_RecordMatch_X* SetMatch(class UMatchRecorder_X* InRecorder);
	class URPC_RecordMatch_X* SetMatchGUID(const struct FString& InGuid);
};


// Class ProjectX.LoginResponse_X
// 0x0010 (0x004C - 0x003C)
class ULoginResponse_X : public UObject
{
public:
	struct FString                                     BannedMessage;                                            // 0x003C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                BannedMinutes;                                            // 0x0048(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LoginResponse_X");
		return ptr;
	}

};


// Class ProjectX.LocalCacheTests_X
// 0x000C (0x0048 - 0x003C)
class ULocalCacheTests_X : public UObject
{
public:
	struct FString                                     CacheFilePath;                                            // 0x003C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LocalCacheTests_X");
		return ptr;
	}


	void STATIC_HandleLocalCacheImported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void STATIC_ImportTest();
	void STATIC_HandleLocalCacheExported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void STATIC_ToCacheAndBack(int RandomSeed);
};


// Class ProjectX.SkelControlBlendTargetComponent_X
// 0x0008 (0x0074 - 0x006C)
class USkelControlBlendTargetComponent_X : public UActorComponent_X
{
public:
	struct FName                                       SkelControlName;                                          // 0x006C(0x0008) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SkelControlBlendTargetComponent_X");
		return ptr;
	}


	void SetControlActiveInComponent(class USkeletalMeshComponent* SKC, bool bActive);
	void SetControlActive(bool bActive);
	void Detached();
	void Attached();
};


// Class ProjectX.AprilConfig_X
// 0x0030 (0x007C - 0x004C)
class UAprilConfig_X : public UOnlineConfig_X
{
public:
	struct FString                                     StartTime;                                                // 0x004C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     EndTime;                                                  // 0x0058(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bChangeRankedIcons : 1;                                   // 0x0064(0x0004) (CPF_Edit)
	float                                              HatScale;                                                 // 0x0068(0x0004) (CPF_Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x006C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.AprilConfig_X.StartTimeSeconds
	unsigned char                                      UnknownData01[0x8];                                       // 0x0074(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.AprilConfig_X.EndTimeSeconds

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AprilConfig_X");
		return ptr;
	}


	bool IsActive();
	void Apply();
};


// Class ProjectX.ArrayFuncs_X
// 0x0000 (0x003C - 0x003C)
class UArrayFuncs_X : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ArrayFuncs_X");
		return ptr;
	}


	TArray<struct FString> STATIC_ShuffleStringArray(TArray<struct FString> ArrayToShuffle);
};


// Class ProjectX.CameraState_CamActorCinematic_X
// 0x0000 (0x01B8 - 0x01B8)
class UCameraState_CamActorCinematic_X : public UCameraState_CamActor_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CameraState_CamActorCinematic_X");
		return ptr;
	}


	void UpdatePOV(float DeltaTime, struct FCameraOrientation* OutPOV);
	void EndCameraState();
};


// Class ProjectX.CheckReservationService_X
// 0x0030 (0x006C - 0x003C)
class UCheckReservationService_X : public UObject
{
public:
	struct FScriptDelegate                             __OnFoundReservation__Delegate;                           // 0x003C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationNotFound__Delegate;                        // 0x004C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CheckReservationDelegate__Delegate;                     // 0x005C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CheckReservationService_X");
		return ptr;
	}


	void STATIC_HandleReservation(class URPC_CheckReservation_X* RPC, const struct FScriptDelegate& FoundCallback, const struct FScriptDelegate& NotFoundCallback);
	class UAsyncTask* STATIC_SendRequest(bool bIsHeartbeat, const struct FScriptDelegate& FoundCallback, const struct FScriptDelegate& NotFoundCallback);
	class UAsyncTask* CheckReservationDelegate(bool bIsHeartbeat, const struct FScriptDelegate& FoundCallback, const struct FScriptDelegate& NotFoundCallback);
	void OnReservationNotFound();
	void OnFoundReservation(const struct FCheckReservationData& Reservation);
};


// Class ProjectX.OnlineResource_X
// 0x0034 (0x007C - 0x0048)
class UOnlineResource_X : public UComponent
{
public:
	struct FString                                     URL;                                                      // 0x0048(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<float>                                      RetryDelays;                                              // 0x0054(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UCachedWebData_X*                            CachedData;                                               // 0x0060(0x0004) (CPF_Transient)
	unsigned long                                      bSyncing : 1;                                             // 0x0064(0x0004) (CPF_Transient)
	int                                                RetryCount;                                               // 0x0068(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __EventDataChanged__Delegate;                             // 0x006C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlineResource_X");
		return ptr;
	}


	void SetCachedData(class UCachedWebData_X* NewData);
	bool IsValidNewData(class UCachedWebData_X* Data);
	void ClearRetryTimer();
	void SetRetryTimer(float Delay);
	void HandleSync(class UCachedWebData_X* Data);
	void SyncData();
	void EventDataChanged(class UOnlineResource_X* DataSync);
};


// Class ProjectX.RPC_GetTrialData_X
// 0x0010 (0x00AC - 0x009C)
class URPC_GetTrialData_X : public URPC_X
{
public:
	int                                                MinutesRemaining;                                         // 0x009C(0x0004) (CPF_Transient)
	int                                                AdditionalMinutesRemaining;                               // 0x00A0(0x0004) (CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A4(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_GetTrialData_X.LastPlayedTime

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetTrialData_X");
		return ptr;
	}

};


// Class ProjectX.RPC_UpdateTrialData_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_UpdateTrialData_X : public URPC_X
{
public:
	int                                                MinutesToRemove;                                          // 0x009C(0x0004)
	int                                                AdditionalMinutesToRemove;                                // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_UpdateTrialData_X");
		return ptr;
	}


	class URPC_UpdateTrialData_X* SetAdditionalMinutesToRemove(int InAdditionalMinutesToRemove);
	class URPC_UpdateTrialData_X* SetMinutesToRemove(int InMinutesToRemove);
};


// Class ProjectX.RPC_CheckKeys_X
// 0x000C (0x0140 - 0x0134)
class URPC_CheckKeys_X : public URPC_GetKeys_X
{
public:
	struct FString                                     KeyToCheck;                                               // 0x0134(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CheckKeys_X");
		return ptr;
	}


	bool KeysMatch();
	class URPC_CheckKeys_X* SetKeyToCheck(const struct FString& InKey);
};


// Class ProjectX.RPC_CheckReservation_X
// 0x003C (0x00D8 - 0x009C)
class URPC_CheckReservation_X : public URPC_X
{
public:
	unsigned long                                      bIsHeartbeat : 1;                                         // 0x009C(0x0004)
	unsigned long                                      bFoundReservation : 1;                                    // 0x009C(0x0004) (CPF_Transient)
	struct FCheckReservationResponse                   Reservation;                                              // 0x00A0(0x0038) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_CheckReservation_X");
		return ptr;
	}


	struct FCheckReservationData GetReservation();
	class URPC_CheckReservation_X* SetIsHeartbeat(bool bInIsHeartbeat);
};


// Class ProjectX.RPC_GetGenericDataAll_X
// 0x000C (0x00A8 - 0x009C)
class URPC_GetGenericDataAll_X : public URPC_X
{
public:
	TArray<struct FGetGenericDataAllData>              GenericData;                                              // 0x009C(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetGenericDataAll_X");
		return ptr;
	}

};


// Class ProjectX.RPC_GetStaticDataURL_X
// 0x000C (0x00A8 - 0x009C)
class URPC_GetStaticDataURL_X : public URPC_X
{
public:
	struct FString                                     URL;                                                      // 0x009C(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetStaticDataURL_X");
		return ptr;
	}

};


// Class ProjectX.RPC_ReportLowFPS_X
// 0x002C (0x00C8 - 0x009C)
class URPC_ReportLowFPS_X : public URPC_X
{
public:
	struct FString                                     IP;                                                       // 0x009C(0x000C) (CPF_NeedCtorLink)
	int                                                MachineId;                                                // 0x00A8(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00AC(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.RPC_ReportLowFPS_X.ServerID
	struct FString                                     ServerName;                                               // 0x00B4(0x000C) (CPF_NeedCtorLink)
	int                                                NumHumans;                                                // 0x00C0(0x0004)
	int                                                NumBots;                                                  // 0x00C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_ReportLowFPS_X");
		return ptr;
	}


	class URPC_ReportLowFPS_X* SetNumBots(int InNumBots);
	class URPC_ReportLowFPS_X* SetNumHumans(int InNumHumans);
	class URPC_ReportLowFPS_X* SetServerName(const struct FString& InServerName);
	class URPC_ReportLowFPS_X* SetServerID();
	class URPC_ReportLowFPS_X* SetMachineID(int InMachineID);
	class URPC_ReportLowFPS_X* SetIP(const struct FString& InIP);
};


// Class ProjectX.RPC_SetPlayerSkill_X
// 0x000C (0x00A8 - 0x009C)
class URPC_SetPlayerSkill_X : public URPC_X
{
public:
	int                                                Playlist;                                                 // 0x009C(0x0004)
	float                                              Mu;                                                       // 0x00A0(0x0004)
	float                                              Sigma;                                                    // 0x00A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetPlayerSkill_X");
		return ptr;
	}


	class URPC_SetPlayerSkill_X* SetSigma(float InSigma);
	class URPC_SetPlayerSkill_X* SetMu(float InMu);
	class URPC_SetPlayerSkill_X* SetPlaylist(int InPlaylist);
};


// Class ProjectX.RPC_SetPlayerSkillTier_X
// 0x000C (0x00A8 - 0x009C)
class URPC_SetPlayerSkillTier_X : public URPC_X
{
public:
	int                                                Playlist;                                                 // 0x009C(0x0004)
	int                                                Tier;                                                     // 0x00A0(0x0004)
	int                                                MatchesPlayed;                                            // 0x00A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetPlayerSkillTier_X");
		return ptr;
	}


	class URPC_SetPlayerSkillTier_X* SetMatchesPlayed(int InMatchesPlayed);
	class URPC_SetPlayerSkillTier_X* SetTier(int InTier);
	class URPC_SetPlayerSkillTier_X* SetPlaylist(int InPlaylist);
};


// Class ProjectX.EventRecorderConfig_X
// 0x0014 (0x0060 - 0x004C)
class UEventRecorderConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x004C(0x0004) (CPF_Edit)
	TArray<struct FName>                               DisabledEvents;                                           // 0x0050(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UClass*                                      EventRecorderClass;                                       // 0x005C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.EventRecorderConfig_X");
		return ptr;
	}


	void ResetProperties(class UEventRecorder_X* EventRecorder);
	void SetProperties(class UEventRecorder_X* EventRecorder);
	void Apply();
};


// Class ProjectX.RPC_GetPlayerPermissions_X
// 0x0018 (0x00B4 - 0x009C)
class URPC_GetPlayerPermissions_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                // 0x009C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FPlayerPermissionsReponse>           PlayerPermissions;                                        // 0x00A8(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_GetPlayerPermissions_X");
		return ptr;
	}


	struct FPlayerPermissionsList __RPC_GetPlayerPermissions_X__GetPlayerPermissions_1(const struct FUniqueNetId& P);
	bool GetPermissionFromString(const struct FName& PermissionName, TEnumAsByte<EOnlinePlayerPermission>* Permission);
	TArray<TEnumAsByte<EOnlinePlayerPermission>> ConvertPermissions(TArray<struct FName> PermissionNames);
	struct FPlayerPermissionsList ConvertPlayerPermissions(const struct FUniqueNetId& PlayerID);
	TArray<struct FPlayerPermissionsList> GetPlayerPermissions(TArray<struct FPlayerPermissionsList>* MapLocal_DCCEF2484CD22BBAFF61B9839D5FDF89);
	class URPC_GetPlayerPermissions_X* SetPlayers(TArray<struct FUniqueNetId>* InPlayerIDs);
};


// Class ProjectX.RPC_AddPlayerToRole_X
// 0x0004 (0x00A0 - 0x009C)
class URPC_AddPlayerToRole_X : public URPC_X
{
public:
	int                                                RoleID;                                                   // 0x009C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_AddPlayerToRole_X");
		return ptr;
	}


	class URPC_AddPlayerToRole_X* SetRole(TEnumAsByte<EOnlinePlayerRole> Role);
};


// Class ProjectX.RPC_RemovePlayerFromRole_X
// 0x0004 (0x00A0 - 0x009C)
class URPC_RemovePlayerFromRole_X : public URPC_X
{
public:
	int                                                RoleID;                                                   // 0x009C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_RemovePlayerFromRole_X");
		return ptr;
	}


	class URPC_RemovePlayerFromRole_X* SetRole(TEnumAsByte<EOnlinePlayerRole> Role);
};


// Class ProjectX.RPC_SetSeasonReward_X
// 0x0008 (0x00A4 - 0x009C)
class URPC_SetSeasonReward_X : public URPC_X
{
public:
	int                                                SeasonLevel;                                              // 0x009C(0x0004)
	int                                                SeasonLevelWins;                                          // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_SetSeasonReward_X");
		return ptr;
	}


	class URPC_SetSeasonReward_X* SetReward(int Level, int Wins);
};


// Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate_1
// 0x0014 (0x0050 - 0x003C)
class U__AdHocBrowser_X__CreateErrorDelegate_1 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                     // 0x003C(0x0004)
	struct FScriptDelegate                             ErrorDelegate;                                            // 0x0040(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate_1");
		return ptr;
	}


	void __AdHocBrowser_X__CreateErrorDelegate_2();
	void __AdHocBrowser_X__CreateErrorDelegate_1(class UError* Error);
};


// Class ProjectX.AdHocBrowser_X
// 0x0030 (0x006C - 0x003C)
class UAdHocBrowser_X : public ULanBrowser_X
{
public:
	class UAdHocBeacon_X*                              AdHocBeacon;                                              // 0x003C(0x0004)
	TArray<struct FAdHocAccessPointInfo>               AdHocNodesOnNetwork;                                      // 0x0040(0x000C) (CPF_NeedCtorLink)
	float                                              SearchTimeout;                                            // 0x004C(0x0004) (CPF_Edit, CPF_Const)
	class ULanSearchTask*                              SearchTask;                                               // 0x0050(0x0004)
	TArray<class ULanServerRecord_X*>                  SearchResults;                                            // 0x0054(0x000C) (CPF_NeedCtorLink)
	TArray<struct FAdHocAccessPointInfo>               AdHocAccessPointsAvailable;                               // 0x0060(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AdHocBrowser_X");
		return ptr;
	}


	void __AdHocBrowser_X__GetServerList_1();
	void HandleSearchTimeout();
	void AdHocHandleOnNetworkChanged(TArray<struct FAdHocAccessPointInfo> Ahapis);
	int FindIndexFromServerID(const struct FString& InServerID);
	class UAsyncTask* JoinServer(const struct FString& ServerID, const struct FString& Options);
	void STATIC_CreateErrorDelegate(class UAsyncTask* Task);
	class ULanSearchTask* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(const struct FString& MetaData);
	class UAsyncTask* CreateServer(const struct FString& MetaData);
};


// Class ProjectX.__AdHocBrowser_X__CreateServer_1
// 0x0020 (0x005C - 0x003C)
class U__AdHocBrowser_X__CreateServer_1 : public UObject
{
public:
	struct FString                                     MetaData;                                                 // 0x003C(0x000C) (CPF_NeedCtorLink)
	class UAsyncTask*                                  Task;                                                     // 0x0048(0x0004)
	struct FScriptDelegate                             ApcDelegate;                                              // 0x004C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__CreateServer_1");
		return ptr;
	}


	void __AdHocBrowser_X__CreateServer_2();
	void __AdHocBrowser_X__CreateServer_1();
};


// Class ProjectX.__AdHocBrowser_X__JoinServer_1
// 0x001C (0x0058 - 0x003C)
class U__AdHocBrowser_X__JoinServer_1 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                     // 0x003C(0x0004)
	struct FString                                     ServerID;                                                 // 0x0040(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Options;                                                  // 0x004C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__JoinServer_1");
		return ptr;
	}


	void __AdHocBrowser_X__JoinServer_1();
};


// Class ProjectX.__AdHocInterface_X__DisableAdHoc_1
// 0x0014 (0x0050 - 0x003C)
class U__AdHocInterface_X__DisableAdHoc_1 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                     // 0x003C(0x0004)
	struct FScriptDelegate                             DestroyedDelegate;                                        // 0x0040(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocInterface_X__DisableAdHoc_1");
		return ptr;
	}


	void __AdHocInterface_X__DisableAdHoc_2();
	void __AdHocInterface_X__DisableAdHoc_1();
};


// Class ProjectX.AdHocInterface_X
// 0x0010 (0x004C - 0x003C)
class UAdHocInterface_X : public UObject
{
public:
	class ULanBrowser_X*                               OldLanBrowser;                                            // 0x003C(0x0004)
	class UAdHocBeacon_X*                              AdHocBeacon;                                              // 0x0040(0x0004)
	class UOnlineGameParty_X*                          OnlineGameParty;                                          // 0x0044(0x0004)
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                              // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.AdHocInterface_X");
		return ptr;
	}


	void CreateErrorDelegate(class UAsyncTask* Task);
	class UAsyncTask* DisableAdHoc();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	class UAsyncTask* EnableAdHoc();
};


// Class ProjectX.__AdHocInterface_X__EnableAdHoc_1
// 0x0014 (0x0050 - 0x003C)
class U__AdHocInterface_X__EnableAdHoc_1 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                     // 0x003C(0x0004)
	struct FScriptDelegate                             InitDelegate;                                             // 0x0040(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__AdHocInterface_X__EnableAdHoc_1");
		return ptr;
	}


	void __AdHocInterface_X__EnableAdHoc_2();
	void __AdHocInterface_X__EnableAdHoc_1();
};


// Class ProjectX.__CheckReservationService_X__SendRequest_1
// 0x0020 (0x005C - 0x003C)
class U__CheckReservationService_X__SendRequest_1 : public UObject
{
public:
	struct FScriptDelegate                             FoundCallback;                                            // 0x003C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             NotFoundCallback;                                         // 0x004C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__CheckReservationService_X__SendRequest_1");
		return ptr;
	}


	void __CheckReservationService_X__SendRequest_1(class URPC_CheckReservation_X* RPC);
};


// Class ProjectX.ExecuteServiceTask
// 0x0034 (0x00B8 - 0x0084)
class UExecuteServiceTask : public UAsyncResult
{
public:
	class UPsyNetClientService_X*                      Result;                                                   // 0x0084(0x0004)
	struct FScriptDelegate                             __EventExecuteServiceTaskResult__Delegate;                // 0x0088(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventExecuteServiceTaskResultComplete__Delegate;        // 0x0098(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ExecuteServiceTaskResultDelegate__Delegate;             // 0x00A8(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.ExecuteServiceTask");
		return ptr;
	}


	class UExecuteServiceTask* STATIC_CreateResultError(class UError* InError);
	class UExecuteServiceTask* STATIC_CreateResult(class UPsyNetClientService_X* InResult);
	void ClearCallbacks();
	class UExecuteServiceTask* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class UExecuteServiceTask* SetResult(class UPsyNetClientService_X* InResult, class UError* InError);
	class UExecuteServiceTask* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class UExecuteServiceTask* NotifyOnResult(const struct FScriptDelegate& Callback);
	class UPsyNetClientService_X* ExecuteServiceTaskResultDelegate();
	void EventExecuteServiceTaskResultComplete(class UPsyNetClientService_X* OutResult, class UError* OutError);
	void EventExecuteServiceTaskResult(class UPsyNetClientService_X* OutResult);
};


// Class ProjectX.__ExecuteServiceTask__NotifyOnResult_1
// 0x0010 (0x004C - 0x003C)
class U__ExecuteServiceTask__NotifyOnResult_1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                 // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__ExecuteServiceTask__NotifyOnResult_1");
		return ptr;
	}


	void __ExecuteServiceTask__NotifyOnResult_1();
};


// Class ProjectX.__ExecuteServiceTask__NotifyOnResultComplete_1
// 0x0010 (0x004C - 0x003C)
class U__ExecuteServiceTask__NotifyOnResultComplete_1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                 // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__ExecuteServiceTask__NotifyOnResultComplete_1");
		return ptr;
	}


	void __ExecuteServiceTask__NotifyOnResultComplete_1(class UError* Err);
};


// Class ProjectX.__ExecuteServiceTask__SetResultWhen_1
// 0x0010 (0x004C - 0x003C)
class U__ExecuteServiceTask__SetResultWhen_1 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                        // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__ExecuteServiceTask__SetResultWhen_1");
		return ptr;
	}


	void __ExecuteServiceTask__SetResultWhen_1();
};


// Class ProjectX.LanSearchTask
// 0x003C (0x00C0 - 0x0084)
class ULanSearchTask : public UAsyncResult
{
public:
	TArray<class ULanServerRecord_X*>                  Result;                                                   // 0x0084(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLanSearchTaskResult__Delegate;                     // 0x0090(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLanSearchTaskResultComplete__Delegate;             // 0x00A0(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __LanSearchTaskResultDelegate__Delegate;                  // 0x00B0(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanSearchTask");
		return ptr;
	}


	class ULanSearchTask* STATIC_CreateResultError(class UError* InError);
	class ULanSearchTask* STATIC_CreateResult(TArray<class ULanServerRecord_X*> InResult);
	void ClearCallbacks();
	class ULanSearchTask* SetResultWhen(class UAsyncTask* Other, const struct FScriptDelegate& GetResultDelegate);
	class ULanSearchTask* SetResult(TArray<class ULanServerRecord_X*> InResult, class UError* InError);
	class ULanSearchTask* NotifyOnResultComplete(const struct FScriptDelegate& Callback);
	class ULanSearchTask* NotifyOnResult(const struct FScriptDelegate& Callback);
	TArray<class ULanServerRecord_X*> LanSearchTaskResultDelegate();
	void EventLanSearchTaskResultComplete(TArray<class ULanServerRecord_X*> OutResult, class UError* OutError);
	void EventLanSearchTaskResult(TArray<class ULanServerRecord_X*> OutResult);
};


// Class ProjectX.LanServerRecord_X
// 0x0018 (0x0054 - 0x003C)
class ULanServerRecord_X : public UObject
{
public:
	struct FString                                     ServerID;                                                 // 0x003C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     MetaData;                                                 // 0x0048(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.LanServerRecord_X");
		return ptr;
	}

};


// Class ProjectX.__LanSearchTask__NotifyOnResult_1
// 0x0010 (0x004C - 0x003C)
class U__LanSearchTask__NotifyOnResult_1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                 // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__LanSearchTask__NotifyOnResult_1");
		return ptr;
	}


	void __LanSearchTask__NotifyOnResult_1();
};


// Class ProjectX.__LanSearchTask__NotifyOnResultComplete_1
// 0x0010 (0x004C - 0x003C)
class U__LanSearchTask__NotifyOnResultComplete_1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                 // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__LanSearchTask__NotifyOnResultComplete_1");
		return ptr;
	}


	void __LanSearchTask__NotifyOnResultComplete_1(class UError* Err);
};


// Class ProjectX.__LanSearchTask__SetResultWhen_1
// 0x0010 (0x004C - 0x003C)
class U__LanSearchTask__SetResultWhen_1 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                        // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__LanSearchTask__SetResultWhen_1");
		return ptr;
	}


	void __LanSearchTask__SetResultWhen_1();
};


// Class ProjectX.__PartyMessageQueue_X__SendMessage_1
// 0x0004 (0x0040 - 0x003C)
class U__PartyMessageQueue_X__SendMessage_1 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                     // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PartyMessageQueue_X__SendMessage_1");
		return ptr;
	}


	void __PartyMessageQueue_X__SendMessage_1(class UError* _);
};


// Class ProjectX.PartyMessageQueue_X
// 0x0030 (0x0078 - 0x0048)
class UPartyMessageQueue_X : public UComponent
{
public:
	TArray<struct FPendingMessage>                     Pending;                                                  // 0x0048(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<class UAsyncTask*>                          CurrentBatch;                                             // 0x0054(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bPaused : 1;                                              // 0x0060(0x0004)
	float                                              BatchDelayTime;                                           // 0x0064(0x0004) (CPF_Edit)
	struct FScriptDelegate                             __SendMessageServiceDelegate__Delegate;                   // 0x0068(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PartyMessageQueue_X");
		return ptr;
	}


	void __PartyMessageQueue_X__CancelAll_1(class UAsyncTask* Task);
	void HandleTaskComplete(class UAsyncTask* Task);
	class UAsyncTask* SendMessage(const struct FUniqueLobbyId& LobbyId, const struct FString& Message);
	void SendBatch();
	void SendBatchTimer();
	void QueueBatch();
	void CancelAll();
	void QueueMessage(const struct FUniqueLobbyId& LobbyId, const struct FString& Message);
	void SetPaused(bool bPause);
	class UAsyncTask* SendMessageServiceDelegate(const struct FUniqueLobbyId& LobbyId, const struct FString& Message);
};


// Class ProjectX.__PsyNetConnection_X__ProcessServiceCall_1
// 0x0004 (0x0040 - 0x003C)
class U__PsyNetConnection_X__ProcessServiceCall_1 : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                                 // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetConnection_X__ProcessServiceCall_1");
		return ptr;
	}


	void __PsyNetConnection_X__ProcessServiceCall_1(class UError* _);
};


// Class ProjectX.__PsyNetMessengerHttp_X__SendMessage_1
// 0x0010 (0x004C - 0x003C)
class U__PsyNetMessengerHttp_X__SendMessage_1 : public UObject
{
public:
	struct FString                                     PsyRequestID;                                             // 0x003C(0x000C) (CPF_NeedCtorLink)
	class UAsyncTask*                                  Task;                                                     // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetMessengerHttp_X__SendMessage_1");
		return ptr;
	}


	void __PsyNetMessengerHttp_X__SendMessage_1(class UWebRequest_X* Request);
};


// Class ProjectX.__PsyNetRequestQue_X__SendRequest_1
// 0x0008 (0x0044 - 0x003C)
class U__PsyNetRequestQue_X__SendRequest_1 : public UObject
{
public:
	struct FName                                       RequestID;                                                // 0x003C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetRequestQue_X__SendRequest_1");
		return ptr;
	}


	void __PsyNetRequestQue_X__SendRequest_1();
};


// Class ProjectX.PsyNetRequestQue_X
// 0x0020 (0x005C - 0x003C)
class UPsyNetRequestQue_X : public UObject
{
public:
	float                                              RequestTimeout;                                           // 0x003C(0x0004) (CPF_Edit)
	TArray<struct FPsyNetRequest>                      Requests;                                                 // 0x0040(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SendMessageDelegate__Delegate;                          // 0x004C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetRequestQue_X");
		return ptr;
	}


	void FailAllPending(class UError* Error);
	void TimeoutRequests();
	bool ProcessResponseMessage(class UPsyNetMessage_X* Message);
	void RemoveRequest(const struct FName& RequestID);
	void SetRequestComplete(const struct FName& RequestID, class UPsyNetMessage_X* Response, class UError* Error);
	class USendRequestTask* SendRequest(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessageDelegate(class UPsyNetMessage_X* Message);
};


// Class ProjectX.__PsyNetServiceProvider_X__CreateChannel_1
// 0x000C (0x0048 - 0x003C)
class U__PsyNetServiceProvider_X__CreateChannel_1 : public UObject
{
public:
	struct FString                                     ChannelName;                                              // 0x003C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__CreateChannel_1");
		return ptr;
	}


	bool __PsyNetServiceProvider_X__CreateChannel_1(class UPsyNetChannel_X* C);
};


// Class ProjectX.PsyNetChannel_X
// 0x0038 (0x0074 - 0x003C)
class UPsyNetChannel_X : public UObject
{
public:
	struct FString                                     ChannelName;                                              // 0x003C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bOpen : 1;                                                // 0x0048(0x0004)
	unsigned long                                      bReceivedFirstMessage : 1;                                // 0x0048(0x0004)
	unsigned long                                      bClosed : 1;                                              // 0x0048(0x0004)
	unsigned long                                      bTimedOut : 1;                                            // 0x0048(0x0004)
	int                                                NextMessageID;                                            // 0x004C(0x0004)
	float                                              WaitForMessageTime;                                       // 0x0050(0x0004) (CPF_Edit)
	TArray<struct FPendingChannelService>              ServiceQueue;                                             // 0x0054(0x000C) (CPF_NeedCtorLink)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                            // 0x0060(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FScriptDelegate                             __EventClosed__Delegate;                                  // 0x0064(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetChannel_X");
		return ptr;
	}


	struct FString GetDebugName();
	void Close();
	void Timeout();
	void ClearTimeout();
	void UpdateTimeout();
	void ExecuteService(class UPsyNetClientService_X* Service);
	void ExecuteNext();
	class UAsyncTask* CreatePendingService(class UPsyNetClientService_X* Service, int MessageId);
	class UAsyncTask* QueueServiceCall(class UPsyNetClientService_X* Service, class UPsyNetMessage_X* Message);
	void Open();
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* ServiceClass, const struct FScriptDelegate& Callback);
	void Init(const struct FString& InChannelName);
	void EventClosed(class UPsyNetChannel_X* Channel);
};


// Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest_1
// 0x0004 (0x0040 - 0x003C)
class U__PsyNetServiceProvider_X__ExecuteRequest_1 : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                                 // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest_1");
		return ptr;
	}


	void __PsyNetServiceProvider_X__ExecuteRequest_1(class UPsyNetClientService_X* Result, class UError* Error);
};


// Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage_1
// 0x0014 (0x0050 - 0x003C)
class U__PsyNetServiceProvider_X__ExecuteServiceMessage_1 : public UObject
{
public:
	struct FString                                     ServiceName;                                              // 0x003C(0x000C) (CPF_NeedCtorLink)
	class UPsyNetClientService_X*                      Service;                                                  // 0x0048(0x0004)
	class UExecuteServiceTask*                         Task;                                                     // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage_1");
		return ptr;
	}


	void __PsyNetServiceProvider_X__ExecuteServiceMessage_2(class UError* Err);
	void __PsyNetServiceProvider_X__ExecuteServiceMessage_1(class UPsyNetClientService_X* R, class UError* E);
};


// Class ProjectX.__SendRequestTask__NotifyOnResult_1
// 0x0010 (0x004C - 0x003C)
class U__SendRequestTask__NotifyOnResult_1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                 // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__SendRequestTask__NotifyOnResult_1");
		return ptr;
	}


	void __SendRequestTask__NotifyOnResult_1();
};


// Class ProjectX.__SendRequestTask__NotifyOnResultComplete_1
// 0x0010 (0x004C - 0x003C)
class U__SendRequestTask__NotifyOnResultComplete_1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                 // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__SendRequestTask__NotifyOnResultComplete_1");
		return ptr;
	}


	void __SendRequestTask__NotifyOnResultComplete_1(class UError* Err);
};


// Class ProjectX.__SendRequestTask__SetResultWhen_1
// 0x0010 (0x004C - 0x003C)
class U__SendRequestTask__SetResultWhen_1 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                                        // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__SendRequestTask__SetResultWhen_1");
		return ptr;
	}


	void __SendRequestTask__SetResultWhen_1();
};


// Class ProjectX.__TaskGate_X__Add_1
// 0x0004 (0x0040 - 0x003C)
class U__TaskGate_X__Add_1 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                     // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TaskGate_X__Add_1");
		return ptr;
	}


	void __TaskGate_X__Add_1();
};


// Class ProjectX.TaskGate_X
// 0x0010 (0x004C - 0x003C)
class UTaskGate_X : public UObject
{
public:
	unsigned long                                      bOpen : 1;                                                // 0x003C(0x0004)
	TArray<class UAsyncTask*>                          Tasks;                                                    // 0x0040(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.TaskGate_X");
		return ptr;
	}


	class UAsyncTask* AddWithTimeout(float TimeoutSeconds, class UErrorType* TimeoutError, const struct FString& ErrorMessage);
	class UAsyncTask* Add();
	void CompleteTasks();
	void SetOpen(bool bIsOpen);
};


// Class ProjectX.__TaskGate_X__AddWithTimeout_1
// 0x0024 (0x0060 - 0x003C)
class U__TaskGate_X__AddWithTimeout_1 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                                     // 0x003C(0x0004)
	class UErrorType*                                  TimeoutError;                                             // 0x0040(0x0004)
	struct FString                                     ErrorMessage;                                             // 0x0044(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             TimeoutDelegate;                                          // 0x0050(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__TaskGate_X__AddWithTimeout_1");
		return ptr;
	}


	void __TaskGate_X__AddWithTimeout_2();
	void __TaskGate_X__AddWithTimeout_1();
};


// Class ProjectX.BlogTile_X
// 0x0070 (0x00AC - 0x003C)
class UBlogTile_X : public UObject
{
public:
	struct FString                                     Title;                                                    // 0x003C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     DescriptionHeader;                                        // 0x0048(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Description;                                              // 0x0054(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     WebURL;                                                   // 0x0060(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     CarName;                                                  // 0x006C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     ImageURL;                                                 // 0x0078(0x000C) (CPF_NeedCtorLink)
	struct FString                                     TileStartTimeUTC;                                         // 0x0084(0x000C) (CPF_NeedCtorLink)
	struct FString                                     LiveStartTimeUTC;                                         // 0x0090(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x009C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.BlogTile_X.TileStartTimeSecondsUTC
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A4(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.BlogTile_X.LiveStartTimeSecondsUTC

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BlogTile_X");
		return ptr;
	}


	void UTCtoEpoch();
	struct FString GetTileID();
};


// Class ProjectX.CountTrigger_X
// 0x0018 (0x0060 - 0x0048)
class UCountTrigger_X : public UComponent
{
public:
	int                                                Threshold;                                                // 0x0048(0x0004) (CPF_Edit)
	int                                                Count;                                                    // 0x004C(0x0004)
	struct FScriptDelegate                             __EventTriggered__Delegate;                               // 0x0050(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.CountTrigger_X");
		return ptr;
	}


	void Reset();
	void Increment();
	void EventTriggered(class UCountTrigger_X* Trigger);
};


// Class ProjectX.RPC_PartyBase_X
// 0x000C (0x00A8 - 0x009C)
class URPC_PartyBase_X : public URPC_X
{
public:
	struct FString                                     PartyID;                                                  // 0x009C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyBase_X");
		return ptr;
	}


	class URPC_PartyBase_X* SetPartyId(const struct FUniqueLobbyId& InLobbyId);
};


// Class ProjectX.RPC_PartyMessage_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartyMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                                  // 0x00A8(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyMessage_X");
		return ptr;
	}


	class URPC_PartyMessage_X* SetMessage(const struct FString& InMessage);
};


// Class ProjectX.RPC_PartyCreate_X
// 0x0068 (0x0104 - 0x009C)
class URPC_PartyCreate_X : public URPC_X
{
public:
	struct FPsyNetPartyInfo                            Info;                                                     // 0x009C(0x005C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                                  // 0x00F8(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyCreate_X");
		return ptr;
	}

};


// Class ProjectX.RPC_PartyJoin_X
// 0x0068 (0x0110 - 0x00A8)
class URPC_PartyJoin_X : public URPC_PartyBase_X
{
public:
	struct FPsyNetPartyInfo                            Info;                                                     // 0x00A8(0x005C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                                  // 0x0104(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyJoin_X");
		return ptr;
	}

};


// Class ProjectX.BugMetrics_X
// 0x000C (0x0060 - 0x0054)
class UBugMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FName>                               ReportedIDs;                                              // 0x0054(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.BugMetrics_X");
		return ptr;
	}


	void Report(const struct FName& Id, const struct FString& Details, const struct FString& Trace);
	void BugReport(const struct FName& Id, const struct FString& Details);
};


// Class ProjectX.RPC_PartyLeave_X
// 0x0000 (0x00A8 - 0x00A8)
class URPC_PartyLeave_X : public URPC_PartyBase_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyLeave_X");
		return ptr;
	}

};


// Class ProjectX.RPC_PartyChat_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartyChat_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                                  // 0x00A8(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyChat_X");
		return ptr;
	}


	class URPC_PartyChat_X* SetText(const struct FString& InText);
};


// Class ProjectX.RPC_PartyChangeOwner_X
// 0x00B0 (0x0158 - 0x00A8)
class URPC_PartyChangeOwner_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                NewOwnerId;                                               // 0x00A8(0x0048)
	struct FPsyNetPartyInfo                            Info;                                                     // 0x00F0(0x005C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                                  // 0x014C(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyChangeOwner_X");
		return ptr;
	}


	class URPC_PartyChangeOwner_X* SetNewOwnerId(const struct FUniqueNetId& InNewOwnerId);
};


// Class ProjectX.RPC_PartySendInvites_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartySendInvites_X : public URPC_PartyBase_X
{
public:
	TArray<struct FString>                             Invitees;                                                 // 0x00A8(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartySendInvites_X");
		return ptr;
	}


	class URPC_PartySendInvites_X* AddInvitee(const struct FString& InInviteeUserId);
};


// Class ProjectX.RPC_PartyKickMember_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartyKickMember_X : public URPC_PartyBase_X
{
public:
	TArray<struct FString>                             Members;                                                  // 0x00A8(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyKickMember_X");
		return ptr;
	}


	class URPC_PartyKickMember_X* AddMember(const struct FString& InMemberId);
};


// Class ProjectX.RPC_PartyInfo_X
// 0x0018 (0x00B4 - 0x009C)
class URPC_PartyInfo_X : public URPC_X
{
public:
	TArray<struct FPartyInvite>                        Invites;                                                  // 0x009C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Member;                                                   // 0x00A8(0x000C) (CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyInfo_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_Party_X
// 0x00C4 (0x0118 - 0x0054)
class UPsyNetService_Party_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                                  // 0x0054(0x000C) (CPF_NeedCtorLink)
	struct FString                                     NotificationType;                                         // 0x0060(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Content;                                                  // 0x006C(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                               // 0x0078(0x0048)
	struct FString                                     FromUserName;                                             // 0x00C0(0x000C) (CPF_NeedCtorLink)
	int                                                CreatedAt;                                                // 0x00CC(0x0004)
	struct FUniqueNetId                                ForUserId;                                                // 0x00D0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Party_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PartyUserInvited_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartyUserInvited_X : public UPsyNetService_Party_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserInvited_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PartySystem_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartySystem_X : public UPsyNetService_Party_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartySystem_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PartyUserJoined_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartyUserJoined_X : public UPsyNetService_Party_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserJoined_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PartyUserKicked_X
// 0x00F4 (0x0148 - 0x0054)
class UPsyNetService_PartyUserKicked_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                                  // 0x0054(0x000C) (CPF_NeedCtorLink)
	struct FString                                     NotificationType;                                         // 0x0060(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                Content;                                                  // 0x006C(0x0048)
	struct FUniqueNetId                                FromUserId;                                               // 0x00B4(0x0048)
	int                                                CreatedAt;                                                // 0x00FC(0x0004)
	struct FUniqueNetId                                ForUserId;                                                // 0x0100(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserKicked_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PartyUserLeft_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartyUserLeft_X : public UPsyNetService_Party_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserLeft_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PartyUserDisconnected_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartyUserDisconnected_X : public UPsyNetService_Party_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserDisconnected_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PartyOwnerChanged_X
// 0x00F4 (0x0148 - 0x0054)
class UPsyNetService_PartyOwnerChanged_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                                  // 0x0054(0x000C) (CPF_NeedCtorLink)
	struct FString                                     NotificationType;                                         // 0x0060(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                Content;                                                  // 0x006C(0x0048)
	struct FUniqueNetId                                FromUserId;                                               // 0x00B4(0x0048)
	int                                                CreatedAt;                                                // 0x00FC(0x0004)
	struct FUniqueNetId                                ForUserId;                                                // 0x0100(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyOwnerChanged_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_PartyChat_X
// 0x0000 (0x0118 - 0x0118)
class UPsyNetService_PartyChat_X : public UPsyNetService_Party_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_PartyChat_X");
		return ptr;
	}

};


// Class ProjectX.PerConMetrics_X
// 0x001C (0x0070 - 0x0054)
class UPerConMetrics_X : public UMetricsGroup_X
{
public:
	int                                                StartConnectFailCount;                                    // 0x0054(0x0004)
	int                                                ConnectFailCount;                                         // 0x0058(0x0004)
	int                                                DisconnectCount;                                          // 0x005C(0x0004)
	int                                                RPCErrorCount;                                            // 0x0060(0x0004)
	int                                                InvalidMessageCount;                                      // 0x0064(0x0004)
	unsigned long                                      bConnected : 1;                                           // 0x0068(0x0004)
	float                                              StartTime;                                                // 0x006C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PerConMetrics_X");
		return ptr;
	}


	void ServiceFail(const struct FString& PlayerID, int Count, const struct FString& Service, const struct FName& Error);
	void InvalidMessage(const struct FString& PlayerID, int Count, const struct FString& Substring);
	void Disconnected(const struct FString& PlayerID, int Count, int Code, const struct FString& Reason, float ElapsedSeconds);
	void Connected(const struct FString& PlayerID, float ElapsedSeconds);
	void ConnectFail(const struct FString& PlayerID, int Count, int Code, const struct FString& Reason, float ElapsedSeconds);
	void StartConnectFail(const struct FString& PlayerID, int Count);
	void StartConnect(const struct FString& PlayerID);
	void Broken(const struct FString& PlayerID, const struct FString& Reason);
	void Disabled(const struct FString& PlayerID);
	void Enabled(const struct FString& PlayerID);
	void HandleRPCError(class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error);
	void HandleInvalidMessage(class UPsyNetMessengerWebSocket_X* InMessenger, const struct FString& Substring);
	void HandleDisconnected(class UPsyNetMessengerWebSocket_X* Socket, int Code, const struct FString& Reason);
	void HandleConnected(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnectFail(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnect(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStatusChanged(class UPerCon_X* PerCon);
	struct FString GetPlayerID();
	void SetMessenger(class UPsyNetMessengerWebSocket_X* PerConMessenger);
	void Construct();
};


// Class ProjectX.PerConMonitor_X
// 0x0024 (0x0060 - 0x003C)
class UPerConMonitor_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                                   // 0x003C(0x0004)
	class UPerCon_X*                                   PerCon;                                                   // 0x0040(0x0004)
	class UPsyNetMessengerWebSocket_X*                 Messenger;                                                // 0x0044(0x0004)
	class URPCQueue_X*                                 RPCQueue;                                                 // 0x0048(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	int                                                Disconnections;                                           // 0x004C(0x0004)
	int                                                InvalidMessages;                                          // 0x0050(0x0004)
	TArray<float>                                      ErrorTimestamps;                                          // 0x0054(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PerConMonitor_X");
		return ptr;
	}


	bool __PerConMonitor_X__HandleBatchError_1(float RemoveTime);
	bool STATIC_IsPerConRelevantError(class UError* Error);
	void HandleBatchError(class URPCQueue_X* InQueue, class UError* Error, TArray<float>* FilterLocal_1C2A83EB47AD136F8A777B9184D7914F);
	void HandleInvalidMessage(class UPsyNetMessengerWebSocket_X* InMessenger, const struct FString& Substring);
	void HandleDisconnected(class UPsyNetMessengerWebSocket_X* InMessenger, int Code, const struct FString& Reason);
	void HandleConnectFail(class UPsyNetMessengerWebSocket_X* InMessenger);
	void Dispose();
	void SetMessenger(class UPsyNetMessengerWebSocket_X* InMessenger);
	void Init(class UPerCon_X* InPerCon, class URPCQueue_X* InRpcQueue);
};


// Class ProjectX.PsyNetService_DuplicateLogin_X
// 0x0000 (0x0054 - 0x0054)
class UPsyNetService_DuplicateLogin_X : public UPsyNetClientService_X
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_DuplicateLogin_X");
		return ptr;
	}

};


// Class ProjectX.PsyNetService_AAS_X
// 0x0008 (0x005C - 0x0054)
class UPsyNetService_AAS_X : public UPsyNetClientService_X
{
public:
	int                                                AdtTime;                                                  // 0x0054(0x0004)
	int                                                OnlineHours;                                              // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_AAS_X");
		return ptr;
	}


	int GetOnlineHours();
};


// Class ProjectX.PsyNetService_Echo_X
// 0x0018 (0x006C - 0x0054)
class UPsyNetService_Echo_X : public UPsyNetClientService_X
{
public:
	struct FString                                     RequestString;                                            // 0x0054(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ResponseString;                                           // 0x0060(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.PsyNetService_Echo_X");
		return ptr;
	}


	void Execute();
};


// Class ProjectX.RPC_PartyChatMessage_X
// 0x000C (0x00B4 - 0x00A8)
class URPC_PartyChatMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                                  // 0x00A8(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PartyChatMessage_X");
		return ptr;
	}


	class URPC_PartyChatMessage_X* SetMessage(const struct FString& InMessage);
};


// Class ProjectX.RPC_PsyNetSendIndividualChat_X
// 0x0054 (0x00F0 - 0x009C)
class URPC_PsyNetSendIndividualChat_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)
	struct FString                                     Message;                                                  // 0x00E4(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PsyNetSendIndividualChat_X");
		return ptr;
	}


	class URPC_PsyNetSendIndividualChat_X* SetMessage(const struct FString& InMessage);
	class URPC_PsyNetSendIndividualChat_X* SetPlayerID(const struct FUniqueNetId& InPlayerId);
};


// Class ProjectX.UdpLanServer_X
// 0x0010 (0x004C - 0x003C)
class UUdpLanServer_X : public UObject
{
public:
	class ULanBeacon_X*                                Beacon;                                                   // 0x003C(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FString                                     MetaData;                                                 // 0x0040(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.UdpLanServer_X");
		return ptr;
	}


	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class ULanMessage_HostQuery_X* Query);
	void Destroy();
	class UAsyncTask* SetServerMetaData(const struct FString& InMetaData);
	void Construct();
};


// Class ProjectX.__OnlinePlayerFriends_X__DownloadPendingFriendRequests_1
// 0x0010 (0x004C - 0x003C)
class U__OnlinePlayerFriends_X__DownloadPendingFriendRequests_1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                 // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__DownloadPendingFriendRequests_1");
		return ptr;
	}

};


// Class ProjectX.__OnlinePlayerFriends_X__SearchForPlayerByName_1
// 0x001C (0x0058 - 0x003C)
class U__OnlinePlayerFriends_X__SearchForPlayerByName_1 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                                 // 0x003C(0x0010) (CPF_NeedCtorLink)
	struct FString                                     FriendName;                                               // 0x004C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__SearchForPlayerByName_1");
		return ptr;
	}

};


// Class ProjectX.SetPlayerStorageResult_X
// 0x000C (0x0048 - 0x003C)
class USetPlayerStorageResult_X : public UObject
{
public:
	TArray<struct FSetPlayerStorageResultItem>         Items;                                                    // 0x003C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SetPlayerStorageResult_X");
		return ptr;
	}

};


// Class ProjectX.RPC_PlayerStorageSet_X
// 0x0058 (0x00F4 - 0x009C)
class URPC_PlayerStorageSet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)
	TArray<struct FSetPlayerStorageRequestItem>        Items;                                                    // 0x00E4(0x000C) (CPF_NeedCtorLink)
	class USetPlayerStorageResult_X*                   Result;                                                   // 0x00F0(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerStorageSet_X");
		return ptr;
	}


	class UObject* GetResponseObject();
};


// Class ProjectX.OnlinePlayerStorageQueue_X
// 0x003C (0x0078 - 0x003C)
class UOnlinePlayerStorageQueue_X : public UObject
{
public:
	class UOnlinePlayerStorageConfig_X*                Config;                                                   // 0x003C(0x0004) (CPF_Edit)
	TArray<struct FPendingStorage>                     QueuedObjects;                                            // 0x0040(0x000C) (CPF_NeedCtorLink)
	TArray<struct FPendingStorage>                     PendingObjects;                                           // 0x004C(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStorageSuccess__Delegate;                          // 0x0058(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStorageError__Delegate;                            // 0x0068(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageQueue_X");
		return ptr;
	}


	void __OnlinePlayerStorageQueue_X__Construct_1(const struct FString& _);
	void __OnlinePlayerStorageQueue_X__SendBatch_2(const struct FPendingStorage& P);
	void __OnlinePlayerStorageQueue_X__SendBatch_1(class URPC_X* RPC);
	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_2(const struct FPendingStorage& P);
	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_1(const struct FSetPlayerStorageRequestItem& R);
	void __OnlinePlayerStorageQueue_X__HandleStorageError_2(const struct FPendingStorage& P);
	bool __OnlinePlayerStorageQueue_X__HandleStorageError_1(const struct FPendingStorage& P);
	void HandleStorageError(class UError* Error, TArray<struct FPendingStorage>* FilterLocal_79D424F04D1DF7679ECFA18D8E2C2DB0);
	struct FPendingStorage MapResultItem(const struct FSetPlayerStorageResultItem& Item, struct FPendingStorage* StructInitializer_33E6C0B04ECA2A522B47AD9FAA60CFCF);
	void HandleStorageSuccess(class URPC_PlayerStorageSet_X* RPC, TArray<struct FPendingStorage>* MapLocal_D15532FE4CF61012686EAB83304B6276);
	void PartitionStorageRequests(TArray<struct FPendingStorage>* OutQueue, TArray<struct FSetPlayerStorageRequestItem>* OutOfDate, TArray<struct FPendingStorage>* UpToDate, struct FSetPlayerStorageRequestItem* StructInitializer_5B20EF364E3D705F59E0A789A7CF6169);
	void SendBatch();
	void QueueBatch();
	void QueueObject(class UObject* DataObj, int ClientTick);
	void HandleLocalPlayerLeave(class ULocalPlayer_X* OldPlayer);
	void Construct();
	void EventStorageError(class UError* Error);
	void EventStorageSuccess(class UObject* Data, int ServerTick);
};


// Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem_1
// 0x000C (0x0048 - 0x003C)
class U__OnlinePlayerStorageQueue_X__MapResultItem_1 : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 Item;                                                     // 0x003C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem_1");
		return ptr;
	}


	bool __OnlinePlayerStorageQueue_X__MapResultItem_1(const struct FPendingStorage& P);
};


// Class ProjectX.__OnlinePlayerStorageSync_X__PopRequestObject_1
// 0x0008 (0x0044 - 0x003C)
class U__OnlinePlayerStorageSync_X__PopRequestObject_1 : public UObject
{
public:
	struct FName                                       Category;                                                 // 0x003C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageSync_X__PopRequestObject_1");
		return ptr;
	}


	bool __OnlinePlayerStorageSync_X__PopRequestObject_1(class UObject* O);
};


// Class ProjectX.GetPlayerStorageResult_X
// 0x000C (0x0048 - 0x003C)
class UGetPlayerStorageResult_X : public UObject
{
public:
	TArray<struct FGetPlayerStorageResultItem>         Items;                                                    // 0x003C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.GetPlayerStorageResult_X");
		return ptr;
	}

};


// Class ProjectX.RPC_PlayerStorageGet_X
// 0x0058 (0x00F4 - 0x009C)
class URPC_PlayerStorageGet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x009C(0x0048)
	TArray<struct FGetPlayerStorageRequestItem>        Items;                                                    // 0x00E4(0x000C) (CPF_NeedCtorLink)
	class UGetPlayerStorageResult_X*                   Result;                                                   // 0x00F0(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.RPC_PlayerStorageGet_X");
		return ptr;
	}


	class UObject* GetResponseObject();
};


// Class ProjectX.OnlinePlayerStorageSync_X
// 0x001C (0x0058 - 0x003C)
class UOnlinePlayerStorageSync_X : public UObject
{
public:
	TArray<class UObject*>                             RequestedObjects;                                         // 0x003C(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSyncSuccess__Delegate;                             // 0x0048(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageSync_X");
		return ptr;
	}


	class UObject* __OnlinePlayerStorageSync_X__SyncObjects_1(const struct FOnlinePlayerStorageSyncRequest& R);
	void __OnlinePlayerStorageSync_X__HandleSyncSuccess_1(const struct FOnlinePlayerStorageSyncResult& Result);
	void __OnlinePlayerStorageSync_X__HandleSyncError_1(class UObject* O);
	void HandleSyncError(class UError* Error, TArray<class UObject*>* NewRequestObjects);
	class UObject* InstanceSyncData(class UObject* LocalObject, TArray<unsigned char>* Bytes);
	class UObject* PopRequestObject(const struct FName& Category);
	struct FOnlinePlayerStorageSyncResult MapResultItem(const struct FGetPlayerStorageResultItem& Item, struct FOnlinePlayerStorageSyncResult* StructInitializer_555233284BD97E87084700A88E1F51E7);
	void HandleSyncSuccess(class URPC_PlayerStorageGet_X* RPC, TArray<struct FOnlinePlayerStorageSyncResult>* MapLocal_3DE017914928F0028389A7AA13D33BAA);
	int CrcObject(class UObject* Data);
	struct FGetPlayerStorageRequestItem MapRequestItem(const struct FOnlinePlayerStorageSyncRequest& Request, struct FGetPlayerStorageRequestItem* StructInitializer_3EFF22434C38C1DF5F9325853DD38E2B);
	class UAsyncTask* SyncObjects(TArray<struct FOnlinePlayerStorageSyncRequest>* Requests, TArray<class UObject*>* MapLocal_86CF0EC34799438E2B01FA8120EF6368, TArray<struct FGetPlayerStorageRequestItem>* MapLocal_0545A9CB4A567ADF16DA2FB029D66BD2);
	void EventSyncSuccess(struct FOnlinePlayerStorageSyncResult* Result);
};


// Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects_2
// 0x000C (0x0048 - 0x003C)
class U__OnlinePlayerStorageSync_X__SyncObjects_2 : public UObject
{
public:
	TArray<class UObject*>                             NewRequestObjects;                                        // 0x003C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects_2");
		return ptr;
	}


	void __OnlinePlayerStorageSync_X__SyncObjects_2(class UError* E);
};


// Class ProjectX.DynamicValue_X
// 0x0020 (0x005C - 0x003C)
class UDynamicValue_X : public UObject
{
public:
	float                                              DefaultValue;                                             // 0x003C(0x0004) (CPF_Edit)
	unsigned long                                      bClampMax : 1;                                            // 0x0040(0x0004) (CPF_Edit)
	unsigned long                                      bClampMin : 1;                                            // 0x0040(0x0004) (CPF_Edit)
	float                                              MaxValue;                                                 // 0x0044(0x0004) (CPF_Edit)
	float                                              MinValue;                                                 // 0x0048(0x0004) (CPF_Edit)
	TArray<class UDynamicValueModifier_X*>             Modifiers;                                                // 0x004C(0x000C) (CPF_NeedCtorLink)
	float                                              CachedValue;                                              // 0x0058(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValue_X");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void RemoveAllModifiers();
	void RemoveModifier(class UDynamicValueModifier_X* Mod);
	class UDynamicValueModifier_X* AddModifier(class UDynamicValueModifier_X* Mod);
	void Construct();
};


// Class ProjectX.DynamicValueModifier_X
// 0x0014 (0x0050 - 0x003C)
class UDynamicValueModifier_X : public UObject
{
public:
	struct FString                                     DisplayName;                                              // 0x003C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TEnumAsByte<EDynamicValueModType>                  Type;                                                     // 0x0048(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x004C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValueModifier_X");
		return ptr;
	}


	struct FString GetDebugValue();
	struct FString GetDebugString();
	bool Expired();
	float GetValue();
	void Tick(float DeltaTime);
};


// Class ProjectX.DynamicValueModifierCurve_X
// 0x0020 (0x0070 - 0x0050)
class UDynamicValueModifierCurve_X : public UDynamicValueModifier_X
{
public:
	struct FInterpCurveFloat                           Curve;                                                    // 0x0050(0x0010) (CPF_Edit, CPF_NeedCtorLink)
	struct FScriptDelegate                             __GetValueDelegate__Delegate;                             // 0x0060(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValueModifierCurve_X");
		return ptr;
	}


	struct FString GetDebugValue();
	float GetValue();
	float GetValueDelegate();
};


// Class ProjectX.DynamicValueModifierDuration_X
// 0x001C (0x006C - 0x0050)
class UDynamicValueModifierDuration_X : public UDynamicValueModifier_X
{
public:
	float                                              Duration;                                                 // 0x0050(0x0004) (CPF_Edit)
	float                                              Value;                                                    // 0x0054(0x0004) (CPF_Edit)
	struct FInterpCurveFloat                           CurveValue;                                               // 0x0058(0x0010) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bUseCurve : 1;                                            // 0x0068(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.DynamicValueModifierDuration_X");
		return ptr;
	}


	struct FString GetDebugString();
	float GetValue();
	bool Expired();
	void Tick(float DeltaTime);
};


// Class ProjectX.OnlinePlayerStorageManifest_X
// 0x000C (0x0048 - 0x003C)
class UOnlinePlayerStorageManifest_X : public UObject
{
public:
	TArray<struct UOnlinePlayerStorageManifest_X_FStorageMetadata> MetaData;                                                 // 0x003C(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageManifest_X");
		return ptr;
	}


	int GetChecksum(const struct FName& Category);
	void SetChecksum(const struct FName& Category, int Checksum);
	int GetIndex(const struct FName& Category);
};


// Class ProjectX.OnlinePlayerStorageConfig_X
// 0x0004 (0x0050 - 0x004C)
class UOnlinePlayerStorageConfig_X : public UOnlineConfig_X
{
public:
	float                                              QueueBatchDelay;                                          // 0x004C(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.OnlinePlayerStorageConfig_X");
		return ptr;
	}

};


// Class ProjectX.SaveLock_X
// 0x0004 (0x0040 - 0x003C)
class USaveLock_X : public UObject
{
public:
	class UGFxEngine_X*                                GFxEngine;                                                // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SaveLock_X");
		return ptr;
	}


	bool STATIC_StaticAllowSave();
	bool AllowSave();
};


// Class ProjectX.SmoothDynamicValue_X
// 0x000C (0x0068 - 0x005C)
class USmoothDynamicValue_X : public UDynamicValue_X
{
public:
	float                                              LerpUpSpeed;                                              // 0x005C(0x0004) (CPF_Edit)
	float                                              LerpDownSpeed;                                            // 0x0060(0x0004) (CPF_Edit)
	float                                              SmoothedCachedValue;                                      // 0x0064(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProjectX.SmoothDynamicValue_X");
		return ptr;
	}


	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void Construct();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
