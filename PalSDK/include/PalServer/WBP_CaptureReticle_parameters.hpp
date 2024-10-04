#pragma once

#include "Basic.hpp"

#include "EPalCaptureReticleSeqence_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EPalSphereCaptureFailedReason_structs.hpp"
#include "Pal_structs.hpp"
#include "E_PalCaptureSphereBouncedReason_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalServer::Params
{

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.CalcCaptureSuccessRate
// 0x0048 (0x0048 - 0x0000)
struct WBP_CaptureReticle_C_CalcCaptureSuccessRate final
{
public:
	TArray<double>                                RateArray;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                        SuccessRate;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TmpRate;                                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_CalcCaptureSuccessRate) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_CalcCaptureSuccessRate");
static_assert(sizeof(WBP_CaptureReticle_C_CalcCaptureSuccessRate) == 0x000048, "Wrong size on WBP_CaptureReticle_C_CalcCaptureSuccessRate");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, RateArray) == 0x000000, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::RateArray' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, SuccessRate) == 0x000010, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::SuccessRate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, TmpRate) == 0x000018, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::TmpRate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, Temp_int_Array_Index_Variable) == 0x000024, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_CalcCaptureSuccessRate, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'WBP_CaptureReticle_C_CalcCaptureSuccessRate::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.ChangeSeqence
// 0x0005 (0x0005 - 0x0000)
struct WBP_CaptureReticle_C_ChangeSeqence final
{
public:
	EPalCaptureReticleSeqence                     NewSeqence;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_ChangeSeqence) == 0x000001, "Wrong alignment on WBP_CaptureReticle_C_ChangeSeqence");
static_assert(sizeof(WBP_CaptureReticle_C_ChangeSeqence) == 0x000005, "Wrong size on WBP_CaptureReticle_C_ChangeSeqence");
static_assert(offsetof(WBP_CaptureReticle_C_ChangeSeqence, NewSeqence) == 0x000000, "Member 'WBP_CaptureReticle_C_ChangeSeqence::NewSeqence' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ChangeSeqence, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_CaptureReticle_C_ChangeSeqence::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ChangeSeqence, K2Node_SwitchEnum_CmpSuccess_1) == 0x000002, "Member 'WBP_CaptureReticle_C_ChangeSeqence::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ChangeSeqence, K2Node_SwitchEnum_CmpSuccess_2) == 0x000003, "Member 'WBP_CaptureReticle_C_ChangeSeqence::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ChangeSeqence, K2Node_SwitchEnum_CmpSuccess_3) == 0x000004, "Member 'WBP_CaptureReticle_C_ChangeSeqence::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.DisplayCaptureFailedLog
// 0x0188 (0x0188 - 0x0000)
struct WBP_CaptureReticle_C_DisplayCaptureFailedLog final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTutorialManager*                    CallFunc_GetTutorialManager_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A8(0x0050)(HasGetValueTypeHash)
	class UPalLogManager*                         CallFunc_GetLogManager_ReturnValue;                // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0100(0x0010)(ReferenceParm)
	class FText                                   CallFunc_CreateLogText_outText;                    // 0x0110(0x0018)()
	struct FPalLogAdditionalData                  K2Node_MakeStruct_PalLogAdditionalData;            // 0x0128(0x0038)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0160(0x0018)()
	struct FGuid                                  CallFunc_AddLog_ReturnValue;                       // 0x0178(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_DisplayCaptureFailedLog) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_DisplayCaptureFailedLog");
