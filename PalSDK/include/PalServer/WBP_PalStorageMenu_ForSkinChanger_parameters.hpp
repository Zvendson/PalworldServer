#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.DisableNoSkinCharacterButton
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkinApplied_bSkinApplied;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_Get_All_Children_widgets;                 // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkinApplied_bSkinApplied_1;             // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x1];                                       // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_Get_All_Children_widgets_1;               // 0x0080(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_2;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCommonCharacterSlotButton_C*    K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1; // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot_1;               // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkinApplied_bSkinApplied_2;             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton) == 0x000008, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton) == 0x0000C8, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, Temp_int_Array_Index_Variable_1) == 0x000004, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, Temp_int_Array_Index_Variable_2) == 0x000010, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_IsSkinApplied_bSkinApplied) == 0x000028, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_IsSkinApplied_bSkinApplied' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_IsEmpty_ReturnValue) == 0x000038, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, Temp_int_Loop_Counter_Variable_2) == 0x00003C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Get_All_Children_widgets) == 0x000040, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Get_All_Children_widgets' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button) == 0x000060, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Array_Length_ReturnValue_1) == 0x00006C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_GetTargetSlot_targetSlot) == 0x000070, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Less_IntInt_ReturnValue_1) == 0x000078, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_IsValid_ReturnValue_1) == 0x000079, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_IsSkinApplied_bSkinApplied_1) == 0x00007A, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_IsSkinApplied_bSkinApplied_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Add_IntInt_ReturnValue_2) == 0x00007C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Get_All_Children_widgets_1) == 0x000080, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Get_All_Children_widgets_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Array_Length_ReturnValue_2) == 0x000090, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Array_Get_Item_2) == 0x000098, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000A0, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1) == 0x0000A8, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_GetTargetSlot_targetSlot_1) == 0x0000B8, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_GetTargetSlot_targetSlot_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_IsSkinApplied_bSkinApplied_2) == 0x0000C0, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_IsSkinApplied_bSkinApplied_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_IsValid_ReturnValue_2) == 0x0000C1, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x0000C4, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_DisableNoSkinCharacterButton::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_nowPage;                              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterSlot*>    K2Node_Event_slotList_1;                           // 0x0018(0x0010)(ConstParm, ReferenceParm)
	TArray<class UPalIndividualCharacterSlot*>    K2Node_Event_slotList;                             // 0x0028(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger) == 0x000008, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger) == 0x000038, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger, EntryPoint) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger, K2Node_Event_nowPage) == 0x000014, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger::K2Node_Event_nowPage' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger, K2Node_Event_slotList_1) == 0x000018, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger::K2Node_Event_slotList_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger, K2Node_Event_slotList) == 0x000028, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_ExecuteUbergraph_WBP_PalStorageMenu_ForSkinChanger::K2Node_Event_slotList' has a wrong offset!");

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.IsMatchCharacterID
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMatch;                                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID) == 0x000008, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID) == 0x000040, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, Slot_0) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, bIsMatch) == 0x000008, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::bIsMatch' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_GetHandle_ReturnValue) == 0x000010, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_IsValid_ReturnValue_2) == 0x000028, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_GetCharacterID_ReturnValue) == 0x00002C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName) == 0x000034, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_IsEmpty_ReturnValue) == 0x00003C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_EqualEqual_NameName_ReturnValue) == 0x00003D, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID, CallFunc_EqualEqual_NameName_ReturnValue_1) == 0x00003E, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsMatchCharacterID::CallFunc_EqualEqual_NameName_ReturnValue_1' has a wrong offset!");

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.IsSkinApplied
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkinApplied;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSkinApplied_ReturnValue;                // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied) == 0x000008, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied) == 0x000030, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied, Slot_0) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied, bSkinApplied) == 0x000008, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied::bSkinApplied' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied, CallFunc_GetHandle_ReturnValue) == 0x000010, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied, CallFunc_IsEmpty_ReturnValue) == 0x000018, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied, CallFunc_IsValid_ReturnValue_2) == 0x000029, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied, CallFunc_IsSkinApplied_ReturnValue) == 0x00002A, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_IsSkinApplied::CallFunc_IsSkinApplied_ReturnValue' has a wrong offset!");

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.OnClickedAnySlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_OnClickedAnySlot__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_OnClickedAnySlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_OnClickedAnySlot__DelegateSignature");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_OnClickedAnySlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_OnClickedAnySlot__DelegateSignature");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_OnClickedAnySlot__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_OnClickedAnySlot__DelegateSignature::Slot_0' has a wrong offset!");

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.OnUpdatePagePalBoxList
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList final
{
public:
	int32                                         NowPage;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterSlot*>    SlotList;                                          // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList) == 0x000008, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList) == 0x000018, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList, NowPage) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList::NowPage' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList, SlotList) == 0x000008, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePagePalBoxList::SlotList' has a wrong offset!");

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.OnUpdatePageWorkerList
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePageWorkerList final
{
public:
	TArray<class UPalIndividualCharacterSlot*>    SlotList;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePageWorkerList) == 0x000008, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePageWorkerList");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePageWorkerList) == 0x000010, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePageWorkerList");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePageWorkerList, SlotList) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_OnUpdatePageWorkerList::SlotList' has a wrong offset!");

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.SelectSlot
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMatchCharacterID_bIsMatch;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot) == 0x000008, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot) == 0x000010, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot, Slot_0) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot, PressType) == 0x000008, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot::PressType' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot, CallFunc_IsMatchCharacterID_bIsMatch) == 0x000009, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot::CallFunc_IsMatchCharacterID_bIsMatch' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_SelectSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.SetTargetCharacterID
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_SetTargetCharacterID final
{
public:
	class FName                                   CharacterID;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_SetTargetCharacterID) == 0x000004, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_SetTargetCharacterID");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_SetTargetCharacterID) == 0x000008, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_SetTargetCharacterID");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_SetTargetCharacterID, CharacterID) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_SetTargetCharacterID::CharacterID' has a wrong offset!");

