#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_ItemChest.WBP_ItemChest_C.AllGet
// 0x0040 (0x0040 - 0x0000)
struct WBP_ItemChest_C_AllGet final
{
public:
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_MapObject*     K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectItemContainerModule*       CallFunc_GetItemContainerModule_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDeathPenaltyStorageModel*  K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemContainer*                      CallFunc_TryGetContainer_OutContainer;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetContainer_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_C_AllGet) == 0x000008, "Wrong alignment on WBP_ItemChest_C_AllGet");
static_assert(sizeof(WBP_ItemChest_C_AllGet) == 0x000040, "Wrong size on WBP_ItemChest_C_AllGet");
static_assert(offsetof(WBP_ItemChest_C_AllGet, CallFunc_GetParam_ReturnValue) == 0x000000, "Member 'WBP_ItemChest_C_AllGet::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_AllGet, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object) == 0x000008, "Member 'WBP_ItemChest_C_AllGet::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_AllGet, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_ItemChest_C_AllGet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_AllGet, CallFunc_GetItemContainerModule_ReturnValue) == 0x000018, "Member 'WBP_ItemChest_C_AllGet::CallFunc_GetItemContainerModule_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_AllGet, K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model) == 0x000020, "Member 'WBP_ItemChest_C_AllGet::K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_AllGet, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'WBP_ItemChest_C_AllGet::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_AllGet, CallFunc_TryGetContainer_OutContainer) == 0x000030, "Member 'WBP_ItemChest_C_AllGet::CallFunc_TryGetContainer_OutContainer' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_AllGet, CallFunc_TryGetContainer_ReturnValue) == 0x000038, "Member 'WBP_ItemChest_C_AllGet::CallFunc_TryGetContainer_ReturnValue' has a wrong offset!");

// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           SlotButton;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature");
static_assert(sizeof(WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature");
static_assert(offsetof(WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature, SlotButton) == 0x000000, "Member 'WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature::SlotButton' has a wrong offset!");

// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           SlotButton;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature");
static_assert(sizeof(WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature) == 0x000008, "Wrong size on WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature");
static_assert(offsetof(WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature, SlotButton) == 0x000000, "Member 'WBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature::SlotButton' has a wrong offset!");

// Function WBP_ItemChest.WBP_ItemChest_C.ExecuteUbergraph_WBP_ItemChest
// 0x0100 (0x0100 - 0x0000)
struct WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0014(0x0004)(NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_1;      // 0x0028(0x0004)(NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetInventoryLastHoveredFocusTarget_Widget; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetInventoryTopFocustTarget_FocusTarget;  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemSlotButtonBase_C*           K2Node_ComponentBoundEvent_SlotButton_1;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTargetContainerLastHoveredFocusTarget_Widget; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetTargetContainerTopFocustTarget_FocusTarget; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           K2Node_ComponentBoundEvent_SlotButton;             // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot_1;               // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_2;      // 0x0098(0x0004)(NoDestructor)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameter_MapObject*     K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_3;      // 0x00C0(0x0004)(NoDestructor)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectItemContainerModule*       CallFunc_GetItemContainerModule_ReturnValue;       // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x00E4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_4;      // 0x00F4(0x0004)(NoDestructor)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue_5;      // 0x00F8(0x0004)(NoDestructor)
};
static_assert(alignof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest) == 0x000008, "Wrong alignment on WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest");
static_assert(sizeof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest) == 0x000100, "Wrong size on WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, EntryPoint) == 0x000000, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_RegisterActionBinding_ReturnValue) == 0x000014, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_RegisterActionBinding_ReturnValue_1) == 0x000028, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_RegisterActionBinding_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_GetInventoryLastHoveredFocusTarget_Widget) == 0x000030, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_GetInventoryLastHoveredFocusTarget_Widget' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_GetInventoryTopFocustTarget_FocusTarget) == 0x000038, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_GetInventoryTopFocustTarget_FocusTarget' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_ComponentBoundEvent_SlotButton_1) == 0x000048, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_ComponentBoundEvent_SlotButton_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_GetTargetContainerLastHoveredFocusTarget_Widget) == 0x000050, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_GetTargetContainerLastHoveredFocusTarget_Widget' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_GetTargetSlot_targetSlot) == 0x000058, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_GetTargetContainerTopFocustTarget_FocusTarget) == 0x000068, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_GetTargetContainerTopFocustTarget_FocusTarget' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_ComponentBoundEvent_SlotButton) == 0x000070, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_ComponentBoundEvent_SlotButton' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_GetTargetSlot_targetSlot_1) == 0x000078, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_GetTargetSlot_targetSlot_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_CreateDelegate_OutputDelegate_2) == 0x000080, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_GetParam_ReturnValue) == 0x000090, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_RegisterActionBinding_ReturnValue_2) == 0x000098, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_RegisterActionBinding_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object) == 0x0000A0, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000AC, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_IsValid_ReturnValue_2) == 0x0000BC, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_RegisterActionBinding_ReturnValue_3) == 0x0000C0, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_RegisterActionBinding_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_GetItemContainerModule_ReturnValue) == 0x0000C8, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_GetItemContainerModule_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_IsValid_ReturnValue_3) == 0x0000D0, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000D4, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000E4, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_RegisterActionBinding_ReturnValue_4) == 0x0000F4, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_RegisterActionBinding_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest, CallFunc_RegisterActionBinding_ReturnValue_5) == 0x0000F8, "Member 'WBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest::CallFunc_RegisterActionBinding_ReturnValue_5' has a wrong offset!");

// Function WBP_ItemChest.WBP_ItemChest_C.FastMove
// 0x0080 (0x0080 - 0x0000)
struct WBP_ItemChest_C_FastMove final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemSlotId                         CallFunc_GetSlotId_ReturnValue;                    // 0x000C(0x0014)(NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_MapObject*     K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectItemContainerModule*       CallFunc_GetItemContainerModule_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemContainer*                      CallFunc_TryGetContainer_OutContainer;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetContainer_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CallFunc_Get_ReturnValue;                          // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemSlotId                         CallFunc_GetSlotId_ReturnValue_1;                  // 0x0058(0x0014)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Num_ReturnValue;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_C_FastMove) == 0x000008, "Wrong alignment on WBP_ItemChest_C_FastMove");
static_assert(sizeof(WBP_ItemChest_C_FastMove) == 0x000080, "Wrong size on WBP_ItemChest_C_FastMove");
static_assert(offsetof(WBP_ItemChest_C_FastMove, Temp_int_Variable) == 0x000000, "Member 'WBP_ItemChest_C_FastMove::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_ItemChest_C_FastMove::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_ItemChest_C_FastMove::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_IsEmpty_ReturnValue) == 0x000009, "Member 'WBP_ItemChest_C_FastMove::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_GetSlotId_ReturnValue) == 0x00000C, "Member 'WBP_ItemChest_C_FastMove::CallFunc_GetSlotId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_GetParam_ReturnValue) == 0x000020, "Member 'WBP_ItemChest_C_FastMove::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object) == 0x000028, "Member 'WBP_ItemChest_C_FastMove::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_ItemChest_C_FastMove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'WBP_ItemChest_C_FastMove::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_GetItemContainerModule_ReturnValue) == 0x000038, "Member 'WBP_ItemChest_C_FastMove::CallFunc_GetItemContainerModule_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_TryGetContainer_OutContainer) == 0x000040, "Member 'WBP_ItemChest_C_FastMove::CallFunc_TryGetContainer_OutContainer' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_TryGetContainer_ReturnValue) == 0x000048, "Member 'WBP_ItemChest_C_FastMove::CallFunc_TryGetContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_IsEmpty_ReturnValue_1) == 0x000049, "Member 'WBP_ItemChest_C_FastMove::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_Get_ReturnValue) == 0x000050, "Member 'WBP_ItemChest_C_FastMove::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_GetSlotId_ReturnValue_1) == 0x000058, "Member 'WBP_ItemChest_C_FastMove::CallFunc_GetSlotId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_IsEmpty_ReturnValue_2) == 0x00006C, "Member 'WBP_ItemChest_C_FastMove::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_Num_ReturnValue) == 0x000070, "Member 'WBP_ItemChest_C_FastMove::CallFunc_Num_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_Subtract_IntInt_ReturnValue) == 0x000074, "Member 'WBP_ItemChest_C_FastMove::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_Max_ReturnValue) == 0x000078, "Member 'WBP_ItemChest_C_FastMove::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_FastMove, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00007C, "Member 'WBP_ItemChest_C_FastMove::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_ItemChest.WBP_ItemChest_C.OnUpdatePrivateLockPlayerUId
// 0x0010 (0x0010 - 0x0000)
struct WBP_ItemChest_C_OnUpdatePrivateLockPlayerUId final
{
public:
	class UPalMapObjectItemChestModel*            ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLockedPrivateByNotLocalPlayer_ReturnValue; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_C_OnUpdatePrivateLockPlayerUId) == 0x000008, "Wrong alignment on WBP_ItemChest_C_OnUpdatePrivateLockPlayerUId");
