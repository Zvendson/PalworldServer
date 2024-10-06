#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_RepairEquipment_C_BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature final
{
public:
	class UPalItemSlot*                           ItemSlot;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairEquipment_C_BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_RepairEquipment_C_BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature");
static_assert(sizeof(WBP_RepairEquipment_C_BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_RepairEquipment_C_BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature");
static_assert(offsetof(WBP_RepairEquipment_C_BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature, ItemSlot) == 0x000000, "Member 'WBP_RepairEquipment_C_BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature::ItemSlot' has a wrong offset!");

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.EndRepair
// 0x0010 (0x0010 - 0x0000)
struct WBP_RepairEquipment_C_EndRepair final
{
public:
	bool                                          IsSuccess;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetDefaultFocusTarget_TargetWidget;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairEquipment_C_EndRepair) == 0x000008, "Wrong alignment on WBP_RepairEquipment_C_EndRepair");
static_assert(sizeof(WBP_RepairEquipment_C_EndRepair) == 0x000010, "Wrong size on WBP_RepairEquipment_C_EndRepair");
static_assert(offsetof(WBP_RepairEquipment_C_EndRepair, IsSuccess) == 0x000000, "Member 'WBP_RepairEquipment_C_EndRepair::IsSuccess' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_EndRepair, CallFunc_GetDefaultFocusTarget_TargetWidget) == 0x000008, "Member 'WBP_RepairEquipment_C_EndRepair::CallFunc_GetDefaultFocusTarget_TargetWidget' has a wrong offset!");

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.ExecuteUbergraph_WBP_RepairEquipment
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           K2Node_ComponentBoundEvent_ItemSlot;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalStaticItemIdAndNum>         CallFunc_CollectRepairInfo_OutRequiredMaterials;   // 0x0018(0x0010)(ReferenceParm)
	bool                                          CallFunc_CollectRepairInfo_OutCanRepair;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRepairableItem_ReturnValue;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x003C(0x0004)(NoDestructor)
	bool                                          K2Node_Event_IsSuccess;                            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalLogManager*                         CallFunc_GetLogManager_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalLogAdditionalData                  K2Node_MakeStruct_PalLogAdditionalData;            // 0x0050(0x0038)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0088(0x0018)()
	struct FGuid                                  CallFunc_AddLog_ReturnValue;                       // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment) == 0x000008, "Wrong alignment on WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment");
static_assert(sizeof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment) == 0x0000B0, "Wrong size on WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, EntryPoint) == 0x000000, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, K2Node_ComponentBoundEvent_ItemSlot) == 0x000008, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::K2Node_ComponentBoundEvent_ItemSlot' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, CallFunc_Array_Add_ReturnValue) == 0x000010, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, CallFunc_IsEmpty_ReturnValue) == 0x000014, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, CallFunc_CollectRepairInfo_OutRequiredMaterials) == 0x000018, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::CallFunc_CollectRepairInfo_OutRequiredMaterials' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, CallFunc_CollectRepairInfo_OutCanRepair) == 0x000028, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::CallFunc_CollectRepairInfo_OutCanRepair' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, CallFunc_IsRepairableItem_ReturnValue) == 0x000029, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::CallFunc_IsRepairableItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, CallFunc_RegisterActionBinding_ReturnValue) == 0x00003C, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, K2Node_Event_IsSuccess) == 0x000040, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::K2Node_Event_IsSuccess' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, CallFunc_GetLogManager_ReturnValue) == 0x000048, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::CallFunc_GetLogManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, K2Node_MakeStruct_PalLogAdditionalData) == 0x000050, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::K2Node_MakeStruct_PalLogAdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000088, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment, CallFunc_AddLog_ReturnValue) == 0x0000A0, "Member 'WBP_RepairEquipment_C_ExecuteUbergraph_WBP_RepairEquipment::CallFunc_AddLog_ReturnValue' has a wrong offset!");

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OnClosedRepairAllWindow
// 0x0018 (0x0018 - 0x0000)
struct WBP_RepairEquipment_C_OnClosedRepairAllWindow final
{
public:
	class UPalHUDDispatchParameterBase*           Param_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_RepairAllWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairEquipment_C_OnClosedRepairAllWindow) == 0x000008, "Wrong alignment on WBP_RepairEquipment_C_OnClosedRepairAllWindow");
static_assert(sizeof(WBP_RepairEquipment_C_OnClosedRepairAllWindow) == 0x000018, "Wrong size on WBP_RepairEquipment_C_OnClosedRepairAllWindow");
static_assert(offsetof(WBP_RepairEquipment_C_OnClosedRepairAllWindow, Param_0) == 0x000000, "Member 'WBP_RepairEquipment_C_OnClosedRepairAllWindow::Param_0' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_OnClosedRepairAllWindow, K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter) == 0x000008, "Member 'WBP_RepairEquipment_C_OnClosedRepairAllWindow::K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_OnClosedRepairAllWindow, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_RepairEquipment_C_OnClosedRepairAllWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OnRecievedRepairResult
// 0x0001 (0x0001 - 0x0000)
struct WBP_RepairEquipment_C_OnRecievedRepairResult final
{
public:
	bool                                          IsSuccess;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairEquipment_C_OnRecievedRepairResult) == 0x000001, "Wrong alignment on WBP_RepairEquipment_C_OnRecievedRepairResult");
static_assert(sizeof(WBP_RepairEquipment_C_OnRecievedRepairResult) == 0x000001, "Wrong size on WBP_RepairEquipment_C_OnRecievedRepairResult");
static_assert(offsetof(WBP_RepairEquipment_C_OnRecievedRepairResult, IsSuccess) == 0x000000, "Member 'WBP_RepairEquipment_C_OnRecievedRepairResult::IsSuccess' has a wrong offset!");

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.OpenRepairAllWindow
// 0x0030 (0x0030 - 0x0000)
struct WBP_RepairEquipment_C_OpenRepairAllWindow final
{
public:
	TDelegate<void(class UPalHUDDispatchParameterBase* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_RepairAllWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x0020(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairEquipment_C_OpenRepairAllWindow) == 0x000008, "Wrong alignment on WBP_RepairEquipment_C_OpenRepairAllWindow");
static_assert(sizeof(WBP_RepairEquipment_C_OpenRepairAllWindow) == 0x000030, "Wrong size on WBP_RepairEquipment_C_OpenRepairAllWindow");
static_assert(offsetof(WBP_RepairEquipment_C_OpenRepairAllWindow, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_RepairEquipment_C_OpenRepairAllWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_OpenRepairAllWindow, CallFunc_GetHUDService_ReturnValue) == 0x000010, "Member 'WBP_RepairEquipment_C_OpenRepairAllWindow::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_OpenRepairAllWindow, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'WBP_RepairEquipment_C_OpenRepairAllWindow::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_OpenRepairAllWindow, CallFunc_Push_ReturnValue) == 0x000020, "Member 'WBP_RepairEquipment_C_OpenRepairAllWindow::CallFunc_Push_ReturnValue' has a wrong offset!");

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.RefreshRepairable
// 0x0028 (0x0028 - 0x0000)
struct WBP_RepairEquipment_C_RefreshRepairable final
{
public:
	TArray<struct FPalStaticItemIdAndNum>         CallFunc_CollectRepairInfo_OutRequiredMaterials;   // 0x0000(0x0010)(ReferenceParm)
	bool                                          CallFunc_CollectRepairInfo_OutCanRepair;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalItemSlot*>                   CallFunc_CollectRepairableSlot_OutRepairableSlots; // 0x0018(0x0010)(ReferenceParm)
};
static_assert(alignof(WBP_RepairEquipment_C_RefreshRepairable) == 0x000008, "Wrong alignment on WBP_RepairEquipment_C_RefreshRepairable");
static_assert(sizeof(WBP_RepairEquipment_C_RefreshRepairable) == 0x000028, "Wrong size on WBP_RepairEquipment_C_RefreshRepairable");
static_assert(offsetof(WBP_RepairEquipment_C_RefreshRepairable, CallFunc_CollectRepairInfo_OutRequiredMaterials) == 0x000000, "Member 'WBP_RepairEquipment_C_RefreshRepairable::CallFunc_CollectRepairInfo_OutRequiredMaterials' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_RefreshRepairable, CallFunc_CollectRepairInfo_OutCanRepair) == 0x000010, "Member 'WBP_RepairEquipment_C_RefreshRepairable::CallFunc_CollectRepairInfo_OutCanRepair' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_RefreshRepairable, CallFunc_CollectRepairableSlot_OutRepairableSlots) == 0x000018, "Member 'WBP_RepairEquipment_C_RefreshRepairable::CallFunc_CollectRepairableSlot_OutRepairableSlots' has a wrong offset!");

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.Setup
// 0x0014 (0x0014 - 0x0000)
struct WBP_RepairEquipment_C_Setup final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                   CallFunc_RegisterActionBinding_ReturnValue;        // 0x0010(0x0004)(NoDestructor)
};
static_assert(alignof(WBP_RepairEquipment_C_Setup) == 0x000004, "Wrong alignment on WBP_RepairEquipment_C_Setup");
static_assert(sizeof(WBP_RepairEquipment_C_Setup) == 0x000014, "Wrong size on WBP_RepairEquipment_C_Setup");
static_assert(offsetof(WBP_RepairEquipment_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_RepairEquipment_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_Setup, CallFunc_RegisterActionBinding_ReturnValue) == 0x000010, "Member 'WBP_RepairEquipment_C_Setup::CallFunc_RegisterActionBinding_ReturnValue' has a wrong offset!");

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.StartRepair
// 0x0018 (0x0018 - 0x0000)
struct WBP_RepairEquipment_C_StartRepair final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairEquipment_C_StartRepair) == 0x000008, "Wrong alignment on WBP_RepairEquipment_C_StartRepair");
static_assert(sizeof(WBP_RepairEquipment_C_StartRepair) == 0x000018, "Wrong size on WBP_RepairEquipment_C_StartRepair");
static_assert(offsetof(WBP_RepairEquipment_C_StartRepair, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_RepairEquipment_C_StartRepair::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_StartRepair, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'WBP_RepairEquipment_C_StartRepair::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function WBP_RepairEquipment.WBP_RepairEquipment_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_RepairEquipment_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetDefaultFocusTarget_TargetWidget;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_RepairEquipment_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_RepairEquipment_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_RepairEquipment_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_RepairEquipment_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_RepairEquipment_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_RepairEquipment_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RepairEquipment_C_BP_GetDesiredFocusTarget, CallFunc_GetDefaultFocusTarget_TargetWidget) == 0x000008, "Member 'WBP_RepairEquipment_C_BP_GetDesiredFocusTarget::CallFunc_GetDefaultFocusTarget_TargetWidget' has a wrong offset!");

}