// Function WBP_PalStorageMenu_ForSkinChanger.WBP_PalStorageMenu_ForSkinChanger_C.UpdateButtonEnable
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMatchCharacterID_bIsMatch;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_Get_All_Children_widgets;                 // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMatchCharacterID_bIsMatch_1;            // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x1];                                       // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_Get_All_Children_widgets_1;               // 0x0080(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_2;                         // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCommonCharacterSlotButton_C*    K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1; // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot_1;               // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMatchCharacterID_bIsMatch_2;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable) == 0x000008, "Wrong alignment on WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable");
static_assert(sizeof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable) == 0x0000C8, "Wrong size on WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, Temp_int_Array_Index_Variable_1) == 0x000004, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, Temp_int_Array_Index_Variable_2) == 0x000010, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_IsMatchCharacterID_bIsMatch) == 0x000028, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_IsMatchCharacterID_bIsMatch' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_IsEmpty_ReturnValue) == 0x000038, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, Temp_int_Loop_Counter_Variable_2) == 0x00003C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Get_All_Children_widgets) == 0x000040, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Get_All_Children_widgets' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button) == 0x000060, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Array_Length_ReturnValue_1) == 0x00006C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_GetTargetSlot_targetSlot) == 0x000070, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Less_IntInt_ReturnValue_1) == 0x000078, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_IsValid_ReturnValue_1) == 0x000079, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_IsMatchCharacterID_bIsMatch_1) == 0x00007A, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_IsMatchCharacterID_bIsMatch_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Add_IntInt_ReturnValue_2) == 0x00007C, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Get_All_Children_widgets_1) == 0x000080, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Get_All_Children_widgets_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Array_Length_ReturnValue_2) == 0x000090, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Array_Get_Item_2) == 0x000098, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000A0, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1) == 0x0000A8, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_GetTargetSlot_targetSlot_1) == 0x0000B8, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_GetTargetSlot_targetSlot_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_IsMatchCharacterID_bIsMatch_2) == 0x0000C0, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_IsMatchCharacterID_bIsMatch_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_IsValid_ReturnValue_2) == 0x0000C1, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x0000C4, "Member 'WBP_PalStorageMenu_ForSkinChanger_C_UpdateButtonEnable::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

}

