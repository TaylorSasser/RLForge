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

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::RequestAuthTicket(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket");

	UOnlineAuthInterfaceSteamworks_RequestAuthTicket_Params params;
	params.PlayerID = PlayerID;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::RequiresAuthTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket");

	UOnlineAuthInterfaceSteamworks_RequiresAuthTicket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FIpAddr                 OutServerIP                    (CPF_Parm, CPF_OutParm)
// int                            OutServerPort                  (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::GetServerAddr(struct FIpAddr* OutServerIP, int* OutServerPort)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr");

	UOnlineAuthInterfaceSteamworks_GetServerAddr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerIP != nullptr)
		*OutServerIP = params.OutServerIP;
	if (OutServerPort != nullptr)
		*OutServerPort = params.OutServerPort;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            OutServerUID                   (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId(struct FUniqueNetId* OutServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId");

	UOnlineAuthInterfaceSteamworks_GetServerUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerUID != nullptr)
		*OutServerUID = params.OutServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession");

	UOnlineAuthInterfaceSteamworks_VerifyServerAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)
// int                            OutAuthTicketUID               (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int* OutAuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession");

	UOnlineAuthInterfaceSteamworks_CreateServerAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthTicketUID != nullptr)
		*OutAuthTicketUID = params.OutAuthTicketUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int                            ClientPort                     (CPF_Parm)
// int                            AuthTicketUID                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int AuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession");

	UOnlineAuthInterfaceSteamworks_VerifyClientAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;
	params.AuthTicketUID = AuthTicketUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int                            ServerPort                     (CPF_Parm)
