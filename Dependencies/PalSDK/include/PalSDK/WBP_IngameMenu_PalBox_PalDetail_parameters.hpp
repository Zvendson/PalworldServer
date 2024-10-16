#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.BindFromHandle
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle) == 0x000020, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle, TargetHandle) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_BindFromHandle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Check Valid Work Suitability
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability final
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
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability) == 0x000001, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability, InWorkSuitability) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability::InWorkSuitability' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability, IsValid) == 0x000001, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability::IsValid' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability, OutWorkSuitability) == 0x000002, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability::OutWorkSuitability' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000004, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000005, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability, CallFunc_BooleanOR_ReturnValue) == 0x000006, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability, CallFunc_BooleanOR_ReturnValue_1) == 0x000007, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Check_Valid_Work_Suitability::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail
// 0x01A8 (0x01A8 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Check_Valid_Work_Suitability_IsValid;     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWorkSuitability                           CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability; // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_MainMenu_Pal_Skill_Active_C*> K2Node_MakeArray_Array;                            // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWBP_MainMenu_Pal_State_C*>      K2Node_MakeArray_Array_2;                          // 0x0060(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UMaterial*                              K2Node_DynamicCast_AsMaterial;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(double NowHunger, double NowMaxHunger)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(double NowSanity, double NowMaxSanity)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate_4;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int64 AddExp, int64 OldExp, double NowExpRate)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x00BC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& NewNickName)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x00CC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;            // 0x00DC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<EPalWazaID>& ActiveSkills)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x00EC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_MainMenu_PalRarityStar_C*>  K2Node_MakeArray_Array_3;                          // 0x0100(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MainMenu_Pal_WorkIcon_C*           CallFunc_Create_ReturnValue;                       // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0158(0x0008)(NoDestructor)
	class UWBP_MainMenu_Pal_State_C*              CallFunc_Array_Get_Item;                           // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_172[0x2];                                      // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanCheckPalTalentsByInventoryItem_ReturnValue; // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_182[0x2];                                      // 0x0182(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x0184(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_195[0x3];                                      // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x0198(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail) == 0x0001A8, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_int_Variable) == 0x000014, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Conv_IntToByte_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_GetValidValue_ReturnValue) == 0x000019, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_int_Variable_1) == 0x00001C, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Check_Valid_Work_Suitability_IsValid) == 0x000024, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Check_Valid_Work_Suitability_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability) == 0x000025, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Check_Valid_Work_Suitability_OutWorkSuitability' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000026, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000027, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_bool_Variable) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_byte_Variable) == 0x000030, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_byte_Variable_1) == 0x000031, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_bool_Variable_1) == 0x000032, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_byte_Variable_2) == 0x000033, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_byte_Variable_3) == 0x000034, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_int_Array_Index_Variable) == 0x000038, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_MakeArray_Array) == 0x000040, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_MakeArray_Array_1) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_MakeArray_Array_2) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_DynamicCast_AsMaterial) == 0x000070, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_DynamicCast_AsMaterial' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_2) == 0x00008C, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_3) == 0x00009C, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000AC, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000BC, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000CC, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000DC, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000EC, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_MakeArray_Array_3) == 0x000100, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_MakeLiteralInt_ReturnValue) == 0x000110, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000118, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Less_IntInt_ReturnValue) == 0x000120, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Create_ReturnValue) == 0x000128, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000130, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_MakeStruct_Margin) == 0x000138, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_9) == 0x000148, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_MakeStruct_SlateChildSize) == 0x000158, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Array_Get_Item) == 0x000160, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Array_Length_ReturnValue) == 0x000168, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, Temp_int_Loop_Counter_Variable) == 0x00016C, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Less_IntInt_ReturnValue_1) == 0x000170, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_Select_Default) == 0x000171, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_Add_IntInt_ReturnValue_1) == 0x000174, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000178, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, CallFunc_CanCheckPalTalentsByInventoryItem_ReturnValue) == 0x000181, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::CallFunc_CanCheckPalTalentsByInventoryItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_10) == 0x000184, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_Select_Default_1) == 0x000194, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail, K2Node_CreateDelegate_OutputDelegate_11) == 0x000198, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Set Work Suitability
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability final
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
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability) == 0x0000A0, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, WorkSuitabilities) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::WorkSuitabilities' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Map_Keys_Keys) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, Temp_int_Array_Index_Variable) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Map_Keys_Keys_1) == 0x000070, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Array_Get_Item) == 0x000084, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Less_IntInt_ReturnValue) == 0x000085, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Map_Find_Value) == 0x000088, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Map_Find_ReturnValue) == 0x00008C, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Array_Contains_ReturnValue) == 0x00008D, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Map_Find_Value_1) == 0x000090, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability, CallFunc_Map_Find_ReturnValue_1) == 0x000098, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Set_Work_Suitability::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetDetailMode
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode final
{
public:
	bool                                          IsTip;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              K2Node_Select_Default_2;                           // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x0060(0x0038)(NoDestructor)
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode) == 0x0000A0, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, IsTip) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::IsTip' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, Temp_bool_Variable) == 0x000001, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, Temp_struct_Variable) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, Temp_struct_Variable_1) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, Temp_bool_Variable_1) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, Temp_byte_Variable) == 0x000029, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, Temp_byte_Variable_1) == 0x00002A, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, Temp_bool_Variable_2) == 0x00002B, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, K2Node_Select_Default) == 0x00002C, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, Temp_byte_Variable_2) == 0x00002D, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, Temp_byte_Variable_3) == 0x00002E, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, K2Node_Select_Default_1) == 0x00002F, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, K2Node_MakeStruct_Margin) == 0x000038, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, K2Node_Select_Default_2) == 0x000048, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000058, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, K2Node_MakeStruct_WidgetTransform) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode, K2Node_MakeStruct_Bottom_ImplicitCast) == 0x000098, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetDetailMode::K2Node_MakeStruct_Bottom_ImplicitCast' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetElementType
// 0x0002 (0x0002 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_SetElementType final
{
public:
	EPalElementType                               Type1;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               Type2;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_SetElementType) == 0x000001, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_SetElementType");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_SetElementType) == 0x000002, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_SetElementType");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetElementType, Type1) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetElementType::Type1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetElementType, Type2) == 0x000001, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetElementType::Type2' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetFoodAmount
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_SetFoodAmount final
{
public:
	int32                                         FoodAmount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_SetFoodAmount) == 0x000004, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_SetFoodAmount");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_SetFoodAmount) == 0x000004, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_SetFoodAmount");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetFoodAmount, FoodAmount) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetFoodAmount::FoodAmount' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetGender
// 0x0001 (0x0001 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_SetGender final
{
public:
	EPalGenderType                                GenderType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_SetGender) == 0x000001, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_SetGender");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_SetGender) == 0x000001, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_SetGender");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetGender, GenderType) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetGender::GenderType' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetPassiveSkill
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_SetPassiveSkill final
{
public:
	TArray<class FName>                           PassiveSkills;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_SetPassiveSkill) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_SetPassiveSkill");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_SetPassiveSkill) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_SetPassiveSkill");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetPassiveSkill, PassiveSkills) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetPassiveSkill::PassiveSkills' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetRank
// 0x0030 (0x0030 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_SetRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MainMenu_PalRarityStar_C*          CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_SetRank");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank) == 0x000030, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_SetRank");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank, Rank) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRank::Rank' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRank::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRank::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRank::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRank::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRank::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRank::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRank::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRank, CallFunc_Less_IntInt_ReturnValue_1) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRank::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetRarity
// 0x000C (0x000C - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_SetRarity final
{
public:
	bool                                          IsBoss;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRare;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity) == 0x000001, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_SetRarity");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity) == 0x00000C, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_SetRarity");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, IsBoss) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::IsBoss' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, IsRare) == 0x000001, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::IsRare' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, Temp_bool_Variable) == 0x000002, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, Temp_byte_Variable) == 0x000005, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, Temp_bool_Variable_1) == 0x000007, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, K2Node_Select_Default) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, Temp_byte_Variable_2) == 0x000009, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, Temp_byte_Variable_3) == 0x00000A, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetRarity, K2Node_Select_Default_1) == 0x00000B, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetRarity::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.SetSoulRank
