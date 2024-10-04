#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.AddHUD
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalHUDLayout_C_AddHUD final
{
public:
	class UPalUserWidget*                         Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         ZOrder;                                            // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalHUDLayout_C_AddHUD) == 0x000008, "Wrong alignment on WBP_PalHUDLayout_C_AddHUD");
static_assert(sizeof(WBP_PalHUDLayout_C_AddHUD) == 0x000010, "Wrong size on WBP_PalHUDLayout_C_AddHUD");
static_assert(offsetof(WBP_PalHUDLayout_C_AddHUD, Widget) == 0x000000, "Member 'WBP_PalHUDLayout_C_AddHUD::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_AddHUD, ZOrder) == 0x000008, "Member 'WBP_PalHUDLayout_C_AddHUD::ZOrder' has a wrong offset!");

// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.AddWorldHUD
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalHUDLayout_C_AddWorldHUD final
{
public:
	class UPalUserWidgetWorldHUD*                 Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalHUDLayout_C_AddWorldHUD) == 0x000008, "Wrong alignment on WBP_PalHUDLayout_C_AddWorldHUD");
static_assert(sizeof(WBP_PalHUDLayout_C_AddWorldHUD) == 0x000008, "Wrong size on WBP_PalHUDLayout_C_AddWorldHUD");
static_assert(offsetof(WBP_PalHUDLayout_C_AddWorldHUD, Widget) == 0x000000, "Member 'WBP_PalHUDLayout_C_AddWorldHUD::Widget' has a wrong offset!");

// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.ExecuteUbergraph_WBP_PalHUDLayout
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUserWidgetWorldHUD*                 K2Node_Event_Widget_1;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalUserWidgetWorldHUD*                 K2Node_Event_Widget;                               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FAnchorData                            CallFunc_GetLayout_ReturnValue;                    // 0x0020(0x0040)(NoDestructor)
	class UPalUserWidget*                         K2Node_Event_Widget_2;                             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalUserWidget*                         K2Node_Event_Widget_3;                             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_ZOrder;                               // 0x0090(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout) == 0x000008, "Wrong alignment on WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout");
static_assert(sizeof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout) == 0x0000A0, "Wrong size on WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, EntryPoint) == 0x000000, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, K2Node_Event_Widget_1) == 0x000008, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::K2Node_Event_Widget_1' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, K2Node_Event_Widget) == 0x000018, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, CallFunc_GetLayout_ReturnValue) == 0x000020, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::CallFunc_GetLayout_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, K2Node_Event_Widget_2) == 0x000060, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::K2Node_Event_Widget_2' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000068, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, CallFunc_GetSize_ReturnValue) == 0x000070, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, CallFunc_AddChildToCanvas_ReturnValue) == 0x000080, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, K2Node_Event_Widget_3) == 0x000088, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::K2Node_Event_Widget_3' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, K2Node_Event_ZOrder) == 0x000090, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::K2Node_Event_ZOrder' has a wrong offset!");
static_assert(offsetof(WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout, CallFunc_AddChildToCanvas_ReturnValue_1) == 0x000098, "Member 'WBP_PalHUDLayout_C_ExecuteUbergraph_WBP_PalHUDLayout::CallFunc_AddChildToCanvas_ReturnValue_1' has a wrong offset!");

// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.RemoveHUD
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalHUDLayout_C_RemoveHUD final
{
public:
	class UPalUserWidget*                         Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalHUDLayout_C_RemoveHUD) == 0x000008, "Wrong alignment on WBP_PalHUDLayout_C_RemoveHUD");
static_assert(sizeof(WBP_PalHUDLayout_C_RemoveHUD) == 0x000008, "Wrong size on WBP_PalHUDLayout_C_RemoveHUD");
static_assert(offsetof(WBP_PalHUDLayout_C_RemoveHUD, Widget) == 0x000000, "Member 'WBP_PalHUDLayout_C_RemoveHUD::Widget' has a wrong offset!");

// Function WBP_PalHUDLayout.WBP_PalHUDLayout_C.RemoveWorldHUD
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalHUDLayout_C_RemoveWorldHUD final
{
public:
	class UPalUserWidgetWorldHUD*                 Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalHUDLayout_C_RemoveWorldHUD) == 0x000008, "Wrong alignment on WBP_PalHUDLayout_C_RemoveWorldHUD");
static_assert(sizeof(WBP_PalHUDLayout_C_RemoveWorldHUD) == 0x000008, "Wrong size on WBP_PalHUDLayout_C_RemoveWorldHUD");
static_assert(offsetof(WBP_PalHUDLayout_C_RemoveWorldHUD, Widget) == 0x000000, "Member 'WBP_PalHUDLayout_C_RemoveWorldHUD::Widget' has a wrong offset!");

}

