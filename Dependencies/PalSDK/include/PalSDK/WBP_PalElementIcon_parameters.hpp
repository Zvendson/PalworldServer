#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalElementIcon.WBP_PalElementIcon_C.ExecuteUbergraph_WBP_PalElementIcon
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon) == 0x000008, "Wrong alignment on WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon");
static_assert(sizeof(WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon) == 0x000018, "Wrong size on WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon");
static_assert(offsetof(WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon, EntryPoint) == 0x000000, "Member 'WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalElementIcon_C_ExecuteUbergraph_WBP_PalElementIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalElementIcon.WBP_PalElementIcon_C.SetElement
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalElementIcon_C_SetElement final
{
public:
	EPalElementType                               ElementType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value_1;                         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalElementIcon_C_SetElement) == 0x000008, "Wrong alignment on WBP_PalElementIcon_C_SetElement");
static_assert(sizeof(WBP_PalElementIcon_C_SetElement) == 0x000030, "Wrong size on WBP_PalElementIcon_C_SetElement");
static_assert(offsetof(WBP_PalElementIcon_C_SetElement, ElementType) == 0x000000, "Member 'WBP_PalElementIcon_C_SetElement::ElementType' has a wrong offset!");
static_assert(offsetof(WBP_PalElementIcon_C_SetElement, Temp_bool_Variable) == 0x000001, "Member 'WBP_PalElementIcon_C_SetElement::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalElementIcon_C_SetElement, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000002, "Member 'WBP_PalElementIcon_C_SetElement::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalElementIcon_C_SetElement, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_PalElementIcon_C_SetElement::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalElementIcon_C_SetElement, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'WBP_PalElementIcon_C_SetElement::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalElementIcon_C_SetElement, CallFunc_Map_Find_Value_1) == 0x000018, "Member 'WBP_PalElementIcon_C_SetElement::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_PalElementIcon_C_SetElement, CallFunc_Map_Find_ReturnValue_1) == 0x000020, "Member 'WBP_PalElementIcon_C_SetElement::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalElementIcon_C_SetElement, K2Node_Select_Default) == 0x000028, "Member 'WBP_PalElementIcon_C_SetElement::K2Node_Select_Default' has a wrong offset!");

}

