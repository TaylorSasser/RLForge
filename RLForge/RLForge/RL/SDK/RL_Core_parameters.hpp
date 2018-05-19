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

// Function Core.Object.SumInt
struct UObject_SumInt_Params
{
	int                                                Total;                                                    // (CPF_Parm)
	int                                                Value;                                                    // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SortDescendingString
struct UObject_SortDescendingString_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SortAscendingString
struct UObject_SortAscendingString_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SortDescendingQWORD
struct UObject_SortDescendingQWORD_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SortAscendingQWORD
struct UObject_SortAscendingQWORD_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SortDescendingInt
struct UObject_SortDescendingInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SortAscendingInt
struct UObject_SortAscendingInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.PadString
struct UObject_PadString_Params
{
	struct FString                                     Str;                                                      // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                Characters;                                               // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.GetFrameCounter
struct UObject_GetFrameCounter_Params
{
};

// Function Core.Object.GetScaledAxisValue
struct UObject_GetScaledAxisValue_Params
{
	float                                              Value;                                                    // (CPF_Parm)
	float                                              Sensitivity;                                              // (CPF_Parm)
	float                                              MaxSensitivity;                                           // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetObjectProvider
struct UObject_GetObjectProvider_Params
{
	class UObjectProvider*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetEdition
struct UObject_GetEdition_Params
{
	TEnumAsByte<EEdition>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.IsEdition
struct UObject_IsEdition_Params
{
	TEnumAsByte<EEdition>                              Edition;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SetRooted
struct UObject_SetRooted_Params
{
	bool                                               bRooted;                                                  // (CPF_Parm)
};

// Function Core.Object.ProfNodeEvent
struct UObject_ProfNodeEvent_Params
{
	struct FString                                     EventName;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function Core.Object.ProfNodeSetDepthThreshold
struct UObject_ProfNodeSetDepthThreshold_Params
{
	int                                                Depth;                                                    // (CPF_Parm)
};

// Function Core.Object.ProfNodeSetTimeThresholdSeconds
struct UObject_ProfNodeSetTimeThresholdSeconds_Params
{
	float                                              Threshold;                                                // (CPF_Parm)
};

// Function Core.Object.ProfNodeStop
struct UObject_ProfNodeStop_Params
{
	int                                                AssumedTimerIndex;                                        // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.Object.ProfNodeStart
struct UObject_ProfNodeStart_Params
{
	struct FString                                     TimerName;                                                // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.CreateGuidString
struct UObject_CreateGuidString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.GetStringFromGuid
struct UObject_GetStringFromGuid_Params
{
	struct FGuid                                       InGuid;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.GetGuidFromString
struct UObject_GetGuidFromString_Params
{
	struct FString                                     InGuidString;                                             // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FGuid                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.CreateGuid
struct UObject_CreateGuid_Params
{
	struct FGuid                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.IsGuidValid
struct UObject_IsGuidValid_Params
{
	struct FGuid                                       InGuid;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.InvalidateGuid
struct UObject_InvalidateGuid_Params
{
	struct FGuid                                       InGuid;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function Core.Object.FindStructProperty
struct UObject_FindStructProperty_Params
{
	class UClass*                                      PropertyClass;                                            // (CPF_Parm)
	struct FName                                       PropertyName;                                             // (CPF_Parm)
	struct FName                                       StructName;                                               // (CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function Core.Object.FindProperty
struct UObject_FindProperty_Params
{
	class UClass*                                      PropertyClass;                                            // (CPF_Parm)
	struct FName                                       PropertyName;                                             // (CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function Core.Object.Identical
struct UObject_Identical_Params
{
	class UObject*                                     Left;                                                     // (CPF_Parm)
	class UObject*                                     Right;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.DuplicateObject
struct UObject_DuplicateObject_Params
{
	class UObject*                                     Template;                                                 // (CPF_Parm)
	class UObject*                                     ObjOuter;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UClass*                                      DestClass;                                                // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function Core.Object.RunningAverage
struct UObject_RunningAverage_Params
{
	float                                              OldAverage;                                               // (CPF_Parm)
	float                                              NewValue;                                                 // (CPF_Parm)
	int                                                NewCount;                                                 // (CPF_Parm)
	int                                                OldCount;                                                 // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetCurrentTime
struct UObject_GetCurrentTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetMaxLinearColorBrightness
struct UObject_GetMaxLinearColorBrightness_Params
{
	struct FLinearColor                                C;                                                        // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetMaxColorBrightness
struct UObject_GetMaxColorBrightness_Params
{
	struct FColor                                      C;                                                        // (CPF_Parm)
	struct FColor                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LABtoRGB
struct UObject_LABtoRGB_Params
{
	struct FLinearColor                                C;                                                        // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RGBtoLAB
struct UObject_RGBtoLAB_Params
{
	struct FLinearColor                                C;                                                        // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.HSVtoRGB
struct UObject_HSVtoRGB_Params
{
	struct FLinearColor                                C;                                                        // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RGBtoHSV
struct UObject_RGBtoHSV_Params
{
	struct FLinearColor                                C;                                                        // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.IntToLinearColor
struct UObject_IntToLinearColor_Params
{
	int                                                I;                                                        // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.IntToColor
struct UObject_IntToColor_Params
{
	int                                                I;                                                        // (CPF_Parm)
	struct FColor                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LinearColorToInt
struct UObject_LinearColorToInt_Params
{
	struct FLinearColor                                C;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ColorToInt
struct UObject_ColorToInt_Params
{
	struct FColor                                      C;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SolveVelocityQuadratic
struct UObject_SolveVelocityQuadratic_Params
{
	float                                              Distance;                                                 // (CPF_Parm)
	float                                              Speed;                                                    // (CPF_Parm)
	float                                              Accel;                                                    // (CPF_Parm)
	float                                              Time;                                                     // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Sign
struct UObject_Sign_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MakeVector2D
struct UObject_MakeVector2D_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VAbs
struct UObject_VAbs_Params
{
	struct FVector                                     V;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MakeVector
struct UObject_MakeVector_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm)
	float                                              Z;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FlattenVector
struct UObject_FlattenVector_Params
{
	struct FVector                                     NormalToFlatten;                                          // (CPF_Parm)
	struct FVector                                     PlaneNormal;                                              // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetRealArchetypeName
struct UObject_GetRealArchetypeName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FormatTime
struct UObject_FormatTime_Params
{
	int                                                Seconds;                                                  // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.SwapRefrences
struct UObject_SwapRefrences_Params
{
	class UObject*                                     A;                                                        // (CPF_Parm, CPF_OutParm)
	class UObject*                                     B;                                                        // (CPF_Parm, CPF_OutParm)
};

// Function Core.Object.GetTextArchetype
struct UObject_GetTextArchetype_Params
{
	class UClass*                                      ArchetypeClass;                                           // (CPF_Parm)
	struct FString                                     Path;                                                     // (CPF_Const, CPF_Parm, CPF_NeedCtorLink)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function Core.Object.IsArchetype
struct UObject_IsArchetype_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.UnsubscribeFromAllEvents
struct UObject_UnsubscribeFromAllEvents_Params
{
};

// Function Core.Object.NewInstance
struct UObject_NewInstance_Params
{
	class UObject*                                     ObjOuter;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function Core.Object.PrintDebugInfo
struct UObject_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function Core.Object.RotatorFromInt
struct UObject_RotatorFromInt_Params
{
	int                                                RotationPitchAndYaw;                                      // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RotatorToInt
struct UObject_RotatorToInt_Params
{
	struct FRotator                                    Rotation;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetLanguage
struct UObject_GetLanguage_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.GetRandomOptionSumFrequency
struct UObject_GetRandomOptionSumFrequency_Params
{
	TArray<float>                                      FreqList;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetBuildChangelistNumber
struct UObject_GetBuildChangelistNumber_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetEngineVersion
struct UObject_GetEngineVersion_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetAppSeconds
struct UObject_GetAppSeconds_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetSystemTime
struct UObject_GetSystemTime_Params
{
	int                                                Year;                                                     // (CPF_Parm, CPF_OutParm)
	int                                                Month;                                                    // (CPF_Parm, CPF_OutParm)
	int                                                DayOfWeek;                                                // (CPF_Parm, CPF_OutParm)
	int                                                Day;                                                      // (CPF_Parm, CPF_OutParm)
	int                                                Hour;                                                     // (CPF_Parm, CPF_OutParm)
	int                                                Min;                                                      // (CPF_Parm, CPF_OutParm)
	int                                                Sec;                                                      // (CPF_Parm, CPF_OutParm)
	int                                                MSec;                                                     // (CPF_Parm, CPF_OutParm)
};

// Function Core.Object.TimeStamp
struct UObject_TimeStamp_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.TransformVectorByRotation
struct UObject_TransformVectorByRotation_Params
{
	struct FRotator                                    SourceRotation;                                           // (CPF_Parm)
	struct FVector                                     SourceVector;                                             // (CPF_Parm)
	bool                                               bInverse;                                                 // (CPF_OptionalParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetPackageName
struct UObject_GetPackageName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.IsPendingKill
struct UObject_IsPendingKill_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ByteToFloat
struct UObject_ByteToFloat_Params
{
	unsigned char                                      inputByte;                                                // (CPF_Parm)
	bool                                               bSigned;                                                  // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FloatToByte
struct UObject_FloatToByte_Params
{
	float                                              inputFloat;                                               // (CPF_Parm)
	bool                                               bSigned;                                                  // (CPF_OptionalParm, CPF_Parm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.UnwindHeading
struct UObject_UnwindHeading_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FindDeltaAngle
struct UObject_FindDeltaAngle_Params
{
	float                                              A1;                                                       // (CPF_Parm)
	float                                              A2;                                                       // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetHeadingAngle
struct UObject_GetHeadingAngle_Params
{
	struct FVector                                     Dir;                                                      // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetAngularDegreesFromRadians
struct UObject_GetAngularDegreesFromRadians_Params
{
	struct FVector2D                                   OutFOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function Core.Object.GetAngularFromDotDist
struct UObject_GetAngularFromDotDist_Params
{
	struct FVector2D                                   OutAngDist;                                               // (CPF_Parm, CPF_OutParm)
	struct FVector2D                                   DotDist;                                                  // (CPF_Parm)
};

// Function Core.Object.GetAngularDistance
struct UObject_GetAngularDistance_Params
{
	struct FVector2D                                   OutAngularDist;                                           // (CPF_Parm, CPF_OutParm)
	struct FVector                                     Direction;                                                // (CPF_Parm)
	struct FVector                                     AxisX;                                                    // (CPF_Parm)
	struct FVector                                     AxisY;                                                    // (CPF_Parm)
	struct FVector                                     AxisZ;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetDotDistance
struct UObject_GetDotDistance_Params
{
	struct FVector2D                                   OutDotDist;                                               // (CPF_Parm, CPF_OutParm)
	struct FVector                                     Direction;                                                // (CPF_Parm)
	struct FVector                                     AxisX;                                                    // (CPF_Parm)
	struct FVector                                     AxisY;                                                    // (CPF_Parm)
	struct FVector                                     AxisZ;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LinePlaneIntersection
struct UObject_LinePlaneIntersection_Params
{
	struct FVector                                     LineStart;                                                // (CPF_Parm)
	struct FVector                                     LineEnd;                                                  // (CPF_Parm)
	struct FVector                                     PlaneOrigin;                                              // (CPF_Parm)
	struct FVector                                     PlaneNormal;                                              // (CPF_Parm)
	struct FVector                                     Out_Intersection;                                         // (CPF_Parm, CPF_OutParm)
	float                                              Out_T;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	bool                                               bCheckLineSegment;                                        // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.PointProjectToPlane
struct UObject_PointProjectToPlane_Params
{
	struct FVector                                     Point;                                                    // (CPF_Parm)
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     C;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.PointDistToPlane
struct UObject_PointDistToPlane_Params
{
	struct FVector                                     Point;                                                    // (CPF_Parm)
	struct FRotator                                    Orientation;                                              // (CPF_Parm)
	struct FVector                                     Origin;                                                   // (CPF_Parm)
	struct FVector                                     out_ClosestPoint;                                         // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.PointDistToSegment
struct UObject_PointDistToSegment_Params
{
	struct FVector                                     Point;                                                    // (CPF_Parm)
	struct FVector                                     StartPoint;                                               // (CPF_Parm)
	struct FVector                                     EndPoint;                                                 // (CPF_Parm)
	struct FVector                                     OutClosestPoint;                                          // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.PointDistToLine
struct UObject_PointDistToLine_Params
{
	struct FVector                                     Point;                                                    // (CPF_Parm)
	struct FVector                                     Line;                                                     // (CPF_Parm)
	struct FVector                                     Origin;                                                   // (CPF_Parm)
	struct FVector                                     OutClosestPoint;                                          // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetPerObjectConfigObjects
struct UObject_GetPerObjectConfigObjects_Params
{
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	class UObject*                                     OutObject;                                                // (CPF_Parm, CPF_OutParm)
	class UObject*                                     ObjectOuter;                                              // (CPF_OptionalParm, CPF_Parm)
	int                                                MaxResults;                                               // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.Object.GetPerObjectConfigSections
struct UObject_GetPerObjectConfigSections_Params
{
	class UClass*                                      SearchClass;                                              // (CPF_Parm)
	TArray<struct FString>                             out_SectionNames;                                         // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UObject*                                     ObjectOuter;                                              // (CPF_OptionalParm, CPF_Parm)
	int                                                MaxResults;                                               // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ImportJSON
struct UObject_ImportJSON_Params
{
	struct FString                                     PropertyName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     JSON;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function Core.Object.StaticSaveConfig
struct UObject_StaticSaveConfig_Params
{
};

// Function Core.Object.SaveConfig
struct UObject_SaveConfig_Params
{
};

// Function Core.Object.FindObject
struct UObject_FindObject_Params
{
	struct FString                                     ObjectName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class UClass*                                      ObjectClass;                                              // (CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.DynamicLoadObject
struct UObject_DynamicLoadObject_Params
{
	struct FString                                     ObjectName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class UClass*                                      ObjectClass;                                              // (CPF_Parm)
	bool                                               MayFail;                                                  // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EnumFromString
struct UObject_EnumFromString_Params
{
	class UObject*                                     E;                                                        // (CPF_Parm)
	struct FName                                       ValueName;                                                // (CPF_Parm, CPF_CoerceParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetEnum
struct UObject_GetEnum_Params
{
	class UObject*                                     E;                                                        // (CPF_Parm)
	int                                                I;                                                        // (CPF_Parm, CPF_CoerceParm)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Disable
struct UObject_Disable_Params
{
	struct FName                                       ProbeFunc;                                                // (CPF_Parm)
};

// Function Core.Object.Enable
struct UObject_Enable_Params
{
	struct FName                                       ProbeFunc;                                                // (CPF_Parm)
};

// Function Core.Object.ContinuedState
struct UObject_ContinuedState_Params
{
};

// Function Core.Object.PausedState
struct UObject_PausedState_Params
{
};

// Function Core.Object.PoppedState
struct UObject_PoppedState_Params
{
};

// Function Core.Object.PushedState
struct UObject_PushedState_Params
{
};

// Function Core.Object.EndState
struct UObject_EndState_Params
{
	struct FName                                       NextStateName;                                            // (CPF_Parm)
};

// Function Core.Object.BeginState
struct UObject_BeginState_Params
{
	struct FName                                       PreviousStateName;                                        // (CPF_Parm)
};

// Function Core.Object.DumpStateStack
struct UObject_DumpStateStack_Params
{
};

// Function Core.Object.PopState
struct UObject_PopState_Params
{
	bool                                               bPopAll;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.Object.PushState
struct UObject_PushState_Params
{
	struct FName                                       NewState;                                                 // (CPF_Parm)
	struct FName                                       NewLabel;                                                 // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.Object.GetStateName
struct UObject_GetStateName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.IsChildState
struct UObject_IsChildState_Params
{
	struct FName                                       TestState;                                                // (CPF_Parm)
	struct FName                                       TestParentState;                                          // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.IsInState
struct UObject_IsInState_Params
{
	struct FName                                       TestState;                                                // (CPF_Parm)
	bool                                               bTestStateStack;                                          // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GotoState
struct UObject_GotoState_Params
{
	struct FName                                       NewState;                                                 // (CPF_OptionalParm, CPF_Parm)
	struct FName                                       Label;                                                    // (CPF_OptionalParm, CPF_Parm)
	bool                                               bForceEvents;                                             // (CPF_OptionalParm, CPF_Parm)
	bool                                               bKeepStack;                                               // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.Object.IsUTracing
struct UObject_IsUTracing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SetUTracing
struct UObject_SetUTracing_Params
{
	bool                                               bShouldUTrace;                                            // (CPF_Parm)
};

// Function Core.Object.GetFuncName
struct UObject_GetFuncName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.DebugBreak
struct UObject_DebugBreak_Params
{
	int                                                UserFlags;                                                // (CPF_OptionalParm, CPF_Parm)
	TEnumAsByte<EDebugBreakType>                       DebuggerType;                                             // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.Object.GetScriptTrace
struct UObject_GetScriptTrace_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.ScriptTrace
struct UObject_ScriptTrace_Params
{
};

// Function Core.Object.ParseLocalizedPropertyPath
struct UObject_ParseLocalizedPropertyPath_Params
{
	struct FString                                     PathName;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Localize
struct UObject_Localize_Params
{
	struct FString                                     SectionName;                                              // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     KeyName;                                                  // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     PackageName;                                              // (CPF_OptionalParm, CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	bool                                               bOptional;                                                // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.WarnInternal
struct UObject_WarnInternal_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function Core.Object.LogInternal
struct UObject_LogInternal_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FName                                       Tag;                                                      // (CPF_OptionalParm, CPF_Parm)
	bool                                               bFileOnly;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.Object.LinearColorLerp
struct UObject_LinearColorLerp_Params
{
	struct FLinearColor                                ColorA;                                                   // (CPF_Parm)
	struct FLinearColor                                ColorB;                                                   // (CPF_Parm)
	float                                              Alpha;                                                    // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_LinearColorLinearColor
struct UObject_Subtract_LinearColorLinearColor_Params
{
	struct FLinearColor                                A;                                                        // (CPF_Parm)
	struct FLinearColor                                B;                                                        // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_LinearColorFloat
struct UObject_Multiply_LinearColorFloat_Params
{
	struct FLinearColor                                LC;                                                       // (CPF_Parm)
	float                                              Mult;                                                     // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ConvertFromSRGB
struct UObject_ConvertFromSRGB_Params
{
	struct FLinearColor                                OldColor;                                                 // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LinearColorToColor
struct UObject_LinearColorToColor_Params
{
	struct FLinearColor                                OldColor;                                                 // (CPF_Parm)
	struct FColor                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ColorToLinearColor
struct UObject_ColorToLinearColor_Params
{
	struct FColor                                      OldColor;                                                 // (CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MakeLinearColor
struct UObject_MakeLinearColor_Params
{
	float                                              R;                                                        // (CPF_Parm)
	float                                              G;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              A;                                                        // (CPF_OptionalParm, CPF_Parm)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LerpColor
struct UObject_LerpColor_Params
{
	struct FColor                                      A;                                                        // (CPF_Parm)
	struct FColor                                      B;                                                        // (CPF_Parm)
	float                                              Alpha;                                                    // (CPF_Parm)
	struct FColor                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MakeColor
struct UObject_MakeColor_Params
{
	unsigned char                                      R;                                                        // (CPF_Parm)
	unsigned char                                      G;                                                        // (CPF_Parm)
	unsigned char                                      B;                                                        // (CPF_Parm)
	unsigned char                                      A;                                                        // (CPF_OptionalParm, CPF_Parm)
	struct FColor                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Add_ColorColor
struct UObject_Add_ColorColor_Params
{
	struct FColor                                      A;                                                        // (CPF_Parm)
	struct FColor                                      B;                                                        // (CPF_Parm)
	struct FColor                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_ColorFloat
struct UObject_Multiply_ColorFloat_Params
{
	struct FColor                                      A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	struct FColor                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_FloatColor
struct UObject_Multiply_FloatColor_Params
{
	float                                              A;                                                        // (CPF_Parm)
	struct FColor                                      B;                                                        // (CPF_Parm)
	struct FColor                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_ColorColor
struct UObject_Subtract_ColorColor_Params
{
	struct FColor                                      A;                                                        // (CPF_Parm)
	struct FColor                                      B;                                                        // (CPF_Parm)
	struct FColor                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EvalInterpCurveVector2D
struct UObject_EvalInterpCurveVector2D_Params
{
	struct FInterpCurveVector2D                        Vector2DCurve;                                            // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	float                                              InVal;                                                    // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EvalInterpCurveVector
struct UObject_EvalInterpCurveVector_Params
{
	struct FInterpCurveVector                          VectorCurve;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	float                                              InVal;                                                    // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EvalInterpCurveFloat
struct UObject_EvalInterpCurveFloat_Params
{
	struct FInterpCurveFloat                           FloatCurve;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	float                                              InVal;                                                    // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.vect2d
struct UObject_vect2d_Params
{
	float                                              InX;                                                      // (CPF_Parm)
	float                                              InY;                                                      // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetMappedRangeValue
struct UObject_GetMappedRangeValue_Params
{
	struct FVector2D                                   InputRange;                                               // (CPF_Parm)
	struct FVector2D                                   OutputRange;                                              // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetRangePctByValue
struct UObject_GetRangePctByValue_Params
{
	struct FVector2D                                   Range;                                                    // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetRangeValueByPct
struct UObject_GetRangeValueByPct_Params
{
	struct FVector2D                                   Range;                                                    // (CPF_Parm)
	float                                              Pct;                                                      // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.V2DNormal
struct UObject_V2DNormal_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.V2DSizeSq
struct UObject_V2DSizeSq_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.V2DSize
struct UObject_V2DSize_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Dot_Vector2DVector2D
struct UObject_Dot_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm)
	struct FVector2D                                   B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_Vector2DVector2D
struct UObject_SubtractEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm, CPF_OutParm)
	struct FVector2D                                   B;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddEqual_Vector2DVector2D
struct UObject_AddEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm, CPF_OutParm)
	struct FVector2D                                   B;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_Vector2DFloat
struct UObject_DivideEqual_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_Vector2DFloat
struct UObject_MultiplyEqual_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Divide_Vector2DFloat
struct UObject_Divide_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_Vector2DFloat
struct UObject_Multiply_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_Vector2DVector2D
struct UObject_Subtract_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm)
	struct FVector2D                                   B;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Add_Vector2DVector2D
struct UObject_Add_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (CPF_Parm)
	struct FVector2D                                   B;                                                        // (CPF_Parm)
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_QuatQuat
struct UObject_Subtract_QuatQuat_Params
{
	struct FQuat                                       A;                                                        // (CPF_Parm)
	struct FQuat                                       B;                                                        // (CPF_Parm)
	struct FQuat                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Add_QuatQuat
struct UObject_Add_QuatQuat_Params
{
	struct FQuat                                       A;                                                        // (CPF_Parm)
	struct FQuat                                       B;                                                        // (CPF_Parm)
	struct FQuat                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QuatSlerp
struct UObject_QuatSlerp_Params
{
	struct FQuat                                       A;                                                        // (CPF_Parm)
	struct FQuat                                       B;                                                        // (CPF_Parm)
	float                                              Alpha;                                                    // (CPF_Parm)
	bool                                               bShortestPath;                                            // (CPF_OptionalParm, CPF_Parm)
	struct FQuat                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QuatToRotator
struct UObject_QuatToRotator_Params
{
	struct FQuat                                       A;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QuatFromRotator
struct UObject_QuatFromRotator_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	struct FQuat                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QuatFromAxisAndAngle
struct UObject_QuatFromAxisAndAngle_Params
{
	struct FVector                                     Axis;                                                     // (CPF_Parm)
	float                                              Angle;                                                    // (CPF_Parm)
	struct FQuat                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QuatFindBetween
struct UObject_QuatFindBetween_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FQuat                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QuatRotateVector
struct UObject_QuatRotateVector_Params
{
	struct FQuat                                       A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QuatInvert
struct UObject_QuatInvert_Params
{
	struct FQuat                                       A;                                                        // (CPF_Parm)
	struct FQuat                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QuatDot
struct UObject_QuatDot_Params
{
	struct FQuat                                       A;                                                        // (CPF_Parm)
	struct FQuat                                       B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QuatProduct
struct UObject_QuatProduct_Params
{
	struct FQuat                                       A;                                                        // (CPF_Parm)
	struct FQuat                                       B;                                                        // (CPF_Parm)
	struct FQuat                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MatrixGetAxis
struct UObject_MatrixGetAxis_Params
{
	struct FMatrix                                     TM;                                                       // (CPF_Parm)
	TEnumAsByte<EAxis>                                 Axis;                                                     // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MatrixGetOrigin
struct UObject_MatrixGetOrigin_Params
{
	struct FMatrix                                     TM;                                                       // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MatrixGetRotator
struct UObject_MatrixGetRotator_Params
{
	struct FMatrix                                     TM;                                                       // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MakeRotationMatrix
struct UObject_MakeRotationMatrix_Params
{
	struct FRotator                                    Rotation;                                                 // (CPF_Parm)
	struct FMatrix                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MakeRotationTranslationMatrix
struct UObject_MakeRotationTranslationMatrix_Params
{
	struct FVector                                     Translation;                                              // (CPF_Parm)
	struct FRotator                                    Rotation;                                                 // (CPF_Parm)
	struct FMatrix                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.InverseTransformNormal
struct UObject_InverseTransformNormal_Params
{
	struct FMatrix                                     TM;                                                       // (CPF_Parm)
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.TransformNormal
struct UObject_TransformNormal_Params
{
	struct FMatrix                                     TM;                                                       // (CPF_Parm)
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.InverseTransformVector
struct UObject_InverseTransformVector_Params
{
	struct FMatrix                                     TM;                                                       // (CPF_Parm)
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.TransformVector
struct UObject_TransformVector_Params
{
	struct FMatrix                                     TM;                                                       // (CPF_Parm)
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_MatrixMatrix
struct UObject_Multiply_MatrixMatrix_Params
{
	struct FMatrix                                     A;                                                        // (CPF_Parm)
	struct FMatrix                                     B;                                                        // (CPF_Parm)
	struct FMatrix                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_NameName
struct UObject_NotEqual_NameName_Params
{
	struct FName                                       A;                                                        // (CPF_Parm)
	struct FName                                       B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_NameName
struct UObject_EqualEqual_NameName_Params
{
	struct FName                                       A;                                                        // (CPF_Parm)
	struct FName                                       B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.IsA
struct UObject_IsA_Params
{
	struct FName                                       ClassName;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ClassIsChildOf
struct UObject_ClassIsChildOf_Params
{
	class UClass*                                      TestClass;                                                // (CPF_Parm)
	class UClass*                                      ParentClass;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_InterfaceInterface
struct UObject_NotEqual_InterfaceInterface_Params
{
	TScriptInterface<class UInterface>                 A;                                                        // (CPF_Parm)
	TScriptInterface<class UInterface>                 B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_InterfaceInterface
struct UObject_EqualEqual_InterfaceInterface_Params
{
	TScriptInterface<class UInterface>                 A;                                                        // (CPF_Parm)
	TScriptInterface<class UInterface>                 B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_ObjectObject
struct UObject_NotEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        // (CPF_Parm)
	class UObject*                                     B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_ObjectObject
struct UObject_EqualEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                        // (CPF_Parm)
	class UObject*                                     B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetPathName
struct UObject_GetPathName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.PathName
struct UObject_PathName_Params
{
	class UObject*                                     CheckObject;                                              // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.SplitString
struct UObject_SplitString_Params
{
	struct FString                                     Source;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Delimiter;                                                // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               bCullEmpty;                                               // (CPF_OptionalParm, CPF_Parm)
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.ParseStringIntoArray
struct UObject_ParseStringIntoArray_Params
{
	struct FString                                     BaseString;                                               // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             Pieces;                                                   // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     delim;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bCullEmpty;                                               // (CPF_Parm)
};

// Function Core.Object.RepeatString
struct UObject_RepeatString_Params
{
	struct FString                                     InValue;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Count;                                                    // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.JoinArrayQWord
struct UObject_JoinArrayQWord_Params
{
	struct FString                                     delim;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               bIgnoreBlanks;                                            // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.JoinArrayInt
struct UObject_JoinArrayInt_Params
{
	TArray<int>                                        IntArray;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     delim;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               bIgnoreBlanks;                                            // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.JoinArrayName
struct UObject_JoinArrayName_Params
{
	TArray<struct FName>                               NameArray;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     delim;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               bIgnoreBlanks;                                            // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.JoinArrayStr
struct UObject_JoinArrayStr_Params
{
	TArray<struct FString>                             StringArray;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     delim;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               bIgnoreBlanks;                                            // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.JoinArray
struct UObject_JoinArray_Params
{
	TArray<struct FString>                             StringArray;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     out_Result;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     delim;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               bIgnoreBlanks;                                            // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.Object.GetRightMost
struct UObject_GetRightMost_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Split
struct UObject_Split_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     SplitStr;                                                 // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	bool                                               bOmitSplitStr;                                            // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Trim
struct UObject_Trim_Params
{
	struct FString                                     Src;                                                      // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Repl
struct UObject_Repl_Params
{
	struct FString                                     Src;                                                      // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     Match;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     With;                                                     // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	bool                                               bCaseSensitive;                                           // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Asc
struct UObject_Asc_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Chr
struct UObject_Chr_Params
{
	int                                                I;                                                        // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Locs
struct UObject_Locs_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Caps
struct UObject_Caps_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Right
struct UObject_Right_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                I;                                                        // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Left
struct UObject_Left_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                I;                                                        // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Mid
struct UObject_Mid_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                I;                                                        // (CPF_Parm)
	int                                                J;                                                        // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.InStr
struct UObject_InStr_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     T;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	bool                                               bSearchFromRight;                                         // (CPF_OptionalParm, CPF_Parm)
	bool                                               bIgnoreCase;                                              // (CPF_OptionalParm, CPF_Parm)
	int                                                StartPos;                                                 // (CPF_OptionalParm, CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Len
struct UObject_Len_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_StrStr
struct UObject_SubtractEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.AtEqual_StrStr
struct UObject_AtEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.ConcatEqual_StrStr
struct UObject_ConcatEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.ComplementEqual_StrStr
struct UObject_ComplementEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_StrStr
struct UObject_NotEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_StrStr
struct UObject_EqualEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GreaterEqual_StrStr
struct UObject_GreaterEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LessEqual_StrStr
struct UObject_LessEqual_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Greater_StrStr
struct UObject_Greater_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Less_StrStr
struct UObject_Less_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.At_StrStr
struct UObject_At_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Concat_StrStr
struct UObject_Concat_StrStr_Params
{
	struct FString                                     A;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     B;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.RotateRotator
struct UObject_RotateRotator_Params
{
	struct FVector                                     Axis;                                                     // (CPF_Parm)
	struct FRotator                                    Rot;                                                      // (CPF_Parm)
	struct FRotator                                    Direction;                                                // (CPF_Parm)
	float                                              Amount;                                                   // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MakeRotator
struct UObject_MakeRotator_Params
{
	int                                                Pitch;                                                    // (CPF_Parm)
	int                                                Yaw;                                                      // (CPF_Parm)
	int                                                Roll;                                                     // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SClampRotAxis
struct UObject_SClampRotAxis_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	int                                                ViewAxis;                                                 // (CPF_Parm)
	int                                                out_DeltaViewAxis;                                        // (CPF_Parm, CPF_OutParm)
	int                                                MaxLimit;                                                 // (CPF_Parm)
	int                                                MinLimit;                                                 // (CPF_Parm)
	float                                              InterpolationSpeed;                                       // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ClampRotAxisFromRange
struct UObject_ClampRotAxisFromRange_Params
{
	int                                                Current;                                                  // (CPF_Parm)
	int                                                Min;                                                      // (CPF_Parm)
	int                                                Max;                                                      // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ClampRotAxisFromBase
struct UObject_ClampRotAxisFromBase_Params
{
	int                                                Current;                                                  // (CPF_Parm)
	int                                                Center;                                                   // (CPF_Parm)
	int                                                MaxDelta;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ClampRotAxis
struct UObject_ClampRotAxis_Params
{
	int                                                ViewAxis;                                                 // (CPF_Parm)
	int                                                out_DeltaViewAxis;                                        // (CPF_Parm, CPF_OutParm)
	int                                                MaxLimit;                                                 // (CPF_Parm)
	int                                                MinLimit;                                                 // (CPF_Parm)
};

// Function Core.Object.FlattenRotatorOnAxis
struct UObject_FlattenRotatorOnAxis_Params
{
	struct FVector                                     AxisToRemove;                                             // (CPF_Parm)
	struct FRotator                                    RotToFlatten;                                             // (CPF_Parm)
	struct FRotator                                    RotToFlattenTo;                                           // (CPF_OptionalParm, CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RSize
struct UObject_RSize_Params
{
	struct FRotator                                    R;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RDiff
struct UObject_RDiff_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NormalizeRotAxis
struct UObject_NormalizeRotAxis_Params
{
	int                                                Angle;                                                    // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RInterpTo
struct UObject_RInterpTo_Params
{
	struct FRotator                                    Current;                                                  // (CPF_Parm)
	struct FRotator                                    Target;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	float                                              InterpSpeed;                                              // (CPF_Parm)
	bool                                               bConstantInterpSpeed;                                     // (CPF_OptionalParm, CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RTransform
struct UObject_RTransform_Params
{
	struct FRotator                                    R;                                                        // (CPF_Parm)
	struct FRotator                                    RBasis;                                                   // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RLerp
struct UObject_RLerp_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	float                                              Alpha;                                                    // (CPF_Parm)
	bool                                               bShortestPath;                                            // (CPF_OptionalParm, CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Normalize
struct UObject_Normalize_Params
{
	struct FRotator                                    Rot;                                                      // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.OrthoRotation
struct UObject_OrthoRotation_Params
{
	struct FVector                                     X;                                                        // (CPF_Parm)
	struct FVector                                     Y;                                                        // (CPF_Parm)
	struct FVector                                     Z;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RotRand
struct UObject_RotRand_Params
{
	bool                                               bRoll;                                                    // (CPF_OptionalParm, CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetRotatorAxis
struct UObject_GetRotatorAxis_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	int                                                Axis;                                                     // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetUnAxes
struct UObject_GetUnAxes_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	struct FVector                                     X;                                                        // (CPF_Parm, CPF_OutParm)
	struct FVector                                     Y;                                                        // (CPF_Parm, CPF_OutParm)
	struct FVector                                     Z;                                                        // (CPF_Parm, CPF_OutParm)
};

// Function Core.Object.GetAxes
struct UObject_GetAxes_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	struct FVector                                     X;                                                        // (CPF_Parm, CPF_OutParm)
	struct FVector                                     Y;                                                        // (CPF_Parm, CPF_OutParm)
	struct FVector                                     Z;                                                        // (CPF_Parm, CPF_OutParm)
};

// Function Core.Object.ClockwiseFrom_IntInt
struct UObject_ClockwiseFrom_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_RotatorRotator
struct UObject_SubtractEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddEqual_RotatorRotator
struct UObject_AddEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_RotatorRotator
struct UObject_Subtract_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Add_RotatorRotator
struct UObject_Add_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_RotatorFloat
struct UObject_DivideEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_RotatorFloat
struct UObject_MultiplyEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Divide_RotatorFloat
struct UObject_Divide_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_FloatRotator
struct UObject_Multiply_FloatRotator_Params
{
	float                                              A;                                                        // (CPF_Parm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_RotatorFloat
struct UObject_Multiply_RotatorFloat_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_RotatorRotator
struct UObject_NotEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_RotatorRotator
struct UObject_EqualEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                        // (CPF_Parm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GetRadiansBetweenVectors
struct UObject_GetRadiansBetweenVectors_Params
{
	struct FVector                                     V0;                                                       // (CPF_Parm)
	struct FVector                                     v1;                                                       // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VClamp
struct UObject_VClamp_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     Min;                                                      // (CPF_Parm)
	struct FVector                                     Max;                                                      // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.vect3d
struct UObject_vect3d_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm)
	float                                              Z;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.InCylinder
struct UObject_InCylinder_Params
{
	struct FVector                                     Origin;                                                   // (CPF_Parm)
	struct FRotator                                    Dir;                                                      // (CPF_Parm)
	float                                              Width;                                                    // (CPF_Parm)
	struct FVector                                     A;                                                        // (CPF_Parm)
	bool                                               bIgnoreZ;                                                 // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NoZDot
struct UObject_NoZDot_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ClampLength
struct UObject_ClampLength_Params
{
	struct FVector                                     V;                                                        // (CPF_Parm)
	float                                              MaxLength;                                                // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VInterpConstantTo
struct UObject_VInterpConstantTo_Params
{
	struct FVector                                     Current;                                                  // (CPF_Parm)
	struct FVector                                     Target;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	float                                              InterpSpeed;                                              // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VInterpTo
struct UObject_VInterpTo_Params
{
	struct FVector                                     Current;                                                  // (CPF_Parm)
	struct FVector                                     Target;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	float                                              InterpSpeed;                                              // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Construct
struct UObject_Construct_Params
{
};

// Function Core.Object.ProjectOnToPlane
struct UObject_ProjectOnToPlane_Params
{
	struct FVector                                     InVector;                                                 // (CPF_Parm)
	struct FVector                                     InNormal;                                                 // (CPF_Parm)
	float                                              OverBounce;                                               // (CPF_OptionalParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.IsZero
struct UObject_IsZero_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ProjectOnTo
struct UObject_ProjectOnTo_Params
{
	struct FVector                                     X;                                                        // (CPF_Parm)
	struct FVector                                     Y;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MirrorVectorByNormal
struct UObject_MirrorVectorByNormal_Params
{
	struct FVector                                     InVect;                                                   // (CPF_Parm)
	struct FVector                                     InNormal;                                                 // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VRandCone2
struct UObject_VRandCone2_Params
{
	struct FVector                                     Dir;                                                      // (CPF_Parm)
	float                                              HorizontalConeHalfAngleRadians;                           // (CPF_Parm)
	float                                              VerticalConeHalfAngleRadians;                             // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VRandCone
struct UObject_VRandCone_Params
{
	struct FVector                                     Dir;                                                      // (CPF_Parm)
	float                                              ConeHalfAngleRadians;                                     // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VRand
struct UObject_VRand_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VLerp
struct UObject_VLerp_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	float                                              Alpha;                                                    // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Normal2D
struct UObject_Normal2D_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Normal
struct UObject_Normal_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VSizeSq2D
struct UObject_VSizeSq2D_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VSizeSq
struct UObject_VSizeSq_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VSize2D
struct UObject_VSize2D_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.VSize
struct UObject_VSize_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_VectorVector
struct UObject_SubtractEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm, CPF_OutParm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddEqual_VectorVector
struct UObject_AddEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm, CPF_OutParm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_VectorFloat
struct UObject_DivideEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorVector
struct UObject_MultiplyEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm, CPF_OutParm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorFloat
struct UObject_MultiplyEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Cross_VectorVector
struct UObject_Cross_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Dot_VectorVector
struct UObject_Dot_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_VectorVector
struct UObject_NotEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_VectorVector
struct UObject_EqualEqual_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GreaterGreater_VectorRotator
struct UObject_GreaterGreater_VectorRotator_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LessLess_VectorRotator
struct UObject_LessLess_VectorRotator_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FRotator                                    B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_VectorVector
struct UObject_Subtract_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Add_VectorVector
struct UObject_Add_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Divide_VectorFloat
struct UObject_Divide_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_VectorVector
struct UObject_Multiply_VectorVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_FloatVector
struct UObject_Multiply_FloatVector_Params
{
	float                                              A;                                                        // (CPF_Parm)
	struct FVector                                     B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_VectorFloat
struct UObject_Multiply_VectorFloat_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_PreVector
struct UObject_Subtract_PreVector_Params
{
	struct FVector                                     A;                                                        // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FInterpConstantTo
struct UObject_FInterpConstantTo_Params
{
	float                                              Current;                                                  // (CPF_Parm)
	float                                              Target;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	float                                              InterpSpeed;                                              // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FInterpTo
struct UObject_FInterpTo_Params
{
	float                                              Current;                                                  // (CPF_Parm)
	float                                              Target;                                                   // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	float                                              InterpSpeed;                                              // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FPctByRange
struct UObject_FPctByRange_Params
{
	float                                              Value;                                                    // (CPF_Parm)
	float                                              InMin;                                                    // (CPF_Parm)
	float                                              InMax;                                                    // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RandSign
struct UObject_RandSign_Params
{
	float                                              Value;                                                    // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.CalculateGravityPosition
struct UObject_CalculateGravityPosition_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm)
	struct FVector                                     Velocity;                                                 // (CPF_Parm)
	float                                              Gravity;                                                  // (CPF_Parm)
	float                                              Time;                                                     // (CPF_Parm)
	struct FVector                                     GravityDirection;                                         // (CPF_OptionalParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.RandRange
struct UObject_RandRange_Params
{
	float                                              InMin;                                                    // (CPF_Parm)
	float                                              InMax;                                                    // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FInterpEaseInOut
struct UObject_FInterpEaseInOut_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              Alpha;                                                    // (CPF_Parm)
	float                                              Exp;                                                      // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FInterpEaseOut
struct UObject_FInterpEaseOut_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              Alpha;                                                    // (CPF_Parm)
	float                                              Exp;                                                      // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FInterpEaseIn
struct UObject_FInterpEaseIn_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              Alpha;                                                    // (CPF_Parm)
	float                                              Exp;                                                      // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FCubicInterp
struct UObject_FCubicInterp_Params
{
	float                                              P0;                                                       // (CPF_Parm)
	float                                              T0;                                                       // (CPF_Parm)
	float                                              P1;                                                       // (CPF_Parm)
	float                                              T1;                                                       // (CPF_Parm)
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FloorLog2
struct UObject_FloorLog2_Params
{
	int                                                Value;                                                    // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FCeil
struct UObject_FCeil_Params
{
	float                                              A;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FFloor
struct UObject_FFloor_Params
{
	float                                              A;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Round
struct UObject_Round_Params
{
	float                                              A;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Lerp
struct UObject_Lerp_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              Alpha;                                                    // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FClamp
struct UObject_FClamp_Params
{
	float                                              V;                                                        // (CPF_Parm)
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FMax
struct UObject_FMax_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FMin
struct UObject_FMin_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.FRand
struct UObject_FRand_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Square
struct UObject_Square_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Sqrt
struct UObject_Sqrt_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Loge
struct UObject_Loge_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Exp
struct UObject_Exp_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Atan2
struct UObject_Atan2_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Atan
struct UObject_Atan_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Tan
struct UObject_Tan_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Acos
struct UObject_Acos_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Cos
struct UObject_Cos_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Asin
struct UObject_Asin_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Sin
struct UObject_Sin_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Abs
struct UObject_Abs_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_FloatFloat
struct UObject_SubtractEqual_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddEqual_FloatFloat
struct UObject_AddEqual_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_FloatFloat
struct UObject_DivideEqual_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_FloatFloat
struct UObject_MultiplyEqual_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_FloatFloat
struct UObject_NotEqual_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ComplementEqual_FloatFloat
struct UObject_ComplementEqual_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_FloatFloat
struct UObject_EqualEqual_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GreaterEqual_FloatFloat
struct UObject_GreaterEqual_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LessEqual_FloatFloat
struct UObject_LessEqual_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Greater_FloatFloat
struct UObject_Greater_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Less_FloatFloat
struct UObject_Less_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_FloatFloat
struct UObject_Subtract_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Add_FloatFloat
struct UObject_Add_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Percent_FloatFloat
struct UObject_Percent_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Divide_FloatFloat
struct UObject_Divide_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_FloatFloat
struct UObject_Multiply_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              B;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MultiplyMultiply_FloatFloat
struct UObject_MultiplyMultiply_FloatFloat_Params
{
	float                                              Base;                                                     // (CPF_Parm)
	float                                              Exp;                                                      // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_PreFloat
struct UObject_Subtract_PreFloat_Params
{
	float                                              A;                                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.ToHex
struct UObject_ToHex_Params
{
	int                                                A;                                                        // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Object.Clamp
struct UObject_Clamp_Params
{
	int                                                V;                                                        // (CPF_Parm)
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Max
struct UObject_Max_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Min
struct UObject_Min_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Rand
struct UObject_Rand_Params
{
	int                                                Max;                                                      // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.UnbindDelegate
struct UObject_UnbindDelegate_Params
{
	struct FName                                       DelegateName;                                             // (CPF_Parm)
	class UObject*                                     TargetObject;                                             // (CPF_Parm)
	struct FName                                       TargetFuncName;                                           // (CPF_Parm)
};

// Function Core.Object.BindStateDelegate
struct UObject_BindStateDelegate_Params
{
	struct FName                                       DelegateName;                                             // (CPF_Parm)
	class UObject*                                     TargetObject;                                             // (CPF_Parm)
	struct FName                                       TargetFuncName;                                           // (CPF_Parm)
};

// Function Core.Object.BindDelegate
struct UObject_BindDelegate_Params
{
	struct FName                                       DelegateName;                                             // (CPF_Parm)
	class UObject*                                     TargetObject;                                             // (CPF_Parm)
	struct FName                                       TargetFuncName;                                           // (CPF_Parm)
};

// Function Core.Object.FromHex
struct UObject_FromHex_Params
{
	struct FString                                     Hex;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.QMin
struct UObject_QMin_Params
{
};

// Function Core.Object.QMax
struct UObject_QMax_Params
{
};

// Function Core.Object.QSubtract
struct UObject_QSubtract_Params
{
};

// Function Core.Object.NotEqual_QWordInt
struct UObject_NotEqual_QWordInt_Params
{
	int                                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_QWordInt
struct UObject_EqualEqual_QWordInt_Params
{
	int                                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_QWordQWord
struct UObject_NotEqual_QWordQWord_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_QWordQWord
struct UObject_EqualEqual_QWordQWord_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GreaterEqual_QWordQWord
struct UObject_GreaterEqual_QWordQWord_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LessEqual_QWordQWord
struct UObject_LessEqual_QWordQWord_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Greater_QWordQWord
struct UObject_Greater_QWordQWord_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Less_QWordQWord
struct UObject_Less_QWordQWord_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_QWordQWord
struct UObject_Subtract_QWordQWord_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Add_QWordQWord
struct UObject_Add_QWordQWord_Params
{
};

// Function Core.Object.SubtractSubtract_Int
struct UObject_SubtractSubtract_Int_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_OutParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddAdd_Int
struct UObject_AddAdd_Int_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_OutParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreInt
struct UObject_SubtractSubtract_PreInt_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_OutParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddAdd_PreInt
struct UObject_AddAdd_PreInt_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_OutParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_IntInt
struct UObject_SubtractEqual_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_OutParm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddEqual_IntInt
struct UObject_AddEqual_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_OutParm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_IntFloat
struct UObject_DivideEqual_IntFloat_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_IntFloat
struct UObject_MultiplyEqual_IntFloat_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Or_IntInt
struct UObject_Or_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Xor_IntInt
struct UObject_Xor_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.And_IntInt
struct UObject_And_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_IntInt
struct UObject_NotEqual_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_IntInt
struct UObject_EqualEqual_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GreaterEqual_IntInt
struct UObject_GreaterEqual_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LessEqual_IntInt
struct UObject_LessEqual_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Greater_IntInt
struct UObject_Greater_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Less_IntInt
struct UObject_Less_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GreaterGreaterGreater_IntInt
struct UObject_GreaterGreaterGreater_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.GreaterGreater_IntInt
struct UObject_GreaterGreater_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.LessLess_IntInt
struct UObject_LessLess_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_IntInt
struct UObject_Subtract_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Add_IntInt
struct UObject_Add_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Percent_IntInt
struct UObject_Percent_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Divide_IntInt
struct UObject_Divide_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Multiply_IntInt
struct UObject_Multiply_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Subtract_PreInt
struct UObject_Subtract_PreInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Complement_PreInt
struct UObject_Complement_PreInt_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractSubtract_Byte
struct UObject_SubtractSubtract_Byte_Params
{
	unsigned char                                      A;                                                        // (CPF_Parm, CPF_OutParm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddAdd_Byte
struct UObject_AddAdd_Byte_Params
{
	unsigned char                                      A;                                                        // (CPF_Parm, CPF_OutParm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreByte
struct UObject_SubtractSubtract_PreByte_Params
{
	unsigned char                                      A;                                                        // (CPF_Parm, CPF_OutParm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddAdd_PreByte
struct UObject_AddAdd_PreByte_Params
{
	unsigned char                                      A;                                                        // (CPF_Parm, CPF_OutParm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_ByteByte
struct UObject_SubtractEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (CPF_Parm, CPF_OutParm)
	unsigned char                                      B;                                                        // (CPF_Parm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AddEqual_ByteByte
struct UObject_AddEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (CPF_Parm, CPF_OutParm)
	unsigned char                                      B;                                                        // (CPF_Parm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_ByteByte
struct UObject_DivideEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (CPF_Parm, CPF_OutParm)
	unsigned char                                      B;                                                        // (CPF_Parm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_ByteFloat
struct UObject_MultiplyEqual_ByteFloat_Params
{
	unsigned char                                      A;                                                        // (CPF_Parm, CPF_OutParm)
	float                                              B;                                                        // (CPF_Parm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_ByteByte
struct UObject_MultiplyEqual_ByteByte_Params
{
	unsigned char                                      A;                                                        // (CPF_Parm, CPF_OutParm)
	unsigned char                                      B;                                                        // (CPF_Parm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.OrOr_BoolBool
struct UObject_OrOr_BoolBool_Params
{
	bool                                               A;                                                        // (CPF_Parm)
	bool                                               B;                                                        // (CPF_Parm, CPF_SkipParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.XorXor_BoolBool
struct UObject_XorXor_BoolBool_Params
{
	bool                                               A;                                                        // (CPF_Parm)
	bool                                               B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.AndAnd_BoolBool
struct UObject_AndAnd_BoolBool_Params
{
	bool                                               A;                                                        // (CPF_Parm)
	bool                                               B;                                                        // (CPF_Parm, CPF_SkipParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.NotEqual_BoolBool
struct UObject_NotEqual_BoolBool_Params
{
	bool                                               A;                                                        // (CPF_Parm)
	bool                                               B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_BoolBool
struct UObject_EqualEqual_BoolBool_Params
{
	bool                                               A;                                                        // (CPF_Parm)
	bool                                               B;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Object.Not_PreBool
struct UObject_Not_PreBool_Params
{
	bool                                               A;                                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Subscription.__Subscription__TriggerAll_1
struct USubscription___Subscription__TriggerAll_1_Params
{
	class USubscription*                               S;                                                        // (CPF_Parm)
};

// Function Core.Subscription.GetNone
struct USubscription_GetNone_Params
{
	class USubscription*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Subscription.TriggerAll
struct USubscription_TriggerAll_Params
{
	TArray<class USubscription*>                       Subscriptions;                                            // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function Core.Subscription.Create
struct USubscription_Create_Params
{
	struct FScriptDelegate                             InCallback;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class USubscription*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Subscription.Dispose
struct USubscription_Dispose_Params
{
};

// Function Core.Subscription.TriggerCallback
struct USubscription_TriggerCallback_Params
{
};

// Function Core.Subscription.SetCallback
struct USubscription_SetCallback_Params
{
	struct FScriptDelegate                             InCallback;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function Core.Subscription.SubscriberCallback
struct USubscription_SubscriberCallback_Params
{
};

// Function Core.ObjectProvider.SetSingleton
struct UObjectProvider_SetSingleton_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	class UObject*                                     Replacement;                                              // (CPF_Parm)
};

// Function Core.ObjectProvider.AddAndRemoveObjects
struct UObjectProvider_AddAndRemoveObjects_Params
{
	TArray<class UObject*>                             AddObjects;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<class UObject*>                             RemoveObjects;                                            // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function Core.ObjectProvider.RemoveObjects
struct UObjectProvider_RemoveObjects_Params
{
	TArray<class UObject*>                             InObjects;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function Core.ObjectProvider.RemoveObject
struct UObjectProvider_RemoveObject_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
};

// Function Core.ObjectProvider.AddObjects
struct UObjectProvider_AddObjects_Params
{
	TArray<class UObject*>                             InObjects;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function Core.ObjectProvider.AddObject
struct UObjectProvider_AddObject_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
};

// Function Core.ObjectProvider.GetOrCreate
struct UObjectProvider_GetOrCreate_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function Core.ObjectProvider.Get
struct UObjectProvider_Get_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function Core.ObjectProvider.AllObjects
struct UObjectProvider_AllObjects_Params
{
	class UClass*                                      BaseClass;                                                // (CPF_Parm)
	class UObject*                                     Obj;                                                      // (CPF_Parm, CPF_OutParm)
	class UClass*                                      InterfaceClass;                                           // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.ObjectProvider.Inject
struct UObjectProvider_Inject_Params
{
	class UObject*                                     Subscriber;                                               // (CPF_Parm)
};

// Function Core.ObjectProvider.UnsubscribeAll
struct UObjectProvider_UnsubscribeAll_Params
{
	class UObject*                                     Subscription;                                             // (CPF_Parm)
};

// Function Core.ObjectProvider.Unsubscribe
struct UObjectProvider_Unsubscribe_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function Core.ObjectProvider.SubscribeList
struct UObjectProvider_SubscribeList_Params
{
	class UClass*                                      BaseClass;                                                // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function Core.ObjectProvider.Subscribe
struct UObjectProvider_Subscribe_Params
{
	class UClass*                                      BaseClass;                                                // (CPF_Parm)
	struct FScriptDelegate                             OnAdd;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             OnRemove;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function Core.ObjectProvider.ObjectChangeCallback
struct UObjectProvider_ObjectChangeCallback_Params
{
};

// Function Core.ObjectProvider.ObjectListSubscriptionCallback
struct UObjectProvider_ObjectListSubscriptionCallback_Params
{
	class UObjectProvider*                             Provider;                                                 // (CPF_Parm)
};

// Function Core.ObjectProvider.ObjectSubscriptionCallback
struct UObjectProvider_ObjectSubscriptionCallback_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
};

// Function Core.FileSystem.CrcString
struct UFileSystem_CrcString_Params
{
	struct FString                                     Str;                                                      // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.FileSystem.CrcBytes
struct UFileSystem_CrcBytes_Params
{
	TArray<unsigned char>                              Bytes;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.FileSystem.DeleteDirectoryTree
struct UFileSystem_DeleteDirectoryTree_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.FileSystem.DeleteFile
struct UFileSystem_DeleteFile_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.FileSystem.AppendStringToFile
struct UFileSystem_AppendStringToFile_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.FileSystem.SaveStringToFile
struct UFileSystem_SaveStringToFile_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.FileSystem.SaveBytesToFile
struct UFileSystem_SaveBytesToFile_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              Bytes;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.FileSystem.LoadFileToBytes
struct UFileSystem_LoadFileToBytes_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	TArray<unsigned char>                              OutBytes;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.FileSystem.LoadFileToString
struct UFileSystem_LoadFileToString_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     OutText;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.FileSystem.GetFileExtensionWithoutDot
struct UFileSystem_GetFileExtensionWithoutDot_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.FileSystem.GetFileExtension
struct UFileSystem_GetFileExtension_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.FileSystem.GetFilePathWithoutExtension
struct UFileSystem_GetFilePathWithoutExtension_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.FileSystem.GetFileNameWithoutExtension
struct UFileSystem_GetFileNameWithoutExtension_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.FileSystem.GetFilename
struct UFileSystem_GetFilename_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.FileSystem.FindFiles
struct UFileSystem_FindFiles_Params
{
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             OutFilenames;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function Core.ErrorType.CreateError
struct UErrorType_CreateError_Params
{
	struct FString                                     InErrorMessage;                                           // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	int                                                InErrorCode;                                              // (CPF_OptionalParm, CPF_Parm)
	class UError*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.ErrorType.GetLocalizedMessage
struct UErrorType_GetLocalizedMessage_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.ErrorList.GetErrorType
struct UErrorList_GetErrorType_Params
{
	struct FName                                       Error;                                                    // (CPF_Parm)
	class UErrorType*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Error.GetDebugMessage
struct UError_GetDebugMessage_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.Error.GetLocalizedMessage
struct UError_GetLocalizedMessage_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.DebugDrawer.Reset
struct UDebugDrawer_Reset_Params
{
};

// Function Core.DebugDrawer.PrintText
struct UDebugDrawer_PrintText_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FColor                                      InColor;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.DebugDrawer.PrintArrayProperty
struct UDebugDrawer_PrintArrayProperty_Params
{
	struct FString                                     PropertyName;                                             // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function Core.DebugDrawer.PrintProperty
struct UDebugDrawer_PrintProperty_Params
{
	struct FString                                     PropertyName;                                             // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function Core.DebugDrawer.EndSection
struct UDebugDrawer_EndSection_Params
{
};

// Function Core.DebugDrawer.StartSection
struct UDebugDrawer_StartSection_Params
{
};

// Function Core.DebugDrawer.PrintObject
struct UDebugDrawer_PrintObject_Params
{
	struct FString                                     Title;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	class UObject*                                     ForObj;                                                   // (CPF_Parm)
};

// Function Core.DebugDrawer.PrintSeperater
struct UDebugDrawer_PrintSeperater_Params
{
};

// Function Core.DebugDrawer.DebugArrayObject
struct UDebugDrawer_DebugArrayObject_Params
{
	struct FString                                     Title;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                Index;                                                    // (CPF_Parm)
	class UObject*                                     ForObj;                                                   // (CPF_Parm)
};

// Function Core.DebugDrawer.DebugObject
struct UDebugDrawer_DebugObject_Params
{
	struct FString                                     Title;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	class UObject*                                     ForObj;                                                   // (CPF_Parm)
};

// Function Core.DebugDrawer.ShouldDisplayDebug
struct UDebugDrawer_ShouldDisplayDebug_Params
{
	struct FName                                       Category;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.DebugDrawer.LogFunc
struct UDebugDrawer_LogFunc_Params
{
	struct FString                                     Str;                                                      // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function Core.StringMap.Append
struct UStringMap_Append_Params
{
	class UStringMap*                                  Other;                                                    // (CPF_Parm, CPF_EditInline)
};

// Function Core.StringMap.Contains
struct UStringMap_Contains_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.StringMap.Remove
struct UStringMap_Remove_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function Core.StringMap.TryGet
struct UStringMap_TryGet_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     OutValue;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.StringMap.Get
struct UStringMap_Get_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function Core.StringMap.Set
struct UStringMap_Set_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function Core.DistributionVector.GetVectorValue
struct UDistributionVector_GetVectorValue_Params
{
	float                                              F;                                                        // (CPF_OptionalParm, CPF_Parm)
	int                                                LastExtreme;                                              // (CPF_OptionalParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.DistributionFloat.GetFloatValue
struct UDistributionFloat_GetFloatValue_Params
{
	float                                              F;                                                        // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.Commandlet.Main
struct UCommandlet_Main_Params
{
	struct FString                                     Params;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.HelpCommandlet.Main
struct UHelpCommandlet_Main_Params
{
	struct FString                                     Params;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.AsyncTask.QueCallbacks
struct UAsyncTask_QueCallbacks_Params
{
};

// Function Core.AsyncTask.CreateError
struct UAsyncTask_CreateError_Params
{
	class UError*                                      InError;                                                  // (CPF_Parm)
	class UAsyncTask*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.AsyncTask.CreateSuccess
struct UAsyncTask_CreateSuccess_Params
{
	class UAsyncTask*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.AsyncTask.Create
struct UAsyncTask_Create_Params
{
	class UAsyncTask*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.AsyncTask.DependOn
struct UAsyncTask_DependOn_Params
{
	class UAsyncTask*                                  Other;                                                    // (CPF_Parm)
	class UAsyncTask*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.AsyncTask.NotifyOnDispose
struct UAsyncTask_NotifyOnDispose_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.AsyncTask.ClearCallbacks
struct UAsyncTask_ClearCallbacks_Params
{
};

// Function Core.AsyncTask.Dispose
struct UAsyncTask_Dispose_Params
{
};

// Function Core.AsyncTask.SetComplete
struct UAsyncTask_SetComplete_Params
{
	class UError*                                      InError;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function Core.AsyncTask.SetError
struct UAsyncTask_SetError_Params
{
	class UError*                                      InError;                                                  // (CPF_Parm)
};

// Function Core.AsyncTask.NotifyOnComplete
struct UAsyncTask_NotifyOnComplete_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.AsyncTask.NotifyOnFail
struct UAsyncTask_NotifyOnFail_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.AsyncTask.NotifyOnSuccess
struct UAsyncTask_NotifyOnSuccess_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UAsyncTask*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Core.AsyncTask.EventDisposed
struct UAsyncTask_EventDisposed_Params
{
};

// Function Core.AsyncTask.EventAsyncTaskComplete
struct UAsyncTask_EventAsyncTaskComplete_Params
{
	class UError*                                      TaskError;                                                // (CPF_Parm)
};

// Function Core.AsyncTask.EventAsyncTaskFail
struct UAsyncTask_EventAsyncTaskFail_Params
{
	class UError*                                      TaskError;                                                // (CPF_Parm)
};

// Function Core.AsyncTask.EventAsyncTaskSuccess
struct UAsyncTask_EventAsyncTaskSuccess_Params
{
};

// Function Core._LoggingDoc.TestSpecialLogging
struct U_LoggingDoc_TestSpecialLogging_Params
{
};

// Function Core.IDisposable.Dispose
struct UIDisposable_Dispose_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
