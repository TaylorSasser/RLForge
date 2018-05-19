#pragma once
#undef PE_MAX
#undef AF_MAX

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Core.Object
// 0x003C
class UObject
{
public:
	static TArray<UObject*>*                           GObjects;                                                 // 0x0000(0x0000)
	struct FPointer                                    VfTableObject;                                            // 0x0000(0x0004) (CPF_Const, CPF_Native, CPF_EditConst, CPF_NoExport)
	struct FPointer                                    HashNext;                                                 // 0x0004(0x0004) (CPF_Const, CPF_Native, CPF_EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty Core.Object.ObjectFlags
	struct FPointer                                    HashOuterNext;                                            // 0x0010(0x0004) (CPF_Const, CPF_Native, CPF_EditConst)
	struct FPointer                                    StateFrame;                                               // 0x0014(0x0004) (CPF_Const, CPF_Native, CPF_EditConst)
	class UObject*                                     Linker;                                                   // 0x0018(0x0004) (CPF_Const, CPF_Native, CPF_EditConst, CPF_NoExport)
	struct FPointer                                    LinkerIndex;                                              // 0x001C(0x0004) (CPF_Const, CPF_Native, CPF_EditConst, CPF_NoExport)
	int                                                ObjectInternalInteger;                                    // 0x0020(0x0004) (CPF_Const, CPF_Native, CPF_EditConst, CPF_NoExport)
	int                                                NetIndex;                                                 // 0x0024(0x0004) (CPF_Const, CPF_Native, CPF_EditConst, CPF_NoExport)
	class UObject*                                     Outer;                                                    // 0x0028(0x0004) (CPF_Const, CPF_Native, CPF_EditConst)
	struct FName                                       Name;                                                     // 0x002C(0x0008) (CPF_Edit, CPF_Const, CPF_Native, CPF_EditConst)
	class UClass*                                      Class;                                                    // 0x0034(0x0004) (CPF_Const, CPF_Native, CPF_EditConst)
	class UObject*                                     ObjectArchetype;                                          // 0x0038(0x0004) (CPF_Edit, CPF_Const, CPF_Native, CPF_EditConst)

	static inline TArray<UObject*>& GetGlobalObjects()
	{
		return *GObjects;
	}