// 0x0088 (0x0088 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank) == 0x000088, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank, Rank) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank::Rank' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank, K2Node_MakeArray_Array) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank, CallFunc_Format_ReturnValue) == 0x000070, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_SetSoulRank::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Update Buff Binded
// 0x0068 (0x0068 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded final
{
public:
	TMap<EPalFoodStatusEffectType, int32>         Effects;                                           // 0x0000(0x0050)(Edit, BlueprintVisible)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded) == 0x000068, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded, Effects) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded::Effects' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded, CallFunc_GetBindedHandle_targetHandle) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000058, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Buff_Binded::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Update Condition Binded
// 0x0040 (0x0040 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalUIConditionType>                   CallFunc_GetUIDisplayPalCondition_outArray;        // 0x0010(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetWorkNameFromHandle_outName;            // 0x0020(0x0018)()
	bool                                          CallFunc_GetWorkNameFromHandle_ReturnValue;        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded) == 0x000040, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded, CallFunc_GetUIDisplayPalCondition_outArray) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded::CallFunc_GetUIDisplayPalCondition_outArray' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded, CallFunc_GetWorkNameFromHandle_outName) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded::CallFunc_GetWorkNameFromHandle_outName' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded, CallFunc_GetWorkNameFromHandle_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Condition_Binded::CallFunc_GetWorkNameFromHandle_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.Update Status Parameter
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_Update_Status_Parameter final
{
public:
	class UPalIndividualCharacterParameter*       IndividualParam;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Status_Parameter) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_Update_Status_Parameter");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Status_Parameter) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_Update_Status_Parameter");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_Update_Status_Parameter, IndividualParam) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_Update_Status_Parameter::IndividualParam' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateActiveSkill_Binded
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateActiveSkill_Binded final
{
public:
	TArray<EPalWazaID>                            ActiveSkills;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateActiveSkill_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateActiveSkill_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateActiveSkill_Binded) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateActiveSkill_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateActiveSkill_Binded, ActiveSkills) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateActiveSkill_Binded::ActiveSkills' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateExp_Binded