static_assert(sizeof(WBP_CaptureReticle_C_DisplayCaptureFailedLog) == 0x000188, "Wrong size on WBP_CaptureReticle_C_DisplayCaptureFailedLog");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, TargetHandle) == 0x000000, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_GetTutorialManager_ReturnValue) == 0x000008, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_GetTutorialManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_GetLevel_ReturnValue) == 0x000024, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_GetNickName_outName) == 0x000028, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000038, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A8, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_GetLogManager_ReturnValue) == 0x0000F8, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_GetLogManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, K2Node_MakeArray_Array) == 0x000100, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_CreateLogText_outText) == 0x000110, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_CreateLogText_outText' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, K2Node_MakeStruct_PalLogAdditionalData) == 0x000128, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::K2Node_MakeStruct_PalLogAdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_Format_ReturnValue) == 0x000160, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_DisplayCaptureFailedLog, CallFunc_AddLog_ReturnValue) == 0x000178, "Member 'WBP_CaptureReticle_C_DisplayCaptureFailedLog::CallFunc_AddLog_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.ExecuteUbergraph_WBP_CaptureReticle
// 0x0138 (0x0138 - 0x0000)
struct WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalMonsterCharacter*                   K2Node_DynamicCast_AsPal_Monster_Character;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalMonsterCharacter*                   CallFunc_FindTargetCharacter_targetMonster;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalMonsterCharacter>    CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0030(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalTribeID                                   CallFunc_GetTribeID_ReturnValue;                   // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0070(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBonusEnabled_enabled;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerRecordData*                   CallFunc_GetLocalRecordData_ReturnValue;           // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRecordData_TribeIdCount_ReturnValue;   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalWeaponBase*                         K2Node_DynamicCast_AsPal_Weapon_Base;              // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_112[0x2];                                      // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRecordData_TribeIdCount_ReturnValue_1; // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_Int64Int64_ReturnValue;           // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ContainsRecordData_TribeIdCount_ReturnValue; // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_126[0x2];                                      // 0x0126(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateFailedWidgets_DeltaTime_ImplicitCast; // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle");
static_assert(sizeof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle) == 0x000138, "Wrong size on WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, EntryPoint) == 0x000000, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000008, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000010, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, K2Node_DynamicCast_AsPal_Monster_Character) == 0x000018, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::K2Node_DynamicCast_AsPal_Monster_Character' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_FindTargetCharacter_targetMonster) == 0x000028, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_FindTargetCharacter_targetMonster' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000030, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000060, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000068, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_GetTribeID_ReturnValue) == 0x00006A, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_GetTribeID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_IsValid_ReturnValue_1) == 0x00006B, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, K2Node_Event_MyGeometry) == 0x000070, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, K2Node_Event_InDeltaTime) == 0x0000B0, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_GetPalmi_ReturnValue) == 0x0000B8, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C0, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_IsBonusEnabled_enabled) == 0x0000D8, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_IsBonusEnabled_enabled' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000D9, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_GetLocalRecordData_ReturnValue) == 0x0000F0, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x0000F8, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_GetRecordData_TribeIdCount_ReturnValue) == 0x000100, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_GetRecordData_TribeIdCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, K2Node_DynamicCast_AsPal_Weapon_Base) == 0x000108, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::K2Node_DynamicCast_AsPal_Weapon_Base' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_IsValidSoftObjectReference_ReturnValue_1) == 0x000111, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_IsValidSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_GetRecordData_TribeIdCount_ReturnValue_1) == 0x000114, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_GetRecordData_TribeIdCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000118, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_Min_ReturnValue) == 0x000120, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_Greater_Int64Int64_ReturnValue) == 0x000124, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_Greater_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_ContainsRecordData_TribeIdCount_ReturnValue) == 0x000125, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_ContainsRecordData_TribeIdCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_UpdateFailedWidgets_DeltaTime_ImplicitCast) == 0x000128, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_UpdateFailedWidgets_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000130, "Member 'WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.FindTargetCharacter
// 0x0328 (0x0328 - 0x0000)
struct WBP_CaptureReticle_C_FindTargetCharacter final
{
public:
	class APalMonsterCharacter*                   TargetMonster;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         IgnoreActors;                                      // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShouldReticleDIsplay_ShouldDisplay;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class ABP_PalCaptureBodyBase_C>> CallFunc_Map_Keys_Keys;                            // 0x0028(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> CallFunc_Array_Get_Item;                           // 0x0040(0x0030)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalCaptureBodyBase_C*               K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base;     // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle;             // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_CapsuleTraceSingleForObjects_OutHit;      // 0x0148(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_CapsuleTraceSingleForObjects_ReturnValue; // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0232(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_233[0x1];                                      // 0x0233(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalMonsterCharacter*                   K2Node_DynamicCast_AsPal_Monster_Character;        // 0x0308(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_312[0x6];                                      // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0318(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_FindTargetCharacter) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_FindTargetCharacter");
static_assert(sizeof(WBP_CaptureReticle_C_FindTargetCharacter) == 0x000328, "Wrong size on WBP_CaptureReticle_C_FindTargetCharacter");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, TargetMonster) == 0x000000, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::TargetMonster' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, IgnoreActors) == 0x000008, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::IgnoreActors' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_ShouldReticleDIsplay_ShouldDisplay) == 0x00001C, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_ShouldReticleDIsplay_ShouldDisplay' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Map_Keys_Keys) == 0x000028, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000070, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000078, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base) == 0x000080, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_GetTargetHandle_targetHandle) == 0x000090, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_GetTargetHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_IsValid_ReturnValue) == 0x00009C, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Less_IntInt_ReturnValue) == 0x00009D, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_TryGetIndividualActor_ReturnValue) == 0x0000A0, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Array_Add_ReturnValue) == 0x0000AC, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_GetPalmi_ReturnValue) == 0x0000B0, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_IsValid_ReturnValue_2) == 0x0000B8, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_GetCameraRotation_ReturnValue) == 0x0000C0, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_GetForwardVector_ReturnValue) == 0x0000D8, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_GetCameraLocation_ReturnValue) == 0x0000F0, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000108, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_K2_GetPawn_ReturnValue) == 0x000120, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Add_VectorVector_ReturnValue) == 0x000128, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_Array_Add_ReturnValue_1) == 0x000140, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_CapsuleTraceSingleForObjects_OutHit) == 0x000148, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_CapsuleTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_CapsuleTraceSingleForObjects_ReturnValue) == 0x000230, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_CapsuleTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_bBlockingHit) == 0x000231, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_bInitialOverlap) == 0x000232, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_Time) == 0x000234, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_Distance) == 0x000238, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_Location) == 0x000240, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_ImpactPoint) == 0x000258, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_Normal) == 0x000270, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_ImpactNormal) == 0x000288, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_PhysMat) == 0x0002A0, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_HitActor) == 0x0002A8, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_HitComponent) == 0x0002B0, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_HitBoneName) == 0x0002B8, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_BoneName) == 0x0002C0, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_HitItem) == 0x0002C8, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_ElementIndex) == 0x0002CC, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_FaceIndex) == 0x0002D0, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_TraceStart) == 0x0002D8, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_BreakHitResult_TraceEnd) == 0x0002F0, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, K2Node_DynamicCast_AsPal_Monster_Character) == 0x000308, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::K2Node_DynamicCast_AsPal_Monster_Character' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, K2Node_DynamicCast_bSuccess_1) == 0x000310, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_IsDead_ReturnValue) == 0x000311, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_GetMainMesh_ReturnValue) == 0x000318, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_IsVisible_ReturnValue) == 0x000320, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_FindTargetCharacter, CallFunc_IsFriend_ReturnValue) == 0x000321, "Member 'WBP_CaptureReticle_C_FindTargetCharacter::CallFunc_IsFriend_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.Get Display Rate
// 0x01A8 (0x01A8 - 0x0000)
struct WBP_CaptureReticle_C_Get_Display_Rate final
{
public:
	class APalWeaponBase*                         CaptureItemActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalMonsterCharacter*                   TargetMonster;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Rate;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSneakBonus;                                      // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalWeaponBase*                         TempWeaponBase;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_CapturePrism_C*                     K2Node_DynamicCast_AsBP_Capture_Prism;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCaptureLevel_level;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HomingSphereLauncher_C*             K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher;    // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SphereLauncher_C*                   K2Node_DynamicCast_AsBP_Sphere_Launcher;           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                         CallFunc_GetIndividualIDByActor_ReturnValue;       // 0x0070(0x0030)(HasGetValueTypeHash)
	TMap<class FName, class APalWeaponBase*>      CallFunc_GetPalSphereActorMap_ReturnValue;         // 0x00A0(0x0050)()
	class FName                                   CallFunc_GetNowEquipedBallItemID_OutBallItemID;    // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         CallFunc_Map_Find_Value;                           // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandle_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_2;                   // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcCaptureRate_ReturnValue;              // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBonusEnabled_enabled;                   // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_145[0x3];                                      // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray; // 0x0148(0x0010)(ReferenceParm)
	float                                         CallFunc_Array_Get_Item;                           // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_CalcCaptureSuccessRate_successRate;       // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_185[0x3];                                      // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<double>                                CallFunc_CalcCaptureSuccessRate_rateArray_ImplicitCast; // 0x0188(0x0010)(ReferenceParm)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_Get_Display_Rate) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_Get_Display_Rate");
static_assert(sizeof(WBP_CaptureReticle_C_Get_Display_Rate) == 0x0001A8, "Wrong size on WBP_CaptureReticle_C_Get_Display_Rate");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CaptureItemActor) == 0x000000, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CaptureItemActor' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, TargetMonster) == 0x000008, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::TargetMonster' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, Rate) == 0x000010, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::Rate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, IsSneakBonus) == 0x000018, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::IsSneakBonus' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, TempWeaponBase) == 0x000020, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::TempWeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000028, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, K2Node_DynamicCast_AsBP_Capture_Prism) == 0x000030, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::K2Node_DynamicCast_AsBP_Capture_Prism' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetCaptureLevel_level) == 0x00003C, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetCaptureLevel_level' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher) == 0x000040, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00004C, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, K2Node_DynamicCast_AsBP_Sphere_Launcher) == 0x000050, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::K2Node_DynamicCast_AsBP_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, K2Node_DynamicCast_bSuccess_2) == 0x000058, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetPalmi_ReturnValue) == 0x000060, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetPalmi_ReturnValue_1) == 0x000068, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetIndividualIDByActor_ReturnValue) == 0x000070, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetIndividualIDByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetPalSphereActorMap_ReturnValue) == 0x0000A0, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetPalSphereActorMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetNowEquipedBallItemID_OutBallItemID) == 0x0000F0, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetNowEquipedBallItemID_OutBallItemID' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetCharacterManager_ReturnValue) == 0x0000F8, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Map_Find_Value) == 0x000100, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Map_Find_ReturnValue) == 0x000108, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetIndividualHandle_ReturnValue) == 0x000110, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetPalmi_ReturnValue_2) == 0x000118, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetPalmi_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetGameSetting_ReturnValue) == 0x000120, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000128, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_CalcCaptureRate_ReturnValue) == 0x000140, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_CalcCaptureRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_IsBonusEnabled_enabled) == 0x000144, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_IsBonusEnabled_enabled' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray) == 0x000148, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Array_Get_Item) == 0x000158, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Array_Get_Item_1) == 0x00015C, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_CalcCaptureSuccessRate_successRate) == 0x000160, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_CalcCaptureSuccessRate_successRate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000168, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000170, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000178, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Array_Length_ReturnValue) == 0x000180, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Greater_IntInt_ReturnValue) == 0x000184, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_CalcCaptureSuccessRate_rateArray_ImplicitCast) == 0x000188, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_CalcCaptureSuccessRate_rateArray_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x000198, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Get_Display_Rate, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001A0, "Member 'WBP_CaptureReticle_C_Get_Display_Rate::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.IsBonusEnabled
// 0x0028 (0x0028 - 0x0000)
struct WBP_CaptureReticle_C_IsBonusEnabled final
{
public:
	struct FVector                                baseLocation;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalMonsterCharacter*                   TargeActor;                                        // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Enabled;                                           // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSneakAttackSuccessByLocation_ReturnValue; // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_IsBonusEnabled) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_IsBonusEnabled");
static_assert(sizeof(WBP_CaptureReticle_C_IsBonusEnabled) == 0x000028, "Wrong size on WBP_CaptureReticle_C_IsBonusEnabled");
static_assert(offsetof(WBP_CaptureReticle_C_IsBonusEnabled, baseLocation) == 0x000000, "Member 'WBP_CaptureReticle_C_IsBonusEnabled::baseLocation' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_IsBonusEnabled, TargeActor) == 0x000018, "Member 'WBP_CaptureReticle_C_IsBonusEnabled::TargeActor' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_IsBonusEnabled, Enabled) == 0x000020, "Member 'WBP_CaptureReticle_C_IsBonusEnabled::Enabled' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_IsBonusEnabled, CallFunc_IsSneakAttackSuccessByLocation_ReturnValue) == 0x000021, "Member 'WBP_CaptureReticle_C_IsBonusEnabled::CallFunc_IsSneakAttackSuccessByLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_IsBonusEnabled, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'WBP_CaptureReticle_C_IsBonusEnabled::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.On Change Weapon
// 0x0038 (0x0038 - 0x0000)
struct WBP_CaptureReticle_C_On_Change_Weapon final
{
public:
	class APalWeaponBase*                         Weapon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_HomingSphereLauncher_C*             K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SphereLauncher_C*                   K2Node_DynamicCast_AsBP_Sphere_Launcher;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CapturePrism_C*                     K2Node_DynamicCast_AsBP_Capture_Prism;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_On_Change_Weapon) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_On_Change_Weapon");
static_assert(sizeof(WBP_CaptureReticle_C_On_Change_Weapon) == 0x000038, "Wrong size on WBP_CaptureReticle_C_On_Change_Weapon");
static_assert(offsetof(WBP_CaptureReticle_C_On_Change_Weapon, Weapon) == 0x000000, "Member 'WBP_CaptureReticle_C_On_Change_Weapon::Weapon' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Change_Weapon, K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher) == 0x000008, "Member 'WBP_CaptureReticle_C_On_Change_Weapon::K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Change_Weapon, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_CaptureReticle_C_On_Change_Weapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Change_Weapon, K2Node_DynamicCast_AsBP_Sphere_Launcher) == 0x000018, "Member 'WBP_CaptureReticle_C_On_Change_Weapon::K2Node_DynamicCast_AsBP_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Change_Weapon, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'WBP_CaptureReticle_C_On_Change_Weapon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Change_Weapon, K2Node_DynamicCast_AsBP_Capture_Prism) == 0x000028, "Member 'WBP_CaptureReticle_C_On_Change_Weapon::K2Node_DynamicCast_AsBP_Capture_Prism' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Change_Weapon, K2Node_DynamicCast_bSuccess_2) == 0x000030, "Member 'WBP_CaptureReticle_C_On_Change_Weapon::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Change_Weapon, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'WBP_CaptureReticle_C_On_Change_Weapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.On Shake Ball
// 0x0050 (0x0050 - 0x0000)
struct WBP_CaptureReticle_C_On_Shake_Ball final
{
public:
	class ABP_PalCaptureBodyBase_C*               ShakedBody;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0008(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalGetReticle_C*                   CallFunc_Map_Find_Value;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_On_Shake_Ball) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_On_Shake_Ball");
static_assert(sizeof(WBP_CaptureReticle_C_On_Shake_Ball) == 0x000050, "Wrong size on WBP_CaptureReticle_C_On_Shake_Ball");
static_assert(offsetof(WBP_CaptureReticle_C_On_Shake_Ball, ShakedBody) == 0x000000, "Member 'WBP_CaptureReticle_C_On_Shake_Ball::ShakedBody' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Shake_Ball, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000008, "Member 'WBP_CaptureReticle_C_On_Shake_Ball::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Shake_Ball, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_CaptureReticle_C_On_Shake_Ball::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Shake_Ball, CallFunc_Map_Find_Value) == 0x000040, "Member 'WBP_CaptureReticle_C_On_Shake_Ball::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_On_Shake_Ball, CallFunc_Map_Find_ReturnValue) == 0x000048, "Member 'WBP_CaptureReticle_C_On_Shake_Ball::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnBouncedBall
// 0x0190 (0x0190 - 0x0000)
struct WBP_CaptureReticle_C_OnBouncedBall final
{
public:
	E_PalCaptureSphereBouncedReason               ReasonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	EPalLogType                                   CallFunc_Map_Find_Value;                           // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10A[0x6];                                      // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalLogAdditionalData                  K2Node_MakeStruct_PalLogAdditionalData;            // 0x0110(0x0038)()
	class FText                                   CallFunc_CreateLogText_outText;                    // 0x0148(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0160(0x0018)()
	class UPalLogManager*                         CallFunc_GetLogManager_ReturnValue;                // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_AddLog_ReturnValue;                       // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_OnBouncedBall) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_OnBouncedBall");
static_assert(sizeof(WBP_CaptureReticle_C_OnBouncedBall) == 0x000190, "Wrong size on WBP_CaptureReticle_C_OnBouncedBall");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, ReasonType) == 0x000000, "Member 'WBP_CaptureReticle_C_OnBouncedBall::ReasonType' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, TargetHandle) == 0x000008, "Member 'WBP_CaptureReticle_C_OnBouncedBall::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_GetLevel_ReturnValue) == 0x000024, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_GetNickName_outName) == 0x000028, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000038, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'WBP_CaptureReticle_C_OnBouncedBall::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A8, "Member 'WBP_CaptureReticle_C_OnBouncedBall::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, K2Node_MakeArray_Array) == 0x0000F8, "Member 'WBP_CaptureReticle_C_OnBouncedBall::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_Map_Find_Value) == 0x000108, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_Map_Find_ReturnValue) == 0x000109, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, K2Node_MakeStruct_PalLogAdditionalData) == 0x000110, "Member 'WBP_CaptureReticle_C_OnBouncedBall::K2Node_MakeStruct_PalLogAdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_CreateLogText_outText) == 0x000148, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_CreateLogText_outText' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_Format_ReturnValue) == 0x000160, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_GetLogManager_ReturnValue) == 0x000178, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_GetLogManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnBouncedBall, CallFunc_AddLog_ReturnValue) == 0x000180, "Member 'WBP_CaptureReticle_C_OnBouncedBall::CallFunc_AddLog_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnFailedCapture
// 0x01F0 (0x01F0 - 0x0000)
struct WBP_CaptureReticle_C_OnFailedCapture final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalSphereCaptureFailedReason                 FailedReason;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpValidHandle;                                    // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlreadyFailed;                                   // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalGetReticle_C*                   TmpRemoveReticle;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WorldLocation;                                     // 0x0018(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalCharacter>           CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0040(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_CaptureFailedPercent_C* SelfWidget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class APalCharacter>>   CallFunc_Map_Keys_Keys;                            // 0x00B0(0x0010)(ReferenceParm)
	TSoftObjectPtr<class APalCharacter>           CallFunc_Array_Get_Item;                           // 0x00C0(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_113[0x5];                                      // 0x0113(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CaptureFailedPercent_C*            CallFunc_Map_Find_Value;                           // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CaptureFailedPercent_C*            CallFunc_Create_ReturnValue;                       // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Array_Get_Item_1;                         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class ABP_PalCaptureBodyBase_C>> CallFunc_Map_Keys_Keys_1;                          // 0x0160(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> CallFunc_Array_Get_Item_2;                         // 0x0178(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalCaptureBodyBase_C*               K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base;     // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle;             // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DA[0x6];                                      // 0x01DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalGetReticle_C*                   CallFunc_Map_Find_Value_1;                         // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_OnFailedCapture) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_OnFailedCapture");
static_assert(sizeof(WBP_CaptureReticle_C_OnFailedCapture) == 0x0001F0, "Wrong size on WBP_CaptureReticle_C_OnFailedCapture");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, TargetHandle) == 0x000000, "Member 'WBP_CaptureReticle_C_OnFailedCapture::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, FailedReason) == 0x000008, "Member 'WBP_CaptureReticle_C_OnFailedCapture::FailedReason' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, TmpValidHandle) == 0x000009, "Member 'WBP_CaptureReticle_C_OnFailedCapture::TmpValidHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, IsAlreadyFailed) == 0x00000A, "Member 'WBP_CaptureReticle_C_OnFailedCapture::IsAlreadyFailed' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, TmpRemoveReticle) == 0x000010, "Member 'WBP_CaptureReticle_C_OnFailedCapture::TmpRemoveReticle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, WorldLocation) == 0x000018, "Member 'WBP_CaptureReticle_C_OnFailedCapture::WorldLocation' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, Temp_bool_True_if_break_was_hit_Variable) == 0x000030, "Member 'WBP_CaptureReticle_C_OnFailedCapture::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000038, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000040, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'WBP_CaptureReticle_C_OnFailedCapture::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, Temp_bool_True_if_break_was_hit_Variable_1) == 0x00007C, "Member 'WBP_CaptureReticle_C_OnFailedCapture::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, Temp_int_Array_Index_Variable) == 0x000080, "Member 'WBP_CaptureReticle_C_OnFailedCapture::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Not_PreBool_ReturnValue_1) == 0x000084, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, Temp_int_Loop_Counter_Variable_1) == 0x000088, "Member 'WBP_CaptureReticle_C_OnFailedCapture::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, Temp_int_Array_Index_Variable_1) == 0x00008C, "Member 'WBP_CaptureReticle_C_OnFailedCapture::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Add_IntInt_ReturnValue_1) == 0x000090, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, K2Node_SwitchEnum_CmpSuccess) == 0x000094, "Member 'WBP_CaptureReticle_C_OnFailedCapture::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, K2Node_CreateDelegate_OutputDelegate) == 0x000098, "Member 'WBP_CaptureReticle_C_OnFailedCapture::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_IsValid_ReturnValue_2) == 0x0000A9, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Map_Keys_Keys) == 0x0000B0, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0000F8, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Less_IntInt_ReturnValue) == 0x000100, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, K2Node_DynamicCast_AsPal_Character) == 0x000108, "Member 'WBP_CaptureReticle_C_OnFailedCapture::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'WBP_CaptureReticle_C_OnFailedCapture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_BooleanAND_ReturnValue) == 0x000111, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000112, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Map_Find_Value) == 0x000118, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Map_Find_ReturnValue) == 0x000120, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000128, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Create_ReturnValue) == 0x000130, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Array_Get_Item_1) == 0x000138, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000140, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_AddChild_ReturnValue) == 0x000148, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000150, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000158, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Map_Keys_Keys_1) == 0x000160, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Array_Length_ReturnValue_1) == 0x000170, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Array_Get_Item_2) == 0x000178, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001A8, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x0001B0, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_BooleanAND_ReturnValue_1) == 0x0001B8, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base) == 0x0001C0, "Member 'WBP_CaptureReticle_C_OnFailedCapture::K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, K2Node_DynamicCast_bSuccess_1) == 0x0001C8, "Member 'WBP_CaptureReticle_C_OnFailedCapture::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_GetTargetHandle_targetHandle) == 0x0001D0, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_GetTargetHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Map_Remove_ReturnValue) == 0x0001D8, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0001D9, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Map_Find_Value_1) == 0x0001E0, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_Map_Find_ReturnValue_1) == 0x0001E8, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedCapture, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0001E9, "Member 'WBP_CaptureReticle_C_OnFailedCapture::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnFailedPercentWidgetClear
// 0x0078 (0x0078 - 0x0000)
struct WBP_CaptureReticle_C_OnFailedPercentWidgetClear final
{
public:
	class UWBP_CaptureFailedPercent_C*            SelfWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class APalCharacter>>   CallFunc_Map_Keys_Keys;                            // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class APalCharacter>           CallFunc_Array_Get_Item;                           // 0x0030(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CaptureFailedPercent_C*            CallFunc_Map_Find_Value;                           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_OnFailedPercentWidgetClear");
static_assert(sizeof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear) == 0x000078, "Wrong size on WBP_CaptureReticle_C_OnFailedPercentWidgetClear");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, SelfWidget) == 0x000000, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::SelfWidget' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, CallFunc_Map_Keys_Keys) == 0x000018, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, CallFunc_Map_Remove_ReturnValue) == 0x000061, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, CallFunc_Map_Find_Value) == 0x000068, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, CallFunc_Map_Find_ReturnValue) == 0x000070, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnFailedPercentWidgetClear, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000071, "Member 'WBP_CaptureReticle_C_OnFailedPercentWidgetClear::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnPassingJudge
// 0x0140 (0x0140 - 0x0000)
struct WBP_CaptureReticle_C_OnPassingJudge final
{
public:
	int32                                         PhaseCount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class APalCharacter>>   CallFunc_Map_Keys_Keys;                            // 0x0040(0x0010)(ReferenceParm)
	TSoftObjectPtr<class APalCharacter>           CallFunc_Array_Get_Item;                           // 0x0050(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CaptureFailedPercent_C*            CallFunc_Map_Find_Value;                           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class ABP_PalCaptureBodyBase_C>> CallFunc_Map_Keys_Keys_1;                          // 0x00B8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> CallFunc_Array_Get_Item_1;                         // 0x00D0(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalCaptureBodyBase_C*               K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base;     // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalGetReticle_C*                   CallFunc_Map_Find_Value_1;                         // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle;             // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_OnPassingJudge) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_OnPassingJudge");
static_assert(sizeof(WBP_CaptureReticle_C_OnPassingJudge) == 0x000140, "Wrong size on WBP_CaptureReticle_C_OnPassingJudge");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, PhaseCount) == 0x000000, "Member 'WBP_CaptureReticle_C_OnPassingJudge::PhaseCount' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, TargetHandle) == 0x000008, "Member 'WBP_CaptureReticle_C_OnPassingJudge::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, Temp_bool_True_if_break_was_hit_Variable) == 0x000010, "Member 'WBP_CaptureReticle_C_OnPassingJudge::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_CaptureReticle_C_OnPassingJudge::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'WBP_CaptureReticle_C_OnPassingJudge::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, Temp_int_Array_Index_Variable_1) == 0x000030, "Member 'WBP_CaptureReticle_C_OnPassingJudge::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, Temp_int_Loop_Counter_Variable_1) == 0x000034, "Member 'WBP_CaptureReticle_C_OnPassingJudge::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Map_Keys_Keys) == 0x000040, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Array_Get_Item) == 0x000050, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000088, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, K2Node_DynamicCast_AsPal_Character) == 0x000098, "Member 'WBP_CaptureReticle_C_OnPassingJudge::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'WBP_CaptureReticle_C_OnPassingJudge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_BooleanAND_ReturnValue) == 0x0000A1, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000A2, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Map_Remove_ReturnValue) == 0x0000A3, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Map_Find_Value) == 0x0000A8, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Map_Find_ReturnValue) == 0x0000B0, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Map_Keys_Keys_1) == 0x0000B8, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Array_Length_ReturnValue_1) == 0x0000C8, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Array_Get_Item_1) == 0x0000D0, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Less_IntInt_ReturnValue_1) == 0x000100, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x000108, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base) == 0x000110, "Member 'WBP_CaptureReticle_C_OnPassingJudge::K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, K2Node_DynamicCast_bSuccess_1) == 0x000118, "Member 'WBP_CaptureReticle_C_OnPassingJudge::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Map_Find_Value_1) == 0x000120, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_Map_Find_ReturnValue_1) == 0x000128, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_GetTargetHandle_targetHandle) == 0x000130, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_GetTargetHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000138, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnPassingJudge, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000139, "Member 'WBP_CaptureReticle_C_OnPassingJudge::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnStartedCapture
// 0x0208 (0x0208 - 0x0000)
struct WBP_CaptureReticle_C_OnStartedCapture final
{
public:
	class AActor*                                 CreatedBodyActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBonus;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 TmpRateArray;                                      // 0x0018(0x0010)(Edit, BlueprintVisible)
	class UPalCharacterManager*                   CallFunc_GetCharacterManager_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalCaptureBodyBase_C*               K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0048(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	struct FPalInstanceID                         CallFunc_GetIndividualIDByActor_ReturnValue;       // 0x0078(0x0030)(HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1; // 0x00A8(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualHandle_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCaptureLevel_level;                    // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(E_PalCaptureSphereBouncedReason ReasonType, class UPalIndividualCharacterHandle* TargetHandle)> K2Node_CreateDelegate_OutputDelegate;              // 0x0104(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_116[0x2];                                      // 0x0116(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_CalcCaptureSuccessRate_successRate;       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ABP_PalCaptureBodyBase_C* ShakedBody)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0134(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PhaseCount, class UPalIndividualCharacterHandle* TargetHandle)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0150(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalcCaptureRate_ReturnValue;              // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray; // 0x0168(0x0010)(ReferenceParm)
	float                                         Temp_real_Variable;                                // 0x0178(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item;                           // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterHandle* TargetHandle, EPalSphereCaptureFailedReason FailedReason)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0198(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterHandle* TargetHandle)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalGetReticle_C*                   CallFunc_Create_ReturnValue;                       // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                CallFunc_SetCaptureRateList_rateList_ImplicitCast; // 0x01D0(0x0010)(ReferenceParm)
	TArray<double>                                CallFunc_CalcCaptureSuccessRate_rateArray_ImplicitCast; // 0x01E0(0x0010)(ReferenceParm)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Set_Item_ImplicitCast;              // 0x0200(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_OnStartedCapture) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_OnStartedCapture");
static_assert(sizeof(WBP_CaptureReticle_C_OnStartedCapture) == 0x000208, "Wrong size on WBP_CaptureReticle_C_OnStartedCapture");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CreatedBodyActor) == 0x000000, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CreatedBodyActor' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, TargetHandle) == 0x000008, "Member 'WBP_CaptureReticle_C_OnStartedCapture::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, IsBonus) == 0x000010, "Member 'WBP_CaptureReticle_C_OnStartedCapture::IsBonus' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, TmpRateArray) == 0x000018, "Member 'WBP_CaptureReticle_C_OnStartedCapture::TmpRateArray' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_GetCharacterManager_ReturnValue) == 0x000028, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_GetCharacterManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base) == 0x000030, "Member 'WBP_CaptureReticle_C_OnStartedCapture::K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_CaptureReticle_C_OnStartedCapture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_GetPalmi_ReturnValue) == 0x000040, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000048, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_GetIndividualIDByActor_ReturnValue) == 0x000078, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_GetIndividualIDByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1) == 0x0000A8, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_GetIndividualHandle_ReturnValue) == 0x0000D8, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_GetIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_GetCaptureLevel_level) == 0x0000E0, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_GetCaptureLevel_level' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000E8, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000100, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, K2Node_CreateDelegate_OutputDelegate) == 0x000104, "Member 'WBP_CaptureReticle_C_OnStartedCapture::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Map_Contains_ReturnValue) == 0x000114, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_IsValid_ReturnValue) == 0x000115, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_CalcCaptureSuccessRate_successRate) == 0x000118, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_CalcCaptureSuccessRate_successRate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Array_Length_ReturnValue) == 0x000120, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000128, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Greater_IntInt_ReturnValue) == 0x000130, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, K2Node_CreateDelegate_OutputDelegate_1) == 0x000134, "Member 'WBP_CaptureReticle_C_OnStartedCapture::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_GetGameSetting_ReturnValue) == 0x000148, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, K2Node_CreateDelegate_OutputDelegate_2) == 0x000150, "Member 'WBP_CaptureReticle_C_OnStartedCapture::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_CalcCaptureRate_ReturnValue) == 0x000160, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_CalcCaptureRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray) == 0x000168, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, Temp_real_Variable) == 0x000178, "Member 'WBP_CaptureReticle_C_OnStartedCapture::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Array_Get_Item) == 0x00017C, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Array_Get_Item_1) == 0x000180, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000188, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000190, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, K2Node_CreateDelegate_OutputDelegate_3) == 0x000198, "Member 'WBP_CaptureReticle_C_OnStartedCapture::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001A8, "Member 'WBP_CaptureReticle_C_OnStartedCapture::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0001B8, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Create_ReturnValue) == 0x0001C0, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_AddChildToCanvas_ReturnValue) == 0x0001C8, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_SetCaptureRateList_rateList_ImplicitCast) == 0x0001D0, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_SetCaptureRateList_rateList_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_CalcCaptureSuccessRate_rateArray_ImplicitCast) == 0x0001E0, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_CalcCaptureSuccessRate_rateArray_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0001F0, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001F8, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnStartedCapture, CallFunc_Array_Set_Item_ImplicitCast) == 0x000200, "Member 'WBP_CaptureReticle_C_OnStartedCapture::CallFunc_Array_Set_Item_ImplicitCast' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnSuccessedCapture
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_CaptureReticle_C_OnSuccessedCapture final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class ABP_PalCaptureBodyBase_C>> CallFunc_Map_Keys_Keys;                            // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> CallFunc_Array_Get_Item;                           // 0x0030(0x0030)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalCaptureBodyBase_C*               K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base;     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalGetReticle_C*                   CallFunc_Map_Find_Value;                           // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetTargetHandle_targetHandle;             // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A[0x2];                                       // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_OnSuccessedCapture) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_OnSuccessedCapture");
static_assert(sizeof(WBP_CaptureReticle_C_OnSuccessedCapture) == 0x0000A8, "Wrong size on WBP_CaptureReticle_C_OnSuccessedCapture");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, TargetHandle) == 0x000000, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_Map_Keys_Keys) == 0x000018, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000060, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_Map_Remove_ReturnValue) == 0x000068, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base) == 0x000070, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_Map_Find_Value) == 0x000080, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_Map_Find_ReturnValue) == 0x000088, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_GetTargetHandle_targetHandle) == 0x000090, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_GetTargetHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000098, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000099, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_Array_Length_ReturnValue) == 0x00009C, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnSuccessedCapture, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'WBP_CaptureReticle_C_OnSuccessedCapture::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnThrowCaptureWeapon
// 0x0030 (0x0030 - 0x0000)
struct WBP_CaptureReticle_C_OnThrowCaptureWeapon final
{
public:
	class AActor*                                 Bullet;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ThrowCaptureObjectBase_C*           K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TagretHandle, bool IsBonus)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_OnThrowCaptureWeapon) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_OnThrowCaptureWeapon");