	inline std::string GetName() const
	{
		auto name = Name.GetName();
		if (Name.Number > 0)
		{
			name += '_' + std::to_string(Name.Number);
		}
		return name;
	}

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (auto i = 0u; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Object");
		return ptr;
	}

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		return GetVFunction<void(__thiscall *)(UObject*, class UFunction*, void*, void*)>(this, 66)(this, function, parms, nullptr);
	}


	int STATIC_SumInt(int Total, int Value);
	int STATIC_SortDescendingString(const struct FString& A, const struct FString& B);
	int STATIC_SortAscendingString(const struct FString& A, const struct FString& B);
	int STATIC_SortDescendingQWORD();
	int STATIC_SortAscendingQWORD();
	int STATIC_SortDescendingInt(int A, int B);
	int STATIC_SortAscendingInt(int A, int B);
	struct FString STATIC_PadString(const struct FString& Str, int Characters);
	void STATIC_GetFrameCounter();
	float STATIC_GetScaledAxisValue(float Value, float Sensitivity, float MaxSensitivity);
	class UObjectProvider* STATIC_GetObjectProvider();
	TEnumAsByte<EEdition> STATIC_GetEdition();
	bool STATIC_IsEdition(TEnumAsByte<EEdition> Edition);
	void SetRooted(bool bRooted);
	void STATIC_ProfNodeEvent(const struct FString& EventName);
	void STATIC_ProfNodeSetDepthThreshold(int Depth);
	void STATIC_ProfNodeSetTimeThresholdSeconds(float Threshold);
	void STATIC_ProfNodeStop(int AssumedTimerIndex);
	int STATIC_ProfNodeStart(const struct FString& TimerName);
	struct FString STATIC_CreateGuidString();
	struct FString STATIC_GetStringFromGuid(struct FGuid* InGuid);
	struct FGuid STATIC_GetGuidFromString(struct FString* InGuidString);
	struct FGuid STATIC_CreateGuid();
	bool STATIC_IsGuidValid(struct FGuid* InGuid);
	void STATIC_InvalidateGuid(struct FGuid* InGuid);
	class UObject* FindStructProperty(class UClass* PropertyClass, const struct FName& PropertyName, const struct FName& StructName);
	class UObject* FindProperty(class UClass* PropertyClass, const struct FName& PropertyName);
	bool STATIC_Identical(class UObject* Left, class UObject* Right);
	class UObject* DuplicateObject(class UObject* Template, class UObject* ObjOuter, class UClass* DestClass);
	float RunningAverage(float OldAverage, float NewValue, int NewCount, int OldCount);
	float STATIC_GetCurrentTime();
	struct FLinearColor GetMaxLinearColorBrightness(const struct FLinearColor& C);
	struct FColor GetMaxColorBrightness(const struct FColor& C);
	struct FLinearColor STATIC_LABtoRGB(const struct FLinearColor& C);
	struct FLinearColor STATIC_RGBtoLAB(const struct FLinearColor& C);
	struct FLinearColor STATIC_HSVtoRGB(const struct FLinearColor& C);
	struct FLinearColor STATIC_RGBtoHSV(const struct FLinearColor& C);
	struct FLinearColor STATIC_IntToLinearColor(int I);
	struct FColor STATIC_IntToColor(int I);
	int STATIC_LinearColorToInt(const struct FLinearColor& C);
	int STATIC_ColorToInt(const struct FColor& C);
	bool SolveVelocityQuadratic(float Distance, float Speed, float Accel, float* Time);
	float Sign(float X);
	struct FVector2D STATIC_MakeVector2D(float X, float Y);
	struct FVector STATIC_VAbs(const struct FVector& V);
	struct FVector STATIC_MakeVector(float X, float Y, float Z);
	struct FVector FlattenVector(const struct FVector& NormalToFlatten, const struct FVector& PlaneNormal);
	struct FName GetRealArchetypeName();
	struct FString STATIC_FormatTime(int Seconds);
	void SwapRefrences(class UObject** A, class UObject** B);
	class UObject* STATIC_GetTextArchetype(class UClass* ArchetypeClass, const struct FString& Path);
	bool IsArchetype();
	void UnsubscribeFromAllEvents();
	class UObject* NewInstance(class UObject* ObjOuter);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FRotator RotatorFromInt(int RotationPitchAndYaw);
	int RotatorToInt(const struct FRotator& Rotation);
	struct FString STATIC_GetLanguage();
	int GetRandomOptionSumFrequency(TArray<float>* FreqList);
	int GetBuildChangelistNumber();
	int GetEngineVersion();
	float GetAppSeconds();
	void GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec);
	struct FString TimeStamp();
	struct FVector TransformVectorByRotation(const struct FRotator& SourceRotation, const struct FVector& SourceVector, bool bInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float ByteToFloat(unsigned char inputByte, bool bSigned);
	unsigned char FloatToByte(float inputFloat, bool bSigned);
	float STATIC_UnwindHeading(float A);
	float STATIC_FindDeltaAngle(float A1, float A2);
	float STATIC_GetHeadingAngle(const struct FVector& Dir);
	void STATIC_GetAngularDegreesFromRadians(struct FVector2D* OutFOV);
	void STATIC_GetAngularFromDotDist(const struct FVector2D& DotDist, struct FVector2D* OutAngDist);
	bool STATIC_GetAngularDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutAngularDist);
	bool STATIC_GetDotDistance(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ, struct FVector2D* OutDotDist);
	bool LinePlaneIntersection(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, bool bCheckLineSegment, struct FVector* Out_Intersection, float* Out_T);
	struct FVector STATIC_PointProjectToPlane(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);
	float PointDistToPlane(const struct FVector& Point, const struct FRotator& Orientation, const struct FVector& Origin, struct FVector* out_ClosestPoint);
	float PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint, struct FVector* OutClosestPoint);
	float PointDistToLine(const struct FVector& Point, const struct FVector& Line, const struct FVector& Origin, struct FVector* OutClosestPoint);
	void STATIC_GetPerObjectConfigObjects(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, class UObject** OutObject);
	bool STATIC_GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray<struct FString>* out_SectionNames);
	void STATIC_ImportJSON(const struct FString& PropertyName, struct FString* JSON);
	void STATIC_StaticSaveConfig();
	void SaveConfig();
	class UObject* STATIC_FindObject(const struct FString& ObjectName, class UClass* ObjectClass);
	class UObject* STATIC_DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail);
	int STATIC_EnumFromString(class UObject* E, const struct FName& ValueName);
	struct FName STATIC_GetEnum(class UObject* E, int I);
	void Disable(const struct FName& ProbeFunc);
	void Enable(const struct FName& ProbeFunc);
	void ContinuedState();
	void PausedState();
	void PoppedState();
	void PushedState();
	void EndState(const struct FName& NextStateName);
	void BeginState(const struct FName& PreviousStateName);
	void DumpStateStack();
	void PopState(bool bPopAll);
	void PushState(const struct FName& NewState, const struct FName& NewLabel);
	struct FName GetStateName();
	bool IsChildState(const struct FName& TestState, const struct FName& TestParentState);
	bool IsInState(const struct FName& TestState, bool bTestStateStack);
	void GotoState(const struct FName& NewState, const struct FName& Label, bool bForceEvents, bool bKeepStack);
	bool STATIC_IsUTracing();
	void STATIC_SetUTracing(bool bShouldUTrace);
	struct FName STATIC_GetFuncName();
	void STATIC_DebugBreak(int UserFlags, TEnumAsByte<EDebugBreakType> DebuggerType);
	struct FString STATIC_GetScriptTrace();
	void STATIC_ScriptTrace();
	struct FString STATIC_ParseLocalizedPropertyPath(const struct FString& PathName);
	struct FString STATIC_Localize(const struct FString& SectionName, const struct FString& KeyName, const struct FString& PackageName, bool bOptional);
	void STATIC_WarnInternal(const struct FString& S);
	void STATIC_LogInternal(const struct FString& S, const struct FName& Tag, bool bFileOnly);
	struct FLinearColor STATIC_LinearColorLerp(const struct FLinearColor& ColorA, const struct FLinearColor& ColorB, float Alpha);
	struct FLinearColor STATIC_Subtract_LinearColorLinearColor(const struct FLinearColor& A, const struct FLinearColor& B);
	struct FLinearColor STATIC_Multiply_LinearColorFloat(const struct FLinearColor& LC, float Mult);
	struct FLinearColor STATIC_ConvertFromSRGB(const struct FLinearColor& OldColor);
	struct FColor STATIC_LinearColorToColor(const struct FLinearColor& OldColor);
	struct FLinearColor STATIC_ColorToLinearColor(const struct FColor& OldColor);
	struct FLinearColor STATIC_MakeLinearColor(float R, float G, float B, float A);
	struct FColor STATIC_LerpColor(const struct FColor& A, const struct FColor& B, float Alpha);
	struct FColor STATIC_MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	struct FColor STATIC_Add_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FColor STATIC_Multiply_ColorFloat(const struct FColor& A, float B);
	struct FColor STATIC_Multiply_FloatColor(float A, const struct FColor& B);
	struct FColor STATIC_Subtract_ColorColor(const struct FColor& A, const struct FColor& B);
	struct FVector2D STATIC_EvalInterpCurveVector2D(float InVal, struct FInterpCurveVector2D* Vector2DCurve);
	struct FVector STATIC_EvalInterpCurveVector(float InVal, struct FInterpCurveVector* VectorCurve);
	float STATIC_EvalInterpCurveFloat(float InVal, struct FInterpCurveFloat* FloatCurve);
	struct FVector2D STATIC_vect2d(float InX, float InY);
	float STATIC_GetMappedRangeValue(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);
	float STATIC_GetRangePctByValue(const struct FVector2D& Range, float Value);
	float STATIC_GetRangeValueByPct(const struct FVector2D& Range, float Pct);
	struct FVector2D STATIC_V2DNormal(const struct FVector2D& A);
	float STATIC_V2DSizeSq(const struct FVector2D& A);
	float STATIC_V2DSize(const struct FVector2D& A);
	float STATIC_Dot_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D STATIC_SubtractEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A);
	struct FVector2D STATIC_AddEqual_Vector2DVector2D(const struct FVector2D& B, struct FVector2D* A);
	struct FVector2D STATIC_DivideEqual_Vector2DFloat(float B, struct FVector2D* A);
	struct FVector2D STATIC_MultiplyEqual_Vector2DFloat(float B, struct FVector2D* A);
	struct FVector2D STATIC_Divide_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D STATIC_Multiply_Vector2DFloat(const struct FVector2D& A, float B);
	struct FVector2D STATIC_Subtract_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FVector2D STATIC_Add_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B);
	struct FQuat STATIC_Subtract_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat STATIC_Add_QuatQuat(const struct FQuat& A, const struct FQuat& B);
	struct FQuat STATIC_QuatSlerp(const struct FQuat& A, const struct FQuat& B, float Alpha, bool bShortestPath);
	struct FRotator STATIC_QuatToRotator(const struct FQuat& A);
	struct FQuat STATIC_QuatFromRotator(const struct FRotator& A);
	struct FQuat STATIC_QuatFromAxisAndAngle(const struct FVector& Axis, float Angle);
	struct FQuat STATIC_QuatFindBetween(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_QuatRotateVector(const struct FQuat& A, const struct FVector& B);
	struct FQuat STATIC_QuatInvert(const struct FQuat& A);
	float STATIC_QuatDot(const struct FQuat& A, const struct FQuat& B);
	struct FQuat STATIC_QuatProduct(const struct FQuat& A, const struct FQuat& B);
	struct FVector STATIC_MatrixGetAxis(const struct FMatrix& TM, TEnumAsByte<EAxis> Axis);
	struct FVector STATIC_MatrixGetOrigin(const struct FMatrix& TM);
	struct FRotator STATIC_MatrixGetRotator(const struct FMatrix& TM);
	struct FMatrix STATIC_MakeRotationMatrix(const struct FRotator& Rotation);
	struct FMatrix STATIC_MakeRotationTranslationMatrix(const struct FVector& Translation, const struct FRotator& Rotation);
	struct FVector STATIC_InverseTransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector STATIC_TransformNormal(const struct FMatrix& TM, const struct FVector& A);
	struct FVector STATIC_InverseTransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FVector STATIC_TransformVector(const struct FMatrix& TM, const struct FVector& A);
	struct FMatrix STATIC_Multiply_MatrixMatrix(const struct FMatrix& A, const struct FMatrix& B);
	bool STATIC_NotEqual_NameName(const struct FName& A, const struct FName& B);
	bool STATIC_EqualEqual_NameName(const struct FName& A, const struct FName& B);
	bool IsA(const struct FName& ClassName);
	bool STATIC_ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	bool STATIC_NotEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B);
	bool STATIC_EqualEqual_InterfaceInterface(const TScriptInterface<class UInterface>& A, const TScriptInterface<class UInterface>& B);
	bool STATIC_NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool STATIC_EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	struct FString GetPathName();
	struct FString STATIC_PathName(class UObject* CheckObject);
	TArray<struct FString> STATIC_SplitString(const struct FString& Source, const struct FString& Delimiter, bool bCullEmpty);
	void STATIC_ParseStringIntoArray(const struct FString& BaseString, const struct FString& delim, bool bCullEmpty, TArray<struct FString>* Pieces);
	struct FString STATIC_RepeatString(const struct FString& InValue, int Count);
	struct FString JoinArrayQWord(const struct FString& delim, bool bIgnoreBlanks);
	struct FString JoinArrayInt(const struct FString& delim, bool bIgnoreBlanks, TArray<int>* IntArray);
	struct FString JoinArrayName(const struct FString& delim, bool bIgnoreBlanks, TArray<struct FName>* NameArray);
	struct FString STATIC_JoinArrayStr(const struct FString& delim, bool bIgnoreBlanks, TArray<struct FString>* StringArray);
	void STATIC_JoinArray(const struct FString& delim, bool bIgnoreBlanks, TArray<struct FString>* StringArray, struct FString* out_Result);
	struct FString STATIC_GetRightMost(const struct FString& Text);
	struct FString STATIC_Split(const struct FString& Text, const struct FString& SplitStr, bool bOmitSplitStr);
	struct FString STATIC_Trim(const struct FString& Src);
	struct FString STATIC_Repl(const struct FString& Src, const struct FString& Match, const struct FString& With, bool bCaseSensitive);
	int STATIC_Asc(const struct FString& S);
	struct FString STATIC_Chr(int I);
	struct FString STATIC_Locs(const struct FString& S);
	struct FString STATIC_Caps(const struct FString& S);
	struct FString STATIC_Right(const struct FString& S, int I);
	struct FString STATIC_Left(const struct FString& S, int I);
	struct FString STATIC_Mid(const struct FString& S, int I, int J);
	int STATIC_InStr(const struct FString& S, const struct FString& T, bool bSearchFromRight, bool bIgnoreCase, int StartPos);
	int STATIC_Len(const struct FString& S);
	struct FString STATIC_SubtractEqual_StrStr(const struct FString& B, struct FString* A);
	struct FString STATIC_AtEqual_StrStr(const struct FString& B, struct FString* A);
	struct FString STATIC_ConcatEqual_StrStr(const struct FString& B, struct FString* A);
	bool STATIC_ComplementEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_NotEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_EqualEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_GreaterEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_LessEqual_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_Greater_StrStr(const struct FString& A, const struct FString& B);
	bool STATIC_Less_StrStr(const struct FString& A, const struct FString& B);
	struct FString STATIC_At_StrStr(const struct FString& A, const struct FString& B);
	struct FString STATIC_Concat_StrStr(const struct FString& A, const struct FString& B);
	struct FRotator STATIC_RotateRotator(const struct FVector& Axis, const struct FRotator& Rot, const struct FRotator& Direction, float Amount);
	struct FRotator STATIC_MakeRotator(int Pitch, int Yaw, int Roll);
	bool STATIC_SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis);
	int STATIC_ClampRotAxisFromRange(int Current, int Min, int Max);
	int STATIC_ClampRotAxisFromBase(int Current, int Center, int MaxDelta);
	void STATIC_ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis);
	struct FRotator STATIC_FlattenRotatorOnAxis(const struct FVector& AxisToRemove, const struct FRotator& RotToFlatten, const struct FRotator& RotToFlattenTo);
	float STATIC_RSize(const struct FRotator& R);
	float STATIC_RDiff(const struct FRotator& A, const struct FRotator& B);
	int STATIC_NormalizeRotAxis(int Angle);
	struct FRotator STATIC_RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, bool bConstantInterpSpeed);
	struct FRotator STATIC_RTransform(const struct FRotator& R, const struct FRotator& RBasis);
	struct FRotator STATIC_RLerp(const struct FRotator& A, const struct FRotator& B, float Alpha, bool bShortestPath);
	struct FRotator STATIC_Normalize(const struct FRotator& Rot);
	struct FRotator STATIC_OrthoRotation(const struct FVector& X, const struct FVector& Y, const struct FVector& Z);
	struct FRotator STATIC_RotRand(bool bRoll);
	struct FVector STATIC_GetRotatorAxis(const struct FRotator& A, int Axis);
	void STATIC_GetUnAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void STATIC_GetAxes(const struct FRotator& A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	bool STATIC_ClockwiseFrom_IntInt(int A, int B);
	struct FRotator STATIC_SubtractEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	struct FRotator STATIC_AddEqual_RotatorRotator(const struct FRotator& B, struct FRotator* A);
	struct FRotator STATIC_Subtract_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator STATIC_Add_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	struct FRotator STATIC_DivideEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator STATIC_MultiplyEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator STATIC_Divide_RotatorFloat(const struct FRotator& A, float B);
	struct FRotator STATIC_Multiply_FloatRotator(float A, const struct FRotator& B);
	struct FRotator STATIC_Multiply_RotatorFloat(const struct FRotator& A, float B);
	bool STATIC_NotEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	bool STATIC_EqualEqual_RotatorRotator(const struct FRotator& A, const struct FRotator& B);
	float STATIC_GetRadiansBetweenVectors(const struct FVector& V0, const struct FVector& v1);
	struct FVector STATIC_VClamp(const struct FVector& A, const struct FVector& Min, const struct FVector& Max);
	struct FVector STATIC_vect3d(float X, float Y, float Z);
	bool InCylinder(const struct FVector& Origin, const struct FRotator& Dir, float Width, const struct FVector& A, bool bIgnoreZ);
	float STATIC_NoZDot(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_ClampLength(const struct FVector& V, float MaxLength);
	struct FVector STATIC_VInterpConstantTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	struct FVector STATIC_VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);
	void Construct();
	struct FVector STATIC_ProjectOnToPlane(const struct FVector& InVector, const struct FVector& InNormal, float OverBounce);
	bool STATIC_IsZero(const struct FVector& A);
	struct FVector STATIC_ProjectOnTo(const struct FVector& X, const struct FVector& Y);
	struct FVector STATIC_MirrorVectorByNormal(const struct FVector& InVect, const struct FVector& InNormal);
	struct FVector STATIC_VRandCone2(const struct FVector& Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	struct FVector STATIC_VRandCone(const struct FVector& Dir, float ConeHalfAngleRadians);
	struct FVector STATIC_VRand();
	struct FVector STATIC_VLerp(const struct FVector& A, const struct FVector& B, float Alpha);
	struct FVector STATIC_Normal2D(const struct FVector& A);
	struct FVector STATIC_Normal(const struct FVector& A);
	float STATIC_VSizeSq2D(const struct FVector& A);
	float STATIC_VSizeSq(const struct FVector& A);
	float STATIC_VSize2D(const struct FVector& A);
	float STATIC_VSize(const struct FVector& A);
	struct FVector STATIC_SubtractEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector STATIC_AddEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector STATIC_DivideEqual_VectorFloat(float B, struct FVector* A);
	struct FVector STATIC_MultiplyEqual_VectorVector(const struct FVector& B, struct FVector* A);
	struct FVector STATIC_MultiplyEqual_VectorFloat(float B, struct FVector* A);
	struct FVector STATIC_Cross_VectorVector(const struct FVector& A, const struct FVector& B);
	float STATIC_Dot_VectorVector(const struct FVector& A, const struct FVector& B);
	bool STATIC_NotEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	bool STATIC_EqualEqual_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_GreaterGreater_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector STATIC_LessLess_VectorRotator(const struct FVector& A, const struct FRotator& B);
	struct FVector STATIC_Subtract_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Add_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Divide_VectorFloat(const struct FVector& A, float B);
	struct FVector STATIC_Multiply_VectorVector(const struct FVector& A, const struct FVector& B);
	struct FVector STATIC_Multiply_FloatVector(float A, const struct FVector& B);
	struct FVector STATIC_Multiply_VectorFloat(const struct FVector& A, float B);
	struct FVector STATIC_Subtract_PreVector(const struct FVector& A);
	float STATIC_FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float STATIC_FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float STATIC_FPctByRange(float Value, float InMin, float InMax);
	float STATIC_RandSign(float Value);
	struct FVector STATIC_CalculateGravityPosition(const struct FVector& Location, const struct FVector& Velocity, float Gravity, float Time, const struct FVector& GravityDirection);
	float STATIC_RandRange(float InMin, float InMax);
	float STATIC_FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	float STATIC_FInterpEaseOut(float A, float B, float Alpha, float Exp);
	float STATIC_FInterpEaseIn(float A, float B, float Alpha, float Exp);
	float STATIC_FCubicInterp(float P0, float T0, float P1, float T1, float A);
	int STATIC_FloorLog2(int Value);
	int STATIC_FCeil(float A);
	int STATIC_FFloor(float A);
	int STATIC_Round(float A);
	float STATIC_Lerp(float A, float B, float Alpha);
	float STATIC_FClamp(float V, float A, float B);
	float STATIC_FMax(float A, float B);
	float STATIC_FMin(float A, float B);
	float STATIC_FRand();
	float STATIC_Square(float A);
	float STATIC_Sqrt(float A);
	float STATIC_Loge(float A);
	float STATIC_Exp(float A);
	float STATIC_Atan2(float A, float B);
	float STATIC_Atan(float A);
	float STATIC_Tan(float A);
	float STATIC_Acos(float A);
	float STATIC_Cos(float A);
	float STATIC_Asin(float A);
	float STATIC_Sin(float A);
	float STATIC_Abs(float A);
	float STATIC_SubtractEqual_FloatFloat(float B, float* A);
	float STATIC_AddEqual_FloatFloat(float B, float* A);
	float STATIC_DivideEqual_FloatFloat(float B, float* A);
	float STATIC_MultiplyEqual_FloatFloat(float B, float* A);
	bool STATIC_NotEqual_FloatFloat(float A, float B);
	bool STATIC_ComplementEqual_FloatFloat(float A, float B);
	bool STATIC_EqualEqual_FloatFloat(float A, float B);
	bool STATIC_GreaterEqual_FloatFloat(float A, float B);
	bool STATIC_LessEqual_FloatFloat(float A, float B);
	bool STATIC_Greater_FloatFloat(float A, float B);
	bool STATIC_Less_FloatFloat(float A, float B);
	float STATIC_Subtract_FloatFloat(float A, float B);
	float STATIC_Add_FloatFloat(float A, float B);
	float STATIC_Percent_FloatFloat(float A, float B);
	float STATIC_Divide_FloatFloat(float A, float B);
	float STATIC_Multiply_FloatFloat(float A, float B);
	float STATIC_MultiplyMultiply_FloatFloat(float Base, float Exp);
	float STATIC_Subtract_PreFloat(float A);
	struct FString STATIC_ToHex(int A);
	int STATIC_Clamp(int V, int A, int B);
	int STATIC_Max(int A, int B);
	int STATIC_Min(int A, int B);
	int STATIC_Rand(int Max);
	void UnbindDelegate(const struct FName& DelegateName, class UObject* TargetObject, const struct FName& TargetFuncName);
	void BindStateDelegate(const struct FName& DelegateName, class UObject* TargetObject, const struct FName& TargetFuncName);
	void BindDelegate(const struct FName& DelegateName, class UObject* TargetObject, const struct FName& TargetFuncName);
	int STATIC_FromHex(const struct FString& Hex);
	void STATIC_QMin();
	void STATIC_QMax();
	void STATIC_QSubtract();
	bool STATIC_NotEqual_QWordInt(int B);
	bool STATIC_EqualEqual_QWordInt(int B);
	bool STATIC_NotEqual_QWordQWord();
	bool STATIC_EqualEqual_QWordQWord();
	bool STATIC_GreaterEqual_QWordQWord();
	bool STATIC_LessEqual_QWordQWord();
	bool STATIC_Greater_QWordQWord();
	bool STATIC_Less_QWordQWord();
	int STATIC_Subtract_QWordQWord();
	void STATIC_Add_QWordQWord();
	int STATIC_SubtractSubtract_Int(int* A);
	int STATIC_AddAdd_Int(int* A);
	int STATIC_SubtractSubtract_PreInt(int* A);
	int STATIC_AddAdd_PreInt(int* A);
	int STATIC_SubtractEqual_IntInt(int B, int* A);
	int STATIC_AddEqual_IntInt(int B, int* A);
	int STATIC_DivideEqual_IntFloat(float B, int* A);
	int STATIC_MultiplyEqual_IntFloat(float B, int* A);
	int STATIC_Or_IntInt(int A, int B);
	int STATIC_Xor_IntInt(int A, int B);
	int STATIC_And_IntInt(int A, int B);
	bool STATIC_NotEqual_IntInt(int A, int B);
	bool STATIC_EqualEqual_IntInt(int A, int B);
	bool STATIC_GreaterEqual_IntInt(int A, int B);
	bool STATIC_LessEqual_IntInt(int A, int B);
	bool STATIC_Greater_IntInt(int A, int B);
	bool STATIC_Less_IntInt(int A, int B);
	int STATIC_GreaterGreaterGreater_IntInt(int A, int B);
	int STATIC_GreaterGreater_IntInt(int A, int B);
	int STATIC_LessLess_IntInt(int A, int B);
	int STATIC_Subtract_IntInt(int A, int B);
	int STATIC_Add_IntInt(int A, int B);
	int STATIC_Percent_IntInt(int A, int B);
	int STATIC_Divide_IntInt(int A, int B);
	int STATIC_Multiply_IntInt(int A, int B);
	int STATIC_Subtract_PreInt(int A);
	int STATIC_Complement_PreInt(int A);
	unsigned char STATIC_SubtractSubtract_Byte(unsigned char* A);
	unsigned char STATIC_AddAdd_Byte(unsigned char* A);
	unsigned char STATIC_SubtractSubtract_PreByte(unsigned char* A);
	unsigned char STATIC_AddAdd_PreByte(unsigned char* A);
	unsigned char STATIC_SubtractEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char STATIC_AddEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char STATIC_DivideEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char STATIC_MultiplyEqual_ByteFloat(float B, unsigned char* A);
	unsigned char STATIC_MultiplyEqual_ByteByte(unsigned char B, unsigned char* A);
	bool STATIC_OrOr_BoolBool(bool A, bool B);
	bool STATIC_XorXor_BoolBool(bool A, bool B);
	bool STATIC_AndAnd_BoolBool(bool A, bool B);
	bool STATIC_NotEqual_BoolBool(bool A, bool B);
	bool STATIC_EqualEqual_BoolBool(bool A, bool B);
	bool STATIC_Not_PreBool(bool A);
};


// Class Core.TextBuffer
// 0x0024 (0x0060 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x003C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBuffer");
		return ptr;
	}

};


