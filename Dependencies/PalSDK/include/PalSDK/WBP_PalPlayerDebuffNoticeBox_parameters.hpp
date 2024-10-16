#pragma once

#include "Basic.hpp"

#include "E_PalUIPlayerDebuffNoticeType_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.AddDebuffNotice
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice final
{
public:
	E_PalUIPlayerDebuffNoticeType                 DebuffType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_DebuffNotice_C*                    CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice) == 0x000008, "Wrong alignment on WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice");
static_assert(sizeof(WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice) == 0x000038, "Wrong size on WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice, DebuffType) == 0x000000, "Member 'WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice::DebuffType' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice, K2Node_MakeStruct_Margin) == 0x000004, "Member 'WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000018, "Member 'WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice, CallFunc_Map_Contains_ReturnValue) == 0x000028, "Member 'WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000030, "Member 'WBP_PalPlayerDebuffNoticeBox_C_AddDebuffNotice::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalPlayerDebuffNoticeBox_C_ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerDebuffNoticeBox_C_ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox) == 0x000004, "Wrong alignment on WBP_PalPlayerDebuffNoticeBox_C_ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox");
static_assert(sizeof(WBP_PalPlayerDebuffNoticeBox_C_ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox) == 0x000004, "Wrong size on WBP_PalPlayerDebuffNoticeBox_C_ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox, EntryPoint) == 0x000000, "Member 'WBP_PalPlayerDebuffNoticeBox_C_ExecuteUbergraph_WBP_PalPlayerDebuffNoticeBox::EntryPoint' has a wrong offset!");

// Function WBP_PalPlayerDebuffNoticeBox.WBP_PalPlayerDebuffNoticeBox_C.RemoveDebuffNotice
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice final
{
public:
	E_PalUIPlayerDebuffNoticeType                 DebuffType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_DebuffNotice_C*                    CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice) == 0x000008, "Wrong alignment on WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice");
static_assert(sizeof(WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice) == 0x000018, "Wrong size on WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice, DebuffType) == 0x000000, "Member 'WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice::DebuffType' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice, CallFunc_Map_Remove_ReturnValue) == 0x000001, "Member 'WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'WBP_PalPlayerDebuffNoticeBox_C_RemoveDebuffNotice::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

