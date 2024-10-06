#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C.ExecuteUbergraph_WBP_IngameMenu_CampLevelUp
// 0x0050 (0x0050 - 0x0000)
struct WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Level;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp) == 0x000008, "Wrong alignment on WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp");
static_assert(sizeof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp) == 0x000050, "Wrong size on WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp");
static_assert(offsetof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp, K2Node_CustomEvent_Level) == 0x000014, "Member 'WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp::K2Node_CustomEvent_Level' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000038, "Member 'WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C.ShowLevelUp
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameMenu_CampLevelUp_C_ShowLevelUp final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_CampLevelUp_C_ShowLevelUp) == 0x000004, "Wrong alignment on WBP_IngameMenu_CampLevelUp_C_ShowLevelUp");
static_assert(sizeof(WBP_IngameMenu_CampLevelUp_C_ShowLevelUp) == 0x000004, "Wrong size on WBP_IngameMenu_CampLevelUp_C_ShowLevelUp");
static_assert(offsetof(WBP_IngameMenu_CampLevelUp_C_ShowLevelUp, Level) == 0x000000, "Member 'WBP_IngameMenu_CampLevelUp_C_ShowLevelUp::Level' has a wrong offset!");

}

