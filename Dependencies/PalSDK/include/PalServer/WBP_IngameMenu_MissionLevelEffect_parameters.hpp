#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C.ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect
// 0x0088 (0x0088 - 0x0000)
struct WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_PreCount;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_AftCount;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsMax;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_CanLevelup;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0018(0x0018)()
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0040(0x0014)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0058(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0070(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect) == 0x000008, "Wrong alignment on WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect");
static_assert(sizeof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect) == 0x000088, "Wrong size on WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, Temp_bool_Variable) == 0x000004, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, Temp_byte_Variable) == 0x000005, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, K2Node_CustomEvent_PreCount) == 0x000008, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::K2Node_CustomEvent_PreCount' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, K2Node_CustomEvent_AftCount) == 0x00000C, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::K2Node_CustomEvent_AftCount' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, K2Node_CustomEvent_IsMax) == 0x000010, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::K2Node_CustomEvent_IsMax' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, K2Node_CustomEvent_CanLevelup) == 0x000011, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::K2Node_CustomEvent_CanLevelup' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000018, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, CallFunc_SelectColor_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, K2Node_MakeStruct_SlateColor) == 0x000040, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, K2Node_Select_Default) == 0x000054, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, CallFunc_Conv_IntToText_ReturnValue) == 0x000058, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000070, "Member 'WBP_IngameMenu_MissionLevelEffect_C_ExecuteUbergraph_WBP_IngameMenu_MissionLevelEffect::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_MissionLevelEffect.WBP_IngameMenu_MissionLevelEffect_C.SetEffectInfo
// 0x000C (0x000C - 0x0000)
struct WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo final
{
public:
	int32                                         PreCount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AftCount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMax;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanLevelup;                                        // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo) == 0x000004, "Wrong alignment on WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo");
static_assert(sizeof(WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo) == 0x00000C, "Wrong size on WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo, PreCount) == 0x000000, "Member 'WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo::PreCount' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo, AftCount) == 0x000004, "Member 'WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo::AftCount' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo, IsMax) == 0x000008, "Member 'WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo::IsMax' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo, CanLevelup) == 0x000009, "Member 'WBP_IngameMenu_MissionLevelEffect_C_SetEffectInfo::CanLevelup' has a wrong offset!");

}

