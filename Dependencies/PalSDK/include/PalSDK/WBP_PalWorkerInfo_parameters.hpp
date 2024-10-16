#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.Check Valid Work Suitability
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability final
{
public:
	EPalWorkSuitability                           InWorkSuitability;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWorkSuitability                           OutWorkSuitability;                                // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability) == 0x000001, "Wrong alignment on WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability");
static_assert(sizeof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability) == 0x000008, "Wrong size on WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability");
static_assert(offsetof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability, InWorkSuitability) == 0x000000, "Member 'WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability::InWorkSuitability' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability, IsValid) == 0x000001, "Member 'WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability::IsValid' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability, OutWorkSuitability) == 0x000002, "Member 'WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability::OutWorkSuitability' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000004, "Member 'WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000005, "Member 'WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability, CallFunc_BooleanOR_ReturnValue) == 0x000006, "Member 'WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability, CallFunc_BooleanOR_ReturnValue_1) == 0x000007, "Member 'WBP_PalWorkerInfo_C_Check_Valid_Work_Suitability::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.ExecuteUbergraph_WBP_PalWorkerInfo
// 0x0128 (0x0128 - 0x0000)
struct WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0004(0x0008)(NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Check_Valid_Work_Suitability_IsValid;     // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWorkSuitability                           CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability; // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              K2Node_DynamicCast_AsMaterial;                     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_MainMenu_Pal_State_C*>      K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> K2Node_MakeArray_Array_1;                          // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	TDelegate<void(double NowSanity, double NowMaxSanity)> K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& NewNickName)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate_2;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(double NowHunger, double NowMaxHunger)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MainMenu_Pal_Skill_Passive_C*      CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MainMenu_Pal_WorkIcon_C*           CallFunc_Create_ReturnValue;                       // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0118(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo");
static_assert(sizeof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo) == 0x000128, "Wrong size on WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, EntryPoint) == 0x000000, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_MakeStruct_SlateChildSize) == 0x000004, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, Temp_int_Variable) == 0x00000C, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, Temp_int_Variable_1) == 0x000010, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Conv_IntToByte_ReturnValue) == 0x000014, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_GetValidValue_ReturnValue) == 0x00001C, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00001D, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Check_Valid_Work_Suitability_IsValid) == 0x00001E, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Check_Valid_Work_Suitability_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability) == 0x00001F, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000020, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000024, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, Temp_int_Array_Index_Variable) == 0x000028, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000034, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000040, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_DynamicCast_AsMaterial) == 0x000050, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_DynamicCast_AsMaterial' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_MakeArray_Array) == 0x000060, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_MakeArray_Array_1) == 0x000070, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000090, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000A0, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B0, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000C0, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_MakeLiteralInt_ReturnValue) == 0x0000D0, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Less_IntInt_ReturnValue) == 0x0000E0, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Array_Length_ReturnValue) == 0x0000E4, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000E8, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F0, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_Create_ReturnValue) == 0x0000F8, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000100, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_MakeStruct_Margin) == 0x000108, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo, K2Node_CreateDelegate_OutputDelegate_5) == 0x000118, "Member 'WBP_PalWorkerInfo_C_ExecuteUbergraph_WBP_PalWorkerInfo::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.OnUpdateCondition_Binded
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalWorkerInfo_C_OnUpdateCondition_Binded final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<EPalUIConditionType>                   CallFunc_GetUIDisplayPalCondition_outArray;        // 0x0008(0x0010)(ReferenceParm)
};
static_assert(alignof(WBP_PalWorkerInfo_C_OnUpdateCondition_Binded) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_OnUpdateCondition_Binded");
static_assert(sizeof(WBP_PalWorkerInfo_C_OnUpdateCondition_Binded) == 0x000018, "Wrong size on WBP_PalWorkerInfo_C_OnUpdateCondition_Binded");
static_assert(offsetof(WBP_PalWorkerInfo_C_OnUpdateCondition_Binded, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_PalWorkerInfo_C_OnUpdateCondition_Binded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_OnUpdateCondition_Binded, CallFunc_GetUIDisplayPalCondition_outArray) == 0x000008, "Member 'WBP_PalWorkerInfo_C_OnUpdateCondition_Binded::CallFunc_GetUIDisplayPalCondition_outArray' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.Setup
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalWorkerInfo_C_Setup final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       IndividualParam;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CharaParam;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkerInfo_C_Setup) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_Setup");
static_assert(sizeof(WBP_PalWorkerInfo_C_Setup) == 0x000030, "Wrong size on WBP_PalWorkerInfo_C_Setup");
static_assert(offsetof(WBP_PalWorkerInfo_C_Setup, TargetHandle) == 0x000000, "Member 'WBP_PalWorkerInfo_C_Setup::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Setup, IndividualParam) == 0x000008, "Member 'WBP_PalWorkerInfo_C_Setup::IndividualParam' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Setup, CharaParam) == 0x000010, "Member 'WBP_PalWorkerInfo_C_Setup::CharaParam' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalWorkerInfo_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Setup, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_PalWorkerInfo_C_Setup::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_PalWorkerInfo_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.SetWorkerComment
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalWorkerInfo_C_SetWorkerComment final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetWorkerComment_outName;                 // 0x0008(0x0018)()
};
static_assert(alignof(WBP_PalWorkerInfo_C_SetWorkerComment) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_SetWorkerComment");
static_assert(sizeof(WBP_PalWorkerInfo_C_SetWorkerComment) == 0x000020, "Wrong size on WBP_PalWorkerInfo_C_SetWorkerComment");
static_assert(offsetof(WBP_PalWorkerInfo_C_SetWorkerComment, TargetHandle) == 0x000000, "Member 'WBP_PalWorkerInfo_C_SetWorkerComment::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_SetWorkerComment, CallFunc_GetWorkerComment_outName) == 0x000008, "Member 'WBP_PalWorkerInfo_C_SetWorkerComment::CallFunc_GetWorkerComment_outName' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.SetWorkType
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalWorkerInfo_C_SetWorkType final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetWorkNameFromHandle_outName;            // 0x0008(0x0018)()
	bool                                          CallFunc_GetWorkNameFromHandle_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkerInfo_C_SetWorkType) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_SetWorkType");
static_assert(sizeof(WBP_PalWorkerInfo_C_SetWorkType) == 0x000028, "Wrong size on WBP_PalWorkerInfo_C_SetWorkType");
static_assert(offsetof(WBP_PalWorkerInfo_C_SetWorkType, TargetHandle) == 0x000000, "Member 'WBP_PalWorkerInfo_C_SetWorkType::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_SetWorkType, CallFunc_GetWorkNameFromHandle_outName) == 0x000008, "Member 'WBP_PalWorkerInfo_C_SetWorkType::CallFunc_GetWorkNameFromHandle_outName' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_SetWorkType, CallFunc_GetWorkNameFromHandle_ReturnValue) == 0x000020, "Member 'WBP_PalWorkerInfo_C_SetWorkType::CallFunc_GetWorkNameFromHandle_ReturnValue' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateHP
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalWorkerInfo_C_UpdateHP final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkerInfo_C_UpdateHP) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_UpdateHP");
static_assert(sizeof(WBP_PalWorkerInfo_C_UpdateHP) == 0x000020, "Wrong size on WBP_PalWorkerInfo_C_UpdateHP");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateHP, NowHP) == 0x000000, "Member 'WBP_PalWorkerInfo_C_UpdateHP::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateHP, NowMaxHP) == 0x000008, "Member 'WBP_PalWorkerInfo_C_UpdateHP::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateHP, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_PalWorkerInfo_C_UpdateHP::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateHP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000018, "Member 'WBP_PalWorkerInfo_C_UpdateHP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateHunger
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalWorkerInfo_C_UpdateHunger final
{
public:
	double                                        NowHunger;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxHunger;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkerInfo_C_UpdateHunger) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_UpdateHunger");
