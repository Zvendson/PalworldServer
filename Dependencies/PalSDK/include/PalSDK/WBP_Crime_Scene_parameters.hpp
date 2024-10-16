#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_Crime_Scene.WBP_Crime_Scene_C.ExecuteUbergraph_WBP_Crime_Scene
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue_1;    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_A_ImplicitCast_1;             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast_1; // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene) == 0x000008, "Wrong alignment on WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene");
static_assert(sizeof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene) == 0x0000A0, "Wrong size on WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, EntryPoint) == 0x000000, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, K2Node_CustomEvent_Enable) == 0x000024, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000025, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000028, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00002C, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000038, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000040, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_GetAnimationCurrentTime_ReturnValue_1) == 0x000054, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_GetAnimationCurrentTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000058, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_SelectFloat_ReturnValue_1) == 0x000060, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000068, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000070, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_SelectFloat_A_ImplicitCast) == 0x000080, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast) == 0x000088, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_SelectFloat_A_ImplicitCast_1) == 0x000090, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_SelectFloat_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene, CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast_1) == 0x000098, "Member 'WBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene::CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast_1' has a wrong offset!");

// Function WBP_Crime_Scene.WBP_Crime_Scene_C.SetCrimeSceneEnable
// 0x0001 (0x0001 - 0x0000)
struct WBP_Crime_Scene_C_SetCrimeSceneEnable final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Crime_Scene_C_SetCrimeSceneEnable) == 0x000001, "Wrong alignment on WBP_Crime_Scene_C_SetCrimeSceneEnable");
static_assert(sizeof(WBP_Crime_Scene_C_SetCrimeSceneEnable) == 0x000001, "Wrong size on WBP_Crime_Scene_C_SetCrimeSceneEnable");
static_assert(offsetof(WBP_Crime_Scene_C_SetCrimeSceneEnable, Enable) == 0x000000, "Member 'WBP_Crime_Scene_C_SetCrimeSceneEnable::Enable' has a wrong offset!");

}

