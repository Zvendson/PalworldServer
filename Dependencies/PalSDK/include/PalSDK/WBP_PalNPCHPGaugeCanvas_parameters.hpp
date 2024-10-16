#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Add Boss Gauge
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalCharacter* TargetCharacter)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualCharacterParameterByActor_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_BossEnemyHPGauge_C*                CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge) == 0x000048, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge, TargetCharacter) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge, CallFunc_GetIndividualCharacterParameterByActor_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge::CallFunc_GetIndividualCharacterParameterByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge, CallFunc_Create_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Boss_Gauge::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Add New Gauge UI
// 0x0350 (0x0350 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGroupManager*                       CallFunc_GetGroupManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerLocalRecordData*              CallFunc_GetLocalRecordData_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInGuild_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetSaveParameter_ReturnValue;             // 0x0058(0x02A8)(ConstParm)
	bool                                          CallFunc_GetSaveParameterValue_IsPlayer_ReturnValue; // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue_1; // 0x0308(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCharacterIDFromCharacter_ReturnValue;  // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUseBossHPGauge_ReturnValue;            // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue_1;  // 0x0320(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalTribeID                                   CallFunc_GetTribeID_ReturnValue;                   // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x3];                                      // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCharacterID_ReturnValue;               // 0x032C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsPal_ReturnValue;                     // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_Value;                           // 0x0335(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0336(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRarePal_ReturnValue;                    // 0x0337(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0339(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33A[0x6];                                      // 0x033A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0340(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x0349(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI) == 0x000350, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, TargetCharacter) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetGroupManager_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetGroupManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetLocalRecordData_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_IsInGuild_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_IsInGuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetDatabaseCharacterParameter_ReturnValue_1) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetDatabaseCharacterParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, Temp_bool_Variable) == 0x000048, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetSaveParameter_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetSaveParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetSaveParameterValue_IsPlayer_ReturnValue) == 0x000300, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetSaveParameterValue_IsPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetCharacterParameterComponent_ReturnValue_1) == 0x000308, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetCharacterParameterComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetCharacterIDFromCharacter_ReturnValue) == 0x000310, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetCharacterIDFromCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetUseBossHPGauge_ReturnValue) == 0x000318, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetUseBossHPGauge_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_TryGetIndividualParameter_ReturnValue_1) == 0x000320, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_TryGetIndividualParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetTribeID_ReturnValue) == 0x000328, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetTribeID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetCharacterID_ReturnValue) == 0x00032C, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetCharacterID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetIsPal_ReturnValue) == 0x000334, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetIsPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_Map_Find_Value) == 0x000335, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_Map_Find_ReturnValue) == 0x000336, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_IsRarePal_ReturnValue) == 0x000337, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_IsRarePal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_IsValid_ReturnValue_1) == 0x000338, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, Temp_bool_Variable_1) == 0x000339, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_GetPalmi_ReturnValue) == 0x000340, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_IsValid_ReturnValue_2) == 0x000348, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI, CallFunc_IsFriend_ReturnValue) == 0x000349, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_New_Gauge_UI::CallFunc_IsFriend_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Add Player Gauge
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWidget* Widget)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetIndividualCharacterHandleByActor_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerHPGauge_C*                   CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge) == 0x000048, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge, TargetCharacter) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge, CallFunc_GetIndividualCharacterHandleByActor_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge::CallFunc_GetIndividualCharacterHandleByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge, CallFunc_Create_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge, CallFunc_AddChildToCanvas_ReturnValue) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_Add_Player_Gauge::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.AddNormalPalGauge
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWidget* Widget)>        K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalNPCHPGauge_C*                   CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge) == 0x000050, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge, TargetCharacter) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge, CallFunc_Create_ReturnValue) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'WBP_PalNPCHPGaugeCanvas_C_AddNormalPalGauge::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.CloseDelayGauges
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges) == 0x000010, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges, Widget) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges, CallFunc_Array_RemoveItem_ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_CloseDelayGauges::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                 Defender;                                          // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x0000D8, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0, DamageInfo) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0::DamageInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0, Defender) == 0x0000D0, "Member 'WBP_PalNPCHPGaugeCanvas_C_CREATEDELEGATE_PROXYFUNCTION_0::Defender' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas
// 0x0070 (0x0070 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConflict_isConflict;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAiming_IsAiming;                        // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateChildren_ForTick_deltaTime_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas) == 0x000070, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas, EntryPoint) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas, CallFunc_IsConflict_isConflict) == 0x000004, "Member 'WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas::CallFunc_IsConflict_isConflict' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas, K2Node_Event_InDeltaTime) == 0x000048, "Member 'WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas, CallFunc_IsAiming_IsAiming) == 0x000059, "Member 'WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas::CallFunc_IsAiming_IsAiming' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000060, "Member 'WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas, CallFunc_UpdateChildren_ForTick_deltaTime_ImplicitCast) == 0x000068, "Member 'WBP_PalNPCHPGaugeCanvas_C_ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas::CallFunc_UpdateChildren_ForTick_deltaTime_ImplicitCast' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.GetCameraLocationAndForwardVector
// 0x0098 (0x0098 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ForwardVector;                                     // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector) == 0x000098, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector, Location) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector::Location' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector, ForwardVector) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector::ForwardVector' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector, CallFunc_GetCameraRotation_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector, CallFunc_GetCameraLocation_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector, CallFunc_GetForwardVector_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector, CallFunc_Normal_ReturnValue) == 0x000080, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetCameraLocationAndForwardVector::CallFunc_Normal_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.GetDistanceByPlayer
// 0x0070 (0x0070 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer) == 0x000070, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer, TargetActor) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer::TargetActor' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer, ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer, CallFunc_VSize_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGaugeCanvas_C_GetDistanceByPlayer::CallFunc_VSize_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Is Sight Display
// 0x02B8 (0x02B8 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display final
{
public:
	class APalCharacter*                          Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TmpLocation;                                       // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DotST;                                             // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalFlyMeshHeightCtrlComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDefaultMeshLocationZ_ReturnValue;      // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFlying_ReturnValue;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetCameraLocationAndForwardVector_location; // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocationAndForwardVector_forwardVector; // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledSphereRadius_ReturnValue;        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0130(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_GetCameraLocationAndForwardVector_location_1; // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocationAndForwardVector_forwardVector_1; // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0170(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display) == 0x0002B8, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, Actor) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::Actor' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, Return) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::Return' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, TmpLocation) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::TmpLocation' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, DotST) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::DotST' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_GetDefaultMeshLocationZ_ReturnValue) == 0x000054, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_GetDefaultMeshLocationZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_IsFlying_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_IsFlying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_GetCameraLocationAndForwardVector_location) == 0x000060, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_GetCameraLocationAndForwardVector_location' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_GetCameraLocationAndForwardVector_forwardVector) == 0x000078, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_GetCameraLocationAndForwardVector_forwardVector' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_GetMainMesh_ReturnValue) == 0x000090, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000098, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_IsValid_ReturnValue_1) == 0x0000A0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_BreakVector_X) == 0x0000A8, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_BreakVector_Y) == 0x0000B0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_BreakVector_Z) == 0x0000B8, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000C0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_GetScaledSphereRadius_ReturnValue) == 0x0000C8, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_GetScaledSphereRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_MakeVector_ReturnValue) == 0x0000D0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Add_VectorVector_ReturnValue) == 0x0000F0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000108, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_FMin_ReturnValue) == 0x000110, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000118, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, Temp_object_Variable) == 0x000130, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_GetCameraLocationAndForwardVector_location_1) == 0x000140, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_GetCameraLocationAndForwardVector_location_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_GetCameraLocationAndForwardVector_forwardVector_1) == 0x000158, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_GetCameraLocationAndForwardVector_forwardVector_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_LineTraceSingle_OutHit) == 0x000170, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_LineTraceSingle_ReturnValue) == 0x000258, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000260, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Not_PreBool_ReturnValue) == 0x000278, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Normal_ReturnValue) == 0x000280, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Dot_VectorVector_ReturnValue) == 0x000298, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0002A0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0002A8, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0002B0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Is_Sight_Display::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.IsAiming
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_IsAiming final
{
public:
	bool                                          IsAiming_0;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAiming_ReturnValue;                     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_IsAiming) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_IsAiming");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_IsAiming) == 0x000018, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_IsAiming");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsAiming, IsAiming_0) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsAiming::IsAiming_0' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsAiming, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsAiming::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsAiming, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsAiming::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsAiming, CallFunc_IsAiming_ReturnValue) == 0x000011, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsAiming::CallFunc_IsAiming_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.isConflict
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_IsConflict final
{
public:
	bool                                          IsConflict_0;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_IsConflict) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_IsConflict");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_IsConflict) == 0x000018, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_IsConflict");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsConflict, IsConflict_0) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsConflict::IsConflict_0' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsConflict, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsConflict::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsConflict, CallFunc_GetBattleMode_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsConflict::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsConflict, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsConflict::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.IsDisplayDistance
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance final
{
public:
	double                                        Distance;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSameGuild;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisplay;                                         // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance) == 0x000028, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance, Distance) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance::Distance' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance, IsSameGuild) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance::IsSameGuild' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance, IsDisplay) == 0x000009, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance::IsDisplay' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance, CallFunc_SelectFloat_A_ImplicitCast) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayDistance::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.IsDisplayGaugeByPlayerRotation
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisplay;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetDistanceByPlayer_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetDistanceByPlayer_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCameraLocation_ReturnValue;            // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetCameraRotation_ReturnValue;            // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation) == 0x0000E0, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, TargetCharacter) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, IsDisplay) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::IsDisplay' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_GetDistanceByPlayer_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_GetDistanceByPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_GetActiveActorFlag_ReturnValue) == 0x000019, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_GetDistanceByPlayer_ReturnValue_1) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_GetDistanceByPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_GetCameraLocation_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_GetCameraLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_GetCameraRotation_ReturnValue) == 0x000070, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_GetCameraRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000088, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_GetForwardVector_ReturnValue) == 0x0000A0, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_Normal_ReturnValue) == 0x0000B8, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_Dot_VectorVector_ReturnValue) == 0x0000D0, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000D8, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsDisplayGaugeByPlayerRotation::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.IsMimicry
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_IsMimicry final
{
public:
	class APalCharacter*                          Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMimicryMode;                                     // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_IsMimicry) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_IsMimicry");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_IsMimicry) == 0x000020, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_IsMimicry");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsMimicry, Character) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsMimicry::Character' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsMimicry, IsMimicryMode) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsMimicry::IsMimicryMode' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsMimicry, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsMimicry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsMimicry, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsMimicry::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_IsMimicry, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_IsMimicry::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.On Begin Overlap
// 0x0140 (0x0140 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInitialized_ReturnValue;                // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11B[0x1];                                      // 0x011B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* SelfObject)> K2Node_CreateDelegate_OutputDelegate;              // 0x011C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_UIIndividualParameterInitializeWaiter_C* CallFunc_SpawnObject_ReturnValue;                  // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap) == 0x000140, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, OverlappedComponent) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, OtherActor) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::OtherActor' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, OtherComp) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::OtherComp' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, OtherBodyIndex) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, bFromSweep) == 0x00001C, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, SweepResult) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::SweepResult' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, CallFunc_GetPalmi_ReturnValue) == 0x000108, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, K2Node_DynamicCast_AsPal_Character) == 0x000110, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000119, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, CallFunc_IsInitialized_ReturnValue) == 0x00011A, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::CallFunc_IsInitialized_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, K2Node_CreateDelegate_OutputDelegate) == 0x00011C, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, CallFunc_SpawnObject_ReturnValue) == 0x000130, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap, CallFunc_Array_Add_ReturnValue) == 0x000138, "Member 'WBP_PalNPCHPGaugeCanvas_C_On_Begin_Overlap::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnBossDead
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_OnBossDead final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUICharacterHPGaugeBase*             CallFunc_Map_Find_Value;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_OnBossDead) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_OnBossDead");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_OnBossDead) == 0x000020, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_OnBossDead");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnBossDead, TargetCharacter) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnBossDead::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnBossDead, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnBossDead::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnBossDead, CallFunc_Map_Find_Value) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnBossDead::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnBossDead, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnBossDead::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnChangedEquipment
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment final
{
public:
	class UPalItemSlot*                           ItemSlot;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalPlayerEquipItemSlotType                   SlotType;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableTalentCheck;                               // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalUICharacterHPGaugeBase*>     CallFunc_Map_Values_Values;                        // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUICharacterHPGaugeBase*             CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_BossEnemyHPGauge_C*                K2Node_DynamicCast_AsWBP_Boss_Enemy_HPGauge;       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalNPCHPGauge_C*>           CallFunc_Map_Values_Values_1;                      // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalNPCHPGauge_C*                   CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanCheckPalTalentsByInventoryItem_ReturnValue; // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment) == 0x0000A8, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, ItemSlot) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::ItemSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, SlotType) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::SlotType' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, IsEnableTalentCheck) == 0x000009, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::IsEnableTalentCheck' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, Temp_int_Loop_Counter_Variable_1) == 0x00001C, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Map_Values_Values) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, K2Node_DynamicCast_AsWBP_Boss_Enemy_HPGauge) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::K2Node_DynamicCast_AsWBP_Boss_Enemy_HPGauge' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_IsValid_ReturnValue) == 0x000051, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Map_Values_Values_1) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Map_Values_Values_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_GetBindedHandle_targetHandle) == 0x000080, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_IsValid_ReturnValue_2) == 0x000088, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000090, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_CanCheckPalTalentsByInventoryItem_ReturnValue) == 0x000098, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_CanCheckPalTalentsByInventoryItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Array_Length_ReturnValue_1) == 0x00009C, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A0, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnChangedEquipment::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnDamagePopup
// 0x0108 (0x0108 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup final
{
public:
	struct FPalDamageInfo                         DamageInfo;                                        // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                 Actor;                                             // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActorEnableCollision_ReturnValue;      // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PlayerHPGauge_C*                   CallFunc_Map_Find_Value;                           // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalNPCHPGauge_C*                   CallFunc_Map_Find_Value_1;                         // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup) == 0x000108, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, DamageInfo) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::DamageInfo' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, Actor) == 0x0000D0, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::Actor' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, K2Node_DynamicCast_AsPal_Character) == 0x0000D8, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, CallFunc_GetActorEnableCollision_ReturnValue) == 0x0000E1, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::CallFunc_GetActorEnableCollision_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, CallFunc_Map_Find_Value) == 0x0000E8, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, CallFunc_Map_Find_ReturnValue) == 0x0000F0, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, CallFunc_IsValid_ReturnValue) == 0x0000F1, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, CallFunc_Map_Find_Value_1) == 0x0000F8, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, CallFunc_Map_Find_ReturnValue_1) == 0x000100, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup, CallFunc_IsValid_ReturnValue_1) == 0x000101, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnDamagePopup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnEndOverlap
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap) == 0x000020, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap, OverlappedComponent) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap, OtherActor) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap, OtherComp) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap, OtherBodyIndex) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndOverlap::OtherBodyIndex' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnEndPlayBossPal
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUICharacterHPGaugeBase*             CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal) == 0x000040, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal, Actor) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal::Actor' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal, EndPlayReason) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal::EndPlayReason' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal, K2Node_DynamicCast_AsPal_Character) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal, CallFunc_Map_Remove_ReturnValue) == 0x00002C, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal, CallFunc_Map_Find_Value) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayBossPal::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnEndPlayer
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PlayerHPGauge_C*                   CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer) == 0x000040, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer, Actor) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer::Actor' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer, EndPlayReason) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer::EndPlayReason' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer, K2Node_DynamicCast_AsPal_Character) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer, CallFunc_Map_Remove_ReturnValue) == 0x00002C, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer, CallFunc_Map_Find_Value) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayer::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnEndPlayNormalPal
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalNPCHPGauge_C*                   CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal) == 0x000040, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal, Actor) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal::Actor' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal, EndPlayReason) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal::EndPlayReason' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal, K2Node_DynamicCast_AsPal_Character) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal, CallFunc_Map_Remove_ReturnValue) == 0x000029, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal, CallFunc_Map_Find_Value) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnEndPlayNormalPal::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.OnInitializedCharacter
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UIIndividualParameterInitializeWaiter_C* SelfObject;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter) == 0x000018, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter, TargetCharacter) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter, SelfObject) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter::SelfObject' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter, CallFunc_Array_RemoveItem_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_OnInitializedCharacter::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Remove Children
// 0x0220 (0x0220 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Remove_Children final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_Map_Keys_Keys;                            // 0x0018(0x0010)(ReferenceParm)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_ObjectToText_ReturnValue;            // 0x0040(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_Map_Remove_ReturnValue;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	class UPalUICharacterHPGaugeBase*             CallFunc_Map_Find_Value;                           // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetDistanceByPlayer_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* Actor, EEndPlayReason EndPlayReason)> K2Node_CreateDelegate_OutputDelegate;              // 0x0114(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_Map_Keys_Keys_1;                          // 0x0128(0x0010)(ReferenceParm)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_Array_Get_Item_1;                         // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_ObjectToText_ReturnValue_1;          // 0x0150(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0170(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01D0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	double                                        CallFunc_GetDistanceByPlayer_ReturnValue_1;        // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Remove_ReturnValue_1;                 // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20A[0x6];                                      // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalNPCHPGauge_C*                   CallFunc_Map_Find_Value_1;                         // 0x0210(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Remove_Children");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children) == 0x000220, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Remove_Children");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, Temp_int_Loop_Counter_Variable_1) == 0x00000C, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Map_Keys_Keys) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Conv_ObjectToText_ReturnValue) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Conv_ObjectToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, K2Node_MakeArray_Array) == 0x0000B0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Map_Remove_ReturnValue) == 0x0000C0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Map_Find_Value) == 0x0000E0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Map_Find_ReturnValue) == 0x0000E8, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_IsValid_ReturnValue) == 0x000100, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_GetDistanceByPlayer_ReturnValue) == 0x000108, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_GetDistanceByPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000110, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, K2Node_CreateDelegate_OutputDelegate) == 0x000114, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Map_Keys_Keys_1) == 0x000128, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000138, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Array_Get_Item_1) == 0x000140, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Array_Length_ReturnValue_1) == 0x000148, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Conv_ObjectToText_ReturnValue_1) == 0x000150, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Conv_ObjectToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Less_IntInt_ReturnValue_1) == 0x000168, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, K2Node_MakeStruct_FormatArgumentData_1) == 0x000170, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, K2Node_MakeArray_Array_1) == 0x0001C0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Format_ReturnValue_1) == 0x0001D0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_IsValid_ReturnValue_1) == 0x0001E8, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0001F0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_GetDistanceByPlayer_ReturnValue_1) == 0x000200, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_GetDistanceByPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000208, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Map_Remove_ReturnValue_1) == 0x000209, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Map_Remove_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Map_Find_Value_1) == 0x000210, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Remove_Children, CallFunc_Map_Find_ReturnValue_1) == 0x000218, "Member 'WBP_PalNPCHPGaugeCanvas_C_Remove_Children::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.SetGaugeVisibility
// 0x0070 (0x0070 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          DelayClose;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Close;                                             // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetDistanceByPlayer_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActiveActorFlag_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PlayerHPGauge_C*                   K2Node_DynamicCast_AsWBP_Player_HPGauge;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalNPCHPGauge_C*                   K2Node_DynamicCast_AsWBP_Pal_NPCHPGauge;           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility) == 0x000070, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, Widget) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, TargetActor) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::TargetActor' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, DelayClose) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::DelayClose' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, Close) == 0x000011, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::Close' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, K2Node_DynamicCast_AsPal_Character) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, CallFunc_GetDistanceByPlayer_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::CallFunc_GetDistanceByPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, CallFunc_GetActiveActorFlag_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::CallFunc_GetActiveActorFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, CallFunc_FTrunc_ReturnValue) == 0x000034, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, CallFunc_Multiply_IntInt_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, CallFunc_Array_RemoveItem_ReturnValue) == 0x000048, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, CallFunc_Array_Contains_ReturnValue) == 0x000049, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, CallFunc_Array_Contains_ReturnValue_1) == 0x00004A, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, K2Node_DynamicCast_AsWBP_Player_HPGauge) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::K2Node_DynamicCast_AsWBP_Player_HPGauge' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, CallFunc_Array_Add_ReturnValue) == 0x00005C, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, K2Node_DynamicCast_AsWBP_Pal_NPCHPGauge) == 0x000060, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::K2Node_DynamicCast_AsWBP_Pal_NPCHPGauge' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'WBP_PalNPCHPGaugeCanvas_C_SetGaugeVisibility::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Setup
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Setup final
{
public:
	TDelegate<void(struct FPalDamageInfo& DamageInfo, class AActor* Defender)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamagePopUpManager*                 CallFunc_GetDamagePopUpManager_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CallFunc_TryGetItemSlotFromEquipmentType_OutSlot;  // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalItemSlot* ItemSlot, EPalPlayerEquipItemSlotType SlotType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CallFunc_AddComponentByClass_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast; // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_DisplayGaugeDistance_ImplicitCast; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_DisplayGaugeRange_Sight_ImplicitCast; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Setup) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Setup");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Setup) == 0x0000B8, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Setup");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_GetDamagePopUpManager_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_GetDamagePopUpManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_TryGetItemSlotFromEquipmentType_OutSlot) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_TryGetItemSlotFromEquipmentType_OutSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, K2Node_CreateDelegate_OutputDelegate_4) == 0x000064, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_GetPalmi_ReturnValue) == 0x000078, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_AddComponentByClass_ReturnValue) == 0x000080, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_AddComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x000088, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_GetGameSetting_ReturnValue) == 0x000090, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000098, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast) == 0x0000A0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, K2Node_VariableSet_DisplayGaugeDistance_ImplicitCast) == 0x0000A8, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::K2Node_VariableSet_DisplayGaugeDistance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Setup, K2Node_VariableSet_DisplayGaugeRange_Sight_ImplicitCast) == 0x0000B0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Setup::K2Node_VariableSet_DisplayGaugeRange_Sight_ImplicitCast' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Tick) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Tick");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Tick) == 0x000048, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Tick");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Try Process DIsplay Gauge
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerHPGauge_C*                   CallFunc_Map_Find_Value;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUICharacterHPGaugeBase*             CallFunc_Map_Find_Value_1;                         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalNPCHPGauge_C*                   CallFunc_Map_Find_Value_2;                         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge) == 0x000038, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge, TargetCharacter) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge::TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge, CallFunc_IsDead_ReturnValue) == 0x000011, "Member 'WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge, CallFunc_Map_Find_Value_1) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge, CallFunc_Map_Find_ReturnValue_1) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge, CallFunc_Map_Find_Value_2) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge, CallFunc_Map_Find_ReturnValue_2) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_Try_Process_DIsplay_Gauge::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Update Visibility Pal HPGauges
// 0x00A8 (0x00A8 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges final
{
public:
	bool                                          InSight;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TmpDistance_PalHpGauge;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     TraceResult;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class UWBP_PalNPCHPGauge_C*                   TmpNowProcessingWidget;                            // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          TmpNowProcessingCharacter;                         // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMimicry_IsMimicryMode;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Sight_Display_Return;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetActorEnableCollision_ReturnValue;      // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetTrainerPlayer_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetDistanceByPlayer_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDisplayDistance_isDisplay;              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_Map_Keys_Keys;                            // 0x0078(0x0010)(ReferenceParm)
	class UWBP_PalNPCHPGauge_C*                   CallFunc_Map_Find_Value;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges) == 0x0000A8, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, InSight) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::InSight' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, TmpDistance_PalHpGauge) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::TmpDistance_PalHpGauge' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, TraceResult) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::TraceResult' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, TmpNowProcessingWidget) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::TmpNowProcessingWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, TmpNowProcessingCharacter) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::TmpNowProcessingCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_IsMimicry_IsMimicryMode) == 0x000034, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_IsMimicry_IsMimicryMode' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Is_Sight_Display_Return) == 0x00003C, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Is_Sight_Display_Return' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, Temp_int_Array_Index_Variable) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_GetBattleMode_ReturnValue) == 0x000044, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_IsDead_ReturnValue) == 0x000045, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Not_PreBool_ReturnValue) == 0x000046, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_GetActorEnableCollision_ReturnValue) == 0x000047, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_GetActorEnableCollision_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_BooleanAND_ReturnValue) == 0x000048, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Not_PreBool_ReturnValue_1) == 0x000049, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_BooleanOR_ReturnValue) == 0x00004A, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_GetTrainerPlayer_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_GetTrainerPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_GetDistanceByPlayer_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_GetDistanceByPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_IsDisplayDistance_isDisplay) == 0x000061, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_IsDisplayDistance_isDisplay' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Map_Keys_Keys) == 0x000078, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Map_Find_Value) == 0x000088, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Map_Find_ReturnValue) == 0x000090, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Array_Get_Item) == 0x000098, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges, CallFunc_Less_IntInt_ReturnValue) == 0x0000A4, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Pal_HPGauges::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.Update Visibility Player Gauges
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges final
{
public:
	TArray<struct FHitResult>                     TraceResult;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class UWBP_PlayerHPGauge_C*                   TmpNowProcessingWidget;                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          TmpNowProcessingCharacter;                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APalCharacter*>                  CallFunc_Map_Keys_Keys;                            // 0x0040(0x0010)(ReferenceParm)
	bool                                          CallFunc_Is_Sight_Display_Return;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PlayerHPGauge_C*                   CallFunc_Map_Find_Value;                           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetDistanceByPlayer_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDisplayDistance_isDisplay;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetPlayerState_ReturnValue;               // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerDying_ReturnValue;                // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerCompletelyDead_ReturnValue;       // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges) == 0x0000A0, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, TraceResult) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::TraceResult' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, TmpNowProcessingWidget) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::TmpNowProcessingWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, TmpNowProcessingCharacter) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::TmpNowProcessingCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_GetPalmi_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_IsFriend_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_IsFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_Map_Keys_Keys) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_Is_Sight_Display_Return) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_Is_Sight_Display_Return' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_Array_Get_Item) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_Map_Find_Value) == 0x000068, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_Map_Find_ReturnValue) == 0x000070, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_GetDistanceByPlayer_ReturnValue) == 0x000078, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_GetDistanceByPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000080, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_IsDisplayDistance_isDisplay) == 0x000088, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_IsDisplayDistance_isDisplay' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_IsValid_ReturnValue) == 0x000089, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_GetPlayerState_ReturnValue) == 0x000090, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_GetPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_Not_PreBool_ReturnValue) == 0x000099, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_BooleanAND_ReturnValue) == 0x00009A, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_IsPlayerDying_ReturnValue) == 0x00009B, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_IsPlayerDying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges, CallFunc_IsPlayerCompletelyDead_ReturnValue) == 0x00009C, "Member 'WBP_PalNPCHPGaugeCanvas_C_Update_Visibility_Player_Gauges::CallFunc_IsPlayerCompletelyDead_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.UpdateChildren_ForTick
// 0x0168 (0x0168 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             NewLocalVar_1;                                     // 0x0008(0x00E8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          NewLocalVar_0;                                     // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Distance;                                          // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PlayerHPGauge_C*>           CallFunc_Map_Values_Values;                        // 0x0118(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PlayerHPGauge_C*                   CallFunc_Array_Get_Item;                           // 0x0130(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalNPCHPGauge_C*>           CallFunc_Map_Values_Values_1;                      // 0x0140(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalNPCHPGauge_C*                   CallFunc_Array_Get_Item_1;                         // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick) == 0x000168, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, DeltaTime) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, NewLocalVar_1) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, NewLocalVar_0) == 0x0000F0, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, Distance) == 0x0000F8, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::Distance' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, Temp_int_Array_Index_Variable) == 0x000100, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, Temp_int_Loop_Counter_Variable) == 0x000104, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Add_IntInt_ReturnValue) == 0x000108, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, Temp_int_Array_Index_Variable_1) == 0x00010C, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, Temp_int_Loop_Counter_Variable_1) == 0x000110, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Map_Values_Values) == 0x000118, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Add_IntInt_ReturnValue_1) == 0x000128, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Array_Get_Item) == 0x000130, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Array_Length_ReturnValue) == 0x000138, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Less_IntInt_ReturnValue) == 0x00013C, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Map_Values_Values_1) == 0x000140, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Map_Values_Values_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Array_Length_ReturnValue_1) == 0x000150, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Array_Get_Item_1) == 0x000158, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick, CallFunc_Less_IntInt_ReturnValue_1) == 0x000160, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateChildren_ForTick::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C.UpdateVisibility_BossGauge
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge final
{
public:
	class APalCharacter*                          NowUniqueBossCharacter;                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          NowWorkBossCharacter;                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_Map_Keys_Keys;                            // 0x0028(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUICharacterHPGaugeBase*             CallFunc_Map_Find_Value;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStaticCharacterParameterComponent*  CallFunc_GetComponentByClass_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTowerBossPal_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRaidBossPal_ReturnValue;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Sight_Display_Return;                  // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x0080(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0088(0x0008)(NoDestructor)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue; // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B[0x1];                                       // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  CallFunc_Map_Keys_Keys_1;                          // 0x00A0(0x0010)(ReferenceParm)
	class UPalUICharacterHPGaugeBase*             CallFunc_Map_Find_Value_1;                         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_Array_Get_Item_1;                         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge) == 0x000008, "Wrong alignment on WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge");
