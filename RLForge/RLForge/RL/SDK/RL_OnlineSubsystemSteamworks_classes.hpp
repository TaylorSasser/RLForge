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

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0014 (0x02E0 - 0x02CC)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:
	TArray<unsigned char>                              EncryptedTicket;                                          // 0x02CC(0x000C) (CPF_Const, CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D8(0x0008) UNKNOWN PROPERTY: QWordProperty OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EncryptedTicketHandle

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks");
		return ptr;
	}


	bool RequestAuthTicket(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback);
	bool RequiresAuthTicket();
	bool GetServerAddr(struct FIpAddr* OutServerIP, int* OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId* OutServerUID);
	bool VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID);
	bool CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int* OutAuthTicketUID);
	bool VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int AuthTicketUID);
	bool CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID);
	bool SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
};


// Class OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks
// 0x00DC (0x0118 - 0x003C)
class UOnlineCommunityContentInterfaceSteamworks : public UObject
{
public:
	class UOnlineSubsystemSteamworks*                  OwningSubsystem;                                          // 0x003C(0x0004)
	struct FWorkshopItemData                           WorkshopItem;                                             // 0x0040(0x0078) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadedWorkshopData__Delegate;                     // 0x00B8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadContentListComplete__Delegate;                    // 0x00C8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsContentListComplete__Delegate;             // 0x00D8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUploadContentComplete__Delegate;                      // 0x00E8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadContentComplete__Delegate;                    // 0x00F8(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetContentPayloadComplete__Delegate;                  // 0x0108(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks");
		return ptr;
	}


	void UpdateWorkshopItemUploadProgress();
	void DownloadAllWorkshopData(const struct FScriptDelegate& Callback);
	void CreateWorkshopItem();
	void RateContent(unsigned char PlayerNum, int NewRating, struct FCommunityContentFile* FileToRate);
	void ClearGetContentPayloadCompleteDelegate(const struct FScriptDelegate& GetContentPayloadCompleteDelegate);
	void AddGetContentPayloadCompleteDelegate(const struct FScriptDelegate& GetContentPayloadCompleteDelegate);
	void OnGetContentPayloadComplete(bool bWasSuccessful, const struct FCommunityContentFile& FileDownloaded, TArray<unsigned char>* Payload);
	bool GetContentPayload(unsigned char PlayerNum, struct FCommunityContentFile* FileDownloaded);
	void ClearDownloadContentCompleteDelegate(const struct FScriptDelegate& DownloadContentCompleteDelegate);
	void AddDownloadContentCompleteDelegate(const struct FScriptDelegate& DownloadContentCompleteDelegate);
	void OnDownloadContentComplete(bool bWasSuccessful, const struct FCommunityContentFile& FileDownloaded, TArray<unsigned char> Payload);
	bool DownloadContent(unsigned char PlayerNum, struct FCommunityContentFile* FileToDownload);
	void ClearUploadContentCompleteDelegate(const struct FScriptDelegate& UploadContentCompleteDelegate);
	void AddUploadContentCompleteDelegate(const struct FScriptDelegate& UploadContentCompleteDelegate);
	void OnUploadContentComplete(bool bWasSuccessful, const struct FCommunityContentFile& UploadedFile);
	bool UploadContent(unsigned char PlayerNum, TArray<unsigned char>* Payload, struct FCommunityContentMetadata* MetaData);
	bool GetFriendsContentList(unsigned char PlayerNum, struct FOnlineFriend* Friend, TArray<struct FCommunityContentFile>* ContentFiles);
	void ClearReadFriendsContentListCompleteDelegate(const struct FScriptDelegate& ReadFriendsContentListCompleteDelegate);
	void AddReadFriendsContentListCompleteDelegate(const struct FScriptDelegate& ReadFriendsContentListCompleteDelegate);
	void OnReadFriendsContentListComplete(bool bWasSuccessful);
	bool ReadFriendsContentList(unsigned char PlayerNum, int StartAt, int NumToRead, TArray<struct FOnlineFriend>* Friends);
	bool GetContentList(unsigned char PlayerNum, TArray<struct FCommunityContentFile>* ContentFiles);
	void ClearReadContentListCompleteDelegate(const struct FScriptDelegate& ReadContentListCompleteDelegate);
	void AddReadContentListCompleteDelegate(const struct FScriptDelegate& ReadContentListCompleteDelegate);
	void OnReadContentListComplete(bool bWasSuccessful, TArray<struct FCommunityContentFile> ContentFiles);
	bool ReadContentList(unsigned char PlayerNum, const struct FUniqueNetId& NetId, const struct FString& Path, int StartAt, int NumToRead);
	void Exit();
	bool Init();
	void OnDownloadedWorkshopData(bool bSuccess, TArray<struct FDownloadedWorkshopData>* Items);
};


// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0160 (0x0380 - 0x0220)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	struct FMatchmakingQueryState                      ServerBrowserSearchQuery;                                 // 0x0220(0x0054) (CPF_Const, CPF_NeedCtorLink)
	struct FMatchmakingQueryState                      InviteSearchQuery;                                        // 0x0274(0x0054) (CPF_Const, CPF_NeedCtorLink)
	float                                              ServerBrowserTimeout;                                     // 0x02C8(0x0004)
	float                                              InviteTimeout;                                            // 0x02CC(0x0004)
	struct FUniqueNetId                                InviteServerUID;                                          // 0x02D0(0x0048) (CPF_Const)
	class UOnlineGameSearch*                           InviteGameSearch;                                         // 0x0318(0x0004) (CPF_Const)
	struct FString                                     InviteLocationUrl;                                        // 0x031C(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                          // 0x0328(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                        // 0x0334(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bFilterEngineBuild : 1;                                   // 0x0340(0x0004)
	TArray<struct FFilterKeyToSteamKeyMapping>         FilterKeyToSteamKeyMap;                                   // 0x0344(0x000C) (CPF_Config, CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x0350(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x0360(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x0370(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		return ptr;
	}


	void PrintDebugInfoNative(class UDebugDrawer* Drawer);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	void OnGameInviteAccepted(const struct FString& ErrorString, struct FOnlineGameSearchResult* InviteResult);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
};


// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet
// 0x0038 (0x0258 - 0x0220)
class UOnlineGameInterfaceSteamworks_PsyNet : public UOnlineGameInterfaceImpl
{
public:
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                          // 0x0220(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                        // 0x022C(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x0238(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x0248(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet");
		return ptr;
	}


	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
	void SetFriendJoinLocation(const struct FUniqueNetId& JoinablePlayerID, const struct FString& ServerAddress, TEnumAsByte<ELobbyVisibility> Visibility);
};


// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x0038 (0x0220 - 0x01E8)
class UOnlineLobbyInterfaceSteamworks : public UOnlineLobbyInterfaceImpl
{
public:
	TArray<struct FLobbyMetaData>                      CreateLobbySettings;                                      // 0x01E8(0x000C) (CPF_NeedCtorLink)
	struct FUniqueLobbyId                              PendingCreateLobbyResult;                                 // 0x01F4(0x000C) (CPF_Const)
	unsigned long                                      bLobbySearchInProgress : 1;                               // 0x0200(0x0004) (CPF_Const)
	TArray<struct FString>                             LobbyMemberKeys;                                          // 0x0204(0x000C) (CPF_Config, CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyKicked__Delegate;                                // 0x0210(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks");
		return ptr;
	}


	bool KickPlayer(TEnumAsByte<ELobbyKickReason> Reason, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool GetLobbyFromCommandline(bool bMarkAsJoined, struct FUniqueLobbyId* LobbyId);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId);
	bool InviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwner);
	bool SetLobbyLock(bool bLocked, struct FUniqueLobbyId* LobbyId);
	bool SetLobbyType(TEnumAsByte<ELobbyVisibility> Type, struct FUniqueLobbyId* LobbyId);
	bool SetLobbyServer(const struct FString& ServerIP, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID);
	bool RemoveLobbySetting(const struct FString& Key, struct FUniqueLobbyId* LobbyId);
	bool SetLobbySetting(const struct FString& Key, const struct FString& Value, struct FUniqueLobbyId* LobbyId);
	bool GetLobbyAdmin(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId);
	void OnLobbyKicked(int AdminIndex, struct FActiveLobbyInfo* Lobby);
	bool SendLobbyBinaryData(struct FUniqueLobbyId* LobbyId, TArray<unsigned char>* Data);
	bool SetLobbyUserSetting(const struct FString& Key, const struct FString& Value, struct FUniqueLobbyId* LobbyId);
	bool LeaveLobby(struct FUniqueLobbyId* LobbyId);
	bool JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId* LobbyId);
	bool UpdateFoundLobbies(const struct FUniqueLobbyId& LobbyId);
	bool FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, TEnumAsByte<ELobbyDistance> Distance);
	bool CreateLobby(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings);
};


// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x07E8 (0x09C4 - 0x01DC)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	TArray<struct FName>                               UnlockedDLC;                                              // 0x01DC(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnlockedDLCDelegates;                                     // 0x01E8(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bStoringAchievement : 1;                                  // 0x01F4(0x0004)
	unsigned long                                      bClientStatsStorePending : 1;                             // 0x01F4(0x0004)
	unsigned long                                      bGSStatsStoresSuccess : 1;                                // 0x01F4(0x0004)
	unsigned long                                      bOriginalAppOwner : 1;                                    // 0x01F4(0x0004) (CPF_Const)
	unsigned long                                      bNeedsKeyboardTicking : 1;                                // 0x01F4(0x0004) (CPF_Const)
	unsigned long                                      bLastHasConnection : 1;                                   // 0x01F4(0x0004) (CPF_Const)
	unsigned long                                      bIsStatsSessionOk : 1;                                    // 0x01F4(0x0004)
	unsigned long                                      bHasSteamworksAccount : 1;                                // 0x01F4(0x0004) (CPF_Const, CPF_Config)
	unsigned long                                      bShouldUseMcp : 1;                                        // 0x01F4(0x0004) (CPF_Const, CPF_Config)
	unsigned long                                      bShowIPCCount : 1;                                        // 0x01F4(0x0004) (CPF_Const, CPF_Config)
	unsigned long                                      bInterceptFriendMessages : 1;                             // 0x01F4(0x0004) (CPF_Config)
	int                                                TotalGSStatsStoresPending;                                // 0x01F8(0x0004)
	TEnumAsByte<EOnlineEnumerationReadState>           UserStatsReceivedState;                                   // 0x01FC(0x0001)
	TEnumAsByte<ELoginStatus>                          LoggedInStatus;                                           // 0x01FD(0x0001) (CPF_Const)
	unsigned char                                      KeyboardInputWasCanceled;                                 // 0x01FE(0x0001)
	unsigned char                                      bWasKeyboardInputCanceled;                                // 0x01FF(0x0001) (CPF_Const)
	TEnumAsByte<ENetworkNotificationPosition>          CurrentNotificationPosition;                              // 0x0200(0x0001) (CPF_Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                            // 0x0204(0x0004) (CPF_Const)
	struct FString                                     LocalProfileName;                                         // 0x0208(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     LoggedInPlayerName;                                       // 0x0214(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                                         // 0x0220(0x0048) (CPF_Const)
	int                                                LoggedInPlayerNum;                                        // 0x0268(0x0004) (CPF_Const)
	struct FString                                     LoggedInCountry;                                          // 0x026C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<int>                                        AvatarSizes;                                              // 0x0278(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                            // 0x0284(0x000C) (CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                            // 0x0290(0x0004)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageReadDelegates;                          // 0x0294(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageWriteDelegates;                         // 0x02A0(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RemotePlayerStorageReadDelegates;                         // 0x02AC(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;                       // 0x02B8(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                                     // 0x02C4(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                                   // 0x02D0(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                                    // 0x02DC(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                                     // 0x02E8(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                                     // 0x02F4(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                                         // 0x0300(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadOnlineStatsCompleteDelegates;                         // 0x030C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FlushOnlineStatsDelegates;                                // 0x0318(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;                          // 0x0324(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                                      // 0x0330(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x033C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                                     // 0x0348(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                                 // 0x0354(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;                      // 0x0360(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                            // 0x036C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                           // 0x0378(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;                          // 0x0384(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileReadCompleteDelegates;                          // 0x0390(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileWriteCompleteDelegates;                         // 0x039C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ExternalUIChangeDelegates;                                // 0x03A8(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputCompleteDelegates;                           // 0x03B4(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	struct FString                                     KeyboardInputResults;                                     // 0x03C0(0x000C) (CPF_NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                                       // 0x03CC(0x0050)
	float                                              LastLocalTalkerNotificationTime;                          // 0x041C(0x0004) (CPF_Const, CPF_Transient)
	float                                              MaxTalkerNotificationTime;                                // 0x0420(0x0004) (CPF_Const)
	TArray<struct FUniqueNetId>                        PendingRequestUserInformation;                            // 0x0424(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                            // 0x0430(0x000C) (CPF_NeedCtorLink)
	int                                                AppID;                                                    // 0x043C(0x0004) (CPF_Const)
	class UOnlineStatsRead*                            CurrentStatsRead;                                         // 0x0440(0x0004) (CPF_Const)
	TArray<struct FPendingPlayerStats>                 PendingStats;                                             // 0x0444(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FString                                     KeyboardResultsString;                                    // 0x0450(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputDelegates;                                   // 0x045C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendInviteReceivedDelegates;                            // 0x0468(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendMessageReceivedDelegates;                           // 0x0474(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AddFriendByNameCompleteDelegates;                         // 0x0480(0x000C) (CPF_NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                             // 0x048C(0x0028) (CPF_NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                                       // 0x04B4(0x0004)
	struct FString                                     CachedFriendMessage;                                      // 0x04B8(0x000C) (CPF_Const, CPF_NeedCtorLink)
	struct FDeviceIdCache                              DeviceCache;                                              // 0x04C4(0x0020) (CPF_NeedCtorLink)
	TArray<struct FString>                             LocationUrlsForInvites;                                   // 0x04E4(0x000C) (CPF_Const, CPF_Config, CPF_NeedCtorLink)
	struct FString                                     LocationUrl;                                              // 0x04F0(0x000C) (CPF_Const, CPF_Config, CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                              // 0x04FC(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;                          // 0x0508(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetNumberOfCurrentPlayersCompleteDelegates;               // 0x0514(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterHostStatGuidCompleteDelegates;                    // 0x0520(0x000C) (CPF_NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                                     // 0x052C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FOnlineStatusMapping>                StatusMappings;                                           // 0x0538(0x000C) (CPF_Const, CPF_Config, CPF_NeedCtorLink)
	struct FString                                     DefaultStatus;                                            // 0x0544(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     GameInviteMessage;                                        // 0x0550(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[0x4];                                    // 0x055C(0x0008)
	float                                              ConnectionPresenceTimeInterval;                           // 0x057C(0x0004)
	float                                              ConnectionPresenceElapsedTime;                            // 0x0580(0x0004) (CPF_Const)
	struct FString                                     EncryptedProductKey;                                      // 0x0584(0x000C) (CPF_Const, CPF_Config, CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        MuteList;                                                 // 0x0590(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FSteamUserCloud>                     UserCloudFiles;                                           // 0x059C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FSteamUserCloudMetadata>             UserCloudMetadata;                                        // 0x05A8(0x000C) (CPF_NeedCtorLink)
	TArray<struct FTitleFile>                          SharedFileCache;                                          // 0x05B4(0x000C) (CPF_NeedCtorLink)
	TArray<struct FQueuedAvatarRequest>                QueuedAvatarRequests;                                     // 0x05C0(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FAchievementMappingInfo>             AchievementMappings;                                      // 0x05CC(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FAchievementProgressStat>            PendingAchievementProgress;                               // 0x05D8(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FLeaderboardTemplate>                LeaderboardList;                                          // 0x05E4(0x000C) (CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardRead>            DeferredLeaderboardReads;                                 // 0x05F0(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           DeferredLeaderboardWrites;                                // 0x05FC(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           PendingLeaderboardStats;                                  // 0x0608(0x000C) (CPF_Const, CPF_NeedCtorLink)
	TArray<struct FViewIdToLeaderboardName>            LeaderboardNameMappings;                                  // 0x0614(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<int>                                        GameServerStatsMappings;                                  // 0x0620(0x000C) (CPF_Config, CPF_NeedCtorLink)
	class UOnlinePurchaseInterfaceSteamworks*          CachedPurchaseInt;                                        // 0x062C(0x0004) (CPF_Const)
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                            // 0x0630(0x0004) (CPF_Const)
	TArray<struct FIpAddr>                             PendingRedirects;                                         // 0x0634(0x000C) (CPF_Const, CPF_NeedCtorLink)
	class UOnlineLobbyInterfaceSteamworks*             LobbyInterfaceImpl;                                       // 0x0640(0x0004)
	struct FScriptDelegate                             __CanPlayOnlineChanged__Delegate;                         // 0x0644(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSwitchComplete__Delegate;                         // 0x0654(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSignInComplete__Delegate;                         // 0x0664(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                // 0x0674(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                             // 0x0684(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                               // 0x0694(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                              // 0x06A4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __FriendPresenceChange__Delegate;                         // 0x06B4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                // 0x06C4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                            // 0x06D4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                          // 0x06E4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                // 0x06F4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;               // 0x0704(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;                  // 0x0714(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;          // 0x0724(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;                 // 0x0734(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                        // 0x0744(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;                   // 0x0754(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                        // 0x0764(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                    // 0x0774(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                   // 0x0784(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                           // 0x0794(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                           // 0x07A4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                           // 0x07B4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                               // 0x07C4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserRestored__Delegate;                               // 0x07D4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                     // 0x07E4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                        // 0x07F4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x0804(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                      // 0x0814(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                    // 0x0824(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                       // 0x0834(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                         // 0x0844(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                     // 0x0854(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                      // 0x0864(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;               // 0x0874(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;                    // 0x0884(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                  // 0x0894(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                         // 0x08A4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;                   // 0x08B4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;          // 0x08C4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;      // 0x08D4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;                 // 0x08E4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;                       // 0x08F4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;                      // 0x0904(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;                     // 0x0914(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;                     // 0x0924(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;                    // 0x0934(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;              // 0x0944(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;                          // 0x0954(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTrialStatusChange__Delegate;                          // 0x0964(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveDataNoSpaceDialogComplete__Delegate;              // 0x0974(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;                       // 0x0984(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;                      // 0x0994(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;                          // 0x09A4(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSystemUserControllerPairingChanged__Delegate;         // 0x09B4(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		return ptr;
	}


	bool CanSendOfflinePartyInvite(const struct FUniqueNetId& PlayerID);
	bool AllowPsyNetParty();
	bool CheckParentalControlInfo(bool bShowUi);
	bool RecordPlayersRecentlyMetKeys(unsigned char LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys);
	bool GetPlayHistoryRegistrationKey(TArray<unsigned char>* Key);
	bool IsOriginalAppOwner();
	void UpdateSessionStatusFromPlayers(int CurrentPlayerCount, int numBotPlayers);
	bool IsAchievementUnlocked(unsigned char LocalUserNum, int AchievementId);
	bool IsRichPresenceLocalized();
	void UpdateGameProgress(unsigned char LocalPlayerNum, float Progress);
	void FinishOnlineGameSession(const struct FString& ServerID);
	void StartOnlineGameSession(const struct FString& ServerID);
	void ClearSystemUserControllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate);
	void AddSystemUserControllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate);
	void OnSystemUserControllerPairingChanged(int NewLocalUserNum, int PreviousLocalUserNum);
	void ClearAccountPickerInput();
	void LookForAccountPickerInput();
	void AddPlayerToSession(unsigned char ControllerId);
	void ClearPrimaryPlayer();
	void RemoveUserAssociation(unsigned char ControllerId);
	void MapEnd();
	void MapStart();
	void OnlineMatchEnd();
	void OnlineMatchStart(const struct FString& MapName);
	void SetSessionDifficultyLevel(int DifficultyLevel);
	void SetSessionGameplayModeName(const struct FName& GameplayModeName);
	void SetSessionGameplayMode(int GameplayMode);
	TArray<unsigned long> GetSyncedAchievements(unsigned char LocalUserNum);
	void SetPlayedWith(const struct FUniqueNetId& PlayerNetId);
	bool HandleBootMessage();
	void ClearErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void AddErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void OnErrorDialogClosed(int LocalUserNum);
	void ClearCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate);
	void AddCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate);
	void OnCloseKickPlayerDialog();
	void ClearCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void AddCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate);
	void OnCommerceDialogClosed();
	void GetPlayerAccountID(const struct FUniqueNetId& NetId);
	bool WordFilterSanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& PlayerID);
	void RemoveCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback);
	void AddCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback);
	bool RecordPlayersRecentlyMet(unsigned char LocalUserNum, const struct FString& GameDescription, TArray<struct FUniqueNetId>* Players);
	void ClearSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate);
	void AddSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate);
	void OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave);
	void ClearTrialStatusChangeDelegate(const struct FScriptDelegate& InDelegate);
	void AddTrialStatusChangeDelegate(const struct FScriptDelegate& InDelegate);
	void OnTrialStatusChange();
	bool IsTrialVersion();
	void ClearUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate);
	void AddUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate);
	TArray<struct FName> GetUnlockedDLC();
	void OnUnlockedDLCChange();
	bool GetOverlayEnabled();
	int GetDLCPurchaseTime(const struct FName& AppName);
	void HandleGetUserInfoComplete(const struct FName& NewCurrency, const struct FString& NewCountry);
	void GetPlayerCountry(unsigned char LocalUserNum);
	struct FString GetPlayerLanguage(unsigned char LocalUserNum);
	void ClearReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate);
	void AddReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate);
	bool AnyPlayerChatRestricted();
	void InitializeTrophyAPI();
	void OpenStoreForItems(unsigned char LocalUserNum, TArray<struct FString> Targets);
	void OpenStoreForDLC(unsigned char LocalUserNum, const struct FName& DLC);
	void OpenStoreForItemsAsync(unsigned char LocalUserNum, TArray<struct FString> Targets, const struct FScriptDelegate& OnStorePurchaseCompleteDelegate);
	void OnStorePurchaseCompleteDelegate();
	void OpenErrorDialog(unsigned char LocalUserNum, TEnumAsByte<EPS4ErrorDialog> ErrorCode);
	void OpenPS4DisplayMode(unsigned char LocalUserNum, TEnumAsByte<EPS4DisplayMode> DisplayMode, TArray<struct FString> Targets, int ServiceLabel);
	void ResetControllerColor(int ControllerId);
	void SetControllerColor(int ControllerId, const struct FColor& NewColor);
	bool AddInGamePost(const struct FString& InPostID, unsigned char LocalUserNum, TArray<struct FString> StringReplaceList);
	bool IsEnabled();
	void SetRichPresence(unsigned char LocalUserNum, const struct FString& PresenceString, const struct FString& GameDataString);
	void ClearAllDelegates();
	void ClearWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate);
	void AddWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate);
	bool WriteSharedFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* Contents);
	void OnWriteSharedFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename, const struct FString& SharedHandle);
	void ClearReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate);
	void AddReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate);
	bool ReadSharedFile(const struct FString& SharedHandle);
	void OnReadSharedFileComplete(bool bWasSuccessful, const struct FString& SharedHandle);
	bool ClearSharedFile(const struct FString& SharedHandle);
	bool ClearSharedFiles();
	bool GetSharedFileContents(const struct FString& SharedHandle, TArray<unsigned char>* FileContents);
	void ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	bool WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	void OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	bool ReadUserFile(const struct FString& UserId, const struct FString& Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(const struct FString& UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId);
	bool ClearFile(const struct FString& UserId, const struct FString& Filename);
	bool ClearFiles(const struct FString& UserId);
	bool GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	bool WriteUserFileInternal(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	bool SetVoiceReceiveVolume(float VoiceVolume);
	bool GetFriendJoinURL(const struct FUniqueNetId& FriendUID, struct FString* ServerURL, struct FString* ServerUID);
	bool GetCommandlineJoinURL(bool bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID);
	bool Int64ToUniqueNetId(const struct FString& UIDString, struct FUniqueNetId* OutUID);
	struct FString UniqueNetIdToInt64(struct FUniqueNetId* Uid);
	void NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent);
	void OnVOIPPlaybackFinished(class UAudioComponent* AC);
	bool ShowProfileUI(unsigned char LocalUserNum, const struct FString& SubURL, const struct FUniqueNetId& PlayerUID);
	struct FString UniqueNetIdToPlayerName(struct FUniqueNetId* Uid);
	bool DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress);
	bool CreateLeaderboard(const struct FString& LeaderboardName, TEnumAsByte<ELeaderboardSortType> SortType, TEnumAsByte<ELeaderboardFormat> DisplayFormat);
	bool ResetStats(bool bResetAchievements);
	bool ShowCustomMessageUI(unsigned char LocalUserNum, const struct FString& MessageTitle, const struct FString& NonEditableMessage, const struct FString& EditableMessage, TArray<struct FUniqueNetId>* Recipients);
	void ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, bool bWasSuccessful);
	bool ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings);
	bool UnlockAvatarAward(unsigned char LocalUserNum, int AvatarItemId);
	void GetSteamClanData(TArray<struct FSteamPlayerClanData>* Results);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int TotalPlayers);
	bool GetNumberOfCurrentPlayers();
	void ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EAvatarSize> Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
	bool ShowCustomPlayersUI(unsigned char LocalUserNum, const struct FString& Title, const struct FString& Description, TArray<struct FUniqueNetId>* Players);
	TEnumAsByte<EOnlineEnumerationReadState> GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int TitleId);
	bool ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages);
	bool ShowPlayersUI(unsigned char LocalUserNum);
	bool ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool ShowFriendsUI(unsigned char LocalUserNum);
	void ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	bool UpdateStat(unsigned char LocalUserNum, const struct FName& StatName, int Points);
	bool IsDeviceValid(int DeviceID, int SizeNeeded);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName);
	void ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bManageStorage);
	bool ShowMembershipMarketplaceUI(unsigned char LocalUserNum);
	bool ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId);
	bool ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText);
	bool ShowAchievementsUI(unsigned char LocalUserNum);
	bool ShowMessagesUI(unsigned char LocalUserNum);
	bool ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& UniqueId, const struct FString& PlayerName);
	bool ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	bool UnmuteAll(unsigned char LocalUserNum);
	bool MuteAll(unsigned char LocalUserNum, bool bAllowFriends);
	void CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma);
	bool RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName);
	bool SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text);
	bool SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text);
	bool SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	bool DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	bool AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message);
	bool AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool HideKeyboardUI(unsigned char LocalUserNum);
	bool ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties);
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const struct FString& FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	int GetLocale();
	TEnumAsByte<ENATType> GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	TEnumAsByte<EOnlineServerConnectionStatus> GetCurrentConnectionStatus();
	bool IsControllerConnected(int ControllerId);
	void ClearUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate);
	void AddUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate);
	void OnUserRestored(unsigned char ControllerId);
	void ClearUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate);
	void AddUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate);
	void OnUserOrphaned(unsigned char ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange(int ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos);
	TEnumAsByte<ENetworkNotificationPosition> GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
	bool WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(const struct FName& SessionName);
	bool WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players);
	bool SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words);
	bool StopSpeechRecognition(unsigned char LocalUserNum);
	bool StartSpeechRecognition(unsigned char LocalUserNum);
	void StopNetworkedVoice(unsigned char LocalUserNum);
	void StartNetworkedVoice(unsigned char LocalUserNum);
	void ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	bool UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum);
	bool RegisterLocalTalker(unsigned char LocalUserNum);
	TEnumAsByte<EOnlineEnumerationReadState> GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void GetFriendPresence(struct FOnlineFriend* FriendData);
	void ClearFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate);
	void AddFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate);
	void AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void ClearUserSignInCompleteDelegate(const struct FScriptDelegate& UserSignInCompleteDelegate);
	void AddUserSignInCompleteDelegate(const struct FScriptDelegate& UserSignInCompleteDelegate);
	void ClearUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate);
	void AddUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate);
	void SetPrimaryPlayerGamepadToLastInput();
	bool IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query);
	bool IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool CanUploadFitnessData(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanShareKinectContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanShareWithSocialNetwork(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanBrowseInternet(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanAccessPremiumVideoContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanAccessPremiumContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanUseCloudStorage(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanRecordDVRClips(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanShowPresenceInformation(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanViewPlayerProfiles(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanPurchaseContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanDownloadUserContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanShareUserCreatedContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanCommunicateVoice(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanCommunicateVideo(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	TEnumAsByte<EFeaturePrivilegeLevel> CanCommunicate(unsigned char LocalUserNum, TEnumAsByte<ECommunicationMethod> CommMethod, bool bAttemptToResolve);
	bool CanPlayOnline(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID);
	bool IsLocalLogin(unsigned char LocalUserNum);
	bool IsGuestLogin(unsigned char LocalUserNum);
	TEnumAsByte<ELoginStatus> GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	bool AutoLogin();
	bool Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly);
	void SetKickPlayerDialogActive(bool Active);
	bool IsUserSwitchActive();
	void SetKickPreviousUser(unsigned char LocalUserNum);
	bool SupportInGameLogin();
	bool ShowControllerUI();
	bool ShowLoginUIForOrphanedUser(unsigned char LocalUserNum);
	bool ShowLoginUI(unsigned char LocalUserNum, bool bShowOnlineOnly);
	void FriendPresenceChange(const struct FUniqueNetId& PlayerID);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(unsigned char LocalUserNum);
	void OnUserSignInComplete(unsigned char LocalUserNum);
	void OnUserSwitchComplete(unsigned char LocalUserNum);
	void Exit();
	bool Init();
	void CanPlayOnlineChanged(unsigned char LocalUserNum);
};


// Class OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks
// 0x0018 (0x0074 - 0x005C)
class UOnlinePurchaseInterfaceSteamworks : public UOnlinePurchaseInterfaceImpl
{
public:
	TArray<struct FAppPriceInfoRequest>                AppPriceInfoRequests;                                     // 0x005C(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MicroTxnResponseDelegates;                                // 0x0068(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks");
		return ptr;
	}


	void ClearMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate);
	struct FString FormatCurrency(const struct FString& Currency, int Price);
	void HandleGetAppPriceInfoComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool GetAppPriceInfo(const struct FScriptDelegate& Callback, struct FUniqueNetId* PlayerID, TArray<struct FName>* AppNames);
	bool AppIdToName(const struct FString& AppID, bool bOptional, struct FName* AppName);
	bool AppNameToId(const struct FName& AppName, bool bOptional, struct FString* AppID);
};


// Class OnlineSubsystemSteamworks.SteamWorkshopCommandlet
// 0x0004 (0x0080 - 0x007C)
class USteamWorkshopCommandlet : public UCommandlet
{
public:
	class UOnlineSubsystemCommonImpl*                  OnlineSub;                                                // 0x007C(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamWorkshopCommandlet");
		return ptr;
	}


	bool Init();
};


// Class OnlineSubsystemSteamworks.SteamWorkshopEngine
// 0x0004 (0x07E0 - 0x07DC)
class USteamWorkshopEngine : public UGameEngine
{
public:
	unsigned long                                      bHasFinsihed : 1;                                         // 0x07DC(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.SteamWorkshopEngine");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0010 (0x020C - 0x01FC)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	unsigned long                                      bSteamSocketsOnly : 1;                                    // 0x01FC(0x0004) (CPF_Config)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0200(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetDriverSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0x916C - 0x916C)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