static_assert(sizeof(WBP_CaptureReticle_C_OnThrowCaptureWeapon) == 0x000030, "Wrong size on WBP_CaptureReticle_C_OnThrowCaptureWeapon");
static_assert(offsetof(WBP_CaptureReticle_C_OnThrowCaptureWeapon, Bullet) == 0x000000, "Member 'WBP_CaptureReticle_C_OnThrowCaptureWeapon::Bullet' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnThrowCaptureWeapon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_CaptureReticle_C_OnThrowCaptureWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnThrowCaptureWeapon, K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base) == 0x000010, "Member 'WBP_CaptureReticle_C_OnThrowCaptureWeapon::K2Node_DynamicCast_AsBP_Throw_Capture_Object_Base' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnThrowCaptureWeapon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_CaptureReticle_C_OnThrowCaptureWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_OnThrowCaptureWeapon, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_CaptureReticle_C_OnThrowCaptureWeapon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.RegisterWeaponEvent
// 0x0078 (0x0078 - 0x0000)
struct WBP_CaptureReticle_C_RegisterWeaponEvent final
{
public:
	class APalWeaponBase*                         NewWeapon;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalWeaponBase>          CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0008(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class ABP_HomingSphereLauncher_C*             K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SphereLauncher_C*                   K2Node_DynamicCast_AsBP_Sphere_Launcher;           // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CapturePrism_C*                     K2Node_DynamicCast_AsBP_Capture_Prism;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Bullet)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_RegisterWeaponEvent) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_RegisterWeaponEvent");
static_assert(sizeof(WBP_CaptureReticle_C_RegisterWeaponEvent) == 0x000078, "Wrong size on WBP_CaptureReticle_C_RegisterWeaponEvent");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, NewWeapon) == 0x000000, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::NewWeapon' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000008, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher) == 0x000038, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, K2Node_DynamicCast_AsBP_Sphere_Launcher) == 0x000048, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::K2Node_DynamicCast_AsBP_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, K2Node_DynamicCast_AsBP_Capture_Prism) == 0x000058, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::K2Node_DynamicCast_AsBP_Capture_Prism' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, CallFunc_IsValid_ReturnValue) == 0x000061, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_RegisterWeaponEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'WBP_CaptureReticle_C_RegisterWeaponEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.Set Display Capture Rate
// 0x0058 (0x0058 - 0x0000)
struct WBP_CaptureReticle_C_Set_Display_Capture_Rate final
{
public:
	class APalMonsterCharacter*                   TargetMonster;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         WeaponBase;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CaptureObject;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_HomingSphereLauncher_C*             K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Get_Display_Rate_rate;                    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Display_Rate_isSneakBonus;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SphereLauncher_C*                   K2Node_DynamicCast_AsBP_Sphere_Launcher;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CapturePrism_C*                     K2Node_DynamicCast_AsBP_Capture_Prism;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_Set_Display_Capture_Rate) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_Set_Display_Capture_Rate");
static_assert(sizeof(WBP_CaptureReticle_C_Set_Display_Capture_Rate) == 0x000058, "Wrong size on WBP_CaptureReticle_C_Set_Display_Capture_Rate");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, TargetMonster) == 0x000000, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::TargetMonster' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, WeaponBase) == 0x000008, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, CaptureObject) == 0x000010, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::CaptureObject' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher) == 0x000018, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, CallFunc_Get_Display_Rate_rate) == 0x000028, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::CallFunc_Get_Display_Rate_rate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, CallFunc_Get_Display_Rate_isSneakBonus) == 0x000030, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::CallFunc_Get_Display_Rate_isSneakBonus' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, K2Node_DynamicCast_AsBP_Sphere_Launcher) == 0x000038, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::K2Node_DynamicCast_AsBP_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, K2Node_DynamicCast_AsBP_Capture_Prism) == 0x000048, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::K2Node_DynamicCast_AsBP_Capture_Prism' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Set_Display_Capture_Rate, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'WBP_CaptureReticle_C_Set_Display_Capture_Rate::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.SetupAfterPlayerSpawned
// 0x0038 (0x0038 - 0x0000)
struct WBP_CaptureReticle_C_SetupAfterPlayerSpawned final
{
public:
	TDelegate<void(class APalWeaponBase* Weapon)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerController*                   K2Node_DynamicCast_AsPal_Player_Controller;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_SetupAfterPlayerSpawned) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_SetupAfterPlayerSpawned");