static_assert(sizeof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge) == 0x0000D0, "Wrong size on WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, NowUniqueBossCharacter) == 0x000000, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::NowUniqueBossCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, NowWorkBossCharacter) == 0x000008, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::NowWorkBossCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, Temp_bool_True_if_break_was_hit_Variable) == 0x000018, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, Temp_int_Array_Index_Variable_1) == 0x000024, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Map_Keys_Keys) == 0x000028, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000048, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Map_Find_Value) == 0x000050, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Map_Find_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_GetBattleMode_ReturnValue) == 0x000060, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_GetComponentByClass_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_IsTowerBossPal_ReturnValue) == 0x000070, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_IsTowerBossPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_IsRaidBossPal_ReturnValue) == 0x000071, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_IsRaidBossPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Is_Sight_Display_Return) == 0x000072, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Is_Sight_Display_Return' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_BooleanOR_ReturnValue) == 0x000073, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, Temp_int_Loop_Counter_Variable_1) == 0x000074, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_GetMaxHP_ReturnValue) == 0x000080, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_GetHP_ReturnValue) == 0x000088, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_GetMainMesh_ReturnValue) == 0x000090, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue) == 0x000098, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Less_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_IsVisible_ReturnValue) == 0x000099, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Less_IntInt_ReturnValue) == 0x00009A, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Add_IntInt_ReturnValue_1) == 0x00009C, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Map_Keys_Keys_1) == 0x0000A0, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Map_Find_Value_1) == 0x0000B0, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Map_Find_ReturnValue_1) == 0x0000B8, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Array_Get_Item_1) == 0x0000C0, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Array_Length_ReturnValue_1) == 0x0000C8, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000CC, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge, CallFunc_BooleanAND_ReturnValue) == 0x0000CD, "Member 'WBP_PalNPCHPGaugeCanvas_C_UpdateVisibility_BossGauge::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