// Class Core.Subsystem
// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                            // 0x003C(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subsystem");
		return ptr;
	}

};


// Class Core.System
// 0x00BC (0x00FC - 0x0040)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                           // 0x0040(0x0004) (CPF_Config)
	int                                                MaxStaleCacheSize;                                        // 0x0044(0x0004) (CPF_Config)
	int                                                MaxOverallCacheSize;                                      // 0x0048(0x0004) (CPF_Config)
	int                                                PackageSizeSoftLimit;                                     // 0x004C(0x0004) (CPF_Config)
	float                                              AsyncIOBandwidthLimit;                                    // 0x0050(0x0004) (CPF_Config)
	struct FString                                     SavePath;                                                 // 0x0054(0x000C) (CPF_Config, CPF_NeedCtorLink)
	struct FString                                     CachePath;                                                // 0x0060(0x000C) (CPF_Config, CPF_NeedCtorLink)
	struct FString                                     CacheExt;                                                 // 0x006C(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FString>                             Paths;                                                    // 0x0078(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FString>                             SeekFreePCPaths;                                          // 0x0084(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FString>                             ScriptPaths;                                              // 0x0090(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FString>                             FRScriptPaths;                                            // 0x009C(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FString>                             CutdownPaths;                                             // 0x00A8(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FName>                               Suppress;                                                 // 0x00B4(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FName>                               SuppressPublic;                                           // 0x00C0(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FString>                             Extensions;                                               // 0x00CC(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FString>                             SeekFreePCExtensions;                                     // 0x00D8(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FString>                             LocalizationPaths;                                        // 0x00E4(0x000C) (CPF_Config, CPF_NeedCtorLink)
	struct FString                                     TextureFileCacheExtension;                                // 0x00F0(0x000C) (CPF_Config, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.System");
		return ptr;
	}

};