static_assert(sizeof(WBP_PalWorkerInfo_C_UpdateHunger) == 0x000020, "Wrong size on WBP_PalWorkerInfo_C_UpdateHunger");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateHunger, NowHunger) == 0x000000, "Member 'WBP_PalWorkerInfo_C_UpdateHunger::NowHunger' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateHunger, NowMaxHunger) == 0x000008, "Member 'WBP_PalWorkerInfo_C_UpdateHunger::NowMaxHunger' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateHunger, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_PalWorkerInfo_C_UpdateHunger::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateHunger, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000018, "Member 'WBP_PalWorkerInfo_C_UpdateHunger::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateLevel
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalWorkerInfo_C_UpdateLevel final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WBP_PalWorkerInfo_C_UpdateLevel) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_UpdateLevel");
static_assert(sizeof(WBP_PalWorkerInfo_C_UpdateLevel) == 0x000020, "Wrong size on WBP_PalWorkerInfo_C_UpdateLevel");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateLevel, NewLevel) == 0x000000, "Member 'WBP_PalWorkerInfo_C_UpdateLevel::NewLevel' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateLevel, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_PalWorkerInfo_C_UpdateLevel::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateNickName
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalWorkerInfo_C_UpdateNickName final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_PalWorkerInfo_C_UpdateNickName) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_UpdateNickName");
static_assert(sizeof(WBP_PalWorkerInfo_C_UpdateNickName) == 0x000028, "Wrong size on WBP_PalWorkerInfo_C_UpdateNickName");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateNickName, NewNickName) == 0x000000, "Member 'WBP_PalWorkerInfo_C_UpdateNickName::NewNickName' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateNickName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_PalWorkerInfo_C_UpdateNickName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.UpdateSanity
// 0x0098 (0x0098 - 0x0000)
struct WBP_PalWorkerInfo_C_UpdateSanity final
{
public:
	double                                        NowSanity;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxSanity;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0018)()
};
static_assert(alignof(WBP_PalWorkerInfo_C_UpdateSanity) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_UpdateSanity");
static_assert(sizeof(WBP_PalWorkerInfo_C_UpdateSanity) == 0x000098, "Wrong size on WBP_PalWorkerInfo_C_UpdateSanity");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateSanity, NowSanity) == 0x000000, "Member 'WBP_PalWorkerInfo_C_UpdateSanity::NowSanity' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateSanity, NowMaxSanity) == 0x000008, "Member 'WBP_PalWorkerInfo_C_UpdateSanity::NowMaxSanity' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateSanity, CallFunc_FTrunc_ReturnValue) == 0x000010, "Member 'WBP_PalWorkerInfo_C_UpdateSanity::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateSanity, CallFunc_FTrunc_ReturnValue_1) == 0x000014, "Member 'WBP_PalWorkerInfo_C_UpdateSanity::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateSanity, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000018, "Member 'WBP_PalWorkerInfo_C_UpdateSanity::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateSanity, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'WBP_PalWorkerInfo_C_UpdateSanity::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateSanity, K2Node_MakeArray_Array) == 0x000070, "Member 'WBP_PalWorkerInfo_C_UpdateSanity::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_UpdateSanity, CallFunc_Format_ReturnValue) == 0x000080, "Member 'WBP_PalWorkerInfo_C_UpdateSanity::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.Set Work Suitability
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_PalWorkerInfo_C_Set_Work_Suitability final
{
public:
	TMap<EPalWorkSuitability, int32>              WorkSuitabilities;                                 // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<EPalWorkSuitability>                   CallFunc_Map_Keys_Keys;                            // 0x0050(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalWorkSuitability>                   CallFunc_Map_Keys_Keys_1;                          // 0x0070(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWorkSuitability                           CallFunc_Array_Get_Item;                           // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value;                           // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E[0x2];                                       // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MainMenu_Pal_WorkIcon_C*           CallFunc_Map_Find_Value_1;                         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalWorkerInfo_C_Set_Work_Suitability) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_Set_Work_Suitability");
static_assert(sizeof(WBP_PalWorkerInfo_C_Set_Work_Suitability) == 0x0000A0, "Wrong size on WBP_PalWorkerInfo_C_Set_Work_Suitability");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, WorkSuitabilities) == 0x000000, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::WorkSuitabilities' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Map_Keys_Keys) == 0x000050, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, Temp_int_Array_Index_Variable) == 0x000060, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Map_Keys_Keys_1) == 0x000070, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Array_Get_Item) == 0x000084, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Less_IntInt_ReturnValue) == 0x000085, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Map_Find_Value) == 0x000088, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Map_Find_ReturnValue) == 0x00008C, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Array_Contains_ReturnValue) == 0x00008D, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Map_Find_Value_1) == 0x000090, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_PalWorkerInfo_C_Set_Work_Suitability, CallFunc_Map_Find_ReturnValue_1) == 0x000098, "Member 'WBP_PalWorkerInfo_C_Set_Work_Suitability::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");

// Function WBP_PalWorkerInfo.WBP_PalWorkerInfo_C.SetPassiveSkill
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalWorkerInfo_C_SetPassiveSkill final
{
public:
	TArray<class FName>                           PassiveSkills;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PalWorkerInfo_C_SetPassiveSkill) == 0x000008, "Wrong alignment on WBP_PalWorkerInfo_C_SetPassiveSkill");
static_assert(sizeof(WBP_PalWorkerInfo_C_SetPassiveSkill) == 0x000010, "Wrong size on WBP_PalWorkerInfo_C_SetPassiveSkill");
static_assert(offsetof(WBP_PalWorkerInfo_C_SetPassiveSkill, PassiveSkills) == 0x000000, "Member 'WBP_PalWorkerInfo_C_SetPassiveSkill::PassiveSkills' has a wrong offset!");

}