static_assert(sizeof(WBP_ItemChest_C_OnUpdatePrivateLockPlayerUId) == 0x000010, "Wrong size on WBP_ItemChest_C_OnUpdatePrivateLockPlayerUId");
static_assert(offsetof(WBP_ItemChest_C_OnUpdatePrivateLockPlayerUId, ConcreteModel) == 0x000000, "Member 'WBP_ItemChest_C_OnUpdatePrivateLockPlayerUId::ConcreteModel' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_OnUpdatePrivateLockPlayerUId, CallFunc_IsLockedPrivateByNotLocalPlayer_ReturnValue) == 0x000008, "Member 'WBP_ItemChest_C_OnUpdatePrivateLockPlayerUId::CallFunc_IsLockedPrivateByNotLocalPlayer_ReturnValue' has a wrong offset!");

// Function WBP_ItemChest.WBP_ItemChest_C.Refill
// 0x0001 (0x0001 - 0x0000)
struct WBP_ItemChest_C_Refill final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_C_Refill) == 0x000001, "Wrong alignment on WBP_ItemChest_C_Refill");
static_assert(sizeof(WBP_ItemChest_C_Refill) == 0x000001, "Wrong size on WBP_ItemChest_C_Refill");
static_assert(offsetof(WBP_ItemChest_C_Refill, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_ItemChest_C_Refill::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_ItemChest.WBP_ItemChest_C.Setup
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_ItemChest_C_Setup final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectItemChestModel* Self)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_TryGetMapObjectId_ReturnValue;            // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetMapObjectName_outName;                 // 0x0038(0x0018)()
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectItemChestModel*            K2Node_DynamicCast_AsPal_Map_Object_Item_Chest_Model; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameterBase*           CallFunc_GetParam_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_MapObject*     K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectItemContainerModule*       CallFunc_GetItemContainerModule_ReturnValue;       // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemContainer*                      CallFunc_TryGetContainer_OutContainer;             // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetContainer_ReturnValue;              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PalInventoryModel_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_C_Setup) == 0x000008, "Wrong alignment on WBP_ItemChest_C_Setup");
static_assert(sizeof(WBP_ItemChest_C_Setup) == 0x0000A0, "Wrong size on WBP_ItemChest_C_Setup");
static_assert(offsetof(WBP_ItemChest_C_Setup, ConcreteModel) == 0x000000, "Member 'WBP_ItemChest_C_Setup::ConcreteModel' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_ItemChest_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_ItemChest_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_TryGetMapObjectId_ReturnValue) == 0x00001C, "Member 'WBP_ItemChest_C_Setup::CallFunc_TryGetMapObjectId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_Conv_NameToString_ReturnValue) == 0x000028, "Member 'WBP_ItemChest_C_Setup::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_GetMapObjectName_outName) == 0x000038, "Member 'WBP_ItemChest_C_Setup::CallFunc_GetMapObjectName_outName' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_Contains_ReturnValue) == 0x000050, "Member 'WBP_ItemChest_C_Setup::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, K2Node_DynamicCast_AsPal_Map_Object_Item_Chest_Model) == 0x000058, "Member 'WBP_ItemChest_C_Setup::K2Node_DynamicCast_AsPal_Map_Object_Item_Chest_Model' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_ItemChest_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_GetParam_ReturnValue) == 0x000068, "Member 'WBP_ItemChest_C_Setup::CallFunc_GetParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object) == 0x000070, "Member 'WBP_ItemChest_C_Setup::K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'WBP_ItemChest_C_Setup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000079, "Member 'WBP_ItemChest_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_GetItemContainerModule_ReturnValue) == 0x000080, "Member 'WBP_ItemChest_C_Setup::CallFunc_GetItemContainerModule_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_TryGetContainer_OutContainer) == 0x000088, "Member 'WBP_ItemChest_C_Setup::CallFunc_TryGetContainer_OutContainer' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_TryGetContainer_ReturnValue) == 0x000090, "Member 'WBP_ItemChest_C_Setup::CallFunc_TryGetContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Setup, CallFunc_SpawnObject_ReturnValue) == 0x000098, "Member 'WBP_ItemChest_C_Setup::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function WBP_ItemChest.WBP_ItemChest_C.Sort
// 0x0003 (0x0003 - 0x0000)
struct WBP_ItemChest_C_Sort final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_C_Sort) == 0x000001, "Wrong alignment on WBP_ItemChest_C_Sort");
static_assert(sizeof(WBP_ItemChest_C_Sort) == 0x000003, "Wrong size on WBP_ItemChest_C_Sort");
static_assert(offsetof(WBP_ItemChest_C_Sort, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_ItemChest_C_Sort::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Sort, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'WBP_ItemChest_C_Sort::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_Sort, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'WBP_ItemChest_C_Sort::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_ItemChest.WBP_ItemChest_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_ItemChest_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetInventoryTopFocustTarget_FocusTarget;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemChest_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_ItemChest_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_ItemChest_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_ItemChest_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_ItemChest_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_ItemChest_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemChest_C_BP_GetDesiredFocusTarget, CallFunc_GetInventoryTopFocustTarget_FocusTarget) == 0x000008, "Member 'WBP_ItemChest_C_BP_GetDesiredFocusTarget::CallFunc_GetInventoryTopFocustTarget_FocusTarget' has a wrong offset!");

}