// Class Core.Subscription
// 0x0010 (0x004C - 0x003C)
class USubscription : public UObject
{
public:
	struct FScriptDelegate                             __SubscriberCallback__Delegate;                           // 0x003C(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Subscription");
		return ptr;
	}


	void STATIC___Subscription__TriggerAll_1(class USubscription* S);
	class USubscription* STATIC_GetNone();
	void STATIC_TriggerAll(TArray<class USubscription*>* Subscriptions);
	class USubscription* STATIC_Create(const struct FScriptDelegate& InCallback);
	void Dispose();
	void TriggerCallback();
	void SetCallback(const struct FScriptDelegate& InCallback);
	void SubscriberCallback();
};


// Class Core.PackageMap
// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                                      // 0x003C(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PackageMap");
		return ptr;
	}

};


// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectSerializer");
		return ptr;
	}

};


// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectRedirector");
		return ptr;
	}

};


// Class Core.ObjectProvider
// 0x0080 (0x00BC - 0x003C)
class UObjectProvider : public UObject
{
public:
	struct FPointer                                    VfTable_FObjectDestructionSubscriber;                     // 0x003C(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	TArray<class UObject*>                             Objects;                                                  // 0x0040(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToAdds;                                         // 0x004C(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToRemoves;                                      // 0x0058(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	TArray<struct FObjectProviderSubscription>         SubscribedToLists;                                        // 0x0064(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	struct FArray_Mirror                               Injections;                                               // 0x0070(0x000C) (CPF_Const, CPF_Native, CPF_Transient)
	TArray<struct FObjectProviderPendingCallback>      PendingCallbacks;                                         // 0x007C(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	unsigned long                                      bNeedsCleanup : 1;                                        // 0x0088(0x0004) (CPF_Const, CPF_Transient)
	struct FScriptDelegate                             __ObjectSubscriptionCallback__Delegate;                   // 0x008C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ObjectListSubscriptionCallback__Delegate;               // 0x009C(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ObjectChangeCallback__Delegate;                         // 0x00AC(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProvider");
		return ptr;
	}


	void SetSingleton(class UClass* ObjClass, class UObject* Replacement);
	void AddAndRemoveObjects(TArray<class UObject*>* AddObjects, TArray<class UObject*>* RemoveObjects);
	void RemoveObjects(TArray<class UObject*>* InObjects);
	void RemoveObject(class UObject* Obj);
	void AddObjects(TArray<class UObject*>* InObjects);
	void AddObject(class UObject* Obj);
	class UObject* GetOrCreate(class UClass* ObjClass);
	class UObject* Get(class UClass* ObjClass);
	void AllObjects(class UClass* BaseClass, class UClass* InterfaceClass, class UObject** Obj);
	void Inject(class UObject* Subscriber);
	void UnsubscribeAll(class UObject* Subscription);
	void Unsubscribe(const struct FScriptDelegate& Callback);
	void SubscribeList(class UClass* BaseClass, const struct FScriptDelegate& Callback);
	void Subscribe(class UClass* BaseClass, const struct FScriptDelegate& OnAdd, const struct FScriptDelegate& OnRemove);
	void ObjectChangeCallback();
	void ObjectListSubscriptionCallback(class UObjectProvider* Provider);
	void ObjectSubscriptionCallback(class UObject* Obj);
};


// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MetaData");
		return ptr;
	}

};


// Class Core.Linker
// 0x0138 (0x0174 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x003C(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Linker");
		return ptr;
	}

};


// Class Core.LinkerSave
// 0x00A8 (0x021C - 0x0174)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0174(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerSave");
		return ptr;
	}

};


// Class Core.LinkerLoad
// 0x05C8 (0x073C - 0x0174)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x5C8];                                     // 0x0174(0x05C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.LinkerLoad");
		return ptr;
	}

};


// Class Core.Interface
// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Interface");
		return ptr;
	}

};


// Class Core.FileSystem
// 0x0000 (0x003C - 0x003C)
class UFileSystem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FileSystem");
		return ptr;
	}


	int STATIC_CrcString(struct FString* Str);
	int STATIC_CrcBytes(TArray<unsigned char>* Bytes);
	bool STATIC_DeleteDirectoryTree(const struct FString& Path);
	bool STATIC_DeleteFile(const struct FString& Path);
	bool STATIC_AppendStringToFile(const struct FString& Path, const struct FString& Text);
	bool STATIC_SaveStringToFile(const struct FString& Path, const struct FString& Text);
	bool STATIC_SaveBytesToFile(const struct FString& Path, TArray<unsigned char>* Bytes);
	bool STATIC_LoadFileToBytes(const struct FString& Path, TArray<unsigned char>* OutBytes);
	bool STATIC_LoadFileToString(const struct FString& Path, struct FString* OutText);
	struct FString STATIC_GetFileExtensionWithoutDot(const struct FString& Path);
	struct FString STATIC_GetFileExtension(const struct FString& Path);
	struct FString STATIC_GetFilePathWithoutExtension(const struct FString& Path);
	struct FString STATIC_GetFileNameWithoutExtension(const struct FString& Path);
	struct FString STATIC_GetFilename(const struct FString& Path);
	void STATIC_FindFiles(const struct FString& Path, TArray<struct FString>* OutFilenames);
};


// Class Core.Field
// 0x000C (0x0048 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData00[0x08];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Field");
		return ptr;
	}

};


// Class Core.Struct
// 0x0044 (0x008C - 0x0048)
class UStruct : public UField
{
public:
	class UTextBuffer*                                 ScriptText;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UTextBuffer*                                 CPPText;                                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned long                                      PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	TArray<unsigned char>                              Script;                                                   // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int                                                TextPost;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int                                                Line;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int                                                MinAlignment;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   RefLink;                                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   PropertyLink;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   ConfigLink;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   ConstructorLink;                                          // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   ComponentPropertyLink;                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   TransientPropertyLink;                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Struct");
		return ptr;
	}

};


// Class Core.ScriptStruct
// 0x001C (0x00A8 - 0x008C)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x008C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ScriptStruct");
		return ptr;
	}

};


// Class Core.Function
// 0x0020 (0x00AC - 0x008C)
class UFunction : public UStruct
{
public:
	unsigned long                                      FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned short                                     iNative;                                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned short                                     RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              FriendlyName;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      OperPrecedence;                                           // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned short                                     ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned long                                      ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Function");
		return ptr;
	}

};


// Class Core.Property
// 0x003C (0x0084 - 0x0048)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0048(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Property");
		return ptr;
	}

};


// Class Core.StructProperty
// 0x0004 (0x0088 - 0x0084)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StructProperty");
		return ptr;
	}

};


// Class Core.StrProperty
// 0x0000 (0x0084 - 0x0084)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StrProperty");
		return ptr;
	}

};


// Class Core.QWordProperty
// 0x0000 (0x0084 - 0x0084)
class UQWordProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.QWordProperty");
		return ptr;
	}

};


