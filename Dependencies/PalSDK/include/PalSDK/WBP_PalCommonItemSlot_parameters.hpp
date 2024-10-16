#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.ExecuteUbergraph_WBP_PalCommonItemSlot
// 0x0034 (0x0034 - 0x0000)
struct WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalItemSlot* TargetSlot)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot) == 0x000004, "Wrong alignment on WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot");
static_assert(sizeof(WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot) == 0x000034, "Wrong size on WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot");
static_assert(offsetof(WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot, EntryPoint) == 0x000000, "Member 'WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_PalCommonItemSlot_C_ExecuteUbergraph_WBP_PalCommonItemSlot::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.OnUpdateSlot_Binded
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded final
{
public:
	class UPalItemSlot*                           TargetSlot_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackCount_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded");
static_assert(sizeof(WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded) == 0x000028, "Wrong size on WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded");
static_assert(offsetof(WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded, TargetSlot_0) == 0x000000, "Member 'WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded::TargetSlot_0' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded, CallFunc_GetStackCount_ReturnValue) == 0x000008, "Member 'WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded::CallFunc_GetStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_PalCommonItemSlot_C_OnUpdateSlot_Binded::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_PalCommonItemSlot.WBP_PalCommonItemSlot_C.RegisterItemIconWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonItemSlot_C_RegisterItemIconWidget final
{
public:
	class UWBP_PalItemIconBase_C*                 IconWidget;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlot_C_RegisterItemIconWidget) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlot_C_RegisterItemIconWidget");
static_assert(sizeof(WBP_PalCommonItemSlot_C_RegisterItemIconWidget) == 0x000008, "Wrong size on WBP_PalCommonItemSlot_C_RegisterItemIconWidget");
static_assert(offsetof(WBP_PalCommonItemSlot_C_RegisterItemIconWidget, IconWidget) == 0x000000, "Member 'WBP_PalCommonItemSlot_C_RegisterItemIconWidget::IconWidget' has a wrong offset!");

}

