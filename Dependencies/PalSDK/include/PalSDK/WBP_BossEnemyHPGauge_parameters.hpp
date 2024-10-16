#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.ExecuteUbergraph_WBP_BossEnemyHPGauge
// 0x0088 (0x0088 - 0x0000)
struct WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRaidBossPal_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge) == 0x000008, "Wrong alignment on WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge) == 0x000088, "Wrong size on WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, EntryPoint) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_IsRaidBossPal_ReturnValue) == 0x000005, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_IsRaidBossPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000050, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000058, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_IsValid_ReturnValue_1) == 0x000060, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_IsValid_ReturnValue_2) == 0x000061, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_IsValid_ReturnValue_3) == 0x000074, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000078, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_IsValid_ReturnValue_4) == 0x000080, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge, CallFunc_IsValid_ReturnValue_5) == 0x000081, "Member 'WBP_BossEnemyHPGauge_C_ExecuteUbergraph_WBP_BossEnemyHPGauge::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.On Update Level
// 0x000C (0x000C - 0x0000)
struct WBP_BossEnemyHPGauge_C_On_Update_Level final
{
public:
	int32                                         AddLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowLevel;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_On_Update_Level) == 0x000004, "Wrong alignment on WBP_BossEnemyHPGauge_C_On_Update_Level");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_On_Update_Level) == 0x00000C, "Wrong size on WBP_BossEnemyHPGauge_C_On_Update_Level");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_On_Update_Level, AddLevel) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_On_Update_Level::AddLevel' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_On_Update_Level, NowLevel) == 0x000004, "Member 'WBP_BossEnemyHPGauge_C_On_Update_Level::NowLevel' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_On_Update_Level, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_BossEnemyHPGauge_C_On_Update_Level::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.OnDead__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_BossEnemyHPGauge_C_OnDead__DelegateSignature final
{
public:
	class APalCharacter*                          TargetCharacter_0;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_OnDead__DelegateSignature) == 0x000008, "Wrong alignment on WBP_BossEnemyHPGauge_C_OnDead__DelegateSignature");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_OnDead__DelegateSignature) == 0x000008, "Wrong size on WBP_BossEnemyHPGauge_C_OnDead__DelegateSignature");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_OnDead__DelegateSignature, TargetCharacter_0) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_OnDead__DelegateSignature::TargetCharacter_0' has a wrong offset!");

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.OnUpdateElement
// 0x0002 (0x0002 - 0x0000)
struct WBP_BossEnemyHPGauge_C_OnUpdateElement final
{
public:
	EPalElementType                               Type1;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               Type2;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_OnUpdateElement) == 0x000001, "Wrong alignment on WBP_BossEnemyHPGauge_C_OnUpdateElement");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_OnUpdateElement) == 0x000002, "Wrong size on WBP_BossEnemyHPGauge_C_OnUpdateElement");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_OnUpdateElement, Type1) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_OnUpdateElement::Type1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_OnUpdateElement, Type2) == 0x000001, "Member 'WBP_BossEnemyHPGauge_C_OnUpdateElement::Type2' has a wrong offset!");

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.OnUpdateHp
// 0x0020 (0x0020 - 0x0000)
struct WBP_BossEnemyHPGauge_C_OnUpdateHp final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         CallFunc_Convert_FixedPoint64ToInt_ReturnValue;    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Convert_FixedPoint64ToInt_ReturnValue_1;  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_OnUpdateHp) == 0x000008, "Wrong alignment on WBP_BossEnemyHPGauge_C_OnUpdateHp");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_OnUpdateHp) == 0x000020, "Wrong size on WBP_BossEnemyHPGauge_C_OnUpdateHp");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_OnUpdateHp, NowHP) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_OnUpdateHp::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_OnUpdateHp, NowMaxHP) == 0x000008, "Member 'WBP_BossEnemyHPGauge_C_OnUpdateHp::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_OnUpdateHp, CallFunc_Convert_FixedPoint64ToInt_ReturnValue) == 0x000010, "Member 'WBP_BossEnemyHPGauge_C_OnUpdateHp::CallFunc_Convert_FixedPoint64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_OnUpdateHp, CallFunc_Convert_FixedPoint64ToInt_ReturnValue_1) == 0x000014, "Member 'WBP_BossEnemyHPGauge_C_OnUpdateHp::CallFunc_Convert_FixedPoint64ToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_OnUpdateHp, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'WBP_BossEnemyHPGauge_C_OnUpdateHp::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.SetTargetCharacter
// 0x0020 (0x0020 - 0x0000)
struct WBP_BossEnemyHPGauge_C_SetTargetCharacter final
{
public:
	class APalCharacter*                          TargetCharacter_0;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_SetTargetCharacter) == 0x000008, "Wrong alignment on WBP_BossEnemyHPGauge_C_SetTargetCharacter");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_SetTargetCharacter) == 0x000020, "Wrong size on WBP_BossEnemyHPGauge_C_SetTargetCharacter");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetTargetCharacter, TargetCharacter_0) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_SetTargetCharacter::TargetCharacter_0' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetTargetCharacter, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_BossEnemyHPGauge_C_SetTargetCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetTargetCharacter, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000010, "Member 'WBP_BossEnemyHPGauge_C_SetTargetCharacter::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetTargetCharacter, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_BossEnemyHPGauge_C_SetTargetCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetTargetCharacter, CallFunc_IsValid_ReturnValue_2) == 0x000019, "Member 'WBP_BossEnemyHPGauge_C_SetTargetCharacter::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetTargetCharacter, CallFunc_IsValid_ReturnValue_3) == 0x00001A, "Member 'WBP_BossEnemyHPGauge_C_SetTargetCharacter::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.SetupEvents