static_assert(sizeof(WBP_CaptureReticle_C_SetupAfterPlayerSpawned) == 0x000038, "Wrong size on WBP_CaptureReticle_C_SetupAfterPlayerSpawned");
static_assert(offsetof(WBP_CaptureReticle_C_SetupAfterPlayerSpawned, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_CaptureReticle_C_SetupAfterPlayerSpawned::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_SetupAfterPlayerSpawned, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'WBP_CaptureReticle_C_SetupAfterPlayerSpawned::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_SetupAfterPlayerSpawned, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000018, "Member 'WBP_CaptureReticle_C_SetupAfterPlayerSpawned::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_SetupAfterPlayerSpawned, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_CaptureReticle_C_SetupAfterPlayerSpawned::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_SetupAfterPlayerSpawned, K2Node_DynamicCast_AsPal_Player_Controller) == 0x000028, "Member 'WBP_CaptureReticle_C_SetupAfterPlayerSpawned::K2Node_DynamicCast_AsPal_Player_Controller' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_SetupAfterPlayerSpawned, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_CaptureReticle_C_SetupAfterPlayerSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_SetupAfterPlayerSpawned, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'WBP_CaptureReticle_C_SetupAfterPlayerSpawned::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.ShouldReticleDIsplay
// 0x0018 (0x0018 - 0x0000)
struct WBP_CaptureReticle_C_ShouldReticleDIsplay final
{
public:
	bool                                          ShouldDisplay;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAiming_ReturnValue;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_ShouldReticleDIsplay) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_ShouldReticleDIsplay");
static_assert(sizeof(WBP_CaptureReticle_C_ShouldReticleDIsplay) == 0x000018, "Wrong size on WBP_CaptureReticle_C_ShouldReticleDIsplay");
static_assert(offsetof(WBP_CaptureReticle_C_ShouldReticleDIsplay, ShouldDisplay) == 0x000000, "Member 'WBP_CaptureReticle_C_ShouldReticleDIsplay::ShouldDisplay' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ShouldReticleDIsplay, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_CaptureReticle_C_ShouldReticleDIsplay::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ShouldReticleDIsplay, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_CaptureReticle_C_ShouldReticleDIsplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ShouldReticleDIsplay, CallFunc_IsAiming_ReturnValue) == 0x000011, "Member 'WBP_CaptureReticle_C_ShouldReticleDIsplay::CallFunc_IsAiming_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_ShouldReticleDIsplay, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'WBP_CaptureReticle_C_ShouldReticleDIsplay::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_CaptureReticle_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_Tick) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_Tick");
static_assert(sizeof(WBP_CaptureReticle_C_Tick) == 0x000048, "Wrong size on WBP_CaptureReticle_C_Tick");
static_assert(offsetof(WBP_CaptureReticle_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_CaptureReticle_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_CaptureReticle_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.Unregister Weapon Event
// 0x0060 (0x0060 - 0x0000)
struct WBP_CaptureReticle_C_Unregister_Weapon_Event final
{
public:
	TDelegate<void(class AActor* Bullet)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalWeaponBase*                         K2Node_DynamicCast_AsPal_Weapon_Base;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_HomingSphereLauncher_C*             K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SphereLauncher_C*                   K2Node_DynamicCast_AsBP_Sphere_Launcher;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CapturePrism_C*                     K2Node_DynamicCast_AsBP_Capture_Prism;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_Unregister_Weapon_Event) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_Unregister_Weapon_Event");
static_assert(sizeof(WBP_CaptureReticle_C_Unregister_Weapon_Event) == 0x000060, "Wrong size on WBP_CaptureReticle_C_Unregister_Weapon_Event");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000010, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000018, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, K2Node_DynamicCast_AsPal_Weapon_Base) == 0x000020, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::K2Node_DynamicCast_AsPal_Weapon_Base' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher) == 0x000030, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::K2Node_DynamicCast_AsBP_Homing_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, K2Node_DynamicCast_AsBP_Sphere_Launcher) == 0x000040, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::K2Node_DynamicCast_AsBP_Sphere_Launcher' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, K2Node_DynamicCast_bSuccess_2) == 0x000048, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, K2Node_DynamicCast_AsBP_Capture_Prism) == 0x000050, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::K2Node_DynamicCast_AsBP_Capture_Prism' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_Unregister_Weapon_Event, K2Node_DynamicCast_bSuccess_3) == 0x000058, "Member 'WBP_CaptureReticle_C_Unregister_Weapon_Event::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.UpdateFailedWidgets
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_CaptureReticle_C_UpdateFailedWidgets final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class APalCharacter>>   CallFunc_Map_Keys_Keys;                            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class APalCharacter>           CallFunc_Array_Get_Item;                           // 0x0038(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x6];                                       // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition; // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue; // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CaptureFailedPercent_C*            CallFunc_Map_Find_Value;                           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_UpdateFailedWidgets) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_UpdateFailedWidgets");
static_assert(sizeof(WBP_CaptureReticle_C_UpdateFailedWidgets) == 0x0000E0, "Wrong size on WBP_CaptureReticle_C_UpdateFailedWidgets");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, DeltaTime) == 0x000000, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000018, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Map_Keys_Keys) == 0x000020, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000070, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, K2Node_DynamicCast_AsPal_Character) == 0x000078, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Map_Remove_ReturnValue) == 0x000081, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000088, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000A0, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition) == 0x0000A8, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue) == 0x0000B8, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x0000C0, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Map_Find_Value) == 0x0000D0, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateFailedWidgets, CallFunc_Map_Find_ReturnValue) == 0x0000D8, "Member 'WBP_CaptureReticle_C_UpdateFailedWidgets::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.UpdateSecondStepWidgetPosition
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class ABP_PalCaptureBodyBase_C>> CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm)
	TSoftObjectPtr<class ABP_PalCaptureBodyBase_C> CallFunc_Array_Get_Item;                           // 0x0020(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PalCaptureBodyBase_C*               K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base;     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalGetReticle_C*                   CallFunc_Map_Find_Value;                           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition) == 0x000008, "Wrong alignment on WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition");
static_assert(sizeof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition) == 0x0000A0, "Wrong size on WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000058, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base) == 0x000068, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::K2Node_DynamicCast_AsBP_Pal_Capture_Body_Base' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_IsValid_ReturnValue) == 0x000071, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_Map_Find_Value) == 0x000090, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition, CallFunc_Map_Find_ReturnValue) == 0x000098, "Member 'WBP_CaptureReticle_C_UpdateSecondStepWidgetPosition::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