// Class Core.ObjectProperty
// 0x000C (0x0090 - 0x0084)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0084(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ObjectProperty");
		return ptr;
	}

};


// Class Core.ComponentProperty
// 0x0000 (0x0090 - 0x0090)
class UComponentProperty : public UObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ComponentProperty");
		return ptr;
	}

};


// Class Core.ClassProperty
// 0x0004 (0x0094 - 0x0090)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0090(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ClassProperty");
		return ptr;
	}

};


// Class Core.NameProperty
// 0x0000 (0x0084 - 0x0084)
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.NameProperty");
		return ptr;
	}

};


// Class Core.MapProperty
// 0x0008 (0x008C - 0x0084)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0084(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MapProperty");
		return ptr;
	}

};


// Class Core.IntProperty
// 0x0000 (0x0084 - 0x0084)
class UIntProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IntProperty");
		return ptr;
	}

};


// Class Core.InterfaceProperty
// 0x0004 (0x0088 - 0x0084)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.InterfaceProperty");
		return ptr;
	}

};


// Class Core.FloatProperty
// 0x0000 (0x0084 - 0x0084)
class UFloatProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FloatProperty");
		return ptr;
	}

};


// Class Core.DelegateProperty
// 0x0008 (0x008C - 0x0084)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0084(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DelegateProperty");
		return ptr;
	}

};


// Class Core.ByteProperty
// 0x0004 (0x0088 - 0x0084)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ByteProperty");
		return ptr;
	}

};


// Class Core.BoolProperty
// 0x0004 (0x0088 - 0x0084)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.BoolProperty");
		return ptr;
	}

};


// Class Core.ArrayProperty
// 0x0004 (0x0088 - 0x0084)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ArrayProperty");
		return ptr;
	}

};


// Class Core.Enum
// 0x000C (0x0054 - 0x0048)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0048(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Enum");
		return ptr;
	}

};


// Class Core.Const
// 0x000C (0x0054 - 0x0048)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0048(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Const");
		return ptr;
	}

};


// Class Core.FeatureSystem
// 0x020C (0x0248 - 0x003C)
class UFeatureSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET
	unsigned long                                      Matchmaking : 1;                                          // 0x0048(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData01 : 31;                                       // 0x0048(0x0001)
	unsigned long                                      PrivateMatch : 1;                                         // 0x004C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData02 : 31;                                       // 0x004C(0x0001)
	unsigned long                                      SplitscreenMatch : 1;                                     // 0x0050(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData03 : 31;                                       // 0x0050(0x0001)
	unsigned long                                      SplitscreenJoin : 1;                                      // 0x0054(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData04 : 31;                                       // 0x0054(0x0001)
	unsigned long                                      SeasonMode : 1;                                           // 0x0058(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData05 : 31;                                       // 0x0058(0x0001)
	unsigned long                                      Tutorial : 1;                                             // 0x005C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData06 : 31;                                       // 0x005C(0x0001)
	unsigned long                                      Garage : 1;                                               // 0x0060(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData07 : 31;                                       // 0x0060(0x0001)
	unsigned long                                      Options : 1;                                              // 0x0064(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData08 : 31;                                       // 0x0064(0x0001)
	unsigned long                                      ReplaySaves : 1;                                          // 0x0068(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData09 : 31;                                       // 0x0068(0x0001)
	unsigned long                                      MainMenu : 1;                                             // 0x006C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData10 : 31;                                       // 0x006C(0x0001)
	unsigned long                                      MidgameMenu : 1;                                          // 0x0070(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	unsigned long                                      Party : 1;                                                // 0x0078(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData12 : 31;                                       // 0x0078(0x0001)
	unsigned long                                      PsyNetParty : 1;                                          // 0x007C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData13 : 31;                                       // 0x007C(0x0001)
	unsigned long                                      Achievements : 1;                                         // 0x0080(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	unsigned long                                      Stats : 1;                                                // 0x0088(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData15 : 31;                                       // 0x0088(0x0001)
	unsigned long                                      Leaderboards : 1;                                         // 0x008C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData16 : 31;                                       // 0x008C(0x0001)
	unsigned long                                      XP : 1;                                                   // 0x0090(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData17 : 31;                                       // 0x0090(0x0001)
	unsigned long                                      Chat : 1;                                                 // 0x0094(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData18 : 31;                                       // 0x0094(0x0001)
	unsigned long                                      LicenseAgreement : 1;                                     // 0x0098(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData19 : 31;                                       // 0x0098(0x0001)
	unsigned long                                      FullCredits : 1;                                          // 0x009C(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData20[0x4];                                       // 0x00A0(0x0004) MISSED OFFSET
	unsigned long                                      TrainingDifficulties : 1;                                 // 0x00A4(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData21 : 31;                                       // 0x00A4(0x0001)
	unsigned long                                      Ads : 1;                                                  // 0x00A8(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData22 : 31;                                       // 0x00A8(0x0001)
	unsigned long                                      Microtransactions : 1;                                    // 0x00AC(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData23 : 31;                                       // 0x00AC(0x0001)
	unsigned long                                      ItemDrops : 1;                                            // 0x00B0(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData24 : 31;                                       // 0x00B0(0x0001)
	unsigned long                                      Spectator : 1;                                            // 0x00B4(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData25 : 31;                                       // 0x00B4(0x0001)
	unsigned long                                      CrossPlatformPrivateMatch : 1;                            // 0x00B8(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData26 : 31;                                       // 0x00B8(0x0001)
	unsigned long                                      Lan : 1;                                                  // 0x00BC(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData27[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	unsigned long                                      BuyDLC : 1;                                               // 0x00C4(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData28[0x4];                                       // 0x00C8(0x0004) MISSED OFFSET
	unsigned long                                      PlayerReporting : 1;                                      // 0x00CC(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData29 : 31;                                       // 0x00CC(0x0001)
	unsigned long                                      PremiumGarage : 1;                                        // 0x00D0(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData30 : 31;                                       // 0x00D0(0x0001)
	unsigned long                                      PodiumSpotlight : 1;                                      // 0x00D4(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData31[0x4];                                       // 0x00D8(0x0004) MISSED OFFSET
	unsigned long                                      CustomTeamNames : 1;                                      // 0x00DC(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData32 : 31;                                       // 0x00DC(0x0001)
	unsigned long                                      CustomTeamColors : 1;                                     // 0x00E0(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData33 : 31;                                       // 0x00E0(0x0001)
	unsigned long                                      PlayerTrading : 1;                                        // 0x00E4(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData34 : 31;                                       // 0x00E4(0x0001)
	unsigned long                                      GaragePresets : 1;                                        // 0x00E8(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData35 : 31;                                       // 0x00E8(0x0001)
	unsigned long                                      PartyChat : 1;                                            // 0x00EC(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData36[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	unsigned long                                      OnlineServices : 1;                                       // 0x0100(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData37 : 31;                                       // 0x0100(0x0001)
	unsigned long                                      RemoveCrossPlatformProducts : 1;                          // 0x0104(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData38 : 31;                                       // 0x0104(0x0001)
	unsigned long                                      Mutators : 1;                                             // 0x0108(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData39 : 31;                                       // 0x0108(0x0001)
	unsigned long                                      ProductValidation : 1;                                    // 0x010C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData40 : 31;                                       // 0x010C(0x0001)
	unsigned long                                      RumbleMode : 1;                                           // 0x0110(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData41 : 31;                                       // 0x0110(0x0001)
	unsigned long                                      PlayerTitle : 1;                                          // 0x0114(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData42 : 31;                                       // 0x0114(0x0001)
	unsigned long                                      DynamicThumbnails : 1;                                    // 0x0118(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData43 : 31;                                       // 0x0118(0x0001)
	unsigned long                                      MapPrefs : 1;                                             // 0x011C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData44 : 31;                                       // 0x011C(0x0001)
	unsigned long                                      Workshop : 1;                                             // 0x0120(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData45[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	unsigned long                                      Avatars : 1;                                              // 0x0128(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData46[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	unsigned long                                      Tournaments : 1;                                          // 0x0130(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData47[0x24];                                      // 0x0134(0x0024) MISSED OFFSET
	unsigned long                                      Inventory : 1;                                            // 0x0158(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData48 : 31;                                       // 0x0158(0x0001)
	unsigned long                                      TrainingEditor : 1;                                       // 0x015C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData49 : 31;                                       // 0x015C(0x0001)
	unsigned long                                      RedeemCode : 1;                                           // 0x0160(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData50 : 31;                                       // 0x0160(0x0001)
	unsigned long                                      VoiceChat : 1;                                            // 0x0164(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData51 : 31;                                       // 0x0164(0x0001)
	unsigned long                                      EditBindings : 1;                                         // 0x0168(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData52 : 31;                                       // 0x0168(0x0001)
	unsigned long                                      UIScale : 1;                                              // 0x016C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData53 : 31;                                       // 0x016C(0x0001)
	unsigned long                                      SplitScreen : 1;                                          // 0x0170(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData54 : 31;                                       // 0x0170(0x0001)
	unsigned long                                      Crossplay : 1;                                            // 0x0174(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData55 : 31;                                       // 0x0174(0x0001)
	unsigned long                                      CompetitiveDivisions : 1;                                 // 0x0178(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData56 : 31;                                       // 0x0178(0x0001)
	unsigned long                                      KeySelection : 1;                                         // 0x017C(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData57[0x10];                                      // 0x0180(0x0010) MISSED OFFSET
	unsigned long                                      FreePlayMapSelection : 1;                                 // 0x0190(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData58[0x8];                                       // 0x0194(0x0008) MISSED OFFSET
	unsigned long                                      MatchAdmin : 1;                                           // 0x019C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData59 : 31;                                       // 0x019C(0x0001)
	unsigned long                                      FilterContent : 1;                                        // 0x01A0(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData60[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	unsigned long                                      GarageSuperSonicTrail : 1;                                // 0x01A8(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData61 : 31;                                       // 0x01A8(0x0001)
	unsigned long                                      GarageBallExplosions : 1;                                 // 0x01AC(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData62 : 31;                                       // 0x01AC(0x0001)
	unsigned long                                      GarageEngineAudio : 1;                                    // 0x01B0(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData63[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	unsigned long                                      EsportsCamera : 1;                                        // 0x01B8(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData64[0x8];                                       // 0x01BC(0x0008) MISSED OFFSET
	unsigned long                                      ClientXP : 1;                                             // 0x01C4(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData65[0xC];                                       // 0x01C8(0x000C) MISSED OFFSET
	unsigned long                                      ClanforgeReservation : 1;                                 // 0x01D4(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData66[0x4];                                       // 0x01D8(0x0004) MISSED OFFSET
	unsigned long                                      UserSettingObserver : 1;                                  // 0x01DC(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData67 : 31;                                       // 0x01DC(0x0001)
	unsigned long                                      Metrics : 1;                                              // 0x01E0(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData68 : 31;                                       // 0x01E0(0x0001)
	unsigned long                                      MusicPlaylistSelection : 1;                               // 0x01E4(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData69[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
	unsigned long                                      SpecialEvents : 1;                                        // 0x01F0(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData70[0x14];                                      // 0x01F4(0x0014) MISSED OFFSET
	unsigned long                                      PlayerBannerCustomization : 1;                            // 0x0208(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData71 : 31;                                       // 0x0208(0x0001)
	unsigned long                                      SecureUDP : 1;                                            // 0x020C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData72 : 31;                                       // 0x020C(0x0001)
	unsigned long                                      PsyNet : 1;                                               // 0x0210(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData73 : 31;                                       // 0x0210(0x0001)
	unsigned long                                      OnlinePlayerStorage : 1;                                  // 0x0214(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData74 : 31;                                       // 0x0214(0x0001)
	unsigned long                                      OnlineSaveData : 1;                                       // 0x0218(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData75 : 31;                                       // 0x0218(0x0001)
	unsigned long                                      LocalSaveData : 1;                                        // 0x021C(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData76[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	unsigned long                                      CrowdV2 : 1;                                              // 0x0228(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData77 : 31;                                       // 0x0228(0x0001)
	unsigned long                                      ChatBan : 1;                                              // 0x022C(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData78 : 31;                                       // 0x022C(0x0001)
	unsigned long                                      BacktraceCrashDumps : 1;                                  // 0x0230(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData79[0xC];                                       // 0x0234(0x000C) MISSED OFFSET
	unsigned long                                      MonsterCarV2 : 1;                                         // 0x0240(0x0004) (CPF_DataBinding)
	unsigned long                                      UnknownData80 : 31;                                       // 0x0240(0x0001)
	unsigned long                                      SpotifyButton : 1;                                        // 0x0244(0x0004) (CPF_DataBinding)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.FeatureSystem");
		return ptr;
	}

};


