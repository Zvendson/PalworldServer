#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.ExecuteUbergraph_WBP_IngameMenu_RepairAll
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameMenu_RepairAll_C_ExecuteUbergraph_WBP_IngameMenu_RepairAll final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_RepairAll_C_ExecuteUbergraph_WBP_IngameMenu_RepairAll) == 0x000004, "Wrong alignment on WBP_IngameMenu_RepairAll_C_ExecuteUbergraph_WBP_IngameMenu_RepairAll");
static_assert(sizeof(WBP_IngameMenu_RepairAll_C_ExecuteUbergraph_WBP_IngameMenu_RepairAll) == 0x000004, "Wrong size on WBP_IngameMenu_RepairAll_C_ExecuteUbergraph_WBP_IngameMenu_RepairAll");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_ExecuteUbergraph_WBP_IngameMenu_RepairAll, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_RepairAll_C_ExecuteUbergraph_WBP_IngameMenu_RepairAll::EntryPoint' has a wrong offset!");

// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.GetFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_RepairAll_C_GetFocusTarget final
{
public:
	class UWidget*                                FocusTarget;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_RepairAll_C_GetFocusTarget) == 0x000008, "Wrong alignment on WBP_IngameMenu_RepairAll_C_GetFocusTarget");
static_assert(sizeof(WBP_IngameMenu_RepairAll_C_GetFocusTarget) == 0x000008, "Wrong size on WBP_IngameMenu_RepairAll_C_GetFocusTarget");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_GetFocusTarget, FocusTarget) == 0x000000, "Member 'WBP_IngameMenu_RepairAll_C_GetFocusTarget::FocusTarget' has a wrong offset!");

// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.OnClickedButton__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_IngameMenu_RepairAll_C_OnClickedButton__DelegateSignature final
{
public:
	bool                                          IsYes;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_RepairAll_C_OnClickedButton__DelegateSignature) == 0x000001, "Wrong alignment on WBP_IngameMenu_RepairAll_C_OnClickedButton__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_RepairAll_C_OnClickedButton__DelegateSignature) == 0x000001, "Wrong size on WBP_IngameMenu_RepairAll_C_OnClickedButton__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_OnClickedButton__DelegateSignature, IsYes) == 0x000000, "Member 'WBP_IngameMenu_RepairAll_C_OnClickedButton__DelegateSignature::IsYes' has a wrong offset!");

// Function WBP_IngameMenu_RepairAll.WBP_IngameMenu_RepairAll_C.Setup
// 0x0170 (0x0170 - 0x0000)
struct WBP_IngameMenu_RepairAll_C_Setup final
{
public:
	TArray<class UPalItemSlot*>                   TargetItemSlots;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FPalStaticItemIdAndNum>         RequireMaterials;                                  // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<class FName, int32>                      ControllableMaterialMap;                           // 0x0020(0x0050)(Edit, BlueprintVisible)
	TArray<struct FPalStaticItemIdAndNum>         ControllableMaterialNum;                           // 0x0070(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           RequireMaterialStaticIDArray;                      // 0x0080(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                 CallFunc_Array_Get_Item;                           // 0x00BC(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPalStaticItemIdAndNum>         CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos; // 0x00D8(0x0010)(ReferenceParm)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* CallFunc_Create_ReturnValue;                       // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                 CallFunc_Array_Get_Item_1;                         // 0x00F8(0x000C)(NoDestructor)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               CallFunc_WrapSizeBox_CreatedSizeBox;               // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CallFunc_Array_Get_Item_2;                         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalStaticItemIdAndNum                 CallFunc_Array_Get_Item_3;                         // 0x013C(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*     CallFunc_Create_ReturnValue_1;                     // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               CallFunc_WrapSizeBox_CreatedSizeBox_1;             // 0x0160(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue_1;          // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_RepairAll_C_Setup) == 0x000008, "Wrong alignment on WBP_IngameMenu_RepairAll_C_Setup");
static_assert(sizeof(WBP_IngameMenu_RepairAll_C_Setup) == 0x000170, "Wrong size on WBP_IngameMenu_RepairAll_C_Setup");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, TargetItemSlots) == 0x000000, "Member 'WBP_IngameMenu_RepairAll_C_Setup::TargetItemSlots' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, RequireMaterials) == 0x000010, "Member 'WBP_IngameMenu_RepairAll_C_Setup::RequireMaterials' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, ControllableMaterialMap) == 0x000020, "Member 'WBP_IngameMenu_RepairAll_C_Setup::ControllableMaterialMap' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, ControllableMaterialNum) == 0x000070, "Member 'WBP_IngameMenu_RepairAll_C_Setup::ControllableMaterialNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, RequireMaterialStaticIDArray) == 0x000080, "Member 'WBP_IngameMenu_RepairAll_C_Setup::RequireMaterialStaticIDArray' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, Temp_int_Array_Index_Variable) == 0x000090, "Member 'WBP_IngameMenu_RepairAll_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000094, "Member 'WBP_IngameMenu_RepairAll_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, Temp_int_Array_Index_Variable_1) == 0x00009C, "Member 'WBP_IngameMenu_RepairAll_C_Setup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, Temp_int_Loop_Counter_Variable_1) == 0x0000A0, "Member 'WBP_IngameMenu_RepairAll_C_Setup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A4, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, Temp_int_Array_Index_Variable_2) == 0x0000A8, "Member 'WBP_IngameMenu_RepairAll_C_Setup::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, Temp_int_Loop_Counter_Variable_2) == 0x0000AC, "Member 'WBP_IngameMenu_RepairAll_C_Setup::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000B0, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, Temp_int_Loop_Counter_Variable_3) == 0x0000B4, "Member 'WBP_IngameMenu_RepairAll_C_Setup::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000B8, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Array_Get_Item) == 0x0000BC, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Array_Length_ReturnValue_1) == 0x0000D0, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D4, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos) == 0x0000D8, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000E8, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Create_ReturnValue) == 0x0000F0, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Array_Get_Item_1) == 0x0000F8, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_WrapSizeBox_CreatedSizeBox) == 0x000108, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_WrapSizeBox_CreatedSizeBox' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_AddChildToWrapBox_ReturnValue) == 0x000110, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Map_Find_Value) == 0x000118, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Map_Find_ReturnValue) == 0x00011C, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Array_Length_ReturnValue_2) == 0x000120, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Less_IntInt_ReturnValue_2) == 0x000124, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Array_Get_Item_2) == 0x000128, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Array_Length_ReturnValue_3) == 0x000130, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Less_IntInt_ReturnValue_3) == 0x000134, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, Temp_int_Array_Index_Variable_3) == 0x000138, "Member 'WBP_IngameMenu_RepairAll_C_Setup::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Array_Get_Item_3) == 0x00013C, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Array_AddUnique_ReturnValue) == 0x000148, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x000150, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_Create_ReturnValue_1) == 0x000158, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_WrapSizeBox_CreatedSizeBox_1) == 0x000160, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_WrapSizeBox_CreatedSizeBox_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_RepairAll_C_Setup, CallFunc_AddChildToWrapBox_ReturnValue_1) == 0x000168, "Member 'WBP_IngameMenu_RepairAll_C_Setup::CallFunc_AddChildToWrapBox_ReturnValue_1' has a wrong offset!");

}