// 0x0068 (0x0068 - 0x0000)
struct WBP_BossEnemyHPGauge_C_SetupEvents final
{
public:
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 AddLevel, int32 NowLevel)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsTowerBoss_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue_1;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               CallFunc_GetElementType_Element1;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               CallFunc_GetElementType_Element2;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue;            // 0x0050(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0058(0x0008)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_SetupEvents) == 0x000008, "Wrong alignment on WBP_BossEnemyHPGauge_C_SetupEvents");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_SetupEvents) == 0x000068, "Wrong size on WBP_BossEnemyHPGauge_C_SetupEvents");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetDatabaseCharacterParameter_ReturnValue_1) == 0x000008, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetDatabaseCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetCharacterID_ReturnValue) == 0x000010, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetIsTowerBoss_ReturnValue) == 0x000028, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetIsTowerBoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_IsValid_ReturnValue_1) == 0x00003D, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetCharacterID_ReturnValue_1) == 0x000040, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetCharacterID_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetLevel_ReturnValue) == 0x000048, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetElementType_Element1) == 0x00004C, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetElementType_Element1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetElementType_Element2) == 0x00004D, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetElementType_Element2' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetMaxHP_withBuff_ReturnValue) == 0x000050, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetMaxHP_withBuff_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_GetHP_ReturnValue) == 0x000058, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_SetupEvents, CallFunc_IsValid_ReturnValue_2) == 0x000060, "Member 'WBP_BossEnemyHPGauge_C_SetupEvents::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_BossEnemyHPGauge_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_Tick) == 0x000008, "Wrong alignment on WBP_BossEnemyHPGauge_C_Tick");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_Tick) == 0x000048, "Wrong size on WBP_BossEnemyHPGauge_C_Tick");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_BossEnemyHPGauge_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.UpdateText
// 0x0068 (0x0068 - 0x0000)
struct WBP_BossEnemyHPGauge_C_UpdateText final
{
public:
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetPrefixNameMsgId_OutMsgID;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0050(0x0018)()
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_UpdateText) == 0x000008, "Wrong alignment on WBP_BossEnemyHPGauge_C_UpdateText");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_UpdateText) == 0x000068, "Wrong size on WBP_BossEnemyHPGauge_C_UpdateText");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateText, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_UpdateText::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateText, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_BossEnemyHPGauge_C_UpdateText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateText, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'WBP_BossEnemyHPGauge_C_UpdateText::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateText, CallFunc_GetCharacterID_ReturnValue) == 0x00000C, "Member 'WBP_BossEnemyHPGauge_C_UpdateText::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateText, CallFunc_GetNickName_outName) == 0x000018, "Member 'WBP_BossEnemyHPGauge_C_UpdateText::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateText, CallFunc_GetPrefixNameMsgId_OutMsgID) == 0x000028, "Member 'WBP_BossEnemyHPGauge_C_UpdateText::CallFunc_GetPrefixNameMsgId_OutMsgID' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateText, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'WBP_BossEnemyHPGauge_C_UpdateText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateText, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000048, "Member 'WBP_BossEnemyHPGauge_C_UpdateText::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateText, CallFunc_GetLocalizedText_ReturnValue) == 0x000050, "Member 'WBP_BossEnemyHPGauge_C_UpdateText::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

// Function WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C.UpdateVisibility
// 0x0030 (0x0030 - 0x0000)
struct WBP_BossEnemyHPGauge_C_UpdateVisibility final
{
public:
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x0010(0x0008)(NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0020(0x0008)(NoDestructor)
	bool                                          CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BossEnemyHPGauge_C_UpdateVisibility) == 0x000008, "Wrong alignment on WBP_BossEnemyHPGauge_C_UpdateVisibility");
static_assert(sizeof(WBP_BossEnemyHPGauge_C_UpdateVisibility) == 0x000030, "Wrong size on WBP_BossEnemyHPGauge_C_UpdateVisibility");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateVisibility, CallFunc_GetBattleMode_ReturnValue) == 0x000000, "Member 'WBP_BossEnemyHPGauge_C_UpdateVisibility::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_BossEnemyHPGauge_C_UpdateVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateVisibility, CallFunc_GetMainMesh_ReturnValue) == 0x000008, "Member 'WBP_BossEnemyHPGauge_C_UpdateVisibility::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateVisibility, CallFunc_GetMaxHP_ReturnValue) == 0x000010, "Member 'WBP_BossEnemyHPGauge_C_UpdateVisibility::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateVisibility, CallFunc_IsVisible_ReturnValue) == 0x000018, "Member 'WBP_BossEnemyHPGauge_C_UpdateVisibility::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateVisibility, CallFunc_GetHP_ReturnValue) == 0x000020, "Member 'WBP_BossEnemyHPGauge_C_UpdateVisibility::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BossEnemyHPGauge_C_UpdateVisibility, CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue) == 0x000028, "Member 'WBP_BossEnemyHPGauge_C_UpdateVisibility::CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");

}

