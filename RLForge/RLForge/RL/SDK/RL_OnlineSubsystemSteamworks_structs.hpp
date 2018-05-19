#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
enum class ESteamMatchmakingType : uint8_t
{
	SMT_Invalid                    = 0,
	SMT_LAN                        = 1,
	SMT_Internet                   = 2,
	SMT_MAX                        = 3
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
enum class ELeaderboardSortType : uint8_t
{
	LST_Ascending                  = 0,
	LST_Descending                 = 1,
	LST_MAX                        = 2
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
enum class ELeaderboardRequestType : uint8_t
{
	LRT_Global                     = 0,
	LRT_Player                     = 1,
	LRT_Friends                    = 2,
	LRT_MAX                        = 3
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
enum class ELeaderboardFormat : uint8_t
{
	LF_Number                      = 0,
	LF_Seconds                     = 1,
	LF_Milliseconds                = 2,
	LF_MAX                         = 3
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
enum class ELeaderboardUpdateType : uint8_t
{
	LUT_KeepBest                   = 0,
	LUT_Force                      = 1,
	LUT_MAX                        = 2
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
enum class EMuteType : uint8_t
{
	MUTE_None                      = 0,
	MUTE_AllButFriends             = 1,
	MUTE_All                       = 2,
	MUTE_MAX                       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.WorkshopItemData
// 0x0078
struct FWorkshopItemData
{
	struct FString                                     Title;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Description;                                              // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     MetaData;                                                 // 0x0018(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Content;                                                  // 0x0024(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Preview;                                                  // 0x0030(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Tags;                                                     // 0x003C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     AddPairs;                                                 // 0x0048(0x000C) (CPF_NeedCtorLink)
	struct FString                                     RemovePairs;                                              // 0x0054(0x000C) (CPF_NeedCtorLink)
	int                                                Visibility;                                               // 0x0060(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0064(0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.WorkshopItemData.ItemID
	unsigned long                                      bIsUploading : 1;                                         // 0x006C(0x0004)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.WorkshopItemData.UpdateHandle
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0008
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                                    // 0x0000(0x0004)
	struct FPointer                                    Response;                                                 // 0x0004(0x0004) (CPF_Native)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0008
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                                    // 0x0000(0x0004)
	struct FPointer                                    Response;                                                 // 0x0004(0x0004) (CPF_Native)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x003C
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                                 // 0x0000(0x003C) (CPF_Native, CPF_Transient)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakingQueryState
// 0x0054
struct FMatchmakingQueryState
{
	class UOnlineGameSearch*                           GameSearch;                                               // 0x0000(0x0004) (CPF_Const)
	TArray<struct FServerQueryToRulesResponseMapping>  QueryToRulesResponseMap;                                  // 0x0004(0x000C) (CPF_NeedCtorLink)
	TArray<struct FServerQueryToPingResponseMapping>   QueryToPingResponseMap;                                   // 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FPointer                                    ServerListResponse;                                       // 0x001C(0x0004) (CPF_Native)
	TEnumAsByte<ESteamMatchmakingType>                 CurrentMatchmakingType;                                   // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FPointer                                    CurrentMatchmakingQuery;                                  // 0x0024(0x0004) (CPF_Native)
	TArray<struct FClientFilterORClause>               ActiveClientsideFilters;                                  // 0x0028(0x000C) (CPF_Native, CPF_Transient)
	TArray<class UOnlineGameSettings*>                 PendingRulesSearchSettings;                               // 0x0034(0x000C) (CPF_NeedCtorLink)
	TArray<class UOnlineGameSettings*>                 PendingPingSearchSettings;                                // 0x0040(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bIgnoreRefreshComplete : 1;                               // 0x004C(0x0004)
	float                                              LastActivityTimestamp;                                    // 0x0050(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x0030
struct FFilterKeyToSteamKeyMapping
{
	int                                                KeyId;                                                    // 0x0000(0x0004)
	TEnumAsByte<EOnlineGameSearchEntryType>            KeyType;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     RawKey;                                                   // 0x0008(0x000C) (CPF_NeedCtorLink)
	struct FString                                     SteamKey;                                                 // 0x0014(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bReverseFilter : 1;                                       // 0x0020(0x0004)
	struct FString                                     IgnoreValue;                                              // 0x0024(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0018
struct FSteamPlayerClanData
{
	struct FString                                     ClanName;                                                 // 0x0000(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     ClanTag;                                                  // 0x000C(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001 (0x004D - 0x004C)
struct FLocalTalkerSteam : public FLocalTalker
{
	TEnumAsByte<EMuteType>                             MuteType;                                                 // 0x004C(0x0001)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0014
struct FPlayerStat
{
	int                                                ViewId;                                                   // 0x0000(0x0004)
	int                                                ColumnId;                                                 // 0x0004(0x0004)
	struct FSettingsData                               Data;                                                     // 0x0008(0x000C) (CPF_Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x00C8
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                                   // 0x0000(0x0048) (CPF_Const)
	struct FString                                     PlayerName;                                               // 0x0048(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     StatGuid;                                                 // 0x0054(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FPlayerStat>                         Stats;                                                    // 0x0060(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FOnlinePlayerScore                          Score;                                                    // 0x006C(0x0050) (CPF_Const)
	struct FString                                     Place;                                                    // 0x00BC(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                                  // 0x0000(0x0004)
	TArray<struct FScriptDelegate>                     ReadDelegates;                                            // 0x0004(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteDelegates;                                           // 0x0010(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ProfileDataChangedDelegates;                              // 0x001C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x0020
struct FDeviceIdCache
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	struct FScriptDelegate                             DeviceSelectionMulticast;                                 // 0x0004(0x0010) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeviceSelectionDelegates;                                 // 0x0014(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0010
struct FOnlineStatusMapping
{
	int                                                StatusId;                                                 // 0x0000(0x0004)
	struct FString                                     StatusString;                                             // 0x0004(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int                                                bIsControllerConnected;                                   // 0x0000(0x0004) (CPF_Const)
	int                                                bLastIsControllerConnected;                               // 0x0004(0x0004) (CPF_Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloud
// 0x0018
struct FSteamUserCloud
{
	struct FString                                     UserId;                                                   // 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FTitleFile>                          UserCloudFileData;                                        // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloudMetadata
// 0x0018
struct FSteamUserCloudMetadata
{
	struct FString                                     UserId;                                                   // 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserCloudMetadata;                                        // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x0064
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                                // 0x0000(0x0004) (CPF_Const)
	int                                                NumberOfAttempts;                                         // 0x0004(0x0004) (CPF_Const)
	struct FUniqueNetId                                PlayerNetId;                                              // 0x0008(0x0048) (CPF_Const)
	int                                                Size;                                                     // 0x0050(0x0004) (CPF_Const)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                         // 0x0054(0x0010) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                            // 0x0000(0x0004)
	struct FName                                       AchievementName;                                          // 0x0004(0x0008)
	int                                                ViewId;                                                   // 0x000C(0x0004)
	int                                                ProgressCount;                                            // 0x0010(0x0004)
	int                                                MaxProgress;                                              // 0x0014(0x0004)
	unsigned long                                      bAutoUnlock : 1;                                          // 0x0018(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                            // 0x0000(0x0004)
	int                                                Progress;                                                 // 0x0004(0x0004)
	int                                                MaxProgress;                                              // 0x0008(0x0004)
	unsigned long                                      bUnlock : 1;                                              // 0x000C(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle.Dud
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0024
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<ELeaderboardUpdateType>                UpdateType;                                               // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                LeaderboardSize;                                          // 0x0010(0x0004) (CPF_Const)
	TEnumAsByte<ELeaderboardSortType>                  SortType;                                                 // 0x0014(0x0001) (CPF_Const)
	TEnumAsByte<ELeaderboardFormat>                    DisplayFormat;                                            // 0x0015(0x0001) (CPF_Const)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FLeaderboardHandle                          LeaderboardRef;                                           // 0x0018(0x0008) (CPF_Const)
	unsigned long                                      bLeaderboardInitializing : 1;                             // 0x0020(0x0004) (CPF_Const)
	unsigned long                                      bLeaderboardInitiated : 1;                                // 0x0020(0x0004) (CPF_Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x0024
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      RequestType;                                              // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                Start;                                                    // 0x0010(0x0004)
	int                                                End;                                                      // 0x0014(0x0004)
	TArray<struct FUniqueNetId>                        PlayerList;                                               // 0x0018(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x001C
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                Score;                                                    // 0x000C(0x0004)
	TArray<int>                                        LeaderboardData;                                          // 0x0010(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0010
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                                   // 0x0000(0x0004)
	struct FString                                     LeaderboardName;                                          // 0x0004(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppPriceInfoRequest
// 0x0020
struct FAppPriceInfoRequest
{
	class UHttpRequestInterface*                       HTTPRequest;                                              // 0x0000(0x0004)
	TArray<struct FName>                               AppNames;                                                 // 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // 0x0010(0x0010) (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x005C
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                                // 0x0000(0x0048)
	int                                                Rank;                                                     // 0x0048(0x0004)
	int                                                Score;                                                    // 0x004C(0x0004)
	TArray<int>                                        LeaderboardData;                                          // 0x0050(0x000C) (CPF_NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
