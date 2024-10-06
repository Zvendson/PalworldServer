#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.ExecuteUbergraph_WBP_IngameSmesTop
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_2;  // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_3;  // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast_1; // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_levelUpDisplayTime_ImplicitCast; // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop) == 0x000008, "Wrong alignment on WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop");
static_assert(sizeof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop) == 0x0000D0, "Wrong size on WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, EntryPoint) == 0x000000, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000044, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000048, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000050, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000060, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000068, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000071, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, K2Node_CreateDelegate_OutputDelegate_4) == 0x000074, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_CreatePlayAnimationProxyObject_Result_2) == 0x000088, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_CreatePlayAnimationProxyObject_Result_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2) == 0x000090, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_IsValid_ReturnValue_2) == 0x000098, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_CreatePlayAnimationProxyObject_Result_3) == 0x0000A0, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_CreatePlayAnimationProxyObject_Result_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3) == 0x0000A8, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_IsValid_ReturnValue_3) == 0x0000B0, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_GetGameSetting_ReturnValue) == 0x0000B8, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x0000C0, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, CallFunc_RetriggerableDelay_Duration_ImplicitCast_1) == 0x0000C4, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::CallFunc_RetriggerableDelay_Duration_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop, K2Node_VariableSet_levelUpDisplayTime_ImplicitCast) == 0x0000C8, "Member 'WBP_IngameSmesTop_C_ExecuteUbergraph_WBP_IngameSmesTop::K2Node_VariableSet_levelUpDisplayTime_ImplicitCast' has a wrong offset!");

// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.OnPlayerLevelUp
// 0x0004 (0x0004 - 0x0000)
struct WBP_IngameSmesTop_C_OnPlayerLevelUp final
{
public:
	int32                                         DisplayLevel;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameSmesTop_C_OnPlayerLevelUp) == 0x000004, "Wrong alignment on WBP_IngameSmesTop_C_OnPlayerLevelUp");
static_assert(sizeof(WBP_IngameSmesTop_C_OnPlayerLevelUp) == 0x000004, "Wrong size on WBP_IngameSmesTop_C_OnPlayerLevelUp");
static_assert(offsetof(WBP_IngameSmesTop_C_OnPlayerLevelUp, DisplayLevel) == 0x000000, "Member 'WBP_IngameSmesTop_C_OnPlayerLevelUp::DisplayLevel' has a wrong offset!");

// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.OnUpdateTechnologyPoint
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_IngameSmesTop_C_OnUpdateTechnologyPoint final
{
public:
	int32                                         TechnologyPoint;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0070(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
};
static_assert(alignof(WBP_IngameSmesTop_C_OnUpdateTechnologyPoint) == 0x000008, "Wrong alignment on WBP_IngameSmesTop_C_OnUpdateTechnologyPoint");
static_assert(sizeof(WBP_IngameSmesTop_C_OnUpdateTechnologyPoint) == 0x0000A0, "Wrong size on WBP_IngameSmesTop_C_OnUpdateTechnologyPoint");
static_assert(offsetof(WBP_IngameSmesTop_C_OnUpdateTechnologyPoint, TechnologyPoint) == 0x000000, "Member 'WBP_IngameSmesTop_C_OnUpdateTechnologyPoint::TechnologyPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_OnUpdateTechnologyPoint, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_IngameSmesTop_C_OnUpdateTechnologyPoint::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_OnUpdateTechnologyPoint, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WBP_IngameSmesTop_C_OnUpdateTechnologyPoint::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_OnUpdateTechnologyPoint, K2Node_MakeArray_Array) == 0x000060, "Member 'WBP_IngameSmesTop_C_OnUpdateTechnologyPoint::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_OnUpdateTechnologyPoint, CallFunc_GetLocalizedText_ReturnValue) == 0x000070, "Member 'WBP_IngameSmesTop_C_OnUpdateTechnologyPoint::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_OnUpdateTechnologyPoint, CallFunc_Format_ReturnValue) == 0x000088, "Member 'WBP_IngameSmesTop_C_OnUpdateTechnologyPoint::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.PlayUnlockedMap
// 0x0028 (0x0028 - 0x0000)
struct WBP_IngameSmesTop_C_PlayUnlockedMap final
{
public:
	class FName                                   RegionId;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    UnlockMapInfoMsgIdHandle;                          // 0x0008(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                    UnlockMapMsgIdHandle;                              // 0x0018(0x0010)(Edit, BlueprintVisible, NoDestructor)
};
static_assert(alignof(WBP_IngameSmesTop_C_PlayUnlockedMap) == 0x000008, "Wrong alignment on WBP_IngameSmesTop_C_PlayUnlockedMap");
static_assert(sizeof(WBP_IngameSmesTop_C_PlayUnlockedMap) == 0x000028, "Wrong size on WBP_IngameSmesTop_C_PlayUnlockedMap");
static_assert(offsetof(WBP_IngameSmesTop_C_PlayUnlockedMap, RegionId) == 0x000000, "Member 'WBP_IngameSmesTop_C_PlayUnlockedMap::RegionId' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_PlayUnlockedMap, UnlockMapInfoMsgIdHandle) == 0x000008, "Member 'WBP_IngameSmesTop_C_PlayUnlockedMap::UnlockMapInfoMsgIdHandle' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_PlayUnlockedMap, UnlockMapMsgIdHandle) == 0x000018, "Member 'WBP_IngameSmesTop_C_PlayUnlockedMap::UnlockMapMsgIdHandle' has a wrong offset!");

// Function WBP_IngameSmesTop.WBP_IngameSmesTop_C.Setup
// 0x0038 (0x0038 - 0x0000)
struct WBP_IngameSmesTop_C_Setup final
{
public:
	TDelegate<void(int32 TechnologyPoint)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTechnologyData*                     CallFunc_GetLocalTechnologyData_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameSmesTop_C_Setup) == 0x000008, "Wrong alignment on WBP_IngameSmesTop_C_Setup");
static_assert(sizeof(WBP_IngameSmesTop_C_Setup) == 0x000038, "Wrong size on WBP_IngameSmesTop_C_Setup");
static_assert(offsetof(WBP_IngameSmesTop_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_IngameSmesTop_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_Setup, CallFunc_GetLocalTechnologyData_ReturnValue) == 0x000010, "Member 'WBP_IngameSmesTop_C_Setup::CallFunc_GetLocalTechnologyData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_Setup, CallFunc_GetPalmi_ReturnValue) == 0x000018, "Member 'WBP_IngameSmesTop_C_Setup::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_IngameSmesTop_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'WBP_IngameSmesTop_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_Setup, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000028, "Member 'WBP_IngameSmesTop_C_Setup::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'WBP_IngameSmesTop_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameSmesTop_C_Setup, CallFunc_IsValid_ReturnValue_3) == 0x000031, "Member 'WBP_IngameSmesTop_C_Setup::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

}