// bool                           bSecure                        (CPF_Parm)
// int                            OutAuthTicketUID               (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession");

	UOnlineAuthInterfaceSteamworks_CreateClientAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;
	params.bSecure = bSecure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthTicketUID != nullptr)
		*OutAuthTicketUID = params.OutAuthTicketUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest(const struct FUniqueNetId& ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest");

	UOnlineAuthInterfaceSteamworks_SendServerAuthRequest_Params params;
	params.ServerUID = ServerUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest");

	UOnlineAuthInterfaceSteamworks_SendClientAuthRequest_Params params;
	params.ClientConnection = ClientConnection;
	params.ClientUID = ClientUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress
// (FUNC_Native, FUNC_Public)

void UOnlineCommunityContentInterfaceSteamworks::UpdateWorkshopItemUploadProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress");

	UOnlineCommunityContentInterfaceSteamworks_UpdateWorkshopItemUploadProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::DownloadAllWorkshopData(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData");

	UOnlineCommunityContentInterfaceSteamworks_DownloadAllWorkshopData_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem
// (FUNC_Native, FUNC_Public)

void UOnlineCommunityContentInterfaceSteamworks::CreateWorkshopItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem");

	UOnlineCommunityContentInterfaceSteamworks_CreateWorkshopItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FCommunityContentFile   FileToRate                     (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            NewRating                      (CPF_Parm)

void UOnlineCommunityContentInterfaceSteamworks::RateContent(unsigned char PlayerNum, int NewRating, struct FCommunityContentFile* FileToRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent");

	UOnlineCommunityContentInterfaceSteamworks_RateContent_Params params;
	params.PlayerNum = PlayerNum;
	params.NewRating = NewRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileToRate != nullptr)
		*FileToRate = params.FileToRate;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearGetContentPayloadCompleteDelegate(const struct FScriptDelegate& GetContentPayloadCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_ClearGetContentPayloadCompleteDelegate_Params params;
	params.GetContentPayloadCompleteDelegate = GetContentPayloadCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddGetContentPayloadCompleteDelegate(const struct FScriptDelegate& GetContentPayloadCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_AddGetContentPayloadCompleteDelegate_Params params;
	params.GetContentPayloadCompleteDelegate = GetContentPayloadCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          Payload                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnGetContentPayloadComplete(bool bWasSuccessful, const struct FCommunityContentFile& FileDownloaded, TArray<unsigned char>* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete");

	UOnlineCommunityContentInterfaceSteamworks_OnGetContentPayloadComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.FileDownloaded = FileDownloaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Payload != nullptr)
		*Payload = params.Payload;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::GetContentPayload(unsigned char PlayerNum, struct FCommunityContentFile* FileDownloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload");

	UOnlineCommunityContentInterfaceSteamworks_GetContentPayload_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileDownloaded != nullptr)
		*FileDownloaded = params.FileDownloaded;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         DownloadContentCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearDownloadContentCompleteDelegate(const struct FScriptDelegate& DownloadContentCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_ClearDownloadContentCompleteDelegate_Params params;
	params.DownloadContentCompleteDelegate = DownloadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         DownloadContentCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddDownloadContentCompleteDelegate(const struct FScriptDelegate& DownloadContentCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_AddDownloadContentCompleteDelegate_Params params;
	params.DownloadContentCompleteDelegate = DownloadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          Payload                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadContentComplete(bool bWasSuccessful, const struct FCommunityContentFile& FileDownloaded, TArray<unsigned char> Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete");

	UOnlineCommunityContentInterfaceSteamworks_OnDownloadContentComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.FileDownloaded = FileDownloaded;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FCommunityContentFile   FileToDownload                 (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::DownloadContent(unsigned char PlayerNum, struct FCommunityContentFile* FileToDownload)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent");

	UOnlineCommunityContentInterfaceSteamworks_DownloadContent_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileToDownload != nullptr)
		*FileToDownload = params.FileToDownload;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UploadContentCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearUploadContentCompleteDelegate(const struct FScriptDelegate& UploadContentCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_ClearUploadContentCompleteDelegate_Params params;
	params.UploadContentCompleteDelegate = UploadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UploadContentCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddUploadContentCompleteDelegate(const struct FScriptDelegate& UploadContentCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_AddUploadContentCompleteDelegate_Params params;
	params.UploadContentCompleteDelegate = UploadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   UploadedFile                   (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnUploadContentComplete(bool bWasSuccessful, const struct FCommunityContentFile& UploadedFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete");

	UOnlineCommunityContentInterfaceSteamworks_OnUploadContentComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UploadedFile = UploadedFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// TArray<unsigned char>          Payload                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FCommunityContentMetadata MetaData                       (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::UploadContent(unsigned char PlayerNum, TArray<unsigned char>* Payload, struct FCommunityContentMetadata* MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent");

	UOnlineCommunityContentInterfaceSteamworks_UploadContent_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Payload != nullptr)
		*Payload = params.Payload;
	if (MetaData != nullptr)
		*MetaData = params.MetaData;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FOnlineFriend           Friend                         (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::GetFriendsContentList(unsigned char PlayerNum, struct FOnlineFriend* Friend, TArray<struct FCommunityContentFile>* ContentFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList");

	UOnlineCommunityContentInterfaceSteamworks_GetFriendsContentList_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friend != nullptr)
		*Friend = params.Friend;
	if (ContentFiles != nullptr)
		*ContentFiles = params.ContentFiles;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearReadFriendsContentListCompleteDelegate(const struct FScriptDelegate& ReadFriendsContentListCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_ClearReadFriendsContentListCompleteDelegate_Params params;
	params.ReadFriendsContentListCompleteDelegate = ReadFriendsContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddReadFriendsContentListCompleteDelegate(const struct FScriptDelegate& ReadFriendsContentListCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_AddReadFriendsContentListCompleteDelegate_Params params;
	params.ReadFriendsContentListCompleteDelegate = ReadFriendsContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineCommunityContentInterfaceSteamworks::OnReadFriendsContentListComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete");

	UOnlineCommunityContentInterfaceSteamworks_OnReadFriendsContentListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            StartAt                        (CPF_OptionalParm, CPF_Parm)
// int                            NumToRead                      (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::ReadFriendsContentList(unsigned char PlayerNum, int StartAt, int NumToRead, TArray<struct FOnlineFriend>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList");

	UOnlineCommunityContentInterfaceSteamworks_ReadFriendsContentList_Params params;
	params.PlayerNum = PlayerNum;
	params.StartAt = StartAt;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::GetContentList(unsigned char PlayerNum, TArray<struct FCommunityContentFile>* ContentFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList");

	UOnlineCommunityContentInterfaceSteamworks_GetContentList_Params params;
	params.PlayerNum = PlayerNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentFiles != nullptr)
		*ContentFiles = params.ContentFiles;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadContentListCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearReadContentListCompleteDelegate(const struct FScriptDelegate& ReadContentListCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_ClearReadContentListCompleteDelegate_Params params;
	params.ReadContentListCompleteDelegate = ReadContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadContentListCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddReadContentListCompleteDelegate(const struct FScriptDelegate& ReadContentListCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate");

	UOnlineCommunityContentInterfaceSteamworks_AddReadContentListCompleteDelegate_Params params;
	params.ReadContentListCompleteDelegate = ReadContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm, CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnReadContentListComplete(bool bWasSuccessful, TArray<struct FCommunityContentFile> ContentFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete");

	UOnlineCommunityContentInterfaceSteamworks_OnReadContentListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ContentFiles = ContentFiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  PlayerNum                      (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm)
// struct FString                 Path                           (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// int                            StartAt                        (CPF_OptionalParm, CPF_Parm)
// int                            NumToRead                      (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::ReadContentList(unsigned char PlayerNum, const struct FUniqueNetId& NetId, const struct FString& Path, int StartAt, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList");

	UOnlineCommunityContentInterfaceSteamworks_ReadContentList_Params params;
	params.PlayerNum = PlayerNum;
	params.NetId = NetId;
	params.Path = Path;
	params.StartAt = StartAt;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit
// (FUNC_Native, FUNC_Public)

void UOnlineCommunityContentInterfaceSteamworks::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit");

	UOnlineCommunityContentInterfaceSteamworks_Exit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init");

	UOnlineCommunityContentInterfaceSteamworks_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// TArray<struct FDownloadedWorkshopData> Items                          (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           bSuccess                       (CPF_Parm)

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadedWorkshopData(bool bSuccess, TArray<struct FDownloadedWorkshopData>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData");

	UOnlineCommunityContentInterfaceSteamworks_OnDownloadedWorkshopData_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UOnlineGameInterfaceSteamworks::PrintDebugInfoNative(class UDebugDrawer* Drawer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative");

	UOnlineGameInterfaceSteamworks_PrintDebugInfoNative_Params params;
	params.Drawer = Drawer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UOnlineGameInterfaceSteamworks::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo");

	UOnlineGameInterfaceSteamworks_PrintDebugInfo_Params params;
	params.Drawer = Drawer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            StartAt                        (CPF_Parm)
// int                            NumberToQuery                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData");

	UOnlineGameInterfaceSteamworks_QueryNonAdvertisedData_Params params;
	params.StartAt = StartAt;
	params.NumberToQuery = NumberToQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_ClearUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_AddUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete");

	UOnlineGameInterfaceSteamworks_OnUnregisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer");

	UOnlineGameInterfaceSteamworks_UnregisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_ClearRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_AddRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete");

	UOnlineGameInterfaceSteamworks_OnRegisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bWasInvited                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer");

	UOnlineGameInterfaceSteamworks_RegisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite");

	UOnlineGameInterfaceSteamworks_AcceptGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 ErrorString                    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(const struct FString& ErrorString, struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted");

	UOnlineGameInterfaceSteamworks_OnGameInviteAccepted_Params params;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// bool                           bShouldRefreshOnlineData       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame");

	UOnlineGameInterfaceSteamworks_UpdateOnlineGame_Params params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_PsyNet_ClearUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_PsyNet_AddUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete");

	UOnlineGameInterfaceSteamworks_PsyNet_OnUnregisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks_PsyNet::UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer");

	UOnlineGameInterfaceSteamworks_PsyNet_UnregisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_PsyNet_ClearRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_PsyNet_AddRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete");

	UOnlineGameInterfaceSteamworks_PsyNet_OnRegisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bWasInvited                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks_PsyNet::RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer");

	UOnlineGameInterfaceSteamworks_PsyNet_RegisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            StartAt                        (CPF_Parm)
// int                            NumberToQuery                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks_PsyNet::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData");

	UOnlineGameInterfaceSteamworks_PsyNet_QueryNonAdvertisedData_Params params;
	params.StartAt = StartAt;
	params.NumberToQuery = NumberToQuery;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks_PsyNet::AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite");

	UOnlineGameInterfaceSteamworks_PsyNet_AcceptGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// bool                           bShouldRefreshOnlineData       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineGameInterfaceSteamworks_PsyNet::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame");

	UOnlineGameInterfaceSteamworks_PsyNet_UpdateOnlineGame_Params params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            JoinablePlayerID               (CPF_Parm)
// struct FString                 ServerAddress                  (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<ELobbyVisibility>  Visibility                     (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::SetFriendJoinLocation(const struct FUniqueNetId& JoinablePlayerID, const struct FString& ServerAddress, TEnumAsByte<ELobbyVisibility> Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation");

	UOnlineGameInterfaceSteamworks_PsyNet_SetFriendJoinLocation_Params params;
	params.JoinablePlayerID = JoinablePlayerID;
	params.ServerAddress = ServerAddress;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// TEnumAsByte<ELobbyKickReason>  Reason                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::KickPlayer(TEnumAsByte<ELobbyKickReason> Reason, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer");

	UOnlineLobbyInterfaceSteamworks_KickPlayer_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Parm, CPF_OutParm)
// bool                           bMarkAsJoined                  (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyFromCommandline(bool bMarkAsJoined, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline");

	UOnlineLobbyInterfaceSteamworks_GetLobbyFromCommandline_Params params;
	params.bMarkAsJoined = bMarkAsJoined;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Const, CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::ShowInviteUI(unsigned char LocalUserNum, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI");

	UOnlineLobbyInterfaceSteamworks_ShowInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::InviteToLobby(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby");

	UOnlineLobbyInterfaceSteamworks_InviteToLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            NewOwner                       (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyOwner(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner");

	UOnlineLobbyInterfaceSteamworks_SetLobbyOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (NewOwner != nullptr)
		*NewOwner = params.NewOwner;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           bLocked                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyLock(bool bLocked, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock");

	UOnlineLobbyInterfaceSteamworks_SetLobbyLock_Params params;
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// TEnumAsByte<ELobbyVisibility>  Type                           (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyType(TEnumAsByte<ELobbyVisibility> Type, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType");

	UOnlineLobbyInterfaceSteamworks_SetLobbyType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            ServerUID                      (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 ServerIP                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyServer(const struct FString& ServerIP, struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer");

	UOnlineLobbyInterfaceSteamworks_SetLobbyServer_Params params;
	params.ServerIP = ServerIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (ServerUID != nullptr)
		*ServerUID = params.ServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::RemoveLobbySetting(const struct FString& Key, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting");

	UOnlineLobbyInterfaceSteamworks_RemoveLobbySetting_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbySetting(const struct FString& Key, const struct FString& Value, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting");

	UOnlineLobbyInterfaceSteamworks_SetLobbySetting_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FUniqueNetId            AdminId                        (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyAdmin(struct FUniqueLobbyId* LobbyId, struct FUniqueNetId* AdminId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin");

	UOnlineLobbyInterfaceSteamworks_GetLobbyAdmin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (AdminId != nullptr)
		*AdminId = params.AdminId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FActiveLobbyInfo        Lobby                          (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            AdminIndex                     (CPF_Parm)

void UOnlineLobbyInterfaceSteamworks::OnLobbyKicked(int AdminIndex, struct FActiveLobbyInfo* Lobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked");

	UOnlineLobbyInterfaceSteamworks_OnLobbyKicked_Params params;
	params.AdminIndex = AdminIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lobby != nullptr)
		*Lobby = params.Lobby;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// TArray<unsigned char>          Data                           (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::SendLobbyBinaryData(struct FUniqueLobbyId* LobbyId, TArray<unsigned char>* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData");

	UOnlineLobbyInterfaceSteamworks_SendLobbyBinaryData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;
	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 Key                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyUserSetting(const struct FString& Key, const struct FString& Value, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting");

	UOnlineLobbyInterfaceSteamworks_SetLobbyUserSetting_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::LeaveLobby(struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby");

	UOnlineLobbyInterfaceSteamworks_LeaveLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            LocalPlayerNum                 (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const, CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::JoinLobby(int LocalPlayerNum, struct FUniqueLobbyId* LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby");

	UOnlineLobbyInterfaceSteamworks_JoinLobby_Params params;
	params.LocalPlayerNum = LocalPlayerNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyId != nullptr)
		*LobbyId = params.LobbyId;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FUniqueLobbyId          LobbyId                        (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::UpdateFoundLobbies(const struct FUniqueLobbyId& LobbyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies");

	UOnlineLobbyInterfaceSteamworks_UpdateFoundLobbies_Params params;
	params.LobbyId = LobbyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            MaxResults                     (CPF_OptionalParm, CPF_Parm)
// TArray<struct FLobbyFilter>    Filters                        (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FLobbySortFilter> SortFilters                    (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// int                            MinSlots                       (CPF_OptionalParm, CPF_Parm)
// TEnumAsByte<ELobbyDistance>    Distance                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::FindLobbies(int MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int MinSlots, TEnumAsByte<ELobbyDistance> Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies");

	UOnlineLobbyInterfaceSteamworks_FindLobbies_Params params;
	params.MaxResults = MaxResults;
	params.Filters = Filters;
	params.SortFilters = SortFilters;
	params.MinSlots = MinSlots;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            LocalPlayerNum                 (CPF_Parm)
// int                            MaxPlayers                     (CPF_Parm)
// TEnumAsByte<ELobbyVisibility>  Type                           (CPF_OptionalParm, CPF_Parm)
// TArray<struct FLobbyMetaData>  InitialSettings                (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineLobbyInterfaceSteamworks::CreateLobby(int LocalPlayerNum, int MaxPlayers, TEnumAsByte<ELobbyVisibility> Type, TArray<struct FLobbyMetaData> InitialSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby");

	UOnlineLobbyInterfaceSteamworks_CreateLobby_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.MaxPlayers = MaxPlayers;
	params.Type = Type;
	params.InitialSettings = InitialSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanSendOfflinePartyInvite(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite");

	UOnlineSubsystemSteamworks_CanSendOfflinePartyInvite_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AllowPsyNetParty
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AllowPsyNetParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AllowPsyNetParty");

	UOnlineSubsystemSteamworks_AllowPsyNetParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo
// (FUNC_Public)
// Parameters:
// bool                           bShowUi                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CheckParentalControlInfo(bool bShowUi)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo");

	UOnlineSubsystemSteamworks_CheckParentalControlInfo_Params params;
	params.bShowUi = bShowUi;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendHistoryKey> PlayerKeys                     (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMetKeys(unsigned char LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys");

	UOnlineSubsystemSteamworks_RecordPlayersRecentlyMetKeys_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerKeys = PlayerKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          Key                            (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetPlayHistoryRegistrationKey(TArray<unsigned char>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey");

	UOnlineSubsystemSteamworks_GetPlayHistoryRegistrationKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsOriginalAppOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner");

	UOnlineSubsystemSteamworks_IsOriginalAppOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers
// (FUNC_Public)
// Parameters:
// int                            CurrentPlayerCount             (CPF_Parm)
// int                            numBotPlayers                  (CPF_Parm)

void UOnlineSubsystemSteamworks::UpdateSessionStatusFromPlayers(int CurrentPlayerCount, int numBotPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers");

	UOnlineSubsystemSteamworks_UpdateSessionStatusFromPlayers_Params params;
	params.CurrentPlayerCount = CurrentPlayerCount;
	params.numBotPlayers = numBotPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            AchievementId                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsAchievementUnlocked(unsigned char LocalUserNum, int AchievementId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked");

	UOnlineSubsystemSteamworks_IsAchievementUnlocked_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRichPresenceLocalized
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsRichPresenceLocalized()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRichPresenceLocalized");

	UOnlineSubsystemSteamworks_IsRichPresenceLocalized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalPlayerNum                 (CPF_Parm)
// float                          Progress                       (CPF_Parm)

void UOnlineSubsystemSteamworks::UpdateGameProgress(unsigned char LocalPlayerNum, float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress");

	UOnlineSubsystemSteamworks_UpdateGameProgress_Params params;
	params.LocalPlayerNum = LocalPlayerNum;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession
// (FUNC_Public)
// Parameters:
// struct FString                 ServerID                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::FinishOnlineGameSession(const struct FString& ServerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession");

	UOnlineSubsystemSteamworks_FinishOnlineGameSession_Params params;
	params.ServerID = ServerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession
// (FUNC_Public)
// Parameters:
// struct FString                 ServerID                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::StartOnlineGameSession(const struct FString& ServerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession");

	UOnlineSubsystemSteamworks_StartOnlineGameSession_Params params;
	params.ServerID = ServerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         PairingChangeDelegate          (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSystemUserControllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate");

	UOnlineSubsystemSteamworks_ClearSystemUserControllerPairingChangedDelegate_Params params;
	params.PairingChangeDelegate = PairingChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         PairingChangeDelegate          (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSystemUserControllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate");

	UOnlineSubsystemSteamworks_AddSystemUserControllerPairingChangedDelegate_Params params;
	params.PairingChangeDelegate = PairingChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            NewLocalUserNum                (CPF_Parm)
// int                            PreviousLocalUserNum           (CPF_Parm)

void UOnlineSubsystemSteamworks::OnSystemUserControllerPairingChanged(int NewLocalUserNum, int PreviousLocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged");

	UOnlineSubsystemSteamworks_OnSystemUserControllerPairingChanged_Params params;
	params.NewLocalUserNum = NewLocalUserNum;
	params.PreviousLocalUserNum = PreviousLocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput
// (FUNC_Public)

void UOnlineSubsystemSteamworks::ClearAccountPickerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput");

	UOnlineSubsystemSteamworks_ClearAccountPickerInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput
// (FUNC_Public)

void UOnlineSubsystemSteamworks::LookForAccountPickerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput");

	UOnlineSubsystemSteamworks_LookForAccountPickerInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession
// (FUNC_Public)
// Parameters:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddPlayerToSession(unsigned char ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession");

	UOnlineSubsystemSteamworks_AddPlayerToSession_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer
// (FUNC_Public)

void UOnlineSubsystemSteamworks::ClearPrimaryPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer");

	UOnlineSubsystemSteamworks_ClearPrimaryPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation
// (FUNC_Public)
// Parameters:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::RemoveUserAssociation(unsigned char ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation");

	UOnlineSubsystemSteamworks_RemoveUserAssociation_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd
// (FUNC_Public)

void UOnlineSubsystemSteamworks::MapEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd");

	UOnlineSubsystemSteamworks_MapEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart
// (FUNC_Public)

void UOnlineSubsystemSteamworks::MapStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart");

	UOnlineSubsystemSteamworks_MapStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd
// (FUNC_Public)

void UOnlineSubsystemSteamworks::OnlineMatchEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd");

	UOnlineSubsystemSteamworks_OnlineMatchEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart
// (FUNC_Public)
// Parameters:
// struct FString                 MapName                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnlineMatchStart(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart");

	UOnlineSubsystemSteamworks_OnlineMatchStart_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel
// (FUNC_Public)
// Parameters:
// int                            DifficultyLevel                (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionDifficultyLevel(int DifficultyLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel");

	UOnlineSubsystemSteamworks_SetSessionDifficultyLevel_Params params;
	params.DifficultyLevel = DifficultyLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName
// (FUNC_Public)
// Parameters:
// struct FName                   GameplayModeName               (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionGameplayModeName(const struct FName& GameplayModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName");

	UOnlineSubsystemSteamworks_SetSessionGameplayModeName_Params params;
	params.GameplayModeName = GameplayModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode
// (FUNC_Public)
// Parameters:
// int                            GameplayMode                   (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionGameplayMode(int GameplayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode");

	UOnlineSubsystemSteamworks_SetSessionGameplayMode_Params params;
	params.GameplayMode = GameplayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<unsigned long>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<unsigned long> UOnlineSubsystemSteamworks::GetSyncedAchievements(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements");

	UOnlineSubsystemSteamworks_GetSyncedAchievements_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const, CPF_Parm)

void UOnlineSubsystemSteamworks::SetPlayedWith(const struct FUniqueNetId& PlayerNetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith");

	UOnlineSubsystemSteamworks_SetPlayedWith_Params params;
	params.PlayerNetId = PlayerNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HandleBootMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage");

	UOnlineSubsystemSteamworks_HandleBootMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate");

	UOnlineSubsystemSteamworks_ClearErrorDialogClosedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddErrorDialogClosedDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate");

	UOnlineSubsystemSteamworks_AddErrorDialogClosedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnErrorDialogClosed(int LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed");

	UOnlineSubsystemSteamworks_OnErrorDialogClosed_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate");

	UOnlineSubsystemSteamworks_ClearCloseKickPlayerDialogDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCloseKickPlayerDialogDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate");

	UOnlineSubsystemSteamworks_AddCloseKickPlayerDialogDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnCloseKickPlayerDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog");

	UOnlineSubsystemSteamworks_OnCloseKickPlayerDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate");

	UOnlineSubsystemSteamworks_ClearCommerceDialogClosedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCommerceDialogClosedDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate");

	UOnlineSubsystemSteamworks_AddCommerceDialogClosedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnCommerceDialogClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed");

	UOnlineSubsystemSteamworks_OnCommerceDialogClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerAccountID
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FUniqueNetId            NetId                          (CPF_Const, CPF_Parm)

void UOnlineSubsystemSteamworks::GetPlayerAccountID(const struct FUniqueNetId& NetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerAccountID");

	UOnlineSubsystemSteamworks_GetPlayerAccountID_Params params;
	params.NetId = NetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Comment                        (CPF_Const, CPF_Parm, CPF_NeedCtorLink)
// struct FScriptDelegate         SanitizeDelegate               (CPF_Parm, CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::WordFilterSanitizeString(const struct FString& Comment, const struct FScriptDelegate& SanitizeDelegate, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString");

	UOnlineSubsystemSteamworks_WordFilterSanitizeString_Params params;
	params.Comment = Comment;
	params.SanitizeDelegate = SanitizeDelegate;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::RemoveCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate");

	UOnlineSubsystemSteamworks_RemoveCanPlayOnlineChangedDelegate_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCanPlayOnlineChangedDelegate(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate");

	UOnlineSubsystemSteamworks_AddCanPlayOnlineChangedDelegate_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 GameDescription                (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMet(unsigned char LocalUserNum, const struct FString& GameDescription, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet");

	UOnlineSubsystemSteamworks_RecordPlayersRecentlyMet_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameDescription = GameDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearSaveDataNoSpaceDialogCompleteDelegate_Params params;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSaveDataNoSpaceDialogCompleteDelegate(const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate");

	UOnlineSubsystemSteamworks_AddSaveDataNoSpaceDialogCompleteDelegate_Params params;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bContinueWithoutSave           (CPF_Parm)

void UOnlineSubsystemSteamworks::OnSaveDataNoSpaceDialogComplete(bool bContinueWithoutSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete");

	UOnlineSubsystemSteamworks_OnSaveDataNoSpaceDialogComplete_Params params;
	params.bContinueWithoutSave = bContinueWithoutSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearTrialStatusChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearTrialStatusChangeDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearTrialStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearTrialStatusChangeDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddTrialStatusChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddTrialStatusChangeDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddTrialStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddTrialStatusChangeDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTrialStatusChange
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnTrialStatusChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTrialStatusChange");

	UOnlineSubsystemSteamworks_OnTrialStatusChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTrialVersion
// (FUNC_Simulated, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsTrialVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTrialVersion");

	UOnlineSubsystemSteamworks_IsTrialVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate");

	UOnlineSubsystemSteamworks_ClearUnlockedDLCChangeDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockedDLCChangeDelegate(const struct FScriptDelegate& InDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate");

	UOnlineSubsystemSteamworks_AddUnlockedDLCChangeDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC
// (FUNC_Defined, FUNC_Public)
// Parameters:
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetUnlockedDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC");

	UOnlineSubsystemSteamworks_GetUnlockedDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnUnlockedDLCChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange");

	UOnlineSubsystemSteamworks_OnUnlockedDLCChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetOverlayEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled");

	UOnlineSubsystemSteamworks_GetOverlayEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   AppName                        (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UOnlineSubsystemSteamworks::GetDLCPurchaseTime(const struct FName& AppName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime");

	UOnlineSubsystemSteamworks_GetDLCPurchaseTime_Params params;
	params.AppName = AppName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// struct FName                   NewCurrency                    (CPF_Parm)
// struct FString                 NewCountry                     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::HandleGetUserInfoComplete(const struct FName& NewCurrency, const struct FString& NewCountry)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete");

	UOnlineSubsystemSteamworks_HandleGetUserInfoComplete_Params params;
	params.NewCurrency = NewCurrency;
	params.NewCountry = NewCountry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::GetPlayerCountry(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry");

	UOnlineSubsystemSteamworks_GetPlayerCountry_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetPlayerLanguage(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage");

	UOnlineSubsystemSteamworks_GetPlayerLanguage_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate");

	UOnlineSubsystemSteamworks_ClearReadPlayerCountryDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerCountryDelegate = ReadPlayerCountryDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerCountryDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerCountryDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate");

	UOnlineSubsystemSteamworks_AddReadPlayerCountryDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerCountryDelegate = ReadPlayerCountryDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AnyPlayerChatRestricted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted");

	UOnlineSubsystemSteamworks_AnyPlayerChatRestricted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI
// (FUNC_Public)

void UOnlineSubsystemSteamworks::InitializeTrophyAPI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI");

	UOnlineSubsystemSteamworks_InitializeTrophyAPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OpenStoreForItems(unsigned char LocalUserNum, TArray<struct FString> Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems");

	UOnlineSubsystemSteamworks_OpenStoreForItems_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Targets = Targets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   DLC                            (CPF_Parm)

void UOnlineSubsystemSteamworks::OpenStoreForDLC(unsigned char LocalUserNum, const struct FName& DLC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC");

	UOnlineSubsystemSteamworks_OpenStoreForDLC_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DLC = DLC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync
// (FUNC_Final, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_Parm, CPF_NeedCtorLink)
// struct FScriptDelegate         OnStorePurchaseCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OpenStoreForItemsAsync(unsigned char LocalUserNum, TArray<struct FString> Targets, const struct FScriptDelegate& OnStorePurchaseCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync");

	UOnlineSubsystemSteamworks_OpenStoreForItemsAsync_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Targets = Targets;
	params.OnStorePurchaseCompleteDelegate = OnStorePurchaseCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnStorePurchaseCompleteDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate");

	UOnlineSubsystemSteamworks_OnStorePurchaseCompleteDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EPS4ErrorDialog>   ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OpenErrorDialog(unsigned char LocalUserNum, TEnumAsByte<EPS4ErrorDialog> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog");

	UOnlineSubsystemSteamworks_OpenErrorDialog_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EPS4DisplayMode>   DisplayMode                    (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// int                            ServiceLabel                   (CPF_OptionalParm, CPF_Parm)

void UOnlineSubsystemSteamworks::OpenPS4DisplayMode(unsigned char LocalUserNum, TEnumAsByte<EPS4DisplayMode> DisplayMode, TArray<struct FString> Targets, int ServiceLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode");

	UOnlineSubsystemSteamworks_OpenPS4DisplayMode_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DisplayMode = DisplayMode;
	params.Targets = Targets;
	params.ServiceLabel = ServiceLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor
// (FUNC_Public)
// Parameters:
// int                            ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ResetControllerColor(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor");

	UOnlineSubsystemSteamworks_ResetControllerColor_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor
// (FUNC_Public)
// Parameters:
// int                            ControllerId                   (CPF_Parm)
// struct FColor                  NewColor                       (CPF_Parm)

void UOnlineSubsystemSteamworks::SetControllerColor(int ControllerId, const struct FColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor");

	UOnlineSubsystemSteamworks_SetControllerColor_Params params;
	params.ControllerId = ControllerId;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
// (FUNC_Public)
// Parameters:
// struct FString                 InPostID                       (CPF_Parm, CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         StringReplaceList              (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AddInGamePost(const struct FString& InPostID, unsigned char LocalUserNum, TArray<struct FString> StringReplaceList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost");

	UOnlineSubsystemSteamworks_AddInGamePost_Params params;
	params.InPostID = InPostID;
	params.LocalUserNum = LocalUserNum;
	params.StringReplaceList = StringReplaceList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled");

	UOnlineSubsystemSteamworks_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 PresenceString                 (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 GameDataString                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetRichPresence(unsigned char LocalUserNum, const struct FString& PresenceString, const struct FString& GameDataString)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence");

	UOnlineSubsystemSteamworks_SetRichPresence_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PresenceString = PresenceString;
	params.GameDataString = GameDataString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// (FUNC_Defined, FUNC_Public)

void UOnlineSubsystemSteamworks::ClearAllDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates");

	UOnlineSubsystemSteamworks_ClearAllDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearWriteSharedFileCompleteDelegate_Params params;
	params.WriteSharedFileCompleteDelegate = WriteSharedFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddWriteSharedFileCompleteDelegate_Params params;
	params.WriteSharedFileCompleteDelegate = WriteSharedFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          Contents                       (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::WriteSharedFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* Contents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile");

	UOnlineSubsystemSteamworks_WriteSharedFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Contents != nullptr)
		*Contents = params.Contents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 SharedHandle                   (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename, const struct FString& SharedHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete");

	UOnlineSubsystemSteamworks_OnWriteSharedFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadSharedFileCompleteDelegate_Params params;
	params.ReadSharedFileCompleteDelegate = ReadSharedFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadSharedFileCompleteDelegate_Params params;
	params.ReadSharedFileCompleteDelegate = ReadSharedFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 SharedHandle                   (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadSharedFile(const struct FString& SharedHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile");

	UOnlineSubsystemSteamworks_ReadSharedFile_Params params;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 SharedHandle                   (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete(bool bWasSuccessful, const struct FString& SharedHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete");

	UOnlineSubsystemSteamworks_OnReadSharedFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 SharedHandle                   (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSharedFile(const struct FString& SharedHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile");

	UOnlineSubsystemSteamworks_ClearSharedFile_Params params;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSharedFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles");

	UOnlineSubsystemSteamworks_ClearSharedFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 SharedHandle                   (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetSharedFileContents(const struct FString& SharedHandle, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents");

	UOnlineSubsystemSteamworks_GetSharedFileContents_Params params;
	params.SharedHandle = SharedHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearDeleteUserFileCompleteDelegate_Params params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddDeleteUserFileCompleteDelegate_Params params;
	params.DeleteUserFileCompleteDelegate = DeleteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           bShouldCloudDelete             (CPF_Parm)
// bool                           bShouldLocallyDelete           (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile");

	UOnlineSubsystemSteamworks_DeleteUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;
	params.bShouldCloudDelete = bShouldCloudDelete;
	params.bShouldLocallyDelete = bShouldLocallyDelete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete");

	UOnlineSubsystemSteamworks_OnDeleteUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearWriteUserFileCompleteDelegate_Params params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddWriteUserFileCompleteDelegate_Params params;
	params.WriteUserFileCompleteDelegate = WriteUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile");

	UOnlineSubsystemSteamworks_WriteUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete");

	UOnlineSubsystemSteamworks_OnWriteUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadUserFileCompleteDelegate_Params params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadUserFileCompleteDelegate_Params params;
	params.ReadUserFileCompleteDelegate = ReadUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadUserFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile");

	UOnlineSubsystemSteamworks_ReadUserFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete");

	UOnlineSubsystemSteamworks_OnReadUserFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList");

	UOnlineSubsystemSteamworks_GetUserFileList_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserFiles != nullptr)
		*UserFiles = params.UserFiles;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearEnumerateUserFileCompleteDelegate_Params params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddEnumerateUserFileCompleteDelegate_Params params;
	params.EnumerateUserFileCompleteDelegate = EnumerateUserFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EnumerateUserFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles");

	UOnlineSubsystemSteamworks_EnumerateUserFiles_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete");

	UOnlineSubsystemSteamworks_OnEnumerateUserFilesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearFile(const struct FString& UserId, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile");

	UOnlineSubsystemSteamworks_ClearFile_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearFiles(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles");

	UOnlineSubsystemSteamworks_ClearFiles_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents");

	UOnlineSubsystemSteamworks_GetFileContents_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// (FUNC_Final, FUNC_Native, FUNC_Private, FUNC_HasOutParms)
// Parameters:
// struct FString                 UserId                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::WriteUserFileInternal(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal");

	UOnlineSubsystemSteamworks_WriteUserFileInternal_Params params;
	params.UserId = UserId;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume
// (FUNC_Native, FUNC_Public)
// Parameters:
// float                          VoiceVolume                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SetVoiceReceiveVolume(float VoiceVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume");

	UOnlineSubsystemSteamworks_SetVoiceReceiveVolume_Params params;
	params.VoiceVolume = VoiceVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            FriendUID                      (CPF_Parm)
// struct FString                 ServerURL                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 ServerUID                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetFriendJoinURL(const struct FUniqueNetId& FriendUID, struct FString* ServerURL, struct FString* ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL");

	UOnlineSubsystemSteamworks_GetFriendJoinURL_Params params;
	params.FriendUID = FriendUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerURL != nullptr)
		*ServerURL = params.ServerURL;
	if (ServerUID != nullptr)
		*ServerUID = params.ServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// bool                           bMarkAsJoined                  (CPF_Parm)
// struct FString                 ServerURL                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 ServerUID                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL(bool bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL");

	UOnlineSubsystemSteamworks_GetCommandlineJoinURL_Params params;
	params.bMarkAsJoined = bMarkAsJoined;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerURL != nullptr)
		*ServerURL = params.ServerURL;
	if (ServerUID != nullptr)
		*ServerUID = params.ServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 UIDString                      (CPF_Parm, CPF_NeedCtorLink)
// struct FUniqueNetId            OutUID                         (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId(const struct FString& UIDString, struct FUniqueNetId* OutUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId");

	UOnlineSubsystemSteamworks_Int64ToUniqueNetId_Params params;
	params.UIDString = UIDString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutUID != nullptr)
		*OutUID = params.OutUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            Uid                            (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64(struct FUniqueNetId* Uid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64");

	UOnlineSubsystemSteamworks_UniqueNetIdToInt64_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Uid != nullptr)
		*Uid = params.Uid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UAudioComponent*         VOIPAudioComponent             (CPF_Parm, CPF_EditInline)

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished");

	UOnlineSubsystemSteamworks_NotifyVOIPPlaybackFinished_Params params;
	params.VOIPAudioComponent = VOIPAudioComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UAudioComponent*         AC                             (CPF_Parm, CPF_EditInline)

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished(class UAudioComponent* AC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished");

	UOnlineSubsystemSteamworks_OnVOIPPlaybackFinished_Params params;
	params.AC = AC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 SubURL                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerUID                      (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowProfileUI(unsigned char LocalUserNum, const struct FString& SubURL, const struct FUniqueNetId& PlayerUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI");

	UOnlineSubsystemSteamworks_ShowProfileUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SubURL = SubURL;
	params.PlayerUID = PlayerUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            Uid                            (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName(struct FUniqueNetId* Uid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName");

	UOnlineSubsystemSteamworks_UniqueNetIdToPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Uid != nullptr)
		*Uid = params.Uid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            AchievementId                  (CPF_Parm)
// int                            ProgressCount                  (CPF_Parm)
// int                            MaxProgress                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress");

	UOnlineSubsystemSteamworks_DisplayAchievementProgress_Params params;
	params.AchievementId = AchievementId;
	params.ProgressCount = ProgressCount;
	params.MaxProgress = MaxProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 LeaderboardName                (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<ELeaderboardSortType> SortType                       (CPF_Parm)
// TEnumAsByte<ELeaderboardFormat> DisplayFormat                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CreateLeaderboard(const struct FString& LeaderboardName, TEnumAsByte<ELeaderboardSortType> SortType, TEnumAsByte<ELeaderboardFormat> DisplayFormat)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard");

	UOnlineSubsystemSteamworks_CreateLeaderboard_Params params;
	params.LeaderboardName = LeaderboardName;
	params.SortType = SortType;
	params.DisplayFormat = DisplayFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bResetAchievements             (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ResetStats(bool bResetAchievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats");

	UOnlineSubsystemSteamworks_ResetStats_Params params;
	params.bResetAchievements = bResetAchievements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Recipients                     (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 MessageTitle                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 NonEditableMessage             (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 EditableMessage                (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(unsigned char LocalUserNum, const struct FString& MessageTitle, const struct FString& NonEditableMessage, const struct FString& EditableMessage, TArray<struct FUniqueNetId>* Recipients)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI");

	UOnlineSubsystemSteamworks_ShowCustomMessageUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageTitle = MessageTitle;
	params.NonEditableMessage = NonEditableMessage;
	params.EditableMessage = EditableMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Recipients != nullptr)
		*Recipients = params.Recipients;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings");

	UOnlineSubsystemSteamworks_ClearCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings");

	UOnlineSubsystemSteamworks_GetCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadCrossTitleProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadCrossTitleProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete");

	UOnlineSubsystemSteamworks_OnReadCrossTitleProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings");

	UOnlineSubsystemSteamworks_ReadCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            AvatarItemId                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockAvatarAward(unsigned char LocalUserNum, int AvatarItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward");

	UOnlineSubsystemSteamworks_UnlockAvatarAward_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AvatarItemId = AvatarItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FSteamPlayerClanData> Results                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetSteamClanData(TArray<struct FSteamPlayerClanData>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData");

	UOnlineSubsystemSteamworks_GetSteamClanData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate");

	UOnlineSubsystemSteamworks_AddGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            TotalPlayers                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete(int TotalPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete");

	UOnlineSubsystemSteamworks_OnGetNumberOfCurrentPlayersComplete_Params params;
	params.TotalPlayers = TotalPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers");

	UOnlineSubsystemSteamworks_GetNumberOfCurrentPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const, CPF_Parm)
// TEnumAsByte<EAvatarSize>       Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EAvatarSize> Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar");

	UOnlineSubsystemSteamworks_ReadOnlineAvatar_Params params;
	params.PlayerNetId = PlayerNetId;
	params.Size = Size;
	params.ReadOnlineAvatarCompleteDelegate = ReadOnlineAvatarCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FString                 Title                          (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Description                    (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(unsigned char LocalUserNum, const struct FString& Title, const struct FString& Description, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI");

	UOnlineSubsystemSteamworks_ShowCustomPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FAchievementDetails> Achievements                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            TitleId                        (CPF_OptionalParm, CPF_Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements");

	UOnlineSubsystemSteamworks_GetAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete");

	UOnlineSubsystemSteamworks_OnReadAchievementsComplete_Params params;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            TitleId                        (CPF_OptionalParm, CPF_Parm)
// bool                           bShouldReadText                (CPF_OptionalParm, CPF_Parm)
// bool                           bShouldReadImages              (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements");

	UOnlineSubsystemSteamworks_ReadAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bShouldReadText = bShouldReadText;
	params.bShouldReadImages = bShouldReadImages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI");

	UOnlineSubsystemSteamworks_ShowPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI");

	UOnlineSubsystemSteamworks_ShowFriendsInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI");

	UOnlineSubsystemSteamworks_ShowFriendsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate");

	UOnlineSubsystemSteamworks_ClearProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate");

	UOnlineSubsystemSteamworks_AddProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged");

	UOnlineSubsystemSteamworks_OnProfileDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            PictureId                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(unsigned char LocalUserNum, int PictureId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture");

	UOnlineSubsystemSteamworks_UnlockGamerPicture_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PictureId = PictureId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate");

	UOnlineSubsystemSteamworks_AddUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete");

	UOnlineSubsystemSteamworks_OnUnlockAchievementComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            AchievementId                  (CPF_Parm)
// float                          PercentComplete                (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement");

	UOnlineSubsystemSteamworks_UnlockAchievement_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;
	params.PercentComplete = PercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FName                   StatName                       (CPF_Parm)
// int                            Points                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::UpdateStat(unsigned char LocalUserNum, const struct FName& StatName, int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat");

	UOnlineSubsystemSteamworks_UpdateStat_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatName = StatName;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            DeviceID                       (CPF_Parm)
// int                            SizeNeeded                     (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsDeviceValid(int DeviceID, int SizeNeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid");

	UOnlineSubsystemSteamworks_IsDeviceValid_Params params;
	params.DeviceID = DeviceID;
	params.SizeNeeded = SizeNeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 DeviceName                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UOnlineSubsystemSteamworks::GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults");

	UOnlineSubsystemSteamworks_GetDeviceSelectionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceName != nullptr)
		*DeviceName = params.DeviceName;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate");

	UOnlineSubsystemSteamworks_ClearDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate");

	UOnlineSubsystemSteamworks_AddDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete");

	UOnlineSubsystemSteamworks_OnDeviceSelectionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            SizeNeeded                     (CPF_Parm)
// bool                           bManageStorage                 (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bManageStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI");

	UOnlineSubsystemSteamworks_ShowDeviceSelectionUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SizeNeeded = SizeNeeded;
	params.bManageStorage = bManageStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI");

	UOnlineSubsystemSteamworks_ShowMembershipMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            CategoryMask                   (CPF_OptionalParm, CPF_Parm)
// int                            OfferId                        (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI");

	UOnlineSubsystemSteamworks_ShowContentMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CategoryMask = CategoryMask;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 InviteText                     (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI");

	UOnlineSubsystemSteamworks_ShowInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteText = InviteText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI");

	UOnlineSubsystemSteamworks_ShowAchievementsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI");

	UOnlineSubsystemSteamworks_ShowMessagesUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            UniqueId                       (CPF_OptionalParm, CPF_Parm)
// struct FString                 PlayerName                     (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& UniqueId, const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI");

	UOnlineSubsystemSteamworks_ShowGamerCardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UniqueId = UniqueId;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI");

	UOnlineSubsystemSteamworks_ShowFeedbackUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            MessageIndex                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage");

	UOnlineSubsystemSteamworks_DeleteMessage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::UnmuteAll(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll");

	UOnlineSubsystemSteamworks_UnmuteAll_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           bAllowFriends                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::MuteAll(unsigned char LocalUserNum, bool bAllowFriends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll");

	UOnlineSubsystemSteamworks_MuteAll_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAllowFriends = bAllowFriends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FDouble>         Mus                            (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FDouble>         Sigmas                         (CPF_Parm, CPF_NeedCtorLink)
// struct FDouble                 OutAggregateMu                 (CPF_Parm, CPF_OutParm)
// struct FDouble                 OutAggregateSigma              (CPF_Parm, CPF_OutParm)

void UOnlineSubsystemSteamworks::CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill");

	UOnlineSubsystemSteamworks_CalcAggregateSkill_Params params;
	params.Mus = Mus;
	params.Sigmas = Sigmas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAggregateMu != nullptr)
		*OutAggregateMu = params.OutAggregateMu;
	if (OutAggregateSigma != nullptr)
		*OutAggregateSigma = params.OutAggregateSigma;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// struct FString                 ClientStatGuid                 (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid");

	UOnlineSubsystemSteamworks_RegisterStatGuid_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientStatGuid != nullptr)
		*ClientStatGuid = params.ClientStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// (FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid");

	UOnlineSubsystemSteamworks_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	UOnlineSubsystemSteamworks_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate");

	UOnlineSubsystemSteamworks_AddRegisterHostStatGuidCompleteDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete");

	UOnlineSubsystemSteamworks_OnRegisterHostStatGuidComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 HostStatGuid                   (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid");

	UOnlineSubsystemSteamworks_RegisterHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HostStatGuid != nullptr)
		*HostStatGuid = params.HostStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// (FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid");

	UOnlineSubsystemSteamworks_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate");

	UOnlineSubsystemSteamworks_ClearFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate");

	UOnlineSubsystemSteamworks_AddFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            SendingPlayer                  (CPF_Parm)
// struct FString                 SendingNick                    (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived");

	UOnlineSubsystemSteamworks_OnFriendMessageReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendingPlayer = SendingPlayer;
	params.SendingNick = SendingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages");

	UOnlineSubsystemSteamworks_GetFriendMessages_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendMessages != nullptr)
		*FriendMessages = params.FriendMessages;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate");

	UOnlineSubsystemSteamworks_AddJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete");

	UOnlineSubsystemSteamworks_OnJoinFriendGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame");

	UOnlineSubsystemSteamworks_JoinFriendGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate");

	UOnlineSubsystemSteamworks_ClearReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate");

	UOnlineSubsystemSteamworks_AddReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 InviterName                    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite");

	UOnlineSubsystemSteamworks_OnReceivedGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviterName = InviterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Friends                        (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends");

	UOnlineSubsystemSteamworks_SendGameInviteToFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friends = Friends;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm)
// struct FString                 Text                           (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend");

	UOnlineSubsystemSteamworks_SendGameInviteToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm)
// struct FString                 Message                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend");

	UOnlineSubsystemSteamworks_SendMessageToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate");

	UOnlineSubsystemSteamworks_ClearFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate");

	UOnlineSubsystemSteamworks_AddFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm)
// struct FString                 RequestingNick                 (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived");

	UOnlineSubsystemSteamworks_OnFriendInviteReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;
	params.RequestingNick = RequestingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite");

	UOnlineSubsystemSteamworks_DenyFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite");

	UOnlineSubsystemSteamworks_AcceptFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            FormerFriend                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend");

	UOnlineSubsystemSteamworks_RemoveFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FormerFriend = FormerFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate");

	UOnlineSubsystemSteamworks_AddAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete");

	UOnlineSubsystemSteamworks_OnAddFriendByNameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 FriendName                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName");

	UOnlineSubsystemSteamworks_AddFriendByName_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendName = FriendName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NewFriend                      (CPF_Parm)
// struct FString                 Message                        (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend");

	UOnlineSubsystemSteamworks_AddFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewFriend = NewFriend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  bWasCanceled                   (CPF_Parm, CPF_OutParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(unsigned char* bWasCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults");

	UOnlineSubsystemSteamworks_GetKeyboardInputResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasCanceled != nullptr)
		*bWasCanceled = params.bWasCanceled;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate");

	UOnlineSubsystemSteamworks_ClearKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate");

	UOnlineSubsystemSteamworks_AddKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete");

	UOnlineSubsystemSteamworks_OnKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HideKeyboardUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI");

	UOnlineSubsystemSteamworks_HideKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 TitleText                      (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 DescriptionText                (CPF_Parm, CPF_NeedCtorLink)
// bool                           bIsPassword                    (CPF_OptionalParm, CPF_Parm)
// bool                           bShouldValidate                (CPF_OptionalParm, CPF_Parm)
// struct FString                 DefaultText                    (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// int                            MaxResultLength                (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI");

	UOnlineSubsystemSteamworks_ShowKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            StatusId                       (CPF_Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus");

	UOnlineSubsystemSteamworks_SetOnlineStatus_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatusId = StatusId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalizedStringSettings != nullptr)
		*LocalizedStringSettings = params.LocalizedStringSettings;
	if (Properties != nullptr)
		*Properties = params.Properties;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// (FUNC_Public)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState");

	UOnlineSubsystemSteamworks_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)
// TArray<unsigned char>          FileContents                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents");

	UOnlineSubsystemSteamworks_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 FileToRead                     (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadTitleFile(const struct FString& FileToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile");

	UOnlineSubsystemSteamworks_ReadTitleFile_Params params;
	params.FileToRead = FileToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete");

	UOnlineSubsystemSteamworks_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate");

	UOnlineSubsystemSteamworks_ClearStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate");

	UOnlineSubsystemSteamworks_AddStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange");

	UOnlineSubsystemSteamworks_OnStorageDeviceChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UOnlineSubsystemSteamworks::GetLocale()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale");

	UOnlineSubsystemSteamworks_GetLocale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// (FUNC_Native, FUNC_Public)
// Parameters:
// TEnumAsByte<ENATType>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<ENATType> UOnlineSubsystemSteamworks::GetNATType()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType");

	UOnlineSubsystemSteamworks_GetNATType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange");

	UOnlineSubsystemSteamworks_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// (FUNC_Defined, FUNC_Public)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<EOnlineServerConnectionStatus> UOnlineSubsystemSteamworks::GetCurrentConnectionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus");

	UOnlineSubsystemSteamworks_GetCurrentConnectionStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// (FUNC_Public)
// Parameters:
// int                            ControllerId                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsControllerConnected(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected");

	UOnlineSubsystemSteamworks_IsControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate");

	UOnlineSubsystemSteamworks_ClearUserRestoredDelegate_Params params;
	params.UserRestoredDelegate = UserRestoredDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserRestoredDelegate(const struct FScriptDelegate& UserRestoredDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate");

	UOnlineSubsystemSteamworks_AddUserRestoredDelegate_Params params;
	params.UserRestoredDelegate = UserRestoredDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserRestored(unsigned char ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored");

	UOnlineSubsystemSteamworks_OnUserRestored_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate");

	UOnlineSubsystemSteamworks_ClearUserOrphanedDelegate_Params params;
	params.UserOrphanedDelegate = UserOrphanedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserOrphanedDelegate(const struct FScriptDelegate& UserOrphanedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate");

	UOnlineSubsystemSteamworks_AddUserOrphanedDelegate_Params params;
	params.UserOrphanedDelegate = UserOrphanedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserOrphaned(unsigned char ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned");

	UOnlineSubsystemSteamworks_OnUserOrphaned_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate");

	UOnlineSubsystemSteamworks_ClearControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate");

	UOnlineSubsystemSteamworks_AddControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            ControllerId                   (CPF_Parm)
// bool                           bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(int ControllerId, bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange");

	UOnlineSubsystemSteamworks_OnControllerChange_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// (FUNC_Native, FUNC_Public)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> NewPos                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition");

	UOnlineSubsystemSteamworks_SetNetworkNotificationPosition_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// (FUNC_Defined, FUNC_Public)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<ENetworkNotificationPosition> UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition");

	UOnlineSubsystemSteamworks_GetNetworkNotificationPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate");

	UOnlineSubsystemSteamworks_ClearExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate");

	UOnlineSubsystemSteamworks_AddExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bIsOpening                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange");

	UOnlineSubsystemSteamworks_OnExternalUIChange_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange");

	UOnlineSubsystemSteamworks_OnLinkStatusChange_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection");

	UOnlineSubsystemSteamworks_HasLinkConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// int                            UserIndex                      (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex");

	UOnlineSubsystemSteamworks_GetPlayerNicknameFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// int                            LeaderboardId                  (CPF_Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores");

	UOnlineSubsystemSteamworks_WriteOnlinePlayerScores_Params params;
	params.SessionName = SessionName;
	params.LeaderboardId = LeaderboardId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete");

	UOnlineSubsystemSteamworks_OnFlushOnlineStatsComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::FlushOnlineStats(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats");

	UOnlineSubsystemSteamworks_FlushOnlineStats_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            Player                         (CPF_Parm)
// class UOnlineStatsWrite*       StatsWrite                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats");

	UOnlineSubsystemSteamworks_WriteOnlineStats_Params params;
	params.SessionName = SessionName;
	params.Player = Player;
	params.StatsWrite = StatsWrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineSubsystemSteamworks::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats");

	UOnlineSubsystemSteamworks_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete");

	UOnlineSubsystemSteamworks_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int                            NumRows                        (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer");

	UOnlineSubsystemSteamworks_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int                            StartIndex                     (CPF_OptionalParm, CPF_Parm)
// int                            NumToRead                      (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank");

	UOnlineSubsystemSteamworks_ReadOnlineStatsByRank_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends");

	UOnlineSubsystemSteamworks_ReadOnlineStatsForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStats(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats");

	UOnlineSubsystemSteamworks_ReadOnlineStats_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject");

	UOnlineSubsystemSteamworks_SetSpeechRecognitionObject_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SpeechRecogObj = SpeechRecogObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            VocabularyId                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary");

	UOnlineSubsystemSteamworks_SelectVocabulary_Params params;
	params.LocalUserNum = LocalUserNum;
	params.VocabularyId = VocabularyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate");

	UOnlineSubsystemSteamworks_AddRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnRecognitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete");

	UOnlineSubsystemSteamworks_OnRecognitionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults");

	UOnlineSubsystemSteamworks_GetRecognitionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Words != nullptr)
		*Words = params.Words;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition");

	UOnlineSubsystemSteamworks_StopSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition");

	UOnlineSubsystemSteamworks_StartSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice");

	UOnlineSubsystemSteamworks_StopNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice");

	UOnlineSubsystemSteamworks_StartNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate");

	UOnlineSubsystemSteamworks_ClearPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate");

	UOnlineSubsystemSteamworks_AddPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FUniqueNetId            Player                         (CPF_Parm)
// bool                           bIsTalking                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange");

	UOnlineSubsystemSteamworks_OnPlayerTalkingStateChange_Params params;
	params.Player = Player;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bIsSystemWide                  (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker");

	UOnlineSubsystemSteamworks_UnmuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           bIsSystemWide                  (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker");

	UOnlineSubsystemSteamworks_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// int                            Priority                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority");

	UOnlineSubsystemSteamworks_SetRemoteTalkerPriority_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsHeadsetPresent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent");

	UOnlineSubsystemSteamworks_IsHeadsetPresent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking");

	UOnlineSubsystemSteamworks_IsRemotePlayerTalking_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking");

	UOnlineSubsystemSteamworks_IsLocalPlayerTalking_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker");

	UOnlineSubsystemSteamworks_UnregisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker");

	UOnlineSubsystemSteamworks_RegisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker");

	UOnlineSubsystemSteamworks_UnregisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker");

	UOnlineSubsystemSteamworks_RegisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            Count                          (CPF_OptionalParm, CPF_Parm)
// int                            StartingAt                     (CPF_OptionalParm, CPF_Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemSteamworks::GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList");

	UOnlineSubsystemSteamworks_GetFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete");

	UOnlineSubsystemSteamworks_OnReadFriendsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// int                            Count                          (CPF_OptionalParm, CPF_Parm)
// int                            StartingAt                     (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList");

	UOnlineSubsystemSteamworks_ReadFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_AddWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete");

	UOnlineSubsystemSteamworks_OnWritePlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int                            DeviceID                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage");

	UOnlineSubsystemSteamworks_WritePlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage");

	UOnlineSubsystemSteamworks_GetPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete");

	UOnlineSubsystemSteamworks_OnReadPlayerStorageForNetIdComplete_Params params;
	params.NetId = NetId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId");

	UOnlineSubsystemSteamworks_ReadPlayerStorageForNetId_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NetId = NetId;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete");

	UOnlineSubsystemSteamworks_OnReadPlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int                            DeviceID                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage");

	UOnlineSubsystemSteamworks_ReadPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete");

	UOnlineSubsystemSteamworks_OnWriteProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings");

	UOnlineSubsystemSteamworks_WriteProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings");

	UOnlineSubsystemSteamworks_GetProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete");

	UOnlineSubsystemSteamworks_OnReadProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings");

	UOnlineSubsystemSteamworks_ReadProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate");

	UOnlineSubsystemSteamworks_ClearFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FOnlineFriend           FriendData                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendPresence(struct FOnlineFriend* FriendData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence");

	UOnlineSubsystemSteamworks_GetFriendPresence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendData != nullptr)
		*FriendData = params.FriendData;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate");

	UOnlineSubsystemSteamworks_ClearFriendPresenceChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PresenceDelegate = PresenceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendPresenceChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& PresenceDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate");

	UOnlineSubsystemSteamworks_AddFriendPresenceChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PresenceDelegate = PresenceDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate");

	UOnlineSubsystemSteamworks_AddFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate");

	UOnlineSubsystemSteamworks_ClearMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate");

	UOnlineSubsystemSteamworks_AddMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate");

	UOnlineSubsystemSteamworks_ClearLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate");

	UOnlineSubsystemSteamworks_AddLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm, CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm, CPF_NeedCtorLink)
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// TEnumAsByte<ELoginStatus>      NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange");

	UOnlineSubsystemSteamworks_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate");

	UOnlineSubsystemSteamworks_ClearLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate");

	UOnlineSubsystemSteamworks_AddLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UserSignInCompleteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserSignInCompleteDelegate(const struct FScriptDelegate& UserSignInCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearUserSignInCompleteDelegate_Params params;
	params.UserSignInCompleteDelegate = UserSignInCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UserSignInCompleteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserSignInCompleteDelegate(const struct FScriptDelegate& UserSignInCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate");

	UOnlineSubsystemSteamworks_AddUserSignInCompleteDelegate_Params params;
	params.UserSignInCompleteDelegate = UserSignInCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearUserSwitchCompleteDelegate_Params params;
	params.UserSwitchCompleteDelegate = UserSwitchCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate
// (FUNC_Public)
// Parameters:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserSwitchCompleteDelegate(const struct FScriptDelegate& UserSwitchCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate");

	UOnlineSubsystemSteamworks_AddUserSwitchCompleteDelegate_Params params;
	params.UserSwitchCompleteDelegate = UserSwitchCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput
// (FUNC_Public)

void UOnlineSubsystemSteamworks::SetPrimaryPlayerGamepadToLastInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput");

	UOnlineSubsystemSteamworks_SetPrimaryPlayerGamepadToLastInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted");

	UOnlineSubsystemSteamworks_IsMuted_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendsQuery>   Query                          (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends");

	UOnlineSubsystemSteamworks_AreAnyFriends_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Query != nullptr)
		*Query = params.Query;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend");

	UOnlineSubsystemSteamworks_IsFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanUploadFitnessData(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData");

	UOnlineSubsystemSteamworks_CanUploadFitnessData_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanShareKinectContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent");

	UOnlineSubsystemSteamworks_CanShareKinectContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanShareWithSocialNetwork(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork");

	UOnlineSubsystemSteamworks_CanShareWithSocialNetwork_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanBrowseInternet(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet");

	UOnlineSubsystemSteamworks_CanBrowseInternet_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumVideoContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent");

	UOnlineSubsystemSteamworks_CanAccessPremiumVideoContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent");

	UOnlineSubsystemSteamworks_CanAccessPremiumContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanUseCloudStorage(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage");

	UOnlineSubsystemSteamworks_CanUseCloudStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanRecordDVRClips(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips");

	UOnlineSubsystemSteamworks_CanRecordDVRClips_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanShowPresenceInformation(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation");

	UOnlineSubsystemSteamworks_CanShowPresenceInformation_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanViewPlayerProfiles(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles");

	UOnlineSubsystemSteamworks_CanViewPlayerProfiles_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanPurchaseContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent");

	UOnlineSubsystemSteamworks_CanPurchaseContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanDownloadUserContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent");

	UOnlineSubsystemSteamworks_CanDownloadUserContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanShareUserCreatedContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent");

	UOnlineSubsystemSteamworks_CanShareUserCreatedContent_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVoice(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice");

	UOnlineSubsystemSteamworks_CanCommunicateVoice_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVideo(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo");

	UOnlineSubsystemSteamworks_CanCommunicateVideo_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// (FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText");

	UOnlineSubsystemSteamworks_CanCommunicateText_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<ECommunicationMethod> CommMethod                     (CPF_Parm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemSteamworks::CanCommunicate(unsigned char LocalUserNum, TEnumAsByte<ECommunicationMethod> CommMethod, bool bAttemptToResolve)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate");

	UOnlineSubsystemSteamworks_CanCommunicate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CommMethod = CommMethod;
	params.bAttemptToResolve = bAttemptToResolve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (CPF_Parm, CPF_OutParm)
// bool                           bAttemptToResolve              (CPF_OptionalParm, CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::CanPlayOnline(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline");

	UOnlineSubsystemSteamworks_CanPlayOnline_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname");

	UOnlineSubsystemSteamworks_GetPlayerNickname_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId");

	UOnlineSubsystemSteamworks_GetUniquePlayerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsLocalLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin");

	UOnlineSubsystemSteamworks_IsLocalLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsGuestLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin");

	UOnlineSubsystemSteamworks_IsGuestLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<ELoginStatus>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

TEnumAsByte<ELoginStatus> UOnlineSubsystemSteamworks::GetLoginStatus(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus");

	UOnlineSubsystemSteamworks_GetLoginStatus_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate");

	UOnlineSubsystemSteamworks_ClearLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate");

	UOnlineSubsystemSteamworks_AddLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLogoutCompleted(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted");

	UOnlineSubsystemSteamworks_OnLogoutCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::Logout(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout");

	UOnlineSubsystemSteamworks_Logout_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate");

	UOnlineSubsystemSteamworks_ClearLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm, CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate");

	UOnlineSubsystemSteamworks_AddLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed");

	UOnlineSubsystemSteamworks_OnLoginFailed_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin");

	UOnlineSubsystemSteamworks_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// struct FString                 LoginName                      (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Password                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWantsLocalOnly                (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login");

	UOnlineSubsystemSteamworks_Login_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginName = LoginName;
	params.Password = Password;
	params.bWantsLocalOnly = bWantsLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive
// (FUNC_Public)
// Parameters:
// bool                           Active                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetKickPlayerDialogActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive");

	UOnlineSubsystemSteamworks_SetKickPlayerDialogActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsUserSwitchActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive");

	UOnlineSubsystemSteamworks_IsUserSwitchActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser
// (FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::SetKickPreviousUser(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser");

	UOnlineSubsystemSteamworks_SetKickPreviousUser_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SupportInGameLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin");

	UOnlineSubsystemSteamworks_SupportInGameLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI
// (FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowControllerUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI");

	UOnlineSubsystemSteamworks_ShowControllerUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser
// (FUNC_Defined, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowLoginUIForOrphanedUser(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser");

	UOnlineSubsystemSteamworks_ShowLoginUIForOrphanedUser_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// (FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)
// bool                           bShowOnlineOnly                (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(unsigned char LocalUserNum, bool bShowOnlineOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI");

	UOnlineSubsystemSteamworks_ShowLoginUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bShowOnlineOnly = bShowOnlineOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

void UOnlineSubsystemSteamworks::FriendPresenceChange(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange");

	UOnlineSubsystemSteamworks_FriendPresenceChange_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange");

	UOnlineSubsystemSteamworks_OnFriendsChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange");

	UOnlineSubsystemSteamworks_OnMutingChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// (FUNC_Public, FUNC_Delegate)

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled");

	UOnlineSubsystemSteamworks_OnLoginCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginChange(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange");

	UOnlineSubsystemSteamworks_OnLoginChange_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserSignInComplete(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete");

	UOnlineSubsystemSteamworks_OnUserSignInComplete_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserSwitchComplete(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete");

	UOnlineSubsystemSteamworks_OnUserSwitchComplete_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UOnlineSubsystemSteamworks::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit");

	UOnlineSubsystemSteamworks_Exit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init");

	UOnlineSubsystemSteamworks_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::CanPlayOnlineChanged(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged");

	UOnlineSubsystemSteamworks_CanPlayOnlineChanged_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceSteamworks::ClearMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate");

	UOnlinePurchaseInterfaceSteamworks_ClearMicroTxnResponseDelegate_Params params;
	params.ResponseMicroTxnDelegate = ResponseMicroTxnDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm, CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceSteamworks::AddMicroTxnResponseDelegate(const struct FScriptDelegate& ResponseMicroTxnDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate");

	UOnlinePurchaseInterfaceSteamworks_AddMicroTxnResponseDelegate_Params params;
	params.ResponseMicroTxnDelegate = ResponseMicroTxnDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_NeedCtorLink)
// int                            Price                          (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UOnlinePurchaseInterfaceSteamworks::FormatCurrency(const struct FString& Currency, int Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency");

	UOnlinePurchaseInterfaceSteamworks_FormatCurrency_Params params;
	params.Currency = Currency;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UOnlinePurchaseInterfaceSteamworks::HandleGetAppPriceInfoComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete");

	UOnlinePurchaseInterfaceSteamworks_HandleGetAppPriceInfoComplete_Params params;
	params.Request = Request;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FUniqueNetId            PlayerID                       (CPF_Const, CPF_Parm, CPF_OutParm)
// TArray<struct FName>           AppNames                       (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlinePurchaseInterfaceSteamworks::GetAppPriceInfo(const struct FScriptDelegate& Callback, struct FUniqueNetId* PlayerID, TArray<struct FName>* AppNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo");

	UOnlinePurchaseInterfaceSteamworks_GetAppPriceInfo_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
	if (AppNames != nullptr)
		*AppNames = params.AppNames;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 AppID                          (CPF_Parm, CPF_NeedCtorLink)
// struct FName                   AppName                        (CPF_Parm, CPF_OutParm)
// bool                           bOptional                      (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlinePurchaseInterfaceSteamworks::AppIdToName(const struct FString& AppID, bool bOptional, struct FName* AppName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName");

	UOnlinePurchaseInterfaceSteamworks_AppIdToName_Params params;
	params.AppID = AppID;
	params.bOptional = bOptional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AppName != nullptr)
		*AppName = params.AppName;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FName                   AppName                        (CPF_Parm)
// struct FString                 AppID                          (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           bOptional                      (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UOnlinePurchaseInterfaceSteamworks::AppNameToId(const struct FName& AppName, bool bOptional, struct FString* AppID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId");

	UOnlinePurchaseInterfaceSteamworks_AppNameToId_Params params;
	params.AppName = AppName;
	params.bOptional = bOptional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AppID != nullptr)
		*AppID = params.AppID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool USteamWorkshopCommandlet::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init");

	USteamWorkshopCommandlet_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
