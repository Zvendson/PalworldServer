#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_MainMenu_Pal_FoodAmountIcon.WBP_MainMenu_Pal_FoodAmountIcon_C.ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon
// 0x0018 (0x0018 - 0x0000)
struct WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon) == 0x000008, "Wrong alignment on WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon");
static_assert(sizeof(WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon) == 0x000018, "Wrong size on WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon, EntryPoint) == 0x000000, "Member 'WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_MainMenu_Pal_FoodAmountIcon_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmountIcon::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

