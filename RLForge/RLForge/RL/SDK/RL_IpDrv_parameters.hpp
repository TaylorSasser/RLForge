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

// Function IpDrv.AdHocDelegates.EventAdHocDestroyed
struct UAdHocDelegates_EventAdHocDestroyed_Params
{
};

// Function IpDrv.AdHocDelegates.EventAdHocFinalized
struct UAdHocDelegates_EventAdHocFinalized_Params
{
};

// Function IpDrv.AdHocDelegates.EventStationDisconnected
struct UAdHocDelegates_EventStationDisconnected_Params
{
};

// Function IpDrv.AdHocDelegates.EventStationConnected
struct UAdHocDelegates_EventStationConnected_Params
{
};

// Function IpDrv.AdHocDelegates.EventBecomeStation
struct UAdHocDelegates_EventBecomeStation_Params
{
};

// Function IpDrv.AdHocDelegates.EventAccessPointCreated
struct UAdHocDelegates_EventAccessPointCreated_Params
{
};

// Function IpDrv.AdHocDelegates.EventAdHocInitialized
struct UAdHocDelegates_EventAdHocInitialized_Params
{
};

// Function IpDrv.AdHocDelegates.EventAdHocError
struct UAdHocDelegates_EventAdHocError_Params
{
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function IpDrv.AdHocDelegates.EventAdHocOnNetworkChanged
struct UAdHocDelegates_EventAdHocOnNetworkChanged_Params
{
	TArray<struct FAdHocAccessPointInfo>               Ahapis;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.ProcessRequest
struct UHttpRequestCurl_ProcessRequest_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetHeader
struct UHttpRequestCurl_SetHeader_Params
{
	struct FString                                     HeaderName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     HeaderValue;                                              // (CPF_Parm, CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetContentAsString
struct UHttpRequestCurl_SetContentAsString_Params
{
	struct FString                                     ContentString;                                            // (CPF_Parm, CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetContent
struct UHttpRequestCurl_SetContent_Params
{
	TArray<unsigned char>                              ContentPayload;                                           // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetURL
struct UHttpRequestCurl_SetURL_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.SetVerb
struct UHttpRequestCurl_SetVerb_Params
{
	struct FString                                     Verb;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.GetVerb
struct UHttpRequestCurl_GetVerb_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetContent
struct UHttpRequestCurl_GetContent_Params
{
	TArray<unsigned char>                              Content;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetURL
struct UHttpRequestCurl_GetURL_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetContentLength
struct UHttpRequestCurl_GetContentLength_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.HttpRequestCurl.GetContentType
struct UHttpRequestCurl_GetContentType_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetURLParameter
struct UHttpRequestCurl_GetURLParameter_Params
{
	struct FString                                     ParameterName;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetHeaders
struct UHttpRequestCurl_GetHeaders_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpRequestCurl.GetHeader
struct UHttpRequestCurl_GetHeader_Params
{
	struct FString                                     HeaderName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetResponseCode
struct UHttpResponseCurl_GetResponseCode_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.HttpResponseCurl.GetContentAsString
struct UHttpResponseCurl_GetContentAsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetContent
struct UHttpResponseCurl_GetContent_Params
{
	TArray<unsigned char>                              Content;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetURL
struct UHttpResponseCurl_GetURL_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetContentLength
struct UHttpResponseCurl_GetContentLength_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.HttpResponseCurl.GetContentType
struct UHttpResponseCurl_GetContentType_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetURLParameter
struct UHttpResponseCurl_GetURLParameter_Params
{
	struct FString                                     ParameterName;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetHeaders
struct UHttpResponseCurl_GetHeaders_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.HttpResponseCurl.GetHeader
struct UHttpResponseCurl_GetHeader_Params
{
	struct FString                                     HeaderName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.ResolveFailed
struct AInternetLink_ResolveFailed_Params
{
};

// Function IpDrv.InternetLink.Resolved
struct AInternetLink_Resolved_Params
{
	struct FIpAddr                                     Addr;                                                     // (CPF_Parm)
};

// Function IpDrv.InternetLink.GetLocalIP
struct AInternetLink_GetLocalIP_Params
{
	struct FIpAddr                                     Arg;                                                      // (CPF_Parm, CPF_OutParm)
};

// Function IpDrv.InternetLink.StringToIpAddr
struct AInternetLink_StringToIpAddr_Params
{
	struct FString                                     Str;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FIpAddr                                     Addr;                                                     // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IpAddrToString
struct AInternetLink_IpAddrToString_Params
{
	struct FIpAddr                                     Arg;                                                      // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.GetLastError
struct AInternetLink_GetLastError_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.InternetLink.Resolve
struct AInternetLink_Resolve_Params
{
	struct FString                                     Domain;                                                   // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.ParseURL
struct AInternetLink_ParseURL_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     Addr;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                PortNum;                                                  // (CPF_Parm, CPF_OutParm)
	struct FString                                     LevelName;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     EntryName;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IsDataPending
struct AInternetLink_IsDataPending_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReceivedBinary
struct ATcpLink_ReceivedBinary_Params
{
	int                                                Count;                                                    // (CPF_Parm)
	unsigned char                                      B;                                                        // (CPF_Parm)
};

// Function IpDrv.TcpLink.ReceivedLine
struct ATcpLink_ReceivedLine_Params
{
	struct FString                                     Line;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.ReceivedText
struct ATcpLink_ReceivedText_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.Closed
struct ATcpLink_Closed_Params
{
};

// Function IpDrv.TcpLink.Opened
struct ATcpLink_Opened_Params
{
};

// Function IpDrv.TcpLink.Accepted
struct ATcpLink_Accepted_Params
{
};

// Function IpDrv.TcpLink.ReadBinary
struct ATcpLink_ReadBinary_Params
{
	int                                                Count;                                                    // (CPF_Parm)
	unsigned char                                      B;                                                        // (CPF_Parm, CPF_OutParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReadText
struct ATcpLink_ReadText_Params
{
	struct FString                                     Str;                                                      // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendBinary
struct ATcpLink_SendBinary_Params
{
	int                                                Count;                                                    // (CPF_Parm)
	unsigned char                                      B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendText
struct ATcpLink_SendText_Params
{
	struct FString                                     Str;                                                      // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TcpLink.IsConnected
struct ATcpLink_IsConnected_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Close
struct ATcpLink_Close_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Open
struct ATcpLink_Open_Params
{
	struct FIpAddr                                     Addr;                                                     // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Listen
struct ATcpLink_Listen_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TcpLink.BindPort
struct ATcpLink_BindPort_Params
{
	int                                                PortNum;                                                  // (CPF_OptionalParm, CPF_Parm)
	bool                                               bUseNextAvailable;                                        // (CPF_OptionalParm, CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpServiceBase.GetUserAuthURL
struct UMcpServiceBase_GetUserAuthURL_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.GetAppAccessURL
struct UMcpServiceBase_GetAppAccessURL_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.GetBaseURL
struct UMcpServiceBase_GetBaseURL_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpServiceBase.Init
struct UMcpServiceBase_Init_Params
{
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
struct UOnlineEventsInterfaceMcp_UploadMatchmakingStats_Params
{
	struct FUniqueNetId                                UniqueId;                                                 // (CPF_Parm)
	class UOnlineMatchmakingStats*                     MMStats;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
struct UOnlineEventsInterfaceMcp_UpdatePlaylistPopulation_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                NumPlayers;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
struct UOnlineEventsInterfaceMcp_UploadGameplayEventsData_Params
{
	struct FUniqueNetId                                UniqueId;                                                 // (CPF_Parm)
	TArray<unsigned char>                              Payload;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
struct UOnlineEventsInterfaceMcp_UploadPlayerData_Params
{
	struct FUniqueNetId                                UniqueId;                                                 // (CPF_Parm)
	struct FString                                     PlayerNick;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (CPF_Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
struct UOnlineNewsInterfaceMcp_GetNews_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EOnlineNewsType>                       NewsType;                                                 // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
struct UOnlineNewsInterfaceMcp_ClearReadNewsCompletedDelegate_Params
{
	struct FScriptDelegate                             ReadGameNewsDelegate;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
struct UOnlineNewsInterfaceMcp_AddReadNewsCompletedDelegate_Params
{
	struct FScriptDelegate                             ReadNewsDelegate;                                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
struct UOnlineNewsInterfaceMcp_OnReadNewsCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	TEnumAsByte<EOnlineNewsType>                       NewsType;                                                 // (CPF_Parm)
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
struct UOnlineNewsInterfaceMcp_ReadNews_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EOnlineNewsType>                       NewsType;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetUrlForFile
struct UOnlineTitleFileDownloadBase_GetUrlForFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearRequestTitleFileListCompleteDelegate
struct UOnlineTitleFileDownloadBase_ClearRequestTitleFileListCompleteDelegate_Params
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddRequestTitleFileListCompleteDelegate
struct UOnlineTitleFileDownloadBase_AddRequestTitleFileListCompleteDelegate_Params
{
	struct FScriptDelegate                             RequestTitleFileListDelegate;                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnRequestTitleFileListComplete
struct UOnlineTitleFileDownloadBase_OnRequestTitleFileListComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	TArray<struct FString>                             ResultStr;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.RequestTitleFileList
struct UOnlineTitleFileDownloadBase_RequestTitleFileList_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFile
struct UOnlineTitleFileDownloadBase_ClearDownloadedFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearDownloadedFiles
struct UOnlineTitleFileDownloadBase_ClearDownloadedFiles_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileState
struct UOnlineTitleFileDownloadBase_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.GetTitleFileContents
struct UOnlineTitleFileDownloadBase_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ClearReadTitleFileCompleteDelegate
struct UOnlineTitleFileDownloadBase_ClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.AddReadTitleFileCompleteDelegate
struct UOnlineTitleFileDownloadBase_AddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadBase.ReadTitleFile
struct UOnlineTitleFileDownloadBase_ReadTitleFile_Params
{
	struct FString                                     FileToRead;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EOnlineFileType>                       FileType;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadBase.OnReadTitleFileComplete
struct UOnlineTitleFileDownloadBase_OnReadTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
struct UOnlineTitleFileDownloadMcp_ClearDownloadedFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
struct UOnlineTitleFileDownloadMcp_ClearDownloadedFiles_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
struct UOnlineTitleFileDownloadMcp_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
struct UOnlineTitleFileDownloadMcp_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
struct UOnlineTitleFileDownloadMcp_ReadTitleFile_Params
{
	struct FString                                     FileToRead;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EOnlineFileType>                       FileType;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetUrlForFile
struct UOnlineTitleFileDownloadWeb_GetUrlForFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileListReceived
struct UOnlineTitleFileDownloadWeb_OnFileListReceived_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bDidSucceed;                                              // (CPF_Parm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.RequestTitleFileList
struct UOnlineTitleFileDownloadWeb_RequestTitleFileList_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFile
struct UOnlineTitleFileDownloadWeb_ClearDownloadedFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ClearDownloadedFiles
struct UOnlineTitleFileDownloadWeb_ClearDownloadedFiles_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileState
struct UOnlineTitleFileDownloadWeb_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.GetTitleFileContents
struct UOnlineTitleFileDownloadWeb_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.TriggerDelegates
struct UOnlineTitleFileDownloadWeb_TriggerDelegates_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FileRead;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.OnFileDownloadComplete
struct UOnlineTitleFileDownloadWeb_OnFileDownloadComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bDidSucceed;                                              // (CPF_Parm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.ReadTitleFile
struct UOnlineTitleFileDownloadWeb_ReadTitleFile_Params
{
	struct FString                                     FileToRead;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EOnlineFileType>                       FileType;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadWeb.UncompressTitleFileContents
struct UOnlineTitleFileDownloadWeb_UncompressTitleFileContents_Params
{
	TEnumAsByte<EMcpFileCompressionType>               FileCompressionType;                                      // (CPF_Parm)
	TArray<unsigned char>                              CompressedFileContents;                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<unsigned char>                              UncompressedFileContents;                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFile
struct UTitleFileDownloadCache_DeleteTitleFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.DeleteTitleFiles
struct UTitleFileDownloadCache_DeleteTitleFiles_Params
{
	float                                              MaxAgeSeconds;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFile
struct UTitleFileDownloadCache_ClearCachedFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearCachedFiles
struct UTitleFileDownloadCache_ClearCachedFiles_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileLogicalName
struct UTitleFileDownloadCache_GetTitleFileLogicalName_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileHash
struct UTitleFileDownloadCache_GetTitleFileHash_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileState
struct UTitleFileDownloadCache_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.GetTitleFileContents
struct UTitleFileDownloadCache_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearSaveTitleFileCompleteDelegate
struct UTitleFileDownloadCache_ClearSaveTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             SaveCompleteDelegate;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.AddSaveTitleFileCompleteDelegate
struct UTitleFileDownloadCache_AddSaveTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             SaveCompleteDelegate;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnSaveTitleFileComplete
struct UTitleFileDownloadCache_OnSaveTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.SaveTitleFile
struct UTitleFileDownloadCache_SaveTitleFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     LogicalName;                                              // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.TitleFileDownloadCache.ClearLoadTitleFileCompleteDelegate
struct UTitleFileDownloadCache_ClearLoadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             LoadCompleteDelegate;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.AddLoadTitleFileCompleteDelegate
struct UTitleFileDownloadCache_AddLoadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             LoadCompleteDelegate;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.OnLoadTitleFileComplete
struct UTitleFileDownloadCache_OnLoadTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.TitleFileDownloadCache.LoadTitleFile
struct UTitleFileDownloadCache_LoadTitleFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.CacheMessageContents
struct UMcpMessageBase_CacheMessageContents_Params
{
	TArray<unsigned char>                              MessageContents;                                          // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.CacheMessage
struct UMcpMessageBase_CacheMessage_Params
{
	struct FMcpMessage                                 Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.GetMessageContents
struct UMcpMessageBase_GetMessageContents_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              MessageContents;                                          // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpMessageBase.OnQueryMessageContentsComplete
struct UMcpMessageBase_OnQueryMessageContentsComplete_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.QueryMessageContents
struct UMcpMessageBase_QueryMessageContents_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.GetMessageList
struct UMcpMessageBase_GetMessageList_Params
{
	struct FString                                     ToUniqueUserId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpMessageList                             MessageList;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnQueryMessagesComplete
struct UMcpMessageBase_OnQueryMessagesComplete_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.QueryMessages
struct UMcpMessageBase_QueryMessages_Params
{
	struct FString                                     ToUniqueUserId;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnDeleteMessageComplete
struct UMcpMessageBase_OnDeleteMessageComplete_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.DeleteMessage
struct UMcpMessageBase_DeleteMessage_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.OnCreateMessageComplete
struct UMcpMessageBase_OnCreateMessageComplete_Params
{
	struct FMcpMessage                                 Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.CreateMessage
struct UMcpMessageBase_CreateMessage_Params
{
	TArray<struct FString>                             ToUniqueUserIds;                                          // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     FromUniqueUserId;                                         // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     FromFriendlyName;                                         // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     MessageType;                                              // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     PushMessage;                                              // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ValidUntil;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              MessageContents;                                          // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageBase.CreateInstance
struct UMcpMessageBase_CreateInstance_Params
{
	class UMcpMessageBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpMessageManager.CacheMessageContents
struct UMcpMessageManager_CacheMessageContents_Params
{
	TArray<unsigned char>                              MessageContents;                                          // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpMessageManager.GetMessageById
struct UMcpMessageManager_GetMessageById_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpMessage                                 Message;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpMessageManager.CacheMessage
struct UMcpMessageManager_CacheMessage_Params
{
	struct FMcpMessage                                 Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.GetMessageContents
struct UMcpMessageManager_GetMessageContents_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              MessageContents;                                          // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpMessageManager.OnQueryMessageContentsRequestComplete
struct UMcpMessageManager_OnQueryMessageContentsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpMessageManager.QueryMessageContents
struct UMcpMessageManager_QueryMessageContents_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.GetMessageList
struct UMcpMessageManager_GetMessageList_Params
{
	struct FString                                     ToUniqueUserId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpMessageList                             MessageList;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.OnQueryMessagesRequestComplete
struct UMcpMessageManager_OnQueryMessagesRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpMessageManager.QueryMessages
struct UMcpMessageManager_QueryMessages_Params
{
	struct FString                                     ToUniqueUserId;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.OnDeleteMessageRequestComplete
struct UMcpMessageManager_OnDeleteMessageRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpMessageManager.DeleteMessage
struct UMcpMessageManager_DeleteMessage_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.OnCreateMessageRequestComplete
struct UMcpMessageManager_OnCreateMessageRequestComplete_Params
{
	class UHttpRequestInterface*                       CreateMessageRequest;                                     // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpMessageManager.CreateMessage
struct UMcpMessageManager_CreateMessage_Params
{
	TArray<struct FString>                             ToUniqueUserIds;                                          // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     FromUniqueUserId;                                         // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     FromFriendlyName;                                         // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     MessageType;                                              // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     PushMessage;                                              // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ValidUntil;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              MessageContents;                                          // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.FinishedAsyncUncompression
struct UMcpMessageManager_FinishedAsyncUncompression_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	TArray<unsigned char>                              UncompressedMessageContents;                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpMessageManager.StartAsyncUncompression
struct UMcpMessageManager_StartAsyncUncompression_Params
{
	struct FString                                     MessageId;                                                // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EMcpMessageCompressionType>            MessageCompressionType;                                   // (CPF_Parm)
	TArray<unsigned char>                              MessageContent;                                           // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpMessageManager.StartAsyncCompression
struct UMcpMessageManager_StartAsyncCompression_Params
{
	TEnumAsByte<EMcpMessageCompressionType>            MessageCompressionType;                                   // (CPF_Parm)
	TArray<unsigned char>                              MessageContent;                                           // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserCloudFileDownload.ClearAllDelegates
struct UMcpUserCloudFileDownload_ClearAllDelegates_Params
{
};

// Function IpDrv.McpUserCloudFileDownload.ClearDeleteUserFileCompleteDelegate
struct UMcpUserCloudFileDownload_ClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.AddDeleteUserFileCompleteDelegate
struct UMcpUserCloudFileDownload_AddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallDeleteUserFileCompleteDelegates
struct UMcpUserCloudFileDownload_CallDeleteUserFileCompleteDelegates_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnDeleteUserFileComplete
struct UMcpUserCloudFileDownload_OnDeleteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestDeleteUserFileComplete
struct UMcpUserCloudFileDownload_OnHTTPRequestDeleteUserFileComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserCloudFileDownload.DeleteUserFile
struct UMcpUserCloudFileDownload_DeleteUserFile_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bShouldCloudDelete;                                       // (CPF_Parm)
	bool                                               bShouldLocallyDelete;                                     // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserCloudFileDownload.ClearWriteUserFileCompleteDelegate
struct UMcpUserCloudFileDownload_ClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.AddWriteUserFileCompleteDelegate
struct UMcpUserCloudFileDownload_AddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallWriteUserFileCompleteDelegates
struct UMcpUserCloudFileDownload_CallWriteUserFileCompleteDelegates_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnWriteUserFileComplete
struct UMcpUserCloudFileDownload_OnWriteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestWriteUserFileComplete
struct UMcpUserCloudFileDownload_OnHTTPRequestWriteUserFileComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileIndexForRequest
struct UMcpUserCloudFileDownload_GetUserFileIndexForRequest_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	int                                                UserIdx;                                                  // (CPF_Parm, CPF_OutParm)
	int                                                FileIdx;                                                  // (CPF_Parm, CPF_OutParm)
};

// Function IpDrv.McpUserCloudFileDownload.WriteUserFile
struct UMcpUserCloudFileDownload_WriteUserFile_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserCloudFileDownload.ClearReadUserFileCompleteDelegate
struct UMcpUserCloudFileDownload_ClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.AddReadUserFileCompleteDelegate
struct UMcpUserCloudFileDownload_AddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallReadUserFileCompleteDelegates
struct UMcpUserCloudFileDownload_CallReadUserFileCompleteDelegates_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnReadUserFileComplete
struct UMcpUserCloudFileDownload_OnReadUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestReadUserFileComplete
struct UMcpUserCloudFileDownload_OnHTTPRequestReadUserFileComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserCloudFileDownload.ReadUserFile
struct UMcpUserCloudFileDownload_ReadUserFile_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserCloudFileDownload.GetUserFileList
struct UMcpUserCloudFileDownload_GetUserFileList_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.ClearEnumerateUserFileCompleteDelegate
struct UMcpUserCloudFileDownload_ClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.AddEnumerateUserFileCompleteDelegate
struct UMcpUserCloudFileDownload_AddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.CallEnumerateUserFileCompleteDelegates
struct UMcpUserCloudFileDownload_CallEnumerateUserFileCompleteDelegates_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnEnumerateUserFilesComplete
struct UMcpUserCloudFileDownload_OnEnumerateUserFilesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.OnHTTPRequestEnumerateUserFilesComplete
struct UMcpUserCloudFileDownload_OnHTTPRequestEnumerateUserFilesComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserCloudFileDownload.EnumerateUserFiles
struct UMcpUserCloudFileDownload_EnumerateUserFiles_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserCloudFileDownload.ClearFile
struct UMcpUserCloudFileDownload_ClearFile_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserCloudFileDownload.ClearFiles
struct UMcpUserCloudFileDownload_ClearFiles_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserCloudFileDownload.GetFileContents
struct UMcpUserCloudFileDownload_GetFileContents_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeacon.DestroyBeacon
struct UMeshBeacon_DestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
struct UMeshBeaconClient_SendHostNewGameSessionResponse_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
struct UMeshBeaconClient_OnCreateNewSessionRequestReceived_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	TArray<struct FPlayerMember>                       Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
struct UMeshBeaconClient_OnTravelRequestReceived_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
struct UMeshBeaconClient_OnReceivedBandwidthTestResults_Params
{
	TEnumAsByte<EMeshBeaconBandwidthTestType>          TestType;                                                 // (CPF_Parm)
	TEnumAsByte<EMeshBeaconBandwidthTestResult>        TestResult;                                               // (CPF_Parm)
	struct FConnectionBandwidthStats                   BandwidthStats;                                           // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
struct UMeshBeaconClient_OnReceivedBandwidthTestRequest_Params
{
	TEnumAsByte<EMeshBeaconBandwidthTestType>          TestType;                                                 // (CPF_Parm)
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
struct UMeshBeaconClient_OnConnectionRequestResult_Params
{
	TEnumAsByte<EMeshBeaconConnectionResult>           ConnectionResult;                                         // (CPF_Parm)
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
struct UMeshBeaconClient_BeginBandwidthTest_Params
{
	TEnumAsByte<EMeshBeaconBandwidthTestType>          TestType;                                                 // (CPF_Parm)
	int                                                TestBufferSize;                                           // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.RequestConnection
struct UMeshBeaconClient_RequestConnection_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                              // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FClientConnectionRequest                    ClientRequest;                                            // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               bRegisterSecureAddress;                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
struct UMeshBeaconClient_DestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
struct UMeshBeaconHost_OnReceivedClientCreateNewSessionResult_Params
{
	bool                                               bSucceeded;                                               // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
struct UMeshBeaconHost_RequestClientCreateNewSession_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	TArray<struct FPlayerMember>                       Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
struct UMeshBeaconHost_TellClientsToTravel_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
struct UMeshBeaconHost_OnAllPendingPlayersConnected_Params
{
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
struct UMeshBeaconHost_AllPlayersConnected_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
struct UMeshBeaconHost_GetConnectionIndexForPlayer_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
struct UMeshBeaconHost_SetPendingPlayerConnections_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
struct UMeshBeaconHost_OnFinishedBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (CPF_Parm)
	TEnumAsByte<EMeshBeaconBandwidthTestType>          TestType;                                                 // (CPF_Parm)
	TEnumAsByte<EMeshBeaconBandwidthTestResult>        TestResult;                                               // (CPF_Parm)
	struct FConnectionBandwidthStats                   BandwidthStats;                                           // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
struct UMeshBeaconHost_OnStartedBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (CPF_Parm)
	TEnumAsByte<EMeshBeaconBandwidthTestType>          TestType;                                                 // (CPF_Parm)
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
struct UMeshBeaconHost_OnReceivedClientConnectionRequest_Params
{
	struct FClientMeshBeaconConnection                 NewClientConnection;                                      // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
struct UMeshBeaconHost_AllowBandwidthTesting_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm)
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
struct UMeshBeaconHost_CancelPendingBandwidthTests_Params
{
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
struct UMeshBeaconHost_HasPendingBandwidthTest_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
struct UMeshBeaconHost_CancelInProgressBandwidthTests_Params
{
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
struct UMeshBeaconHost_HasInProgressBandwidthTest_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
struct UMeshBeaconHost_RequestClientBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (CPF_Parm)
	TEnumAsByte<EMeshBeaconBandwidthTestType>          TestType;                                                 // (CPF_Parm)
	int                                                TestBufferSize;                                           // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
struct UMeshBeaconHost_DestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
struct UMeshBeaconHost_InitHostBeacon_Params
{
	struct FUniqueNetId                                InOwningPlayerId;                                         // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
struct UOnlineSubsystemCommonImpl_GetRegisteredPlayers_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	TArray<struct FUniqueNetId>                        OutRegisteredPlayers;                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
struct UOnlineSubsystemCommonImpl_IsPlayerInSession_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
struct UOnlineSubsystemCommonImpl_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnPlayerCountryRetrieved
struct UOnlineSubsystemCommonImpl_OnPlayerCountryRetrieved_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     Country;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.OnSanitizeStringComplete
struct UOnlineSubsystemCommonImpl_OnSanitizeStringComplete_Params
{
	struct FWordFilterResult                           Result;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAccountAuthorization
struct UOnlineAuthInterfaceImpl_RequestAccountAuthorization_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAccountAuthorization
struct UOnlineAuthInterfaceImpl_OnAccountAuthorization_Params
{
	struct FString                                     Token;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnLoginChanged
struct UOnlineAuthInterfaceImpl_OnLoginChanged_Params
{
	bool                                               bLoggedIn;                                                // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestMtxCode
struct UOnlineAuthInterfaceImpl_RequestMtxCode_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequestAuthTicket
struct UOnlineAuthInterfaceImpl_RequestAuthTicket_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.RequiresAuthTicket
struct UOnlineAuthInterfaceImpl_RequiresAuthTicket_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnReceivedAuthCode
struct UOnlineAuthInterfaceImpl_OnReceivedAuthCode_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     Code;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerAddr
struct UOnlineAuthInterfaceImpl_GetServerAddr_Params
{
	struct FIpAddr                                     OutServerIP;                                              // (CPF_Parm, CPF_OutParm)
	int                                                OutServerPort;                                            // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.GetServerUniqueId
struct UOnlineAuthInterfaceImpl_GetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
struct UOnlineAuthInterfaceImpl_FindLocalServerAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
	struct FLocalAuthSession                           OutSessionInfo;                                           // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
struct UOnlineAuthInterfaceImpl_FindServerAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                         // (CPF_Parm)
	struct FAuthSession                                OutSessionInfo;                                           // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
struct UOnlineAuthInterfaceImpl_FindLocalClientAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                         // (CPF_Parm)
	struct FLocalAuthSession                           OutSessionInfo;                                           // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
struct UOnlineAuthInterfaceImpl_FindClientAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
	struct FAuthSession                                OutSessionInfo;                                           // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalServerAuthSessions
struct UOnlineAuthInterfaceImpl_AllLocalServerAuthSessions_Params
{
	struct FLocalAuthSession                           OutSessionInfo;                                           // (CPF_Parm, CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllServerAuthSessions
struct UOnlineAuthInterfaceImpl_AllServerAuthSessions_Params
{
	struct FAuthSession                                OutSessionInfo;                                           // (CPF_Parm, CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllLocalClientAuthSessions
struct UOnlineAuthInterfaceImpl_AllLocalClientAuthSessions_Params
{
	struct FLocalAuthSession                           OutSessionInfo;                                           // (CPF_Parm, CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AllClientAuthSessions
struct UOnlineAuthInterfaceImpl_AllClientAuthSessions_Params
{
	struct FAuthSession                                OutSessionInfo;                                           // (CPF_Parm, CPF_OutParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteServerAuthSessions
struct UOnlineAuthInterfaceImpl_EndAllRemoteServerAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalServerAuthSessions
struct UOnlineAuthInterfaceImpl_EndAllLocalServerAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteServerAuthSession
struct UOnlineAuthInterfaceImpl_EndRemoteServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ServerIP;                                                 // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalServerAuthSession
struct UOnlineAuthInterfaceImpl_EndLocalServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ClientIP;                                                 // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyServerAuthSession
struct UOnlineAuthInterfaceImpl_VerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ServerIP;                                                 // (CPF_Parm)
	int                                                AuthTicketUID;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateServerAuthSession
struct UOnlineAuthInterfaceImpl_CreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ClientIP;                                                 // (CPF_Parm)
	int                                                ClientPort;                                               // (CPF_Parm)
	int                                                OutAuthTicketUID;                                         // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllRemoteClientAuthSessions
struct UOnlineAuthInterfaceImpl_EndAllRemoteClientAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndAllLocalClientAuthSessions
struct UOnlineAuthInterfaceImpl_EndAllLocalClientAuthSessions_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndRemoteClientAuthSession
struct UOnlineAuthInterfaceImpl_EndRemoteClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ClientIP;                                                 // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.EndLocalClientAuthSession
struct UOnlineAuthInterfaceImpl_EndLocalClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ServerIP;                                                 // (CPF_Parm)
	int                                                ServerPort;                                               // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.VerifyClientAuthSession
struct UOnlineAuthInterfaceImpl_VerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ClientIP;                                                 // (CPF_Parm)
	int                                                ClientPort;                                               // (CPF_Parm)
	int                                                AuthTicketUID;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.CreateClientAuthSession
struct UOnlineAuthInterfaceImpl_CreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ServerIP;                                                 // (CPF_Parm)
	int                                                ServerPort;                                               // (CPF_Parm)
	bool                                               bSecure;                                                  // (CPF_Parm)
	int                                                OutAuthTicketUID;                                         // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRetryRequest
struct UOnlineAuthInterfaceImpl_SendServerAuthRetryRequest_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthEndSessionRequest
struct UOnlineAuthInterfaceImpl_SendClientAuthEndSessionRequest_Params
{
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthResponse
struct UOnlineAuthInterfaceImpl_SendServerAuthResponse_Params
{
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
	int                                                AuthTicketUID;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthResponse
struct UOnlineAuthInterfaceImpl_SendClientAuthResponse_Params
{
	int                                                AuthTicketUID;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendServerAuthRequest
struct UOnlineAuthInterfaceImpl_SendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendClientAuthRequest
struct UOnlineAuthInterfaceImpl_SendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
struct UOnlineAuthInterfaceImpl_ClearServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
struct UOnlineAuthInterfaceImpl_AddServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerConnectionClose
struct UOnlineAuthInterfaceImpl_OnServerConnectionClose_Params
{
	class UPlayer*                                     ServerConnection;                                         // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
struct UOnlineAuthInterfaceImpl_ClearClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
struct UOnlineAuthInterfaceImpl_AddClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientConnectionClose
struct UOnlineAuthInterfaceImpl_OnClientConnectionClose_Params
{
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRetryRequestDelegate
struct UOnlineAuthInterfaceImpl_ClearServerAuthRetryRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRetryRequestDelegate
struct UOnlineAuthInterfaceImpl_AddServerAuthRetryRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRetryRequestDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRetryRequest
struct UOnlineAuthInterfaceImpl_OnServerAuthRetryRequest_Params
{
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthEndSessionRequestDelegate
struct UOnlineAuthInterfaceImpl_ClearClientAuthEndSessionRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthEndSessionRequestDelegate
struct UOnlineAuthInterfaceImpl_AddClientAuthEndSessionRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthEndSessionRequestDelegate;                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthEndSessionRequest
struct UOnlineAuthInterfaceImpl_OnClientAuthEndSessionRequest_Params
{
	class UPlayer*                                     ServerConnection;                                         // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthCompleteDelegate
struct UOnlineAuthInterfaceImpl_ClearServerAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthCompleteDelegate
struct UOnlineAuthInterfaceImpl_AddServerAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ServerAuthCompleteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthComplete
struct UOnlineAuthInterfaceImpl_OnServerAuthComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	class UPlayer*                                     ServerConnection;                                         // (CPF_Parm)
	struct FString                                     ExtraInfo;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthCompleteDelegate
struct UOnlineAuthInterfaceImpl_ClearClientAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthCompleteDelegate
struct UOnlineAuthInterfaceImpl_AddClientAuthCompleteDelegate_Params
{
	struct FScriptDelegate                             ClientAuthCompleteDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthComplete
struct UOnlineAuthInterfaceImpl_OnClientAuthComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
	struct FString                                     ExtraInfo;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthResponseDelegate
struct UOnlineAuthInterfaceImpl_ClearServerAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthResponseDelegate
struct UOnlineAuthInterfaceImpl_AddServerAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ServerAuthResponseDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthResponse
struct UOnlineAuthInterfaceImpl_OnServerAuthResponse_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ServerIP;                                                 // (CPF_Parm)
	int                                                AuthTicketUID;                                            // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthResponseDelegate
struct UOnlineAuthInterfaceImpl_ClearClientAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthResponseDelegate
struct UOnlineAuthInterfaceImpl_AddClientAuthResponseDelegate_Params
{
	struct FScriptDelegate                             ClientAuthResponseDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthResponse
struct UOnlineAuthInterfaceImpl_OnClientAuthResponse_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ClientIP;                                                 // (CPF_Parm)
	int                                                AuthTicketUID;                                            // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerAuthRequestDelegate
struct UOnlineAuthInterfaceImpl_ClearServerAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerAuthRequestDelegate
struct UOnlineAuthInterfaceImpl_AddServerAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ServerAuthRequestDelegate;                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnServerAuthRequest
struct UOnlineAuthInterfaceImpl_OnServerAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                         // (CPF_Parm)
	struct FUniqueNetId                                ClientUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ClientIP;                                                 // (CPF_Parm)
	int                                                ClientPort;                                               // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientAuthRequestDelegate
struct UOnlineAuthInterfaceImpl_ClearClientAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientAuthRequestDelegate
struct UOnlineAuthInterfaceImpl_AddClientAuthRequestDelegate_Params
{
	struct FScriptDelegate                             ClientAuthRequestDelegate;                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnClientAuthRequest
struct UOnlineAuthInterfaceImpl_OnClientAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Parm)
	struct FIpAddr                                     ServerIP;                                                 // (CPF_Parm)
	int                                                ServerPort;                                               // (CPF_Parm)
	bool                                               bSecure;                                                  // (CPF_Parm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
struct UOnlineAuthInterfaceImpl_AddAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.OnAuthReady
struct UOnlineAuthInterfaceImpl_OnAuthReady_Params
{
};

// Function IpDrv.OnlineAuthInterfaceImpl.IsReady
struct UOnlineAuthInterfaceImpl_IsReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGamePlayersChangedDelegate
struct UOnlineGameInterfaceImpl_ClearGamePlayersChangedDelegate_Params
{
	struct FScriptDelegate                             GamePlayersChangedDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGamePlayersChangedDelegate
struct UOnlineGameInterfaceImpl_AddGamePlayersChangedDelegate_Params
{
	struct FScriptDelegate                             GamePlayersChangedDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGamePlayersChanged
struct UOnlineGameInterfaceImpl_OnGamePlayersChanged_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.SetFriendJoinLocation
struct UOnlineGameInterfaceImpl_SetFriendJoinLocation_Params
{
	struct FUniqueNetId                                JoinablePlayerID;                                         // (CPF_Parm)
	struct FString                                     ServerAddress;                                            // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<ELobbyVisibility>                      Visibility;                                               // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearReportMatchmakingInfoDelegate
struct UOnlineGameInterfaceImpl_ClearReportMatchmakingInfoDelegate_Params
{
	struct FScriptDelegate                             OldDelegate;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddReportMatchmakingInfoDelegate
struct UOnlineGameInterfaceImpl_AddReportMatchmakingInfoDelegate_Params
{
	struct FScriptDelegate                             NewDelegate;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.EventReportMatchmakingInfo
struct UOnlineGameInterfaceImpl_EventReportMatchmakingInfo_Params
{
	struct FString                                     NewInfo;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
struct UOnlineGameInterfaceImpl_ClearQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
struct UOnlineGameInterfaceImpl_AddQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
struct UOnlineGameInterfaceImpl_OnQosStatusChanged_Params
{
	int                                                NumComplete;                                              // (CPF_Parm)
	int                                                NumTotal;                                                 // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
struct UOnlineGameInterfaceImpl_BindPlatformSpecificSessionToSearch_Params
{
	unsigned char                                      SearchingPlayerNum;                                       // (CPF_Parm)
	class UOnlineGameSearch*                           SearchSettings;                                           // (CPF_Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
struct UOnlineGameInterfaceImpl_ReadPlatformSpecificSessionInfoBySessionName_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
struct UOnlineGameInterfaceImpl_ReadPlatformSpecificSessionInfo_Params
{
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (CPF_Const, CPF_Parm, CPF_OutParm)
	unsigned char                                      PlatformSpecificInfo;                                     // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
struct UOnlineGameInterfaceImpl_QueryNonAdvertisedData_Params
{
	int                                                StartAt;                                                  // (CPF_Parm)
	int                                                NumberToQuery;                                            // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnJoinMigratedOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
struct UOnlineGameInterfaceImpl_JoinMigratedOnlineGame_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnMigrateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
struct UOnlineGameInterfaceImpl_MigrateOnlineGame_Params
{
	unsigned char                                      HostingPlayerNum;                                         // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingGameCompleteDelegate;               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
struct UOnlineGameInterfaceImpl_AddRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingCompleteDelegate;                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
struct UOnlineGameInterfaceImpl_OnRecalculateSkillRatingComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
struct UOnlineGameInterfaceImpl_RecalculateSkillRating_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
struct UOnlineGameInterfaceImpl_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
struct UOnlineGameInterfaceImpl_ClearGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
struct UOnlineGameInterfaceImpl_AddGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
struct UOnlineGameInterfaceImpl_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                             // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ErrorString;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
struct UOnlineGameInterfaceImpl_GetArbitratedPlayers_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	TArray<struct FOnlineArbitrationRegistrant>        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
struct UOnlineGameInterfaceImpl_AddArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
struct UOnlineGameInterfaceImpl_OnArbitrationRegistrationComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
struct UOnlineGameInterfaceImpl_RegisterForArbitration_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnEndOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
struct UOnlineGameInterfaceImpl_EndOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnStartOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
struct UOnlineGameInterfaceImpl_StartOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceImpl_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
struct UOnlineGameInterfaceImpl_OnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
struct UOnlineGameInterfaceImpl_UnregisterPlayers_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
struct UOnlineGameInterfaceImpl_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceImpl_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
struct UOnlineGameInterfaceImpl_OnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
struct UOnlineGameInterfaceImpl_RegisterPlayers_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
struct UOnlineGameInterfaceImpl_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bWasInvited;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
struct UOnlineGameInterfaceImpl_GetResolvedConnectString_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FString                                     ConnectInfo;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnJoinOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
struct UOnlineGameInterfaceImpl_JoinOnlineGame_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
struct UOnlineGameInterfaceImpl_FreeSearchResults_Params
{
	class UOnlineGameSearch*                           Search;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
struct UOnlineGameInterfaceImpl_AddCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
struct UOnlineGameInterfaceImpl_OnCancelFindOnlineGamesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
struct UOnlineGameInterfaceImpl_CancelFindOnlineGames_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
struct UOnlineGameInterfaceImpl_AddFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
struct UOnlineGameInterfaceImpl_FindOnlineGames_Params
{
	unsigned char                                      SearchingPlayerNum;                                       // (CPF_Parm)
	class UOnlineGameSearch*                           SearchSettings;                                           // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnDestroyOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
struct UOnlineGameInterfaceImpl_DestroyOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnUpdateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
struct UOnlineGameInterfaceImpl_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                      // (CPF_Parm)
	bool                                               bShouldRefreshOnlineData;                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnCreateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
struct UOnlineGameInterfaceImpl_CreateOnlineGame_Params
{
	unsigned char                                      HostingPlayerNum;                                         // (CPF_Parm)
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UOnlineGameSettings*                         NewGameSettings;                                          // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
struct UOnlineGameInterfaceImpl_GetGameSearch_Params
{
	class UOnlineGameSearch*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
struct UOnlineGameInterfaceImpl_GetGameSettings_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UOnlineGameSettings*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
struct UOnlineGameInterfaceImpl_OnFindOnlineGamesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearHostStartPlayTogetherDelegate
struct UOnlineLobbyInterfaceImpl_ClearHostStartPlayTogetherDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddHostStartPlayTogetherDelegate
struct UOnlineLobbyInterfaceImpl_AddHostStartPlayTogetherDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnHostStartPlayTogether
struct UOnlineLobbyInterfaceImpl_OnHostStartPlayTogether_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyErrorDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbyErrorDelegate_Params
{
	struct FScriptDelegate                             LobbyErrorDelegate;                                       // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyErrorDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbyErrorDelegate_Params
{
	struct FScriptDelegate                             LobbyErrorDelegate;                                       // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyError
struct UOnlineLobbyInterfaceImpl_OnLobbyError_Params
{
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyMembers
struct UOnlineLobbyInterfaceImpl_GetLobbyMembers_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	TArray<struct FLobbyMember>                        Members;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCretedeDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbySessionCretedeDelegate_Params
{
	struct FScriptDelegate                             LobbySessionCreatedDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySessionCreatedDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbySessionCreatedDelegate_Params
{
	struct FScriptDelegate                             LobbySessionCreatedDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySessionCreatedDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbySessionCreatedDelegate_Params
{
	struct FScriptDelegate                             LobbySessionCreatedDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySessionCreatedDelegates
struct UOnlineLobbyInterfaceImpl_TriggerLobbySessionCreatedDelegates_Params
{
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySessionCreated
struct UOnlineLobbyInterfaceImpl_OnLobbySessionCreated_Params
{
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyIndex
struct UOnlineLobbyInterfaceImpl_GetLobbyIndex_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLocalPlayerFromSession
struct UOnlineLobbyInterfaceImpl_RemoveLocalPlayerFromSession_Params
{
	struct FUniqueNetId                                PartyMember;                                              // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLocalPartyMemberToSession
struct UOnlineLobbyInterfaceImpl_AddLocalPartyMemberToSession_Params
{
	struct FUniqueNetId                                NewPartyMember;                                           // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.KickPlayer
struct UOnlineLobbyInterfaceImpl_KickPlayer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	TEnumAsByte<ELobbyKickReason>                      Reason;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.PlayTogether_Invite
struct UOnlineLobbyInterfaceImpl_PlayTogether_Invite_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     InviteMessage;                                            // (CPF_Const, CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ShowInviteUI
struct UOnlineLobbyInterfaceImpl_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Const, CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyDestroyedDelegates
struct UOnlineLobbyInterfaceImpl_TriggerLobbyDestroyedDelegates_Params
{
	int                                                LobbyIndex;                                               // (CPF_Parm)
	TEnumAsByte<ELobbyKickReason>                      Reason;                                                   // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyDestroyedDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbyDestroyedDelegate_Params
{
	struct FScriptDelegate                             LobbyDestroyedDelegate;                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyDestroyedDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbyDestroyedDelegate_Params
{
	struct FScriptDelegate                             LobbyDestroyedDelegate;                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyDestroyed
struct UOnlineLobbyInterfaceImpl_OnLobbyDestroyed_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	TEnumAsByte<ELobbyKickReason>                      Reason;                                                   // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyInviteDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbyInviteDelegate_Params
{
	struct FScriptDelegate                             LobbyInviteDelegate;                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyInviteDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbyInviteDelegate_Params
{
	struct FScriptDelegate                             LobbyInviteDelegate;                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyInvite
struct UOnlineLobbyInterfaceImpl_OnLobbyInvite_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                FriendId;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               bAccepted;                                                // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.InviteToLobby
struct UOnlineLobbyInterfaceImpl_InviteToLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyOwner
struct UOnlineLobbyInterfaceImpl_SetLobbyOwner_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                NewOwner;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyLock
struct UOnlineLobbyInterfaceImpl_SetLobbyLock_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               bLocked;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyServer
struct UOnlineLobbyInterfaceImpl_SetLobbyServer_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                ServerUID;                                                // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ServerIP;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.RemoveLobbySetting
struct UOnlineLobbyInterfaceImpl_RemoveLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbySetting
struct UOnlineLobbyInterfaceImpl_SetLobbySetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.GetLobbyAdmin
struct UOnlineLobbyInterfaceImpl_GetLobbyAdmin_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                AdminId;                                                  // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyJoinGameDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbyJoinGameDelegate_Params
{
	struct FScriptDelegate                             LobbyJoinGameDelegate;                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyJoinGameDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbyJoinGameDelegate_Params
{
	struct FScriptDelegate                             LobbyJoinGameDelegate;                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyJoinGameDelegates
struct UOnlineLobbyInterfaceImpl_TriggerLobbyJoinGameDelegates_Params
{
	int                                                LobbyIndex;                                               // (CPF_Parm)
	struct FUniqueNetId                                ServerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ServerIP;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyJoinGame
struct UOnlineLobbyInterfaceImpl_OnLobbyJoinGame_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FUniqueNetId                                ServerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ServerIP;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveBinaryDataDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbyReceiveBinaryDataDelegate_Params
{
	struct FScriptDelegate                             LobbyReceiveBinaryDataDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveBinaryDataDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbyReceiveBinaryDataDelegate_Params
{
	struct FScriptDelegate                             LobbyReceiveBinaryDataDelegate;                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveBinaryDataDelegates
struct UOnlineLobbyInterfaceImpl_TriggerLobbyReceiveBinaryDataDelegates_Params
{
	int                                                LobbyIndex;                                               // (CPF_Parm)
	int                                                MemberIndex;                                              // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveBinaryData
struct UOnlineLobbyInterfaceImpl_OnLobbyReceiveBinaryData_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                MemberIndex;                                              // (CPF_Parm)
	TArray<unsigned char>                              Data;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyBinaryData
struct UOnlineLobbyInterfaceImpl_SendLobbyBinaryData_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	TArray<unsigned char>                              Data;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyReceiveMessageDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbyReceiveMessageDelegate_Params
{
	struct FScriptDelegate                             LobbyReceiveMessageDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyReceiveMessageDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbyReceiveMessageDelegate_Params
{
	struct FScriptDelegate                             LobbyReceiveMessageDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyReceiveMessageDelegates
struct UOnlineLobbyInterfaceImpl_TriggerLobbyReceiveMessageDelegates_Params
{
	int                                                LobbyIndex;                                               // (CPF_Parm)
	int                                                MemberIndex;                                              // (CPF_Parm)
	struct FString                                     Type;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyReceiveMessage
struct UOnlineLobbyInterfaceImpl_OnLobbyReceiveMessage_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                MemberIndex;                                              // (CPF_Parm)
	struct FString                                     Type;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SendLobbyMessage
struct UOnlineLobbyInterfaceImpl_SendLobbyMessage_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberStatusUpdateDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbyMemberStatusUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbyMemberStatusUpdateDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberStatusUpdateDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbyMemberStatusUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbyMemberStatusUpdateDelegate;                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberStatusUpdateDelegates
struct UOnlineLobbyInterfaceImpl_TriggerLobbyMemberStatusUpdateDelegates_Params
{
	int                                                LobbyIndex;                                               // (CPF_Parm)
	int                                                MemberIndex;                                              // (CPF_Parm)
	int                                                InstigatorIndex;                                          // (CPF_Parm)
	struct FString                                     Status;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberStatusUpdate
struct UOnlineLobbyInterfaceImpl_OnLobbyMemberStatusUpdate_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                MemberIndex;                                              // (CPF_Parm)
	int                                                InstigatorIndex;                                          // (CPF_Parm)
	struct FString                                     Status;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbyMemberSettingsUpdateDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbyMemberSettingsUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbyMemberSettingsUpdateDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbyMemberSettingsUpdateDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbyMemberSettingsUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbyMemberSettingsUpdateDelegate;                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbyMemberSettingsUpdateDelegates
struct UOnlineLobbyInterfaceImpl_TriggerLobbyMemberSettingsUpdateDelegates_Params
{
	int                                                LobbyIndex;                                               // (CPF_Parm)
	int                                                MemberIndex;                                              // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbyMemberSettingsUpdate
struct UOnlineLobbyInterfaceImpl_OnLobbyMemberSettingsUpdate_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                MemberIndex;                                              // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearLobbySettingsUpdateDelegate
struct UOnlineLobbyInterfaceImpl_ClearLobbySettingsUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbySettingsUpdateDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddLobbySettingsUpdateDelegate
struct UOnlineLobbyInterfaceImpl_AddLobbySettingsUpdateDelegate_Params
{
	struct FScriptDelegate                             LobbySettingsUpdateDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerLobbySettingsUpdateDelegates
struct UOnlineLobbyInterfaceImpl_TriggerLobbySettingsUpdateDelegates_Params
{
	int                                                LobbyIndex;                                               // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnLobbySettingsUpdate
struct UOnlineLobbyInterfaceImpl_OnLobbySettingsUpdate_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.SetLobbyUserSetting
struct UOnlineLobbyInterfaceImpl_SetLobbyUserSetting_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.LeaveLobby
struct UOnlineLobbyInterfaceImpl_LeaveLobby_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearJoinLobbyCompleteDelegate
struct UOnlineLobbyInterfaceImpl_ClearJoinLobbyCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinLobbyCompleteDelegate;                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddJoinLobbyCompleteDelegate
struct UOnlineLobbyInterfaceImpl_AddJoinLobbyCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinLobbyCompleteDelegate;                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerJoinLobbyCompleteDelegates
struct UOnlineLobbyInterfaceImpl_TriggerJoinLobbyCompleteDelegates_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FUniqueLobbyId                              LobbyUID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnJoinLobbyComplete
struct UOnlineLobbyInterfaceImpl_OnJoinLobbyComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FUniqueLobbyId                              LobbyUID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.JoinLobby
struct UOnlineLobbyInterfaceImpl_JoinLobby_Params
{
	int                                                LocalPlayerNum;                                           // (CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearFindLobbiesCompleteDelegate
struct UOnlineLobbyInterfaceImpl_ClearFindLobbiesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindLobbiesCompleteDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddFindLobbiesCompleteDelegate
struct UOnlineLobbyInterfaceImpl_AddFindLobbiesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindLobbiesCompleteDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.TriggerFindLobbiesCompleteDelegates
struct UOnlineLobbyInterfaceImpl_TriggerFindLobbiesCompleteDelegates_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnFindLobbiesComplete
struct UOnlineLobbyInterfaceImpl_OnFindLobbiesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	TArray<struct FBasicLobbyInfo>                     LobbyList;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.UpdateFoundLobbies
struct UOnlineLobbyInterfaceImpl_UpdateFoundLobbies_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.FindLobbies
struct UOnlineLobbyInterfaceImpl_FindLobbies_Params
{
	int                                                MaxResults;                                               // (CPF_OptionalParm, CPF_Parm)
	TArray<struct FLobbyFilter>                        Filters;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FLobbySortFilter>                    SortFilters;                                              // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	int                                                MinSlots;                                                 // (CPF_OptionalParm, CPF_Parm)
	TEnumAsByte<ELobbyDistance>                        Distance;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.ClearCreateLobbyCompleteDelegate
struct UOnlineLobbyInterfaceImpl_ClearCreateLobbyCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateLobbyCompleteDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.AddCreateLobbyCompleteDelegate
struct UOnlineLobbyInterfaceImpl_AddCreateLobbyCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateLobbyCompleteDelegate;                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.OnCreateLobbyComplete
struct UOnlineLobbyInterfaceImpl_OnCreateLobbyComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineLobbyInterfaceImpl.CreateLobby
struct UOnlineLobbyInterfaceImpl_CreateLobby_Params
{
	int                                                LocalPlayerNum;                                           // (CPF_Parm)
	int                                                MaxPlayers;                                               // (CPF_Parm)
	TEnumAsByte<ELobbyVisibility>                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	TArray<struct FLobbyMetaData>                      InitialSettings;                                          // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
struct UOnlinePlaylistManager_ParseDataCenterId_Params
{
	TArray<unsigned char>                              Data;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
struct UOnlinePlaylistManager_OnReadDataCenterIdComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
struct UOnlinePlaylistManager_ReadDataCenterId_Params
{
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
struct UOnlinePlaylistManager_SendPlaylistPopulationUpdate_Params
{
	int                                                NumPlayers;                                               // (CPF_Parm)
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
struct UOnlinePlaylistManager_GetPopulationInfoFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                WorldwideTotal;                                           // (CPF_Parm, CPF_OutParm)
	int                                                RegionTotal;                                              // (CPF_Parm, CPF_OutParm)
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
struct UOnlinePlaylistManager_ParsePlaylistPopulationData_Params
{
	TArray<unsigned char>                              Data;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
struct UOnlinePlaylistManager_OnPlaylistPopulationDataUpdated_Params
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
struct UOnlinePlaylistManager_OnReadPlaylistPopulationComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
struct UOnlinePlaylistManager_ReadPlaylistPopulation_Params
{
};

// Function IpDrv.OnlinePlaylistManager.Reset
struct UOnlinePlaylistManager_Reset_Params
{
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
struct UOnlinePlaylistManager_GetContentIdsFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	TArray<int>                                        ContentIds;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
struct UOnlinePlaylistManager_GetInventorySwapFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	class UClass*                                      SourceInventory;                                          // (CPF_Parm)
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
struct UOnlinePlaylistManager_GetMapCycleFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	TArray<struct FName>                               MapCycle;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
struct UOnlinePlaylistManager_GetUrlFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
struct UOnlinePlaylistManager_GetMatchType_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
struct UOnlinePlaylistManager_IsPlaylistArbitrated_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
struct UOnlinePlaylistManager_GetLoadBalanceIdFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                LoadBalanceId;                                            // (CPF_Parm, CPF_OutParm)
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
struct UOnlinePlaylistManager_GetTeamInfoFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                TeamSize;                                                 // (CPF_Parm, CPF_OutParm)
	int                                                TeamCount;                                                // (CPF_Parm, CPF_OutParm)
	int                                                MaxPartySize;                                             // (CPF_Parm, CPF_OutParm)
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
struct UOnlinePlaylistManager_PlaylistSupportsDedicatedServers_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
struct UOnlinePlaylistManager_HasAnyGameSettings_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
struct UOnlinePlaylistManager_GetGameSettings_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                GameSettingsId;                                           // (CPF_Parm)
	class UOnlineGameSettings*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
struct UOnlinePlaylistManager_FinalizePlaylistObjects_Params
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
struct UOnlinePlaylistManager_OnReadTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
struct UOnlinePlaylistManager_ShouldRefreshPlaylists_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
struct UOnlinePlaylistManager_DetermineFilesToDownload_Params
{
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
struct UOnlinePlaylistManager_DownloadPlaylist_Params
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
struct UOnlinePlaylistManager_OnReadPlaylistComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.ClearMicroTxnResponseDelegate
struct UOnlinePurchaseInterfaceImpl_ClearMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.AddMicroTxnResponseDelegate
struct UOnlinePurchaseInterfaceImpl_AddMicroTxnResponseDelegate_Params
{
	struct FScriptDelegate                             ResponseMicroTxnDelegate;                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.OnMicroTxnResponse
struct UOnlinePurchaseInterfaceImpl_OnMicroTxnResponse_Params
{
	bool                                               bAuthorized;                                              // (CPF_Parm)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.FormatCurrency
struct UOnlinePurchaseInterfaceImpl_FormatCurrency_Params
{
	struct FString                                     Currency;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Price;                                                    // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.GetAppPriceInfo
struct UOnlinePurchaseInterfaceImpl_GetAppPriceInfo_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	TArray<struct FName>                               AppNames;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlinePurchaseInterfaceImpl.EventGetAppPriceInfoComplete
struct UOnlinePurchaseInterfaceImpl_EventGetAppPriceInfoComplete_Params
{
	struct FName                                       AppName;                                                  // (CPF_Parm)
	struct FString                                     Price;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DiscountPrice;                                            // (CPF_Parm, CPF_NeedCtorLink)
	int                                                DiscountPercentage;                                       // (CPF_Parm)
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
struct UPartyBeacon_OnDestroyComplete_Params
{
};

// Function IpDrv.PartyBeacon.DestroyBeacon
struct UPartyBeacon_DestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
struct UPartyBeaconClient_DestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconClient.CancelReservation
struct UPartyBeaconClient_CancelReservation_Params
{
	struct FUniqueNetId                                CancellingPartyLeader;                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
struct UPartyBeaconClient_RequestReservationUpdate_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                              // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                                    // (CPF_Parm)
	TArray<struct FPlayerReservation>                  PlayersToAdd;                                             // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservation
struct UPartyBeaconClient_RequestReservation_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                              // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                                    // (CPF_Parm)
	TArray<struct FPlayerReservation>                  Players;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
struct UPartyBeaconClient_OnHostHasCancelled_Params
{
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
struct UPartyBeaconClient_OnHostIsReady_Params
{
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
struct UPartyBeaconClient_OnTravelRequestReceived_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (CPF_Parm)
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
struct UPartyBeaconClient_OnReservationCountUpdated_Params
{
	int                                                ReservationRemaining;                                     // (CPF_Parm)
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
struct UPartyBeaconClient_OnReservationRequestComplete_Params
{
	TEnumAsByte<EPartyReservationResult>               ReservationResult;                                        // (CPF_Parm)
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
struct UPartyBeaconHost_GetMaxAvailableTeamSize_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
struct UPartyBeaconHost_GetPartyLeaders_Params
{
	TArray<struct FUniqueNetId>                        PartyLeaders;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.GetPlayers
struct UPartyBeaconHost_GetPlayers_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
struct UPartyBeaconHost_AppendReservationSkillsToSearch_Params
{
	class UOnlineGameSearch*                           Search;                                                   // (CPF_Parm)
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
struct UPartyBeaconHost_UnregisterParty_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (CPF_Parm)
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
struct UPartyBeaconHost_UnregisterPartyMembers_Params
{
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
struct UPartyBeaconHost_RegisterPartyMembers_Params
{
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
struct UPartyBeaconHost_AreReservationsFull_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
struct UPartyBeaconHost_TellClientsHostHasCancelled_Params
{
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
struct UPartyBeaconHost_TellClientsHostIsReady_Params
{
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
struct UPartyBeaconHost_TellClientsToTravel_Params
{
	struct FName                                       SessionName;                                              // (CPF_Parm)
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (CPF_Parm)
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
struct UPartyBeaconHost_DestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
struct UPartyBeaconHost_OnClientCancellationReceived_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (CPF_Parm)
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
struct UPartyBeaconHost_OnReservationsFull_Params
{
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
struct UPartyBeaconHost_OnReservationChange_Params
{
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
struct UPartyBeaconHost_HandlePlayerLogout_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bMaintainParty;                                           // (CPF_Parm)
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
struct UPartyBeaconHost_GetExistingReservation_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (CPF_Const, CPF_Parm, CPF_OutParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
struct UPartyBeaconHost_UpdatePartyReservationEntry_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (CPF_Parm)
	TArray<struct FPlayerReservation>                  PlayerMembers;                                            // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TEnumAsByte<EPartyReservationResult>               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
struct UPartyBeaconHost_AddPartyReservationEntry_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (CPF_Parm)
	TArray<struct FPlayerReservation>                  PlayerMembers;                                            // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                TeamNum;                                                  // (CPF_Parm)
	bool                                               bIsHost;                                                  // (CPF_Parm)
	TEnumAsByte<EPartyReservationResult>               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
struct UPartyBeaconHost_InitHostBeacon_Params
{
	int                                                InNumTeams;                                               // (CPF_Parm)
	int                                                InNumPlayersPerTeam;                                      // (CPF_Parm)
	int                                                InNumReservations;                                        // (CPF_Parm)
	struct FName                                       InSessionName;                                            // (CPF_Parm)
	int                                                InForceTeamNum;                                           // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
struct UPartyBeaconHost_PauseReservationRequests_Params
{
	bool                                               bPause;                                                   // (CPF_Parm)
};

// Function IpDrv.WebRequest.GetHexDigit
struct UWebRequest_GetHexDigit_Params
{
	struct FString                                     D;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebRequest.DecodeFormData
struct UWebRequest_DecodeFormData_Params
{
	struct FString                                     Data;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.ProcessHeaderString
struct UWebRequest_ProcessHeaderString_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.Dump
struct UWebRequest_Dump_Params
{
};

// Function IpDrv.WebRequest.GetVariables
struct UWebRequest_GetVariables_Params
{
	TArray<struct FString>                             varNames;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableNumber
struct UWebRequest_GetVariableNumber_Params
{
	struct FString                                     VariableName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Number;                                                   // (CPF_Parm)
	struct FString                                     DefaultValue;                                             // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableCount
struct UWebRequest_GetVariableCount_Params
{
	struct FString                                     VariableName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebRequest.GetVariable
struct UWebRequest_GetVariable_Params
{
	struct FString                                     VariableName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DefaultValue;                                             // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddVariable
struct UWebRequest_AddVariable_Params
{
	struct FString                                     VariableName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeaders
struct UWebRequest_GetHeaders_Params
{
	TArray<struct FString>                             Headers;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeader
struct UWebRequest_GetHeader_Params
{
	struct FString                                     HeaderName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DefaultValue;                                             // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddHeader
struct UWebRequest_AddHeader_Params
{
	struct FString                                     HeaderName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.EncodeBase64
struct UWebRequest_EncodeBase64_Params
{
	struct FString                                     Decoded;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.DecodeBase64
struct UWebRequest_DecodeBase64_Params
{
	struct FString                                     Encoded;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SentResponse
struct UWebResponse_SentResponse_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SentText
struct UWebResponse_SentText_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebResponse.Redirect
struct UWebResponse_Redirect_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendStandardHeaders
struct UWebResponse_SendStandardHeaders_Params
{
	struct FString                                     ContentType;                                              // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               bCache;                                                   // (CPF_OptionalParm, CPF_Parm)
};

// Function IpDrv.WebResponse.HTTPError
struct UWebResponse_HTTPError_Params
{
	int                                                ErrorNum;                                                 // (CPF_Parm)
	struct FString                                     Data;                                                     // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendHeaders
struct UWebResponse_SendHeaders_Params
{
};

// Function IpDrv.WebResponse.AddHeader
struct UWebResponse_AddHeader_Params
{
	struct FString                                     Header;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bReplace;                                                 // (CPF_OptionalParm, CPF_Parm)
};

// Function IpDrv.WebResponse.HTTPHeader
struct UWebResponse_HTTPHeader_Params
{
	struct FString                                     Header;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.HttpResponse
struct UWebResponse_HttpResponse_Params
{
	struct FString                                     Header;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.FailAuthentication
struct UWebResponse_FailAuthentication_Params
{
	struct FString                                     Realm;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendCachedFile
struct UWebResponse_SendCachedFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ContentType;                                              // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SendBinary
struct UWebResponse_SendBinary_Params
{
	int                                                Count;                                                    // (CPF_Parm)
	unsigned char                                      B;                                                        // (CPF_Parm)
};

// Function IpDrv.WebResponse.SendText
struct UWebResponse_SendText_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bNoCRLF;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function IpDrv.WebResponse.Dump
struct UWebResponse_Dump_Params
{
};

// Function IpDrv.WebResponse.GetHTTPExpiration
struct UWebResponse_GetHTTPExpiration_Params
{
	int                                                OffsetSeconds;                                            // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.LoadParsedUHTM
struct UWebResponse_LoadParsedUHTM_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.IncludeBinaryFile
struct UWebResponse_IncludeBinaryFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebResponse.IncludeUHTM
struct UWebResponse_IncludeUHTM_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebResponse.ClearSubst
struct UWebResponse_ClearSubst_Params
{
};

// Function IpDrv.WebResponse.Subst
struct UWebResponse_Subst_Params
{
	struct FString                                     Variable;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	bool                                               bClear;                                                   // (CPF_OptionalParm, CPF_Parm)
};

// Function IpDrv.WebResponse.FileExists
struct UWebResponse_FileExists_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
struct UUIDataStore_OnlinePlaylists_GetMatchTypeForPlaylistId_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
struct UUIDataStore_OnlinePlaylists_GetOnlinePlaylistProvider_Params
{
	struct FName                                       ProviderTag;                                              // (CPF_Parm)
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                ProviderIndex;                                            // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	class UOnlinePlaylistProvider*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
struct UUIDataStore_OnlinePlaylists_GetPlaylistProvider_Params
{
	struct FName                                       ProviderTag;                                              // (CPF_Parm)
	int                                                ProviderIndex;                                            // (CPF_Parm)
	class UUIResourceDataProvider*                     out_Provider;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
struct UUIDataStore_OnlinePlaylists_GetResourceProviders_Params
{
	struct FName                                       ProviderTag;                                              // (CPF_Parm)
	TArray<class UUIResourceDataProvider*>             out_Providers;                                            // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
struct UUIDataStore_OnlinePlaylists_Init_Params
{
};

// Function IpDrv.WebApplication.PostQuery
struct UWebApplication_PostQuery_Params
{
	class UWebRequest*                                 Request;                                                  // (CPF_Parm)
	class UWebResponse*                                Response;                                                 // (CPF_Parm)
};

// Function IpDrv.WebApplication.Query
struct UWebApplication_Query_Params
{
	class UWebRequest*                                 Request;                                                  // (CPF_Parm)
	class UWebResponse*                                Response;                                                 // (CPF_Parm)
};

// Function IpDrv.WebApplication.PreQuery
struct UWebApplication_PreQuery_Params
{
	class UWebRequest*                                 Request;                                                  // (CPF_Parm)
	class UWebResponse*                                Response;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebApplication.CleanupApp
struct UWebApplication_CleanupApp_Params
{
};

// Function IpDrv.WebApplication.Cleanup
struct UWebApplication_Cleanup_Params
{
};

// Function IpDrv.WebApplication.Init
struct UWebApplication_Init_Params
{
};

// Function IpDrv.WebServer.GetApplication
struct AWebServer_GetApplication_Params
{
	struct FString                                     URI;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SubURI;                                                   // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UWebApplication*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebServer.LostChild
struct AWebServer_LostChild_Params
{
	class AActor*                                      C;                                                        // (CPF_Parm)
};

// Function IpDrv.WebServer.GainedChild
struct AWebServer_GainedChild_Params
{
	class AActor*                                      C;                                                        // (CPF_Parm)
};

// Function IpDrv.WebServer.Destroyed
struct AWebServer_Destroyed_Params
{
};

// Function IpDrv.WebServer.PostBeginPlay
struct AWebServer_PostBeginPlay_Params
{
};

// Function IpDrv.HelloWeb.Query
struct UHelloWeb_Query_Params
{
	class UWebRequest*                                 Request;                                                  // (CPF_Parm)
	class UWebResponse*                                Response;                                                 // (CPF_Parm)
};

// Function IpDrv.HelloWeb.Init
struct UHelloWeb_Init_Params
{
};

// Function IpDrv.ImageServer.Query
struct UImageServer_Query_Params
{
	class UWebRequest*                                 Request;                                                  // (CPF_Parm)
	class UWebResponse*                                Response;                                                 // (CPF_Parm)
};

// Function IpDrv.McpServiceConfig.GetUserAuthTicket
struct UMcpServiceConfig_GetUserAuthTicket_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserReward
struct UMcpClashMobBase_UpdateChallengeUserReward_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	int                                                UserReward;                                               // (CPF_Parm)
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserRewardComplete
struct UMcpClashMobBase_OnUpdateChallengeUserRewardComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.UpdateChallengeUserProgress
struct UMcpClashMobBase_UpdateChallengeUserProgress_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bDidComplete;                                             // (CPF_Parm)
	int                                                GoalProgress;                                             // (CPF_Parm)
};

// Function IpDrv.McpClashMobBase.OnUpdateChallengeUserProgressComplete
struct UMcpClashMobBase_OnUpdateChallengeUserProgressComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeUserStatus
struct UMcpClashMobBase_GetChallengeUserStatus_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             OutChallengeUserStatus;                                   // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeMultiUserStatus
struct UMcpClashMobBase_QueryChallengeMultiUserStatus_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             UserIdsToRead;                                            // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeUserStatus
struct UMcpClashMobBase_QueryChallengeUserStatus_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeUserStatusComplete
struct UMcpClashMobBase_OnQueryChallengeUserStatusComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.AcceptChallenge
struct UMcpClashMobBase_AcceptChallenge_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnAcceptChallengeComplete
struct UMcpClashMobBase_OnAcceptChallengeComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.DeleteCachedChallengeFile
struct UMcpClashMobBase_DeleteCachedChallengeFile_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.ClearCachedChallengeFile
struct UMcpClashMobBase_ClearCachedChallengeFile_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeFileContents
struct UMcpClashMobBase_GetChallengeFileContents_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              OutFileContents;                                          // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.DownloadChallengeFile
struct UMcpClashMobBase_DownloadChallengeFile_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeFileList
struct UMcpClashMobBase_GetChallengeFileList_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FMcpClashMobChallengeFile>           OutChallengeFiles;                                        // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.OnDownloadChallengeFileComplete
struct UMcpClashMobBase_OnDownloadChallengeFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.GetChallengeList
struct UMcpClashMobBase_GetChallengeList_Params
{
	TArray<struct FMcpClashMobChallengeEvent>          OutChallengeEvents;                                       // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.QueryChallengeList
struct UMcpClashMobBase_QueryChallengeList_Params
{
};

// Function IpDrv.McpClashMobBase.OnQueryChallengeListComplete
struct UMcpClashMobBase_OnQueryChallengeListComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobBase.CreateInstance
struct UMcpClashMobBase_CreateInstance_Params
{
	class UMcpClashMobBase*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpClashMobFileDownload.GetUrlForFile
struct UMcpClashMobFileDownload_GetUrlForFile_Params
{
	struct FString                                     Filename;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserRewardHTTPRequestComplete
struct UMcpClashMobManager_OnUpdateChallengeUserRewardHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserReward
struct UMcpClashMobManager_UpdateChallengeUserReward_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	int                                                UserReward;                                               // (CPF_Parm)
};

// Function IpDrv.McpClashMobManager.OnUpdateChallengeUserProgressHTTPRequestComplete
struct UMcpClashMobManager_OnUpdateChallengeUserProgressHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpClashMobManager.UpdateChallengeUserProgress
struct UMcpClashMobManager_UpdateChallengeUserProgress_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bDidComplete;                                             // (CPF_Parm)
	int                                                GoalProgress;                                             // (CPF_Parm)
};

// Function IpDrv.McpClashMobManager.GetChallengeUserStatus
struct UMcpClashMobManager_GetChallengeUserStatus_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             OutChallengeUserStatus;                                   // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeMultiStatusHTTPRequestComplete
struct UMcpClashMobManager_OnQueryChallengeMultiStatusHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpClashMobManager.QueryChallengeMultiUserStatus
struct UMcpClashMobManager_QueryChallengeMultiUserStatus_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             UserIdsToRead;                                            // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeStatusHTTPRequestComplete
struct UMcpClashMobManager_OnQueryChallengeStatusHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpClashMobManager.QueryChallengeUserStatus
struct UMcpClashMobManager_QueryChallengeUserStatus_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnAcceptChallengeHTTPRequestComplete
struct UMcpClashMobManager_OnAcceptChallengeHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpClashMobManager.AcceptChallenge
struct UMcpClashMobManager_AcceptChallenge_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.DeleteCachedChallengeFile
struct UMcpClashMobManager_DeleteCachedChallengeFile_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.ClearCachedChallengeFile
struct UMcpClashMobManager_ClearCachedChallengeFile_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.GetChallengeFileContents
struct UMcpClashMobManager_GetChallengeFileContents_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              OutFileContents;                                          // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnDownloadMcpFileComplete
struct UMcpClashMobManager_OnDownloadMcpFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnLoadCachedFileComplete
struct UMcpClashMobManager_OnLoadCachedFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.DownloadChallengeFile
struct UMcpClashMobManager_DownloadChallengeFile_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DLName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.GetChallengeFileList
struct UMcpClashMobManager_GetChallengeFileList_Params
{
	struct FString                                     UniqueChallengeId;                                        // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FMcpClashMobChallengeFile>           OutChallengeFiles;                                        // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.GetChallengeList
struct UMcpClashMobManager_GetChallengeList_Params
{
	TArray<struct FMcpClashMobChallengeEvent>          OutChallengeEvents;                                       // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpClashMobManager.OnQueryChallengeListHTTPRequestComplete
struct UMcpClashMobManager_OnQueryChallengeListHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpClashMobManager.QueryChallengeList
struct UMcpClashMobManager_QueryChallengeList_Params
{
};

// Function IpDrv.McpClashMobManager.Init
struct UMcpClashMobManager_Init_Params
{
};

// Function IpDrv.McpGroupsBase.OnAcceptGroupInviteComplete
struct UMcpGroupsBase_OnAcceptGroupInviteComplete_Params
{
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.AcceptGroupInvite
struct UMcpGroupsBase_AcceptGroupInvite_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bShouldAccept;                                            // (CPF_Parm)
};

// Function IpDrv.McpGroupsBase.GetGroupInviteList
struct UMcpGroupsBase_GetGroupInviteList_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpGroupList                               InviteList;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupInvitesComplete
struct UMcpGroupsBase_OnQueryGroupInvitesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroupInvites
struct UMcpGroupsBase_QueryGroupInvites_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnDeleteAllGroupsComplete
struct UMcpGroupsBase_OnDeleteAllGroupsComplete_Params
{
	struct FString                                     RequesterId;                                              // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.DeleteAllGroups
struct UMcpGroupsBase_DeleteAllGroups_Params
{
	struct FString                                     OwnerId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnRemoveGroupMembersComplete
struct UMcpGroupsBase_OnRemoveGroupMembersComplete_Params
{
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.RemoveGroupMembers
struct UMcpGroupsBase_RemoveGroupMembers_Params
{
	struct FString                                     OwnerId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             MemberIds;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnAddGroupMembersComplete
struct UMcpGroupsBase_OnAddGroupMembersComplete_Params
{
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.AddGroupMembers
struct UMcpGroupsBase_AddGroupMembers_Params
{
	struct FString                                     OwnerId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             MemberIds;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               bRequiresAcceptance;                                      // (CPF_Parm)
};

// Function IpDrv.McpGroupsBase.GetGroupMembers
struct UMcpGroupsBase_GetGroupMembers_Params
{
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FMcpGroupMember>                     GroupMembers;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupMembersComplete
struct UMcpGroupsBase_OnQueryGroupMembersComplete_Params
{
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroupMembers
struct UMcpGroupsBase_QueryGroupMembers_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.GetGroupList
struct UMcpGroupsBase_GetGroupList_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpGroupList                               GroupList;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnQueryGroupsComplete
struct UMcpGroupsBase_OnQueryGroupsComplete_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.QueryGroups
struct UMcpGroupsBase_QueryGroups_Params
{
	struct FString                                     RequesterId;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnDeleteGroupComplete
struct UMcpGroupsBase_OnDeleteGroupComplete_Params
{
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.DeleteGroup
struct UMcpGroupsBase_DeleteGroup_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.OnCreateGroupComplete
struct UMcpGroupsBase_OnCreateGroupComplete_Params
{
	struct FMcpGroup                                   Group;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.CreateGroup
struct UMcpGroupsBase_CreateGroup_Params
{
	struct FString                                     OwnerId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupName;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsBase.CreateInstance
struct UMcpGroupsBase_CreateInstance_Params
{
	class UMcpGroupsBase*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpGroupsManager.CacheGroupMember
struct UMcpGroupsManager_CacheGroupMember_Params
{
	struct FString                                     MemberId;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EMcpGroupAcceptState>                  AcceptState;                                              // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.CacheGroup
struct UMcpGroupsManager_CacheGroup_Params
{
	struct FString                                     RequesterId;                                              // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpGroup                                   Group;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnAcceptGroupInviteRequestComplete
struct UMcpGroupsManager_OnAcceptGroupInviteRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.AcceptGroupInvite
struct UMcpGroupsManager_AcceptGroupInvite_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bShouldAccept;                                            // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.OnDeleteAllGroupsRequestComplete
struct UMcpGroupsManager_OnDeleteAllGroupsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.DeleteAllGroups
struct UMcpGroupsManager_DeleteAllGroups_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnRemoveGroupMembersRequestComplete
struct UMcpGroupsManager_OnRemoveGroupMembersRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.RemoveGroupMembers
struct UMcpGroupsManager_RemoveGroupMembers_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             MemberIds;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnAddGroupMembersRequestComplete
struct UMcpGroupsManager_OnAddGroupMembersRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.AddGroupMembers
struct UMcpGroupsManager_AddGroupMembers_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             MemberIds;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               bRequiresAcceptance;                                      // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.GetGroupMembers
struct UMcpGroupsManager_GetGroupMembers_Params
{
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FMcpGroupMember>                     GroupMembers;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnQueryGroupMembersRequestComplete
struct UMcpGroupsManager_OnQueryGroupMembersRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.QueryGroupMembers
struct UMcpGroupsManager_QueryGroupMembers_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.GetGroupList
struct UMcpGroupsManager_GetGroupList_Params
{
	struct FString                                     UserId;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpGroupList                               GroupList;                                                // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnQueryGroupsRequestComplete
struct UMcpGroupsManager_OnQueryGroupsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.QueryGroups
struct UMcpGroupsManager_QueryGroups_Params
{
	struct FString                                     RequesterId;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnDeleteGroupRequestComplete
struct UMcpGroupsManager_OnDeleteGroupRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.DeleteGroup
struct UMcpGroupsManager_DeleteGroup_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupId;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpGroupsManager.OnCreateGroupRequestComplete
struct UMcpGroupsManager_OnCreateGroupRequestComplete_Params
{
	class UHttpRequestInterface*                       CreateGroupRequest;                                       // (CPF_Parm)
	class UHttpResponseInterface*                      HttpResponse;                                             // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpGroupsManager.CreateGroup
struct UMcpGroupsManager_CreateGroup_Params
{
	struct FString                                     UniqueUserId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GroupName;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.GetIdMappings
struct UMcpIdMappingBase_GetIdMappings_Params
{
	struct FString                                     ExternalType;                                             // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FMcpIdMapping>                       IDMappings;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.OnQueryMappingsComplete
struct UMcpIdMappingBase_OnQueryMappingsComplete_Params
{
	struct FString                                     ExternalType;                                             // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.QueryMappings
struct UMcpIdMappingBase_QueryMappings_Params
{
	TArray<struct FString>                             ExternalIds;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.OnAddMappingComplete
struct UMcpIdMappingBase_OnAddMappingComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ExternalId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                             // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.AddMapping
struct UMcpIdMappingBase_AddMapping_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ExternalId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingBase.CreateInstance
struct UMcpIdMappingBase_CreateInstance_Params
{
	class UMcpIdMappingBase*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpIdMappingManager.GetIdMappings
struct UMcpIdMappingManager_GetIdMappings_Params
{
	struct FString                                     ExternalType;                                             // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FMcpIdMapping>                       IDMappings;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingManager.OnQueryMappingsRequestComplete
struct UMcpIdMappingManager_OnQueryMappingsRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpIdMappingManager.QueryMappings
struct UMcpIdMappingManager_QueryMappings_Params
{
	TArray<struct FString>                             ExternalIds;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpIdMappingManager.OnAddMappingRequestComplete
struct UMcpIdMappingManager_OnAddMappingRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpIdMappingManager.AddMapping
struct UMcpIdMappingManager_AddMapping_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ExternalId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ExternalType;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.OnDeleteValueComplete
struct UMcpManagedValueManagerBase_OnDeleteValueComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       ValueId;                                                  // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.DeleteValue
struct UMcpManagedValueManagerBase_DeleteValue_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       ValueId;                                                  // (CPF_Parm)
};

// Function IpDrv.McpManagedValueManagerBase.OnUpdateValueComplete
struct UMcpManagedValueManagerBase_OnUpdateValueComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       ValueId;                                                  // (CPF_Parm)
	int                                                Value;                                                    // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.UpdateValue
struct UMcpManagedValueManagerBase_UpdateValue_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       ValueId;                                                  // (CPF_Parm)
	int                                                Value;                                                    // (CPF_Parm)
};

// Function IpDrv.McpManagedValueManagerBase.GetValue
struct UMcpManagedValueManagerBase_GetValue_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       ValueId;                                                  // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpManagedValueManagerBase.GetValues
struct UMcpManagedValueManagerBase_GetValues_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FManagedValue>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.OnReadSaveSlotComplete
struct UMcpManagedValueManagerBase_OnReadSaveSlotComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.ReadSaveSlot
struct UMcpManagedValueManagerBase_ReadSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.OnCreateSaveSlotComplete
struct UMcpManagedValueManagerBase_OnCreateSaveSlotComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.CreateSaveSlot
struct UMcpManagedValueManagerBase_CreateSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManagerBase.CreateInstance
struct UMcpManagedValueManagerBase_CreateInstance_Params
{
	class UMcpManagedValueManagerBase*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpManagedValueManager.OnDeleteValueRequestComplete
struct UMcpManagedValueManager_OnDeleteValueRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpManagedValueManager.DeleteValue
struct UMcpManagedValueManager_DeleteValue_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       ValueId;                                                  // (CPF_Parm)
};

// Function IpDrv.McpManagedValueManager.OnUpdateValueRequestComplete
struct UMcpManagedValueManager_OnUpdateValueRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpManagedValueManager.UpdateValue
struct UMcpManagedValueManager_UpdateValue_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       ValueId;                                                  // (CPF_Parm)
	int                                                Value;                                                    // (CPF_Parm)
};

// Function IpDrv.McpManagedValueManager.GetValue
struct UMcpManagedValueManager_GetValue_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       ValueId;                                                  // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpManagedValueManager.GetValues
struct UMcpManagedValueManager_GetValues_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FManagedValue>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManager.OnReadSaveSlotRequestComplete
struct UMcpManagedValueManager_OnReadSaveSlotRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpManagedValueManager.ReadSaveSlot
struct UMcpManagedValueManager_ReadSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManager.ParseValuesForSaveSlot
struct UMcpManagedValueManager_ParseValuesForSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     JsonPayload;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpManagedValueManager.FindSaveSlotIndex
struct UMcpManagedValueManager_FindSaveSlotIndex_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpManagedValueManager.OnCreateSaveSlotRequestComplete
struct UMcpManagedValueManager_OnCreateSaveSlotRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpManagedValueManager.CreateSaveSlot
struct UMcpManagedValueManager_CreateSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlot;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeBase.GetLastServerTime
struct UMcpServerTimeBase_GetLastServerTime_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeBase.OnQueryServerTimeComplete
struct UMcpServerTimeBase_OnQueryServerTimeComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     DateTimeStr;                                              // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeBase.QueryServerTime
struct UMcpServerTimeBase_QueryServerTime_Params
{
};

// Function IpDrv.McpServerTimeBase.CreateInstance
struct UMcpServerTimeBase_CreateInstance_Params
{
	class UMcpServerTimeBase*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpServerTimeManager.GetLastServerTime
struct UMcpServerTimeManager_GetLastServerTime_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpServerTimeManager.OnQueryServerTimeHTTPRequestComplete
struct UMcpServerTimeManager_OnQueryServerTimeHTTPRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpServerTimeManager.QueryServerTime
struct UMcpServerTimeManager_QueryServerTime_Params
{
};

// Function IpDrv.McpUserInventoryBase.OnRecordIapComplete
struct UMcpUserInventoryBase_OnRecordIapComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                           // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.RecordIap
struct UMcpUserInventoryBase_RecordIap_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Receipt;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnDeleteItemComplete
struct UMcpUserInventoryBase_OnDeleteItemComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.DeleteItem
struct UMcpUserInventoryBase_DeleteItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	int                                                StoreVersion;                                             // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryBase.OnConsumeItemComplete
struct UMcpUserInventoryBase_OnConsumeItemComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                           // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.ConsumeItem
struct UMcpUserInventoryBase_ConsumeItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Quantity;                                                 // (CPF_Parm)
	int                                                StoreVersion;                                             // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryBase.OnEarnItemComplete
struct UMcpUserInventoryBase_OnEarnItemComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                           // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.EarnItem
struct UMcpUserInventoryBase_EarnItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Quantity;                                                 // (CPF_Parm)
	int                                                StoreVersion;                                             // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryBase.OnSellItemComplete
struct UMcpUserInventoryBase_OnSellItemComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                           // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.SellItem
struct UMcpUserInventoryBase_SellItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Quantity;                                                 // (CPF_Parm)
	int                                                StoreVersion;                                             // (CPF_Parm)
	TArray<struct FMcpInventoryItemContainer>          ExpectedResultItems;                                      // (CPF_Const, CPF_OptionalParm, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnPurchaseItemComplete
struct UMcpUserInventoryBase_OnPurchaseItemComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             UpdatedItemIds;                                           // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.PurchaseItem
struct UMcpUserInventoryBase_PurchaseItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             PurchaseItemIds;                                          // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Quantity;                                                 // (CPF_Parm)
	int                                                StoreVersion;                                             // (CPF_Parm)
	float                                              Scalar;                                                   // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItem
struct UMcpUserInventoryBase_GetInventoryItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpInventoryItem                           OutInventoryItem;                                         // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserInventoryBase.GetInventoryItems
struct UMcpUserInventoryBase_GetInventoryItems_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FMcpInventoryItem>                   OutInventoryItems;                                        // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnQueryInventoryItemsComplete
struct UMcpUserInventoryBase_OnQueryInventoryItemsComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.QueryInventoryItems
struct UMcpUserInventoryBase_QueryInventoryItems_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnQuerySaveSlotListComplete
struct UMcpUserInventoryBase_OnQuerySaveSlotListComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.GetSaveSlotList
struct UMcpUserInventoryBase_GetSaveSlotList_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.QuerySaveSlotList
struct UMcpUserInventoryBase_QuerySaveSlotList_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnDeleteSaveSlotComplete
struct UMcpUserInventoryBase_OnDeleteSaveSlotComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.DeleteSaveSlot
struct UMcpUserInventoryBase_DeleteSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.OnCreateSaveSlotComplete
struct UMcpUserInventoryBase_OnCreateSaveSlotComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.CreateSaveSlot
struct UMcpUserInventoryBase_CreateSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ParentSaveSlotId;                                         // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryBase.CreateInstance
struct UMcpUserInventoryBase_CreateInstance_Params
{
	class UMcpUserInventoryBase*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserInventoryManager.OnRecordIapRequestComplete
struct UMcpUserInventoryManager_OnRecordIapRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.RecordIap
struct UMcpUserInventoryManager_RecordIap_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Receipt;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.OnDeleteItemRequestComplete
struct UMcpUserInventoryManager_OnDeleteItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.DeleteItem
struct UMcpUserInventoryManager_DeleteItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	int                                                StoreVersion;                                             // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.OnConsumeItemRequestComplete
struct UMcpUserInventoryManager_OnConsumeItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.ConsumeItem
struct UMcpUserInventoryManager_ConsumeItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Quantity;                                                 // (CPF_Parm)
	int                                                StoreVersion;                                             // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.OnEarnItemRequestComplete
struct UMcpUserInventoryManager_OnEarnItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.EarnItem
struct UMcpUserInventoryManager_EarnItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Quantity;                                                 // (CPF_Parm)
	int                                                StoreVersion;                                             // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.OnSellItemRequestComplete
struct UMcpUserInventoryManager_OnSellItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.SellItem
struct UMcpUserInventoryManager_SellItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Quantity;                                                 // (CPF_Parm)
	int                                                StoreVersion;                                             // (CPF_Parm)
	TArray<struct FMcpInventoryItemContainer>          ExpectedResultItems;                                      // (CPF_Const, CPF_OptionalParm, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.OnPurchaseItemRequestComplete
struct UMcpUserInventoryManager_OnPurchaseItemRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.PurchaseItem
struct UMcpUserInventoryManager_PurchaseItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GlobalItemId;                                             // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             PurchaseItemIds;                                          // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Quantity;                                                 // (CPF_Parm)
	int                                                StoreVersion;                                             // (CPF_Parm)
	float                                              Scalar;                                                   // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.FindItemRequest
struct UMcpUserInventoryManager_FindItemRequest_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ItemID;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FInventoryItemRequestState>          InItemRequests;                                           // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotRequest
struct UMcpUserInventoryManager_FindSaveSlotRequest_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> InSaveSlotRequests;                                       // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserInventoryManager.FindSaveSlotIndex
struct UMcpUserInventoryManager_FindSaveSlotIndex_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserInventoryManager.ParseSaveSlotList
struct UMcpUserInventoryManager_ParseSaveSlotList_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     JsonPayload;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.ParseInventoryForSaveSlot
struct UMcpUserInventoryManager_ParseInventoryForSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     JsonPayload;                                              // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItem
struct UMcpUserInventoryManager_GetInventoryItem_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InstanceItemId;                                           // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpInventoryItem                           OutInventoryItem;                                         // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserInventoryManager.GetInventoryItems
struct UMcpUserInventoryManager_GetInventoryItems_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FMcpInventoryItem>                   OutInventoryItems;                                        // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.OnQueryInventoryItemsRequestComplete
struct UMcpUserInventoryManager_OnQueryInventoryItemsRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.QueryInventoryItems
struct UMcpUserInventoryManager_QueryInventoryItems_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.GetSaveSlotList
struct UMcpUserInventoryManager_GetSaveSlotList_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.OnQuerySaveSlotListRequestComplete
struct UMcpUserInventoryManager_OnQuerySaveSlotListRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.QuerySaveSlotList
struct UMcpUserInventoryManager_QuerySaveSlotList_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.OnDeleteSaveSlotRequestComplete
struct UMcpUserInventoryManager_OnDeleteSaveSlotRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.DeleteSaveSlot
struct UMcpUserInventoryManager_DeleteSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserInventoryManager.OnCreateSaveSlotRequestComplete
struct UMcpUserInventoryManager_OnCreateSaveSlotRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserInventoryManager.CreateSaveSlot
struct UMcpUserInventoryManager_CreateSaveSlot_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     SaveSlotId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ParentSaveSlotId;                                         // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.OnDeleteUserComplete
struct UMcpUserManagerBase_OnDeleteUserComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.DeleteUser
struct UMcpUserManagerBase_DeleteUser_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.GetUser
struct UMcpUserManagerBase_GetUser_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpUserStatus                              User;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserManagerBase.GetUsers
struct UMcpUserManagerBase_GetUsers_Params
{
	TArray<struct FMcpUserStatus>                      Users;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.OnQueryUsersComplete
struct UMcpUserManagerBase_OnQueryUsersComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.QueryUsers
struct UMcpUserManagerBase_QueryUsers_Params
{
	TArray<struct FString>                             McpIds;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.QueryUser
struct UMcpUserManagerBase_QueryUser_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bShouldUpdateLastActive;                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function IpDrv.McpUserManagerBase.OnAuthenticateUserComplete
struct UMcpUserManagerBase_OnAuthenticateUserComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Token;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserMcp
struct UMcpUserManagerBase_AuthenticateUserMcp_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ClientSecret;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UDID;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.AuthenticateUserFacebook
struct UMcpUserManagerBase_AuthenticateUserFacebook_Params
{
	struct FString                                     FacebookId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     FacebookToken;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UDID;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.OnRegisterUserComplete
struct UMcpUserManagerBase_OnRegisterUserComplete_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.RegisterUserFacebook
struct UMcpUserManagerBase_RegisterUserFacebook_Params
{
	struct FString                                     FacebookId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     FacebookAuthToken;                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManagerBase.RegisterUserGenerated
struct UMcpUserManagerBase_RegisterUserGenerated_Params
{
};

// Function IpDrv.McpUserManagerBase.CreateInstance
struct UMcpUserManagerBase_CreateInstance_Params
{
	class UMcpUserManagerBase*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserManager.OnDeleteUserRequestComplete
struct UMcpUserManager_OnDeleteUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserManager.DeleteUser
struct UMcpUserManager_DeleteUser_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.GetUser
struct UMcpUserManager_GetUser_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FMcpUserStatus                              User;                                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserManager.GetUsers
struct UMcpUserManager_GetUsers_Params
{
	TArray<struct FMcpUserStatus>                      Users;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.OnQueryUsersRequestComplete
struct UMcpUserManager_OnQueryUsersRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserManager.ParseUsers
struct UMcpUserManager_ParseUsers_Params
{
	struct FString                                     JsonPayload;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.QueryUsers
struct UMcpUserManager_QueryUsers_Params
{
	TArray<struct FString>                             McpIds;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.OnQueryUserRequestComplete
struct UMcpUserManager_OnQueryUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserManager.QueryUser
struct UMcpUserManager_QueryUser_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bShouldUpdateLastActive;                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function IpDrv.McpUserManager.OnAuthenticateUserRequestComplete
struct UMcpUserManager_OnAuthenticateUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserManager.AuthenticateUserMcp
struct UMcpUserManager_AuthenticateUserMcp_Params
{
	struct FString                                     McpId;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ClientSecret;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UDID;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.AuthenticateUserFacebook
struct UMcpUserManager_AuthenticateUserFacebook_Params
{
	struct FString                                     FacebookId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     FacebookToken;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UDID;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.OnRegisterUserRequestComplete
struct UMcpUserManager_OnRegisterUserRequestComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function IpDrv.McpUserManager.ParseUser
struct UMcpUserManager_ParseUser_Params
{
	struct FString                                     JsonPayload;                                              // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.McpUserManager.RegisterUserFacebook
struct UMcpUserManager_RegisterUserFacebook_Params
{
	struct FString                                     FacebookId;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     FacebookAuthToken;                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.McpUserManager.RegisterUserGenerated
struct UMcpUserManager_RegisterUserGenerated_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.DebugDraw
struct UOnlineImageDownloaderWeb_DebugDraw_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
};

// Function IpDrv.OnlineImageDownloaderWeb.OnDownloadComplete
struct UOnlineImageDownloaderWeb_OnDownloadComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bDidSucceed;                                              // (CPF_Parm)
};

// Function IpDrv.OnlineImageDownloaderWeb.DownloadNextImage
struct UOnlineImageDownloaderWeb_DownloadNextImage_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearPendingDownloads
struct UOnlineImageDownloaderWeb_ClearPendingDownloads_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearAllDownloads
struct UOnlineImageDownloaderWeb_ClearAllDownloads_Params
{
};

// Function IpDrv.OnlineImageDownloaderWeb.ClearDownloads
struct UOnlineImageDownloaderWeb_ClearDownloads_Params
{
	TArray<struct FString>                             URLs;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.OnlineImageDownloaderWeb.GetNumPendingDownloads
struct UOnlineImageDownloaderWeb_GetNumPendingDownloads_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.RequestOnlineImages
struct UOnlineImageDownloaderWeb_RequestOnlineImages_Params
{
	TArray<struct FString>                             URLs;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bSRGB;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function IpDrv.OnlineImageDownloaderWeb.GetOnlineImageTexture
struct UOnlineImageDownloaderWeb_GetOnlineImageTexture_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.OnlineImageDownloaderWeb.OnOnlineImageDownloaded
struct UOnlineImageDownloaderWeb_OnOnlineImageDownloaded_Params
{
	struct FOnlineImageDownload                        CachedEntry;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.IsHanging
struct AWebConnection_IsHanging_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function IpDrv.WebConnection.Cleanup
struct AWebConnection_Cleanup_Params
{
};

// Function IpDrv.WebConnection.CheckRawBytes
struct AWebConnection_CheckRawBytes_Params
{
};

// Function IpDrv.WebConnection.EndOfHeaders
struct AWebConnection_EndOfHeaders_Params
{
};

// Function IpDrv.WebConnection.CreateResponseObject
struct AWebConnection_CreateResponseObject_Params
{
};

// Function IpDrv.WebConnection.ProcessPost
struct AWebConnection_ProcessPost_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ProcessGet
struct AWebConnection_ProcessGet_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ProcessHead
struct AWebConnection_ProcessHead_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedLine
struct AWebConnection_ReceivedLine_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedText
struct AWebConnection_ReceivedText_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.Timer
struct AWebConnection_Timer_Params
{
};

// Function IpDrv.WebConnection.Closed
struct AWebConnection_Closed_Params
{
};

// Function IpDrv.WebConnection.Accepted
struct AWebConnection_Accepted_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