// Class Core.Factory
// 0x0040 (0x007C - 0x003C)
class UFactory : public UObject
{
public:
	struct FString                                     Category;                                                 // 0x003C(0x000C) (CPF_NeedCtorLink)
	class UClass*                                      SupportedClass;                                           // 0x0048(0x0004)
	class UClass*                                      ContextClass;                                             // 0x004C(0x0004)
	struct FString                                     Description;                                              // 0x0050(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             Formats;                                                  // 0x005C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bCreateNew : 1;                                           // 0x0068(0x0004)
	unsigned long                                      bEditAfterNew : 1;                                        // 0x0068(0x0004)
	unsigned long                                      bEditorImport : 1;                                        // 0x0068(0x0004)
	unsigned long                                      bText : 1;                                                // 0x0068(0x0004)
	unsigned long                                      bAssetNameMatchesPackageName : 1;                         // 0x0068(0x0004)
	int                                                AutoPriority;                                             // 0x006C(0x0004)
	TArray<struct FString>                             ValidGameNames;                                           // 0x0070(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Factory");
		return ptr;
	}

};


// Class Core.TextBufferFactory
// 0x0000 (0x007C - 0x007C)
class UTextBufferFactory : public UFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.TextBufferFactory");
		return ptr;
	}

};


// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FString>                             FormatExtension;                                          // 0x0040(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             FormatDescription;                                        // 0x004C(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0058(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Exporter");
		return ptr;
	}

};


// Class Core.ErrorType
// 0x000C (0x0048 - 0x003C)
class UErrorType : public UObject
{
public:
	struct FString                                     LocalizationKey;                                          // 0x003C(0x000C) (CPF_Const, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ErrorType");
		return ptr;
	}


	class UError* CreateError(const struct FString& InErrorMessage, int InErrorCode);
	struct FString GetLocalizedMessage();
};


// Class Core.ErrorList
// 0x0018 (0x0054 - 0x003C)
class UErrorList : public UObject
{
public:
	struct FString                                     LocalizationPackage;                                      // 0x003C(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)
	struct FString                                     LocalizationSection;                                      // 0x0048(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.ErrorList");
		return ptr;
	}


	class UErrorType* STATIC_GetErrorType(const struct FName& Error);
};


// Class Core.Error
// 0x0014 (0x0050 - 0x003C)
class UError : public UObject
{
public:
	class UErrorType*                                  Type;                                                     // 0x003C(0x0004) (CPF_Const, CPF_Transient)
	struct FString                                     Message;                                                  // 0x0040(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)
	int                                                Code;                                                     // 0x004C(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Error");
		return ptr;
	}


	struct FString GetDebugMessage();
	struct FString GetLocalizedMessage();
};


