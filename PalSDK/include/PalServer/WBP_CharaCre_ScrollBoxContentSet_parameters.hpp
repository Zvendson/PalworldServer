#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "E_UICharacterMakeCategory_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.ApplyMakeInfo
// 0x0198 (0x0198 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo final
{
public:
	struct FPalPlayerDataCharacterMakeInfo        MakeInfo;                                          // 0x0000(0x0150)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15C[0x4];                                      // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0160(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharaCre_ScrollBoxContentBase_C*   K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base; // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo) == 0x000198, "Wrong size on WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, MakeInfo) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::MakeInfo' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, Temp_int_Array_Index_Variable) == 0x000150, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, Temp_int_Loop_Counter_Variable) == 0x000154, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000158, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, CallFunc_GetAllChildren_ReturnValue) == 0x000160, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, CallFunc_Array_Length_ReturnValue) == 0x000170, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, CallFunc_Array_Get_Item) == 0x000178, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000180, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base) == 0x000188, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ApplyMakeInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.ChangeMakeCategory
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory final
{
public:
	E_UICharacterMakeCategory                     NewCategory;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharaCre_ScrollBoxContentBase_C*   CallFunc_GetWidgetByCategory_Widget;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory) == 0x000010, "Wrong size on WBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory, NewCategory) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory::NewCategory' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory, CallFunc_GetWidgetByCategory_Widget) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ChangeMakeCategory::CallFunc_GetWidgetByCategory_Widget' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentSet_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentSet_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet) == 0x000004, "Wrong alignment on WBP_CharaCre_ScrollBoxContentSet_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentSet_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet) == 0x000004, "Wrong size on WBP_CharaCre_ScrollBoxContentSet_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet, EntryPoint) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContentSet::EntryPoint' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.GetRestoreFocusTarget
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget final
{
public:
	E_UICharacterMakeCategory                     CategoryType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Widget;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContentBase_C*   CallFunc_GetWidgetByCategory_Widget;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTopFocusTarget_Widget;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget) == 0x000020, "Wrong size on WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget, CategoryType) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget::CategoryType' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget, Widget) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget, CallFunc_GetWidgetByCategory_Widget) == 0x000010, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget::CallFunc_GetWidgetByCategory_Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget, CallFunc_GetTopFocusTarget_Widget) == 0x000018, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetRestoreFocusTarget::CallFunc_GetTopFocusTarget_Widget' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.GetSelectedEyeHSV
// 0x0068 (0x0068 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV final
{
public:
	struct FLinearColor                           HSV;                                               // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetBindedColor_Color;                     // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_RGBLinearToHSV_ReturnValue;               // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_R_ImplicitCast;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV) == 0x000068, "Wrong size on WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, HSV) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::HSV' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, CallFunc_GetBindedColor_Color) == 0x000010, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::CallFunc_GetBindedColor_Color' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, CallFunc_RGBLinearToHSV_ReturnValue) == 0x000020, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::CallFunc_RGBLinearToHSV_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, CallFunc_BreakColor_R) == 0x000030, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, CallFunc_BreakColor_G) == 0x000034, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, CallFunc_BreakColor_B) == 0x000038, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, CallFunc_BreakColor_A) == 0x00003C, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, K2Node_MakeStruct_LinearColor) == 0x000048, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000058, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV, K2Node_MakeStruct_R_ImplicitCast) == 0x000060, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetSelectedEyeHSV::K2Node_MakeStruct_R_ImplicitCast' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.GetTopFocusTarget
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget final
{
public:
	E_UICharacterMakeCategory                     NewCategory;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Widget;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContentBase_C*   CallFunc_GetWidgetByCategory_Widget;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTopFocusTarget_Widget;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget) == 0x000020, "Wrong size on WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget, NewCategory) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget::NewCategory' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget, Widget) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget, CallFunc_GetWidgetByCategory_Widget) == 0x000010, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget::CallFunc_GetWidgetByCategory_Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget, CallFunc_GetTopFocusTarget_Widget) == 0x000018, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetTopFocusTarget::CallFunc_GetTopFocusTarget_Widget' has a wrong offset!");

// Function WBP_CharaCre_ScrollBoxContentSet.WBP_CharaCre_ScrollBoxContentSet_C.GetWidgetByCategory
// 0x0058 (0x0058 - 0x0000)
struct WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory final
{
public:
	E_UICharacterMakeCategory                     TargetCategory;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharaCre_ScrollBoxContentBase_C*   Widget;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                TmpWidget;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharaCre_ScrollBoxContentBase_C*   K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue_2;           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue_3;           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue_4;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory) == 0x000008, "Wrong alignment on WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory");
static_assert(sizeof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory) == 0x000058, "Wrong size on WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, TargetCategory) == 0x000000, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::TargetCategory' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, Widget) == 0x000008, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, TmpWidget) == 0x000010, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::TmpWidget' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base) == 0x000020, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::K2Node_DynamicCast_AsWBP_Chara_Cre_Scroll_Box_Content_Base' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, CallFunc_GetWidgetAtIndex_ReturnValue) == 0x000030, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::CallFunc_GetWidgetAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, CallFunc_GetWidgetAtIndex_ReturnValue_1) == 0x000038, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::CallFunc_GetWidgetAtIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, CallFunc_GetWidgetAtIndex_ReturnValue_2) == 0x000040, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::CallFunc_GetWidgetAtIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, CallFunc_GetWidgetAtIndex_ReturnValue_3) == 0x000048, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::CallFunc_GetWidgetAtIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory, CallFunc_GetWidgetAtIndex_ReturnValue_4) == 0x000050, "Member 'WBP_CharaCre_ScrollBoxContentSet_C_GetWidgetByCategory::CallFunc_GetWidgetAtIndex_ReturnValue_4' has a wrong offset!");

}

