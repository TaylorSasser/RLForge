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

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UFacebookWindows::OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete");

	UFacebookWindows_OnFacebookFriendsRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.RequestFacebookFriends
// (FUNC_Final, FUNC_Defined, FUNC_Event, FUNC_Private)

void UFacebookWindows::RequestFacebookFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.RequestFacebookFriends");

	UFacebookWindows_RequestFacebookFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
// (FUNC_Final, FUNC_Defined, FUNC_Private, FUNC_HasDefaults)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UFacebookWindows::OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete");

	UFacebookWindows_OnFacebookMeRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
// (FUNC_Final, FUNC_Defined, FUNC_Event, FUNC_Private)

void UFacebookWindows::RequestFacebookMeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.RequestFacebookMeInfo");

	UFacebookWindows_RequestFacebookMeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.FacebookRequestCallback
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UFacebookWindows::FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.FacebookRequestCallback");

	UFacebookWindows_FacebookRequestCallback_Params params;
	params.OriginalRequest = OriginalRequest;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Payload                        (CPF_Parm, CPF_NeedCtorLink)
// int                            ResponseCode                   (CPF_Parm)

void UFacebookWindows::ProcessFacebookRequest(const struct FString& Payload, int ResponseCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.ProcessFacebookRequest");

	UFacebookWindows_ProcessFacebookRequest_Params params;
	params.Payload = Payload;
	params.ResponseCode = ResponseCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.FacebookRequest
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 GraphRequest                   (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 HTTPMethod                     (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FString>         ParamKeysAndValues             (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)

void UFacebookWindows::FacebookRequest(const struct FString& GraphRequest, const struct FString& HTTPMethod, TArray<struct FString> ParamKeysAndValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.FacebookRequest");

	UFacebookWindows_FacebookRequest_Params params;
	params.GraphRequest = GraphRequest;
	params.HTTPMethod = HTTPMethod;
	params.ParamKeysAndValues = ParamKeysAndValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.Disconnect
// (FUNC_Native, FUNC_Public)

void UFacebookWindows::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.Disconnect");

	UFacebookWindows_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.IsAuthorized
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFacebookWindows::IsAuthorized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.IsAuthorized");

	UFacebookWindows_IsAuthorized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.FacebookWindows.Authorize
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFacebookWindows::Authorize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.Authorize");

	UFacebookWindows_Authorize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.FacebookWindows.Init
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UFacebookWindows::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.Init");

	UFacebookWindows_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.ProcessRequest
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UHttpRequestWindows::ProcessRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.ProcessRequest");

	UHttpRequestWindows_ProcessRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetHeader
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 HeaderValue                    (CPF_Parm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetHeader");

	UHttpRequestWindows_SetHeader_Params params;
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetContentAsString
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ContentString                  (CPF_Parm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetContentAsString(const struct FString& ContentString)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetContentAsString");

	UHttpRequestWindows_SetContentAsString_Params params;
	params.ContentString = ContentString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetContent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          ContentPayload                 (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetContent(TArray<unsigned char>* ContentPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetContent");

	UHttpRequestWindows_SetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentPayload != nullptr)
		*ContentPayload = params.ContentPayload;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetURL
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 URL                            (CPF_Parm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetURL(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetURL");

	UHttpRequestWindows_SetURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetVerb
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Verb                           (CPF_Parm, CPF_NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetVerb(const struct FString& Verb)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetVerb");

	UHttpRequestWindows_SetVerb_Params params;
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetVerb
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetVerb()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetVerb");

	UHttpRequestWindows_GetVerb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetContent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          Content                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UHttpRequestWindows::GetContent(TArray<unsigned char>* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetContent");

	UHttpRequestWindows_GetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function WinDrv.HttpRequestWindows.GetURL
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetURL");

	UHttpRequestWindows_GetURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetContentLength
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UHttpRequestWindows::GetContentLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetContentLength");

	UHttpRequestWindows_GetContentLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetContentType
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetContentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetContentType");

	UHttpRequestWindows_GetContentType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetURLParameter
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ParameterName                  (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetURLParameter(const struct FString& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetURLParameter");

	UHttpRequestWindows_GetURLParameter_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetHeaders
// (FUNC_Native, FUNC_Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FString> UHttpRequestWindows::GetHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetHeaders");

	UHttpRequestWindows_GetHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetHeader
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpRequestWindows::GetHeader(const struct FString& HeaderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetHeader");

	UHttpRequestWindows_GetHeader_Params params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetResponseCode
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UHttpResponseWindows::GetResponseCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetResponseCode");

	UHttpResponseWindows_GetResponseCode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetContentAsString
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetContentAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetContentAsString");

	UHttpResponseWindows_GetContentAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetContent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<unsigned char>          Content                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UHttpResponseWindows::GetContent(TArray<unsigned char>* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetContent");

	UHttpResponseWindows_GetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function WinDrv.HttpResponseWindows.GetURL
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetURL");

	UHttpResponseWindows_GetURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetContentLength
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UHttpResponseWindows::GetContentLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetContentLength");

	UHttpResponseWindows_GetContentLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetContentType
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetContentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetContentType");

	UHttpResponseWindows_GetContentType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetURLParameter
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ParameterName                  (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetURLParameter(const struct FString& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetURLParameter");

	UHttpResponseWindows_GetURLParameter_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetHeaders
// (FUNC_Native, FUNC_Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<struct FString> UHttpResponseWindows::GetHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetHeaders");

	UHttpResponseWindows_GetHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetHeader
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 HeaderName                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UHttpResponseWindows::GetHeader(const struct FString& HeaderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetHeader");

	UHttpResponseWindows_GetHeader_Params params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UHttpRequestWindowsMcp::ProcessRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindowsMcp.ProcessRequest");

	UHttpRequestWindowsMcp_ProcessRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