// Class Core.DebugDrawer
// 0x0044 (0x0080 - 0x003C)
class UDebugDrawer : public UObject
{
public:
	struct FColor                                      DefaultTextColor;                                         // 0x003C(0x0004) (CPF_Edit)
	unsigned long                                      bSilent : 1;                                              // 0x0040(0x0004) (CPF_Edit)
	unsigned long                                      bPrintActorsInline : 1;                                   // 0x0040(0x0004) (CPF_Edit)
	int                                                Indentation;                                              // 0x0044(0x0004) (CPF_Transient)
	struct FString                                     IndentationString;                                        // 0x0048(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<class UObject*>                             PrintedObjects;                                           // 0x0054(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	TArray<class UObject*>                             QueuedObjects;                                            // 0x0060(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                PrintObjectCount;                                         // 0x006C(0x0004) (CPF_Transient)
	struct FScriptDelegate                             __LogFunc__Delegate;                                      // 0x0070(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DebugDrawer");
		return ptr;
	}


	void Reset();
	void PrintText(const struct FString& Text, const struct FColor& InColor);
	void PrintArrayProperty(const struct FString& PropertyName, int Index, const struct FString& Value);
	void PrintProperty(const struct FString& PropertyName, const struct FString& Value);
	void EndSection();
	void StartSection();
	void PrintObject(const struct FString& Title, class UObject* ForObj);
	void PrintSeperater();
	void DebugArrayObject(const struct FString& Title, int Index, class UObject* ForObj);
	void DebugObject(const struct FString& Title, class UObject* ForObj);
	bool ShouldDisplayDebug(const struct FName& Category);
	void LogFunc(const struct FString& Str);
};


// Class Core.Component
// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                                       // 0x003C(0x0004) (CPF_Const, CPF_Native)
	struct FName                                       TemplateName;                                             // 0x0040(0x0008) (CPF_Const, CPF_Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Component");
		return ptr;
	}

};


// Class Core.StringMap
// 0x003C (0x0084 - 0x0048)
class UStringMap : public UComponent
{
public:
	struct FMap_Mirror                                 Map;                                                      // 0x0048(0x003C) (CPF_Const, CPF_Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.StringMap");
		return ptr;
	}


	void Append(class UStringMap* Other);
	bool Contains(const struct FString& Key);
	void Remove(const struct FString& Key);
	bool TryGet(const struct FString& Key, struct FString* OutValue);
	struct FString Get(const struct FString& Key);
	void Set(const struct FString& Key, const struct FString& Value);
};


// Class Core.DistributionVector
// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0048(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x004C(0x0004) (CPF_Edit)
	unsigned long                                      bIsDirty : 1;                                             // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionVector");
		return ptr;
	}


	struct FVector GetVectorValue(float F, int LastExtreme);
};


// Class Core.DistributionFloat
// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                                // 0x0048(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	unsigned long                                      bCanBeBaked : 1;                                          // 0x004C(0x0004) (CPF_Edit)
	unsigned long                                      bIsDirty : 1;                                             // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.DistributionFloat");
		return ptr;
	}


	float GetFloatValue(float F);
};


// Class Core.Commandlet
// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                          // 0x003C(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     HelpUsage;                                                // 0x0048(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	struct FString                                     HelpWebLink;                                              // 0x0054(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	TArray<struct FString>                             HelpParamNames;                                           // 0x0060(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	TArray<struct FString>                             HelpParamDescriptions;                                    // 0x006C(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	unsigned long                                      IsServer : 1;                                             // 0x0078(0x0004)
	unsigned long                                      IsClient : 1;                                             // 0x0078(0x0004)
	unsigned long                                      IsEditor : 1;                                             // 0x0078(0x0004)
	unsigned long                                      LogToConsole : 1;                                         // 0x0078(0x0004)
	unsigned long                                      ShowErrorCount : 1;                                       // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Commandlet");
		return ptr;
	}


	int Main(const struct FString& Params);
};


// Class Core.HelpCommandlet
// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.HelpCommandlet");
		return ptr;
	}


	int Main(const struct FString& Params);
};


// Class Core.AsyncTask
// 0x0048 (0x0084 - 0x003C)
class UAsyncTask : public UObject
{
public:
	unsigned long                                      bComplete : 1;                                            // 0x003C(0x0004)
	unsigned long                                      bDisposed : 1;                                            // 0x003C(0x0004)
	class UError*                                      Error;                                                    // 0x0040(0x0004)
	struct FScriptDelegate                             __EventAsyncTaskSuccess__Delegate;                        // 0x0044(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAsyncTaskFail__Delegate;                           // 0x0054(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAsyncTaskComplete__Delegate;                       // 0x0064(0x0010) (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisposed__Delegate;                                // 0x0074(0x0010) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.AsyncTask");
		return ptr;
	}


	void QueCallbacks();
	class UAsyncTask* STATIC_CreateError(class UError* InError);
	class UAsyncTask* STATIC_CreateSuccess();
	class UAsyncTask* STATIC_Create();
	class UAsyncTask* DependOn(class UAsyncTask* Other);
	class UAsyncTask* NotifyOnDispose(const struct FScriptDelegate& Callback);
	void ClearCallbacks();
	void Dispose();
	void SetComplete(class UError* InError);
	void SetError(class UError* InError);
	class UAsyncTask* NotifyOnComplete(const struct FScriptDelegate& Callback);
	class UAsyncTask* NotifyOnFail(const struct FScriptDelegate& Callback);
	class UAsyncTask* NotifyOnSuccess(const struct FScriptDelegate& Callback);
	void EventDisposed();
	void EventAsyncTaskComplete(class UError* TaskError);
	void EventAsyncTaskFail(class UError* TaskError);
	void EventAsyncTaskSuccess();
};


// Class Core.AsyncResult
// 0x0000 (0x0084 - 0x0084)
class UAsyncResult : public UAsyncTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.AsyncResult");
		return ptr;
	}

};


// Class Core.State
// 0x0048 (0x00D4 - 0x008C)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x008C(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.State");
		return ptr;
	}

};


// Class Core.Package
// 0x00B4 (0x00F0 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x003C(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Package");
		return ptr;
	}

};


// Class Core.Class
// 0x0178 (0x024C - 0x00D4)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     ClassDefaultObject;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData01[0x70];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		using Fn = UObject*(__thiscall *)(UClass*, unsigned int);

		//UClass::GetDefaultObject can be found with the sig
		//74 ?? F7 86 ?? 00 00 00 00 00 00 10 75 ?? F6 05 ?? ?? ?? ?? 02 0F 84
		static Fn fn = nullptr;
		
		return fn(this, 0);

		//or use the default object (WARNING: may be null)
		//return ClassDefaultObject;
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.Class");
		return ptr;
	}

};


// Class Core._LoggingDoc
// 0x0000 (0x003C - 0x003C)
class U_LoggingDoc : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core._LoggingDoc");
		return ptr;
	}


	void STATIC_TestSpecialLogging();
};


// Class Core.GameVersion
// 0x0000 (0x003C - 0x003C)
class UGameVersion : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.GameVersion");
		return ptr;
	}

};


// Class Core.IDisposable
// 0x0000 (0x003C - 0x003C)
class UIDisposable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.IDisposable");
		return ptr;
	}


	void Dispose();
};


// Class Core.MulticastDelegateSystem
// 0x000C (0x0048 - 0x003C)
class UMulticastDelegateSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.MulticastDelegateSystem");
		return ptr;
	}

};


// Class Core.PropertyChangeDispatcher
// 0x000C (0x0048 - 0x003C)
class UPropertyChangeDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Core.PropertyChangeDispatcher");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
