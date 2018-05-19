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

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket
struct UOnlineAuthInterfaceSteamworks_RequestAuthTicket_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket
struct UOnlineAuthInterfaceSteamworks_RequiresAuthTicket_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
struct UOnlineAuthInterfaceSteamworks_GetServerAddr_Params
{
	struct FIpAddr                                     OutServerIP;                                              // (CPF_Parm, CPF_OutParm)
	int                                                OutServerPort;                                            // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
struct UOnlineAuthInterfaceSteamworks_GetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
struct UOnlineAuthInterfaceSteamworks_VerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ServerIP;                                                 // (CPF_Parm)
	int                                                AuthTicketUID;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
struct UOnlineAuthInterfaceSteamworks_CreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ClientIP;                                                 // (CPF_Parm)
	int                                                ClientPort;                                               // (CPF_Parm)
	int                                                OutAuthTicketUID;                                         // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
struct UOnlineAuthInterfaceSteamworks_VerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ClientIP;                                                 // (CPF_Parm)
	int                                                ClientPort;                                               // (CPF_Parm)
	int                                                AuthTicketUID;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
struct UOnlineAuthInterfaceSteamworks_CreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ServerIP;                                                 // (CPF_Parm)
	int                                                ServerPort;                                               // (CPF_Parm)
	bool                                               bSecure;                                                  // (CPF_Parm)
	int                                                OutAuthTicketUID;                                         // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
struct UOnlineAuthInterfaceSteamworks_SendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
struct UOnlineAuthInterfaceSteamworks_SendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress
struct UOnlineCommunityContentInterfaceSteamworks_UpdateWorkshopItemUploadProgress_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData
struct UOnlineCommunityContentInterfaceSteamworks_DownloadAllWorkshopData_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem
struct UOnlineCommunityContentInterfaceSteamworks_CreateWorkshopItem_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent
struct UOnlineCommunityContentInterfaceSteamworks_RateContent_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	struct FCommunityContentFile                       FileToRate;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                NewRating;                                                // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearGetContentPayloadCompleteDelegate_Params
{
	struct FScriptDelegate                             GetContentPayloadCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddGetContentPayloadCompleteDelegate_Params
{
	struct FScriptDelegate                             GetContentPayloadCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnGetContentPayloadComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FCommunityContentFile                       FileDownloaded;                                           // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              Payload;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload
struct UOnlineCommunityContentInterfaceSteamworks_GetContentPayload_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	struct FCommunityContentFile                       FileDownloaded;                                           // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearDownloadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             DownloadContentCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddDownloadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             DownloadContentCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnDownloadContentComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FCommunityContentFile                       FileDownloaded;                                           // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              Payload;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent
struct UOnlineCommunityContentInterfaceSteamworks_DownloadContent_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	struct FCommunityContentFile                       FileToDownload;                                           // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearUploadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             UploadContentCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddUploadContentCompleteDelegate_Params
{
	struct FScriptDelegate                             UploadContentCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnUploadContentComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FCommunityContentFile                       UploadedFile;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent
struct UOnlineCommunityContentInterfaceSteamworks_UploadContent_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	TArray<unsigned char>                              Payload;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FCommunityContentMetadata                   MetaData;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList
struct UOnlineCommunityContentInterfaceSteamworks_GetFriendsContentList_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	struct FOnlineFriend                               Friend;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FCommunityContentFile>               ContentFiles;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearReadFriendsContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadFriendsContentListCompleteDelegate;                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddReadFriendsContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadFriendsContentListCompleteDelegate;                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnReadFriendsContentListComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList
struct UOnlineCommunityContentInterfaceSteamworks_ReadFriendsContentList_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                StartAt;                                                  // (CPF_OptionalParm, CPF_Parm)
	int                                                NumToRead;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList
struct UOnlineCommunityContentInterfaceSteamworks_GetContentList_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	TArray<struct FCommunityContentFile>               ContentFiles;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_ClearReadContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadContentListCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate
struct UOnlineCommunityContentInterfaceSteamworks_AddReadContentListCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadContentListCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete
struct UOnlineCommunityContentInterfaceSteamworks_OnReadContentListComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	TArray<struct FCommunityContentFile>               ContentFiles;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList
struct UOnlineCommunityContentInterfaceSteamworks_ReadContentList_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	struct FUniqueNetId                                NetId;                                                    // (CPF_Parm)
	struct FString                                     Path;                                                     // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	int                                                StartAt;                                                  // (CPF_OptionalParm, CPF_Parm)
	int                                                NumToRead;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit
struct UOnlineCommunityContentInterfaceSteamworks_Exit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init
struct UOnlineCommunityContentInterfaceSteamworks_Init_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData
struct UOnlineCommunityContentInterfaceSteamworks_OnDownloadedWorkshopData_Params
{
	TArray<struct FDownloadedWorkshopData>             Items;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               bSuccess;                                                 // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative
struct UOnlineGameInterfaceSteamworks_PrintDebugInfoNative_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo
struct UOnlineGameInterfaceSteamworks_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
struct UOnlineGameInterfaceSteamworks_QueryNonAdvertisedData_Params
{
	int                                                StartAt;                                                  // (CPF_Parm)
	int                                                NumberToQuery;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
struct UOnlineGameInterfaceSteamworks_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
struct UOnlineGameInterfaceSteamworks_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bWasInvited;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
struct UOnlineGameInterfaceSteamworks_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
struct UOnlineGameInterfaceSteamworks_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                             // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ErrorString;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
struct UOnlineGameInterfaceSteamworks_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                      // (CPF_Parm)
	bool                                               bShouldRefreshOnlineData;                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_PsyNet_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_PsyNet_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_PsyNet_OnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer
struct UOnlineGameInterfaceSteamworks_PsyNet_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_PsyNet_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_PsyNet_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_PsyNet_OnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer
struct UOnlineGameInterfaceSteamworks_PsyNet_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bWasInvited;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData
struct UOnlineGameInterfaceSteamworks_PsyNet_QueryNonAdvertisedData_Params
{
	int                                                StartAt;                                                  // (CPF_Parm)
	int                                                NumberToQuery;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite
struct UOnlineGameInterfaceSteamworks_PsyNet_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame
struct UOnlineGameInterfaceSteamworks_PsyNet_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                      // (CPF_Parm)
	bool                                               bShouldRefreshOnlineData;                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation
struct UOnlineGameInterfaceSteamworks_PsyNet_SetFriendJoinLocation_Params
{
	struct FUniqueNetId                                JoinablePlayerID;                                         // (CPF_Parm)
	struct FString                                     ServerAddress;                                            // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<ELobbyVisibility>                      Visibility;                                               // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer
struct UOnlineLobbyInterfaceSteamworks_KickPlayer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	TEnumAsByte<ELobbyKickReason>                      Reason;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
struct UOnlineLobbyInterfaceSteamworks_GetLobbyFromCommandline_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Parm, CPF_OutParm)
	bool                                               bMarkAsJoined;                                            // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI
struct UOnlineLobbyInterfaceSteamworks_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Const, CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
struct UOnlineLobbyInterfaceSteamworks_InviteToLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
struct UOnlineLobbyInterfaceSteamworks_SetLobbyOwner_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                NewOwner;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
struct UOnlineLobbyInterfaceSteamworks_SetLobbyLock_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               bLocked;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
struct UOnlineLobbyInterfaceSteamworks_SetLobbyType_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	TEnumAsByte<ELobbyVisibility>                      Type;                                                     // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
struct UOnlineLobbyInterfaceSteamworks_SetLobbyServer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ServerIP;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
struct UOnlineLobbyInterfaceSteamworks_RemoveLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
struct UOnlineLobbyInterfaceSteamworks_SetLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
struct UOnlineLobbyInterfaceSteamworks_GetLobbyAdmin_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                AdminId;                                                  // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
struct UOnlineLobbyInterfaceSteamworks_OnLobbyKicked_Params
{
	struct FActiveLobbyInfo                            Lobby;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                AdminIndex;                                               // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
struct UOnlineLobbyInterfaceSteamworks_SendLobbyBinaryData_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	TArray<unsigned char>                              Data;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
struct UOnlineLobbyInterfaceSteamworks_SetLobbyUserSetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
struct UOnlineLobbyInterfaceSteamworks_LeaveLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
struct UOnlineLobbyInterfaceSteamworks_JoinLobby_Params
{
	int                                                LocalPlayerNum;                                           // (CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
struct UOnlineLobbyInterfaceSteamworks_UpdateFoundLobbies_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
struct UOnlineLobbyInterfaceSteamworks_FindLobbies_Params
{
	int                                                MaxResults;                                               // (CPF_OptionalParm, CPF_Parm)
	TArray<struct FLobbyFilter>                        Filters;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FLobbySortFilter>                    SortFilters;                                              // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	int                                                MinSlots;                                                 // (CPF_OptionalParm, CPF_Parm)
	TEnumAsByte<ELobbyDistance>                        Distance;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
struct UOnlineLobbyInterfaceSteamworks_CreateLobby_Params
{
	int                                                LocalPlayerNum;                                           // (CPF_Parm)
	int                                                MaxPlayers;                                               // (CPF_Parm)
	TEnumAsByte<ELobbyVisibility>                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	TArray<struct FLobbyMetaData>                      InitialSettings;                                          // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite
struct UOnlineSubsystemSteamworks_CanSendOfflinePartyInvite_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AllowPsyNetParty
struct UOnlineSubsystemSteamworks_AllowPsyNetParty_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo
struct UOnlineSubsystemSteamworks_CheckParentalControlInfo_Params
{
	bool                                               bShowUi;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys
struct UOnlineSubsystemSteamworks_RecordPlayersRecentlyMetKeys_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FFriendHistoryKey>                   PlayerKeys;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey
struct UOnlineSubsystemSteamworks_GetPlayHistoryRegistrationKey_Params
{
	TArray<unsigned char>                              Key;                                                      // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner
struct UOnlineSubsystemSteamworks_IsOriginalAppOwner_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers
struct UOnlineSubsystemSteamworks_UpdateSessionStatusFromPlayers_Params
{
	int                                                CurrentPlayerCount;                                       // (CPF_Parm)
	int                                                numBotPlayers;                                            // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked
struct UOnlineSubsystemSteamworks_IsAchievementUnlocked_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                AchievementId;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRichPresenceLocalized
struct UOnlineSubsystemSteamworks_IsRichPresenceLocalized_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress
struct UOnlineSubsystemSteamworks_UpdateGameProgress_Params
{
	unsigned char                                      LocalPlayerNum;                                           // (CPF_Parm)
	float                                              Progress;                                                 // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession
struct UOnlineSubsystemSteamworks_FinishOnlineGameSession_Params
{
	struct FString                                     ServerID;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession
struct UOnlineSubsystemSteamworks_StartOnlineGameSession_Params
{
	struct FString                                     ServerID;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate
struct UOnlineSubsystemSteamworks_ClearSystemUserControllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate
struct UOnlineSubsystemSteamworks_AddSystemUserControllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
struct UOnlineSubsystemSteamworks_OnSystemUserControllerPairingChanged_Params
{
	int                                                NewLocalUserNum;                                          // (CPF_Parm)
	int                                                PreviousLocalUserNum;                                     // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput
struct UOnlineSubsystemSteamworks_ClearAccountPickerInput_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput
struct UOnlineSubsystemSteamworks_LookForAccountPickerInput_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession
struct UOnlineSubsystemSteamworks_AddPlayerToSession_Params
{
	unsigned char                                      ControllerId;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer
struct UOnlineSubsystemSteamworks_ClearPrimaryPlayer_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation
struct UOnlineSubsystemSteamworks_RemoveUserAssociation_Params
{
	unsigned char                                      ControllerId;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd
struct UOnlineSubsystemSteamworks_MapEnd_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart
struct UOnlineSubsystemSteamworks_MapStart_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd
struct UOnlineSubsystemSteamworks_OnlineMatchEnd_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart
struct UOnlineSubsystemSteamworks_OnlineMatchStart_Params
{
	struct FString                                     MapName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel
struct UOnlineSubsystemSteamworks_SetSessionDifficultyLevel_Params
{
	int                                                DifficultyLevel;                                          // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName
struct UOnlineSubsystemSteamworks_SetSessionGameplayModeName_Params
{
	struct FName                                       GameplayModeName;                                         // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode
struct UOnlineSubsystemSteamworks_SetSessionGameplayMode_Params
{
	int                                                GameplayMode;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements
struct UOnlineSubsystemSteamworks_GetSyncedAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<unsigned long>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith
struct UOnlineSubsystemSteamworks_SetPlayedWith_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (CPF_Const, CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage
struct UOnlineSubsystemSteamworks_HandleBootMessage_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate
struct UOnlineSubsystemSteamworks_ClearErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate
struct UOnlineSubsystemSteamworks_AddErrorDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed
struct UOnlineSubsystemSteamworks_OnErrorDialogClosed_Params
{
	int                                                LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate
struct UOnlineSubsystemSteamworks_ClearCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate
struct UOnlineSubsystemSteamworks_AddCloseKickPlayerDialogDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog
struct UOnlineSubsystemSteamworks_OnCloseKickPlayerDialog_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate
struct UOnlineSubsystemSteamworks_ClearCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate
struct UOnlineSubsystemSteamworks_AddCommerceDialogClosedDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed
struct UOnlineSubsystemSteamworks_OnCommerceDialogClosed_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerAccountID
struct UOnlineSubsystemSteamworks_GetPlayerAccountID_Params
{
	struct FUniqueNetId                                NetId;                                                    // (CPF_Const, CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString
struct UOnlineSubsystemSteamworks_WordFilterSanitizeString_Params
{
	struct FString                                     Comment;                                                  // (CPF_Const, CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             SanitizeDelegate;                                         // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate
struct UOnlineSubsystemSteamworks_RemoveCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate
struct UOnlineSubsystemSteamworks_AddCanPlayOnlineChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
struct UOnlineSubsystemSteamworks_RecordPlayersRecentlyMet_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     GameDescription;                                          // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate
struct UOnlineSubsystemSteamworks_AddSaveDataNoSpaceDialogCompleteDelegate_Params
{
	struct FScriptDelegate                             DeviceDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete
struct UOnlineSubsystemSteamworks_OnSaveDataNoSpaceDialogComplete_Params
{
	bool                                               bContinueWithoutSave;                                     // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearTrialStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearTrialStatusChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddTrialStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddTrialStatusChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTrialStatusChange
struct UOnlineSubsystemSteamworks_OnTrialStatusChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTrialVersion
struct UOnlineSubsystemSteamworks_IsTrialVersion_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate
struct UOnlineSubsystemSteamworks_ClearUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate
struct UOnlineSubsystemSteamworks_AddUnlockedDLCChangeDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC
struct UOnlineSubsystemSteamworks_GetUnlockedDLC_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange
struct UOnlineSubsystemSteamworks_OnUnlockedDLCChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled
struct UOnlineSubsystemSteamworks_GetOverlayEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime
struct UOnlineSubsystemSteamworks_GetDLCPurchaseTime_Params
{
	struct FName                                       AppName;                                                  // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete
struct UOnlineSubsystemSteamworks_HandleGetUserInfoComplete_Params
{
	struct FName                                       NewCurrency;                                              // (CPF_Parm)
	struct FString                                     NewCountry;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry
struct UOnlineSubsystemSteamworks_GetPlayerCountry_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage
struct UOnlineSubsystemSteamworks_GetPlayerLanguage_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerCountryDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerCountryDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadPlayerCountryDelegate;                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted
struct UOnlineSubsystemSteamworks_AnyPlayerChatRestricted_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI
struct UOnlineSubsystemSteamworks_InitializeTrophyAPI_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems
struct UOnlineSubsystemSteamworks_OpenStoreForItems_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FString>                             Targets;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC
struct UOnlineSubsystemSteamworks_OpenStoreForDLC_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FName                                       DLC;                                                      // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync
struct UOnlineSubsystemSteamworks_OpenStoreForItemsAsync_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FString>                             Targets;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             OnStorePurchaseCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate
struct UOnlineSubsystemSteamworks_OnStorePurchaseCompleteDelegate_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog
struct UOnlineSubsystemSteamworks_OpenErrorDialog_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EPS4ErrorDialog>                       ErrorCode;                                                // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode
struct UOnlineSubsystemSteamworks_OpenPS4DisplayMode_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EPS4DisplayMode>                       DisplayMode;                                              // (CPF_Parm)
	TArray<struct FString>                             Targets;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	int                                                ServiceLabel;                                             // (CPF_OptionalParm, CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor
struct UOnlineSubsystemSteamworks_ResetControllerColor_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor
struct UOnlineSubsystemSteamworks_SetControllerColor_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FColor                                      NewColor;                                                 // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
struct UOnlineSubsystemSteamworks_AddInGamePost_Params
{
	struct FString                                     InPostID;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FString>                             StringReplaceList;                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled
struct UOnlineSubsystemSteamworks_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence
struct UOnlineSubsystemSteamworks_SetRichPresence_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     PresenceString;                                           // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GameDataString;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
struct UOnlineSubsystemSteamworks_ClearAllDelegates_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
struct UOnlineSubsystemSteamworks_WriteSharedFile_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              Contents;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
struct UOnlineSubsystemSteamworks_OnWriteSharedFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SharedHandle;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
struct UOnlineSubsystemSteamworks_ReadSharedFile_Params
{
	struct FString                                     SharedHandle;                                             // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
struct UOnlineSubsystemSteamworks_OnReadSharedFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     SharedHandle;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
struct UOnlineSubsystemSteamworks_ClearSharedFile_Params
{
	struct FString                                     SharedHandle;                                             // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
struct UOnlineSubsystemSteamworks_ClearSharedFiles_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
struct UOnlineSubsystemSteamworks_GetSharedFileContents_Params
{
	struct FString                                     SharedHandle;                                             // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
struct UOnlineSubsystemSteamworks_DeleteUserFile_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bShouldCloudDelete;                                       // (CPF_Parm)
	bool                                               bShouldLocallyDelete;                                     // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
struct UOnlineSubsystemSteamworks_OnDeleteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
struct UOnlineSubsystemSteamworks_WriteUserFile_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
struct UOnlineSubsystemSteamworks_OnWriteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
struct UOnlineSubsystemSteamworks_ReadUserFile_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
struct UOnlineSubsystemSteamworks_OnReadUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
struct UOnlineSubsystemSteamworks_GetUserFileList_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
struct UOnlineSubsystemSteamworks_EnumerateUserFiles_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
struct UOnlineSubsystemSteamworks_OnEnumerateUserFilesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
struct UOnlineSubsystemSteamworks_ClearFile_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
struct UOnlineSubsystemSteamworks_ClearFiles_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
struct UOnlineSubsystemSteamworks_GetFileContents_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
struct UOnlineSubsystemSteamworks_WriteUserFileInternal_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume
struct UOnlineSubsystemSteamworks_SetVoiceReceiveVolume_Params
{
	float                                              VoiceVolume;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
struct UOnlineSubsystemSteamworks_GetFriendJoinURL_Params
{
	struct FUniqueNetId                                FriendUID;                                                // (CPF_Parm)
	struct FString                                     ServerURL;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     ServerUID;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
struct UOnlineSubsystemSteamworks_GetCommandlineJoinURL_Params
{
	bool                                               bMarkAsJoined;                                            // (CPF_Parm)
	struct FString                                     ServerURL;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     ServerUID;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
struct UOnlineSubsystemSteamworks_Int64ToUniqueNetId_Params
{
	struct FString                                     UIDString;                                                // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                OutUID;                                                   // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
struct UOnlineSubsystemSteamworks_UniqueNetIdToInt64_Params
{
	struct FUniqueNetId                                Uid;                                                      // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
struct UOnlineSubsystemSteamworks_NotifyVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             VOIPAudioComponent;                                       // (CPF_Parm, CPF_EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
struct UOnlineSubsystemSteamworks_OnVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             AC;                                                       // (CPF_Parm, CPF_EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
struct UOnlineSubsystemSteamworks_ShowProfileUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     SubURL;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerUID;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
struct UOnlineSubsystemSteamworks_UniqueNetIdToPlayerName_Params
{
	struct FUniqueNetId                                Uid;                                                      // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
struct UOnlineSubsystemSteamworks_DisplayAchievementProgress_Params
{
	int                                                AchievementId;                                            // (CPF_Parm)
	int                                                ProgressCount;                                            // (CPF_Parm)
	int                                                MaxProgress;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
struct UOnlineSubsystemSteamworks_CreateLeaderboard_Params
{
	struct FString                                     LeaderboardName;                                          // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<ELeaderboardSortType>                  SortType;                                                 // (CPF_Parm)
	TEnumAsByte<ELeaderboardFormat>                    DisplayFormat;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
struct UOnlineSubsystemSteamworks_ResetStats_Params
{
	bool                                               bResetAchievements;                                       // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
struct UOnlineSubsystemSteamworks_ShowCustomMessageUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FUniqueNetId>                        Recipients;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     MessageTitle;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     NonEditableMessage;                                       // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     EditableMessage;                                          // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_ClearCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                TitleId;                                                  // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_GetCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                TitleId;                                                  // (CPF_Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnReadCrossTitleProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                TitleId;                                                  // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_ReadCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                TitleId;                                                  // (CPF_Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
struct UOnlineSubsystemSteamworks_UnlockAvatarAward_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                AvatarItemId;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
struct UOnlineSubsystemSteamworks_GetSteamClanData_Params
{
	TArray<struct FSteamPlayerClanData>                Results;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_AddGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
struct UOnlineSubsystemSteamworks_OnGetNumberOfCurrentPlayersComplete_Params
{
	int                                                TotalPlayers;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
struct UOnlineSubsystemSteamworks_GetNumberOfCurrentPlayers_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
struct UOnlineSubsystemSteamworks_ReadOnlineAvatar_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (CPF_Const, CPF_Parm)
	TEnumAsByte<EAvatarSize>                           Size;                                                     // (CPF_Parm)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
struct UOnlineSubsystemSteamworks_ShowCustomPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     Title;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Description;                                              // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
struct UOnlineSubsystemSteamworks_GetAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FAchievementDetails>                 Achievements;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                TitleId;                                                  // (CPF_OptionalParm, CPF_Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
struct UOnlineSubsystemSteamworks_OnReadAchievementsComplete_Params
{
	int                                                TitleId;                                                  // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
struct UOnlineSubsystemSteamworks_ReadAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                TitleId;                                                  // (CPF_OptionalParm, CPF_Parm)
	bool                                               bShouldReadText;                                          // (CPF_OptionalParm, CPF_Parm)
	bool                                               bShouldReadImages;                                        // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
struct UOnlineSubsystemSteamworks_ShowPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
struct UOnlineSubsystemSteamworks_ShowFriendsInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
struct UOnlineSubsystemSteamworks_ShowFriendsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_ClearProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_AddProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
struct UOnlineSubsystemSteamworks_OnProfileDataChanged_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
struct UOnlineSubsystemSteamworks_UnlockGamerPicture_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                PictureId;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
struct UOnlineSubsystemSteamworks_OnUnlockAchievementComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
struct UOnlineSubsystemSteamworks_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                AchievementId;                                            // (CPF_Parm)
	float                                              PercentComplete;                                          // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat
struct UOnlineSubsystemSteamworks_UpdateStat_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FName                                       StatName;                                                 // (CPF_Parm)
	int                                                Points;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
struct UOnlineSubsystemSteamworks_IsDeviceValid_Params
{
	int                                                DeviceID;                                                 // (CPF_Parm)
	int                                                SizeNeeded;                                               // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
struct UOnlineSubsystemSteamworks_GetDeviceSelectionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     DeviceName;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_ClearDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_AddDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
struct UOnlineSubsystemSteamworks_OnDeviceSelectionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
struct UOnlineSubsystemSteamworks_ShowDeviceSelectionUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                SizeNeeded;                                               // (CPF_Parm)
	bool                                               bManageStorage;                                           // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowMembershipMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowContentMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                CategoryMask;                                             // (CPF_OptionalParm, CPF_Parm)
	int                                                OfferId;                                                  // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
struct UOnlineSubsystemSteamworks_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     InviteText;                                               // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
struct UOnlineSubsystemSteamworks_ShowAchievementsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
struct UOnlineSubsystemSteamworks_ShowMessagesUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
struct UOnlineSubsystemSteamworks_ShowGamerCardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                UniqueId;                                                 // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
struct UOnlineSubsystemSteamworks_ShowFeedbackUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
struct UOnlineSubsystemSteamworks_DeleteMessage_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                MessageIndex;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
struct UOnlineSubsystemSteamworks_UnmuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
struct UOnlineSubsystemSteamworks_MuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               bAllowFriends;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
struct UOnlineSubsystemSteamworks_CalcAggregateSkill_Params
{
	TArray<struct FDouble>                             Mus;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FDouble                                     OutAggregateMu;                                           // (CPF_Parm, CPF_OutParm)
	struct FDouble                                     OutAggregateSigma;                                        // (CPF_Parm, CPF_OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
struct UOnlineSubsystemSteamworks_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     ClientStatGuid;                                           // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
struct UOnlineSubsystemSteamworks_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UOnlineSubsystemSteamworks_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
struct UOnlineSubsystemSteamworks_OnRegisterHostStatGuidComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
struct UOnlineSubsystemSteamworks_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                             // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
struct UOnlineSubsystemSteamworks_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
struct UOnlineSubsystemSteamworks_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (CPF_Parm)
	struct FString                                     SendingNick;                                              // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
struct UOnlineSubsystemSteamworks_GetFriendMessages_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                           // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
struct UOnlineSubsystemSteamworks_OnJoinFriendGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
struct UOnlineSubsystemSteamworks_JoinFriendGame_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                Friend;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_ClearReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_AddReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
struct UOnlineSubsystemSteamworks_OnReceivedGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     InviterName;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
struct UOnlineSubsystemSteamworks_SendGameInviteToFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FUniqueNetId>                        Friends;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Text;                                                     // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
struct UOnlineSubsystemSteamworks_SendGameInviteToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                Friend;                                                   // (CPF_Parm)
	struct FString                                     Text;                                                     // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
struct UOnlineSubsystemSteamworks_SendMessageToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                Friend;                                                   // (CPF_Parm)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
struct UOnlineSubsystemSteamworks_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (CPF_Parm)
	struct FString                                     RequestingNick;                                           // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
struct UOnlineSubsystemSteamworks_DenyFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
struct UOnlineSubsystemSteamworks_AcceptFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
struct UOnlineSubsystemSteamworks_RemoveFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                FormerFriend;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
struct UOnlineSubsystemSteamworks_OnAddFriendByNameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
struct UOnlineSubsystemSteamworks_AddFriendByName_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     FriendName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
struct UOnlineSubsystemSteamworks_AddFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                NewFriend;                                                // (CPF_Parm)
	struct FString                                     Message;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
struct UOnlineSubsystemSteamworks_GetKeyboardInputResults_Params
{
	unsigned char                                      bWasCanceled;                                             // (CPF_Parm, CPF_OutParm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_ClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_AddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
struct UOnlineSubsystemSteamworks_OnKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
struct UOnlineSubsystemSteamworks_HideKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
struct UOnlineSubsystemSteamworks_ShowKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     TitleText;                                                // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bIsPassword;                                              // (CPF_OptionalParm, CPF_Parm)
	bool                                               bShouldValidate;                                          // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     DefaultText;                                              // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	int                                                MaxResultLength;                                          // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
struct UOnlineSubsystemSteamworks_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                StatusId;                                                 // (CPF_Parm)
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
struct UOnlineSubsystemSteamworks_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
struct UOnlineSubsystemSteamworks_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
struct UOnlineSubsystemSteamworks_ReadTitleFile_Params
{
	struct FString                                     FileToRead;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
struct UOnlineSubsystemSteamworks_OnReadTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_ClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_AddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
struct UOnlineSubsystemSteamworks_OnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
struct UOnlineSubsystemSteamworks_GetLocale_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
struct UOnlineSubsystemSteamworks_GetNATType_Params
{
	TEnumAsByte<ENATType>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
struct UOnlineSubsystemSteamworks_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
struct UOnlineSubsystemSteamworks_GetCurrentConnectionStatus_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
struct UOnlineSubsystemSteamworks_IsControllerConnected_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate
struct UOnlineSubsystemSteamworks_ClearUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate
struct UOnlineSubsystemSteamworks_AddUserRestoredDelegate_Params
{
	struct FScriptDelegate                             UserRestoredDelegate;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored
struct UOnlineSubsystemSteamworks_OnUserRestored_Params
{
	unsigned char                                      ControllerId;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate
struct UOnlineSubsystemSteamworks_ClearUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate
struct UOnlineSubsystemSteamworks_AddUserOrphanedDelegate_Params
{
	struct FScriptDelegate                             UserOrphanedDelegate;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned
struct UOnlineSubsystemSteamworks_OnUserOrphaned_Params
{
	unsigned char                                      ControllerId;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
struct UOnlineSubsystemSteamworks_ClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
struct UOnlineSubsystemSteamworks_AddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
struct UOnlineSubsystemSteamworks_OnControllerChange_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	bool                                               bIsConnected;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_SetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          NewPos;                                                   // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_GetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_ClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_AddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
struct UOnlineSubsystemSteamworks_OnExternalUIChange_Params
{
	bool                                               bIsOpening;                                               // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
struct UOnlineSubsystemSteamworks_OnLinkStatusChange_Params
{
	bool                                               bIsConnected;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
struct UOnlineSubsystemSteamworks_HasLinkConnection_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
struct UOnlineSubsystemSteamworks_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
struct UOnlineSubsystemSteamworks_WriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	int                                                LeaderboardId;                                            // (CPF_Parm)
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                             // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
struct UOnlineSubsystemSteamworks_FlushOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
struct UOnlineSubsystemSteamworks_WriteOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                Player;                                                   // (CPF_Parm)
	class UOnlineStatsWrite*                           StatsWrite;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
struct UOnlineSubsystemSteamworks_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (CPF_Parm)
	int                                                NumRows;                                                  // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRank_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (CPF_Parm)
	int                                                StartIndex;                                               // (CPF_OptionalParm, CPF_Parm)
	int                                                NumToRead;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
struct UOnlineSubsystemSteamworks_ReadOnlineStatsForFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
struct UOnlineSubsystemSteamworks_ReadOnlineStats_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
struct UOnlineSubsystemSteamworks_SetSpeechRecognitionObject_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class USpeechRecognition*                          SpeechRecogObj;                                           // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
struct UOnlineSubsystemSteamworks_SelectVocabulary_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                VocabularyId;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
struct UOnlineSubsystemSteamworks_OnRecognitionComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
struct UOnlineSubsystemSteamworks_GetRecognitionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
struct UOnlineSubsystemSteamworks_StopSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
struct UOnlineSubsystemSteamworks_StartSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
struct UOnlineSubsystemSteamworks_StopNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
struct UOnlineSubsystemSteamworks_StartNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
struct UOnlineSubsystemSteamworks_ClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
struct UOnlineSubsystemSteamworks_AddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
struct UOnlineSubsystemSteamworks_OnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                                   // (CPF_Parm)
	bool                                               bIsTalking;                                               // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
struct UOnlineSubsystemSteamworks_UnmuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bIsSystemWide;                                            // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
struct UOnlineSubsystemSteamworks_MuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bIsSystemWide;                                            // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
struct UOnlineSubsystemSteamworks_SetRemoteTalkerPriority_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                Priority;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
struct UOnlineSubsystemSteamworks_IsHeadsetPresent_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
struct UOnlineSubsystemSteamworks_IsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
struct UOnlineSubsystemSteamworks_IsLocalPlayerTalking_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
struct UOnlineSubsystemSteamworks_UnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
struct UOnlineSubsystemSteamworks_RegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
struct UOnlineSubsystemSteamworks_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
struct UOnlineSubsystemSteamworks_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
struct UOnlineSubsystemSteamworks_GetFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                Count;                                                    // (CPF_OptionalParm, CPF_Parm)
	int                                                StartingAt;                                               // (CPF_OptionalParm, CPF_Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
struct UOnlineSubsystemSteamworks_OnReadFriendsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
struct UOnlineSubsystemSteamworks_ReadFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                Count;                                                    // (CPF_OptionalParm, CPF_Parm)
	int                                                StartingAt;                                               // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnWritePlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
struct UOnlineSubsystemSteamworks_WritePlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (CPF_Parm)
	int                                                DeviceID;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
struct UOnlineSubsystemSteamworks_GetPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class UOnlinePlayerStorage*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (CPF_Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (CPF_Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                                    // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
struct UOnlineSubsystemSteamworks_ReadPlayerStorageForNetId_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                NetId;                                                    // (CPF_Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
struct UOnlineSubsystemSteamworks_ReadPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (CPF_Parm)
	int                                                DeviceID;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnWriteProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
struct UOnlineSubsystemSteamworks_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
struct UOnlineSubsystemSteamworks_GetProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
struct UOnlineSubsystemSteamworks_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_ClearFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence
struct UOnlineSubsystemSteamworks_GetFriendPresence_Params
{
	struct FOnlineFriend                               FriendData;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate
struct UOnlineSubsystemSteamworks_ClearFriendPresenceChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             PresenceDelegate;                                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate
struct UOnlineSubsystemSteamworks_AddFriendPresenceChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             PresenceDelegate;                                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_AddFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
struct UOnlineSubsystemSteamworks_ClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
struct UOnlineSubsystemSteamworks_AddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_ClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_AddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (CPF_Parm, CPF_NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (CPF_Parm, CPF_NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
struct UOnlineSubsystemSteamworks_OnLoginStatusChange_Params
{
	TEnumAsByte<ELoginStatus>                          NewStatus;                                                // (CPF_Parm)
	struct FUniqueNetId                                NewId;                                                    // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSignInCompleteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUserSignInCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSignInCompleteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUserSwitchCompleteDelegate_Params
{
	struct FScriptDelegate                             UserSwitchCompleteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput
struct UOnlineSubsystemSteamworks_SetPrimaryPlayerGamepadToLastInput_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
struct UOnlineSubsystemSteamworks_IsMuted_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
struct UOnlineSubsystemSteamworks_AreAnyFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<struct FFriendsQuery>                       Query;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
struct UOnlineSubsystemSteamworks_IsFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
struct UOnlineSubsystemSteamworks_CanUploadFitnessData_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
struct UOnlineSubsystemSteamworks_CanShareKinectContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
struct UOnlineSubsystemSteamworks_CanShareWithSocialNetwork_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
struct UOnlineSubsystemSteamworks_CanBrowseInternet_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
struct UOnlineSubsystemSteamworks_CanAccessPremiumVideoContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
struct UOnlineSubsystemSteamworks_CanAccessPremiumContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
struct UOnlineSubsystemSteamworks_CanUseCloudStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
struct UOnlineSubsystemSteamworks_CanRecordDVRClips_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
struct UOnlineSubsystemSteamworks_CanShowPresenceInformation_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
struct UOnlineSubsystemSteamworks_CanViewPlayerProfiles_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
struct UOnlineSubsystemSteamworks_CanPurchaseContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
struct UOnlineSubsystemSteamworks_CanDownloadUserContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
struct UOnlineSubsystemSteamworks_CanShareUserCreatedContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
struct UOnlineSubsystemSteamworks_CanCommunicateVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
struct UOnlineSubsystemSteamworks_CanCommunicateVideo_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
struct UOnlineSubsystemSteamworks_CanCommunicateText_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
struct UOnlineSubsystemSteamworks_CanCommunicate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<ECommunicationMethod>                  CommMethod;                                               // (CPF_Parm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
struct UOnlineSubsystemSteamworks_CanPlayOnline_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               bAttemptToResolve;                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
struct UOnlineSubsystemSteamworks_GetPlayerNickname_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
struct UOnlineSubsystemSteamworks_GetUniquePlayerId_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
struct UOnlineSubsystemSteamworks_IsLocalLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
struct UOnlineSubsystemSteamworks_IsGuestLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
struct UOnlineSubsystemSteamworks_GetLoginStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<ELoginStatus>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_ClearLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_AddLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
struct UOnlineSubsystemSteamworks_OnLogoutCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
struct UOnlineSubsystemSteamworks_Logout_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
struct UOnlineSubsystemSteamworks_ClearLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
struct UOnlineSubsystemSteamworks_AddLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
struct UOnlineSubsystemSteamworks_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
struct UOnlineSubsystemSteamworks_AutoLogin_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
struct UOnlineSubsystemSteamworks_Login_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     LoginName;                                                // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Password;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWantsLocalOnly;                                          // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive
struct UOnlineSubsystemSteamworks_SetKickPlayerDialogActive_Params
{
	bool                                               Active;                                                   // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive
struct UOnlineSubsystemSteamworks_IsUserSwitchActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser
struct UOnlineSubsystemSteamworks_SetKickPreviousUser_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin
struct UOnlineSubsystemSteamworks_SupportInGameLogin_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI
struct UOnlineSubsystemSteamworks_ShowControllerUI_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser
struct UOnlineSubsystemSteamworks_ShowLoginUIForOrphanedUser_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
struct UOnlineSubsystemSteamworks_ShowLoginUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               bShowOnlineOnly;                                          // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange
struct UOnlineSubsystemSteamworks_FriendPresenceChange_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
struct UOnlineSubsystemSteamworks_OnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
struct UOnlineSubsystemSteamworks_OnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
struct UOnlineSubsystemSteamworks_OnLoginCancelled_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
struct UOnlineSubsystemSteamworks_OnLoginChange_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete
struct UOnlineSubsystemSteamworks_OnUserSignInComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete
struct UOnlineSubsystemSteamworks_OnUserSwitchComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
struct UOnlineSubsystemSteamworks_Exit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
struct UOnlineSubsystemSteamworks_Init_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged
struct UOnlineSubsystemSteamworks_CanPlayOnlineChanged_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate
struct UOnlinePurchaseInterfaceSteamworks_ClearMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate
struct UOnlinePurchaseInterfaceSteamworks_AddMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency
struct UOnlinePurchaseInterfaceSteamworks_FormatCurrency_Params
{
	struct FString                                     Currency;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Price;                                                    // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete
struct UOnlinePurchaseInterfaceSteamworks_HandleGetAppPriceInfoComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bDidSucceed;                                              // (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo
struct UOnlinePurchaseInterfaceSteamworks_GetAppPriceInfo_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	TArray<struct FName>                               AppNames;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName
struct UOnlinePurchaseInterfaceSteamworks_AppIdToName_Params
{
	struct FString                                     AppID;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       AppName;                                                  // (CPF_Parm, CPF_OutParm)
	bool                                               bOptional;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId
struct UOnlinePurchaseInterfaceSteamworks_AppNameToId_Params
{
	struct FName                                       AppName;                                                  // (CPF_Parm)
	struct FString                                     AppID;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               bOptional;                                                // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init
struct USteamWorkshopCommandlet_Init_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