// 0x0080 (0x0080 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded final
{
public:
	int64                                         AddExp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         OldExp;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowExpRate;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Add_Int64Int64_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalExpDatabase*                        CallFunc_GetExpDatabase_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_GetNextExp_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Subtract_Int64Int64_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0060(0x0018)()
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded) == 0x000080, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, AddExp) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::AddExp' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, OldExp) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::OldExp' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, NowExpRate) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::NowExpRate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_Add_Int64Int64_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_Add_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_GetBindedHandle_targetHandle) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_GetExpDatabase_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_GetExpDatabase_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_GetLevel_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_IsValid_ReturnValue_2) == 0x000044, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_GetNextExp_ReturnValue) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_GetNextExp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_Subtract_Int64Int64_ReturnValue) == 0x000058, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_Subtract_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000078, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateExp_Binded::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateFavoriteBinded
// 0x0070 (0x0070 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded final
{
public:
	TMap<EPalFoodStatusEffectType, int32>         Effects;                                           // 0x0000(0x0050)(Edit, BlueprintVisible)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFavoritePal_ReturnValue;                // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded) == 0x000070, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, Effects) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::Effects' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, Temp_byte_Variable) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, Temp_byte_Variable_1) == 0x000051, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, Temp_bool_Variable) == 0x000052, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, CallFunc_GetBindedHandle_targetHandle) == 0x000058, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, CallFunc_IsFavoritePal_ReturnValue) == 0x00006A, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::CallFunc_IsFavoritePal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded, K2Node_Select_Default) == 0x00006B, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateFavoriteBinded::K2Node_Select_Default' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateHP_Binded
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0008)(NoDestructor)
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue_1;           // 0x00A8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded) == 0x0000D8, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, NowHP) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, NowMaxHP) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1) == 0x000090, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, K2Node_MakeArray_Array) == 0x000098, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, CallFunc_Conv_Int64ToText_ReturnValue_1) == 0x0000A8, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::CallFunc_Conv_Int64ToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHP_Binded::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateHunger_Binded
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded final
{
public:
	double                                        NowHunger;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxHunger;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded) == 0x0000C8, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded, NowHunger) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded::NowHunger' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded, NowMaxHunger) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded::NowMaxHunger' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x000030, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded, K2Node_MakeArray_Array) == 0x000098, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0000C0, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateHunger_Binded::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateLevel_Binded
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue_1;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0090(0x0018)()
	int32                                         CallFunc_CalcCorrectedLevel_ReturnValue;           // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x00B0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded) == 0x0000D0, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, NewLevel) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::NewLevel' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, Temp_bool_Variable) == 0x000004, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, Temp_byte_Variable) == 0x000020, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, Temp_byte_Variable_1) == 0x000021, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, Temp_object_Variable) == 0x000028, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_GetPalmi_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, Temp_object_Variable_1) == 0x000038, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, Temp_bool_Variable_1) == 0x000048, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, K2Node_Select_Default) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_GetPalmi_ReturnValue_1) == 0x000058, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_GetBindedHandle_targetHandle) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_IsValid_ReturnValue_1) == 0x000068, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_IsValid_ReturnValue_2) == 0x000069, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000070, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000078, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_IsValid_ReturnValue_3) == 0x000080, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_IsValid_ReturnValue_4) == 0x000081, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_GetLevel_ReturnValue) == 0x000084, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_GetLevel_ReturnValue_1) == 0x000088, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_GetLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000090, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_CalcCorrectedLevel_ReturnValue) == 0x0000A8, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_CalcCorrectedLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_Less_IntInt_ReturnValue) == 0x0000AC, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0000B0, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded, K2Node_Select_Default_1) == 0x0000C8, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateLevel_Binded::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateNickName_Binded
// 0x0028 (0x0028 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded) == 0x000028, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded, NewNickName) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded::NewNickName' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateNickName_Binded::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateSanity_Binded
// 0x0018 (0x0018 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded final
{
public:
	double                                        NowSanity;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxSanity;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded) == 0x000018, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded, NowSanity) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded::NowSanity' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded, NowMaxSanity) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded::NowMaxSanity' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded, CallFunc_FTrunc_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded, CallFunc_FTrunc_ReturnValue_1) == 0x000014, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateSanity_Binded::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateSoulRank_Binded
// 0x0018 (0x0018 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPalSoulRank_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded) == 0x000018, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded, CallFunc_GetPalSoulRank_ReturnValue) == 0x000014, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateSoulRank_Binded::CallFunc_GetPalSoulRank_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox_PalDetail.WBP_IngameMenu_PalBox_PalDetail_C.UpdateTalentBinded
// 0x0068 (0x0068 - 0x0000)
struct WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded final
{
public:
	TMap<EPalFoodStatusEffectType, int32>         Effects;                                           // 0x0000(0x0050)(Edit, BlueprintVisible)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded");
static_assert(sizeof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded) == 0x000068, "Wrong size on WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded, Effects) == 0x000000, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded::Effects' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded, CallFunc_GetBindedHandle_targetHandle) == 0x000050, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000058, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'WBP_IngameMenu_PalBox_PalDetail_C_UpdateTalentBinded::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

