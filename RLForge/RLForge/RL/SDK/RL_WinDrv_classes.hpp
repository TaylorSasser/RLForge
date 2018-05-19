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

// Class WinDrv.FacebookWindows
// 0x0008 (0x00A8 - 0x00A0)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x00A0(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	struct FPointer                                    ChildProcHandle;                                          // 0x00A4(0x0004) (CPF_Const, CPF_Native, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.FacebookWindows");
		return ptr;
	}


	void OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestFacebookFriends();
	void OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestFacebookMeInfo();
	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ProcessFacebookRequest(const struct FString& Payload, int ResponseCode);
	void FacebookRequest(const struct FString& GraphRequest, const struct FString& HTTPMethod, TArray<struct FString> ParamKeysAndValues);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};


// Class WinDrv.HttpRequestWindows
// 0x0020 (0x006C - 0x004C)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                                  // 0x004C(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	struct FString                                     RequestVerb;                                              // 0x0050(0x000C) (CPF_Const, CPF_Native)
	struct FPointer                                    RequestURL;                                               // 0x005C(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	TArray<unsigned char>                              Payload;                                                  // 0x0060(0x000C) (CPF_Const, CPF_Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		return ptr;
	}


	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	class UHttpRequestInterface* SetContentAsString(const struct FString& ContentString);
	class UHttpRequestInterface* SetContent(TArray<unsigned char>* ContentPayload);
	class UHttpRequestInterface* SetURL(const struct FString& URL);
	class UHttpRequestInterface* SetVerb(const struct FString& Verb);
	struct FString GetVerb();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};


// Class WinDrv.HttpResponseWindows
// 0x0010 (0x004C - 0x003C)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                                 // 0x003C(0x0004) (CPF_Const, CPF_Native, CPF_Transient)
	TArray<unsigned char>                              Payload;                                                  // 0x0040(0x000C) (CPF_Const, CPF_Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		return ptr;
	}


	int GetResponseCode();
	struct FString GetContentAsString();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};


// Class WinDrv.WindowsClient
// 0x02CC (0x031C - 0x0050)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x1D4];                                     // 0x0050(0x01D4) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                         // 0x0224(0x0004) (CPF_Config)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0228(0x0030) MISSED OFFSET
	int                                                AllowJoystickInput;                                       // 0x0258(0x0004) (CPF_Config)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x025C(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


// Class WinDrv.XnaForceFeedbackManager
// 0x0014 (0x0078 - 0x0064)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0064(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		return ptr;
	}

};


// Class WinDrv.HttpRequestWindowsMcp
// 0x0018 (0x0084 - 0x006C)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	struct FString                                     AppID;                                                    // 0x006C(0x000C) (CPF_Const, CPF_Config, CPF_NeedCtorLink)
	struct FString                                     AppSecret;                                                // 0x0078(0x000C) (CPF_Const, CPF_Config, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindowsMcp");
		return ptr;
	}


	bool ProcessRequest();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
