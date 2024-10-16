#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "EPalBoxHoveredSlotType_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      CreatedSlot;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature, CreatedSlot) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature::CreatedSlot' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature, PressType) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      CreatedSlot;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature, CreatedSlot) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature::CreatedSlot' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature, PressType) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.CreatePageControlWidget
// 0x0048 (0x0048 - 0x0000)
struct WBP_IngameMenu_PalBox_C_CreatePageControlWidget final
{
public:
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0000(0x0008)(NoDestructor)
	class UPalPlayerDataStorage*                  CallFunc_GetPlayerDataStorage_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerDataPalStorage*               CallFunc_GetPalStorage_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPageNum_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_IngameMenu_PalBox_PageControl_C*   CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_CreatePageControlWidget");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget) == 0x000048, "Wrong size on WBP_IngameMenu_PalBox_C_CreatePageControlWidget");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, K2Node_MakeStruct_SlateChildSize) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, CallFunc_GetPlayerDataStorage_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::CallFunc_GetPlayerDataStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, CallFunc_GetPalStorage_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::CallFunc_GetPalStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, Temp_int_Variable) == 0x000018, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, CallFunc_GetPageNum_ReturnValue) == 0x00001C, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::CallFunc_GetPageNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, CallFunc_Create_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CreatePageControlWidget, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_PalBox_C_CreatePageControlWidget::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.CustomNavi_ToSortButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton, Navigation_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton, ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_CustomNavi_ToSortButton::ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.Display Pal Detail
// 0x0020 (0x0020 - 0x0000)
struct WBP_IngameMenu_PalBox_C_Display_Pal_Detail final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalBoxHoveredSlotType                        SlotType;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_Display_Pal_Detail) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_Display_Pal_Detail");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_Display_Pal_Detail) == 0x000020, "Wrong size on WBP_IngameMenu_PalBox_C_Display_Pal_Detail");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Display_Pal_Detail, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_Display_Pal_Detail::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Display_Pal_Detail, SlotType) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_Display_Pal_Detail::SlotType' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Display_Pal_Detail, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'WBP_IngameMenu_PalBox_C_Display_Pal_Detail::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Display_Pal_Detail, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'WBP_IngameMenu_PalBox_C_Display_Pal_Detail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Display_Pal_Detail, CallFunc_GetHandle_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_C_Display_Pal_Detail::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Display_Pal_Detail, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_IngameMenu_PalBox_C_Display_Pal_Detail::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.DoCustomNavigation
// 0x0018 (0x0018 - 0x0000)
struct WBP_IngameMenu_PalBox_C_DoCustomNavigation final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetTopFocusTarget_Widget;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_DoCustomNavigation) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_DoCustomNavigation");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_DoCustomNavigation) == 0x000018, "Wrong size on WBP_IngameMenu_PalBox_C_DoCustomNavigation");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_DoCustomNavigation, Navigation_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_DoCustomNavigation::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_DoCustomNavigation, ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_DoCustomNavigation::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_DoCustomNavigation, CallFunc_GetTopFocusTarget_Widget) == 0x000010, "Member 'WBP_IngameMenu_PalBox_C_DoCustomNavigation::CallFunc_GetTopFocusTarget_Widget' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.ExecuteUbergraph_WBP_IngameMenu_PalBox
// 0x0168 (0x0168 - 0x0000)
struct WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Push_ReturnValue;                         // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            K2Node_CustomEvent_targetSlot;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_IngameMenu_PalBox_PalList_C*> K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_createdSlot_1;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_createdSlot;            // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlotButton_C*    K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCommonCharacterSlotButton_C*    K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_Widget_7;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         K2Node_ComponentBoundEvent_pressType_1;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_Widget_6;               // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         K2Node_ComponentBoundEvent_pressType;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot;                 // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot_1;               // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            K2Node_CustomEvent_slot;                           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_Widget_5;               // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot_2;               // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_Widget_4;               // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot_3;               // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_Widget_3;               // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterSlot* Slot)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_Widget_2;               // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_Widget_1;               // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_ComponentBoundEvent_Widget;                 // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot_4;               // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot_5;               // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PageControl_C*   CallFunc_Array_Get_Item;                           // 0x0138(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_145[0x3];                                      // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalIndividualCharacterSlot* TargetSlot)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       CallFunc_Array_Get_Item_1;                         // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox) == 0x000168, "Wrong size on WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_Push_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_Push_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, Temp_int_Array_Index_Variable) == 0x000028, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_CustomEvent_targetSlot) == 0x000040, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_CustomEvent_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_MakeArray_Array) == 0x000048, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_createdSlot_1) == 0x000058, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_createdSlot_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_createdSlot) == 0x000060, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_createdSlot' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button) == 0x000068, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1) == 0x000078, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_DynamicCast_AsWBP_Pal_Common_Character_Slot_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_Widget_7) == 0x000088, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_Widget_7' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_pressType_1) == 0x000090, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_pressType_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_Widget_6) == 0x000098, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_Widget_6' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_pressType) == 0x0000A0, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_pressType' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_GetTargetSlot_targetSlot) == 0x0000A8, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_GetTargetSlot_targetSlot_1) == 0x0000B0, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_GetTargetSlot_targetSlot_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_CustomEvent_slot) == 0x0000B8, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_CustomEvent_slot' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_Widget_5) == 0x0000C0, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_Widget_5' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_GetTargetSlot_targetSlot_2) == 0x0000C8, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_GetTargetSlot_targetSlot_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_Widget_4) == 0x0000D0, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_Widget_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_GetTargetSlot_targetSlot_3) == 0x0000D8, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_GetTargetSlot_targetSlot_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_CreateDelegate_OutputDelegate) == 0x0000E0, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_Widget_3) == 0x0000F0, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_Widget_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F8, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_Widget_2) == 0x000108, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_Widget_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_Widget_1) == 0x000110, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_Widget_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_ComponentBoundEvent_Widget) == 0x000118, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_GetTargetSlot_targetSlot_4) == 0x000120, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_GetTargetSlot_targetSlot_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_GetTargetSlot_targetSlot_5) == 0x000128, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_GetTargetSlot_targetSlot_5' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, Temp_int_Loop_Counter_Variable_1) == 0x000130, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000134, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_Array_Get_Item) == 0x000138, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_Array_Length_ReturnValue) == 0x000140, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_Less_IntInt_ReturnValue) == 0x000144, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, K2Node_CreateDelegate_OutputDelegate_2) == 0x000148, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_Array_Get_Item_1) == 0x000158, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_Array_Length_ReturnValue_1) == 0x000160, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox, CallFunc_Less_IntInt_ReturnValue_1) == 0x000164, "Member 'WBP_IngameMenu_PalBox_C_ExecuteUbergraph_WBP_IngameMenu_PalBox::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.GetFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_GetFocusTarget final
{
public:
	class UWidget*                                TargetWidget;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_GetFocusTarget) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_GetFocusTarget");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_GetFocusTarget) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_GetFocusTarget");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_GetFocusTarget, TargetWidget) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_GetFocusTarget::TargetWidget' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnAnySlotHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnAnySlotHovered__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnAnySlotHovered__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnAnySlotHovered__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnAnySlotHovered__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_OnAnySlotHovered__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnAnySlotHovered__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnAnySlotHovered__DelegateSignature::Slot_0' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedBaseCampPal__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature, PressType) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_OnClickedBaseCampPal__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedPalBoxPal__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature, PressType) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_OnClickedPalBoxPal__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedPartySlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnClickedPartySlot__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnClickedPartySlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnClickedPartySlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnClickedPartySlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_OnClickedPartySlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnClickedPartySlot__DelegateSignature, TargetSlot) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnClickedPartySlot__DelegateSignature::TargetSlot' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnClickedPartySlotInternal
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnClickedPartySlotInternal final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnClickedPartySlotInternal) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnClickedPartySlotInternal");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnClickedPartySlotInternal) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_OnClickedPartySlotInternal");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnClickedPartySlotInternal, TargetSlot) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnClickedPartySlotInternal::TargetSlot' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnHoveredBoxSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnHoveredBoxSlot__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnHoveredBoxSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnHoveredBoxSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnHoveredBoxSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_OnHoveredBoxSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnHoveredBoxSlot__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnHoveredBoxSlot__DelegateSignature::Slot_0' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnHoveredPartySlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnHoveredPartySlot__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnHoveredPartySlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnHoveredPartySlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnHoveredPartySlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_OnHoveredPartySlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnHoveredPartySlot__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnHoveredPartySlot__DelegateSignature::Slot_0' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnHoveredPartySlot_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnHoveredPartySlot_Internal final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnHoveredPartySlot_Internal) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnHoveredPartySlot_Internal");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnHoveredPartySlot_Internal) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_OnHoveredPartySlot_Internal");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnHoveredPartySlot_Internal, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnHoveredPartySlot_Internal::Slot_0' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnHoveredWorkerSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnHoveredWorkerSlot__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnHoveredWorkerSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnHoveredWorkerSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnHoveredWorkerSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_OnHoveredWorkerSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnHoveredWorkerSlot__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnHoveredWorkerSlot__DelegateSignature::Slot_0' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnRightClickedBoxSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnRightClickedBoxSlot__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnRightClickedBoxSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnRightClickedBoxSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnRightClickedBoxSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_OnRightClickedBoxSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnRightClickedBoxSlot__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnRightClickedBoxSlot__DelegateSignature::Slot_0' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.OnRightClickedWorkerSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_PalBox_C_OnRightClickedWorkerSlot__DelegateSignature final
{
public:
	class UPalIndividualCharacterSlot*            Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_OnRightClickedWorkerSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_OnRightClickedWorkerSlot__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_OnRightClickedWorkerSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_PalBox_C_OnRightClickedWorkerSlot__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_OnRightClickedWorkerSlot__DelegateSignature, Slot_0) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_OnRightClickedWorkerSlot__DelegateSignature::Slot_0' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.SetBaseCampPalList
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_PalBox_C_SetBaseCampPalList final
{
public:
	TArray<class UPalIndividualCharacterSlot*>    Slots;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_SetBaseCampPalList) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_SetBaseCampPalList");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_SetBaseCampPalList) == 0x000010, "Wrong size on WBP_IngameMenu_PalBox_C_SetBaseCampPalList");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetBaseCampPalList, Slots) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_SetBaseCampPalList::Slots' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.SetCurrentPalBoxPageNum
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum final
{
public:
	int32                                         PageNum;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PageControl_C*   CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0078(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	class UWBP_IngameMenu_PalBox_PageControl_C*   CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum) == 0x0000B0, "Wrong size on WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum, PageNum) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum::PageNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum, K2Node_MakeArray_Array) == 0x000068, "Member 'WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000078, "Member 'WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'WBP_IngameMenu_PalBox_C_SetCurrentPalBoxPageNum::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.SetEnableDragDrop
// 0x0098 (0x0098 - 0x0000)
struct WBP_IngameMenu_PalBox_C_SetEnableDragDrop final
{
public:
	bool                                          bIsEnableDragDrop;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_Get_All_Children_widgets;                 // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_Get_All_Children_widgets_1;               // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base_1; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       CallFunc_Array_Get_Item_2;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_SetEnableDragDrop");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop) == 0x000098, "Wrong size on WBP_IngameMenu_PalBox_C_SetEnableDragDrop");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, bIsEnableDragDrop) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::bIsEnableDragDrop' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, Temp_int_Array_Index_Variable_2) == 0x00001C, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Get_All_Children_widgets) == 0x000020, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Get_All_Children_widgets' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, Temp_int_Loop_Counter_Variable_2) == 0x000030, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base) == 0x000040, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Add_IntInt_ReturnValue_2) == 0x00004C, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Get_All_Children_widgets_1) == 0x000058, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Get_All_Children_widgets_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base_1) == 0x000078, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Less_IntInt_ReturnValue_1) == 0x000081, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Array_Length_ReturnValue_2) == 0x000084, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Array_Get_Item_2) == 0x000088, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetEnableDragDrop, CallFunc_Less_IntInt_ReturnValue_2) == 0x000090, "Member 'WBP_IngameMenu_PalBox_C_SetEnableDragDrop::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.SetPalBoxList
// 0x0050 (0x0050 - 0x0000)
struct WBP_IngameMenu_PalBox_C_SetPalBoxList final
{
public:
	TArray<class UPalIndividualCharacterSlot*>    TargetSlots;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         PageNum;                                           // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EUINavigation Navigation)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_Get_All_Children_widgets;                 // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_SetPalBoxList) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_SetPalBoxList");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_SetPalBoxList) == 0x000050, "Wrong size on WBP_IngameMenu_PalBox_C_SetPalBoxList");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, TargetSlots) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::TargetSlots' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, PageNum) == 0x000010, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::PageNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, Temp_int_Variable) == 0x000024, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, CallFunc_Get_All_Children_widgets) == 0x000028, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::CallFunc_Get_All_Children_widgets' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000045, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_SetPalBoxList, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_IngameMenu_PalBox_C_SetPalBoxList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_PalBox.WBP_IngameMenu_PalBox_C.Setup Party Pal
// 0x0040 (0x0040 - 0x0000)
struct WBP_IngameMenu_PalBox_C_Setup_Party_Pal final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_PalBox_PalList_C*       CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterSlot*>    CallFunc_GetSlots_Slots;                           // 0x0020(0x0010)(ReferenceParm)
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal) == 0x000008, "Wrong alignment on WBP_IngameMenu_PalBox_C_Setup_Party_Pal");
static_assert(sizeof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal) == 0x000040, "Wrong size on WBP_IngameMenu_PalBox_C_Setup_Party_Pal");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_IngameMenu_PalBox_C_Setup_Party_Pal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_IngameMenu_PalBox_C_Setup_Party_Pal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_PalBox_C_Setup_Party_Pal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_PalBox_C_Setup_Party_Pal::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_IngameMenu_PalBox_C_Setup_Party_Pal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal, CallFunc_GetSlots_Slots) == 0x000020, "Member 'WBP_IngameMenu_PalBox_C_Setup_Party_Pal::CallFunc_GetSlots_Slots' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'WBP_IngameMenu_PalBox_C_Setup_Party_Pal::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_PalBox_C_Setup_Party_Pal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_PalBox_C_Setup_Party_Pal, CallFunc_Less_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_IngameMenu_PalBox_C_Setup_Party_Pal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

