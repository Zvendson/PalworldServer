#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PlayerUI.WBP_PlayerUI_C.CalcCompassRotation
// 0x0020 (0x0020 - 0x0000)
struct WBP_PlayerUI_C_CalcCompassRotation final
{
public:
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_CalcCompassRotation) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_CalcCompassRotation");
static_assert(sizeof(WBP_PlayerUI_C_CalcCompassRotation) == 0x000020, "Wrong size on WBP_PlayerUI_C_CalcCompassRotation");
static_assert(offsetof(WBP_PlayerUI_C_CalcCompassRotation, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000000, "Member 'WBP_PlayerUI_C_CalcCompassRotation::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CalcCompassRotation, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_CalcCompassRotation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CalcCompassRotation, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_CalcCompassRotation::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CalcCompassRotation, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_PlayerUI_C_CalcCompassRotation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.CheckArmorDurability
// 0x0088 (0x0088 - 0x0000)
struct WBP_PlayerUI_C_CheckArmorDurability final
{
public:
	bool                                          IsAnyArmorBreak;                                   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemContainer*                      CallFunc_TryGetContainerFromInventoryType_OutContainer; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetContainerFromInventoryType_ReturnValue; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CallFunc_Get_ReturnValue;                          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Num_ReturnValue;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDynamicItemDataBase*                CallFunc_TryGetDynamicItemData_OutDynamicItemData; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetDynamicItemData_ReturnValue;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface; // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDurability_ReturnValue;                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxDurability_ReturnValue;             // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_CheckArmorDurability) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_CheckArmorDurability");
static_assert(sizeof(WBP_PlayerUI_C_CheckArmorDurability) == 0x000088, "Wrong size on WBP_PlayerUI_C_CheckArmorDurability");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, IsAnyArmorBreak) == 0x000000, "Member 'WBP_PlayerUI_C_CheckArmorDurability::IsAnyArmorBreak' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, Temp_bool_Variable) == 0x000001, "Member 'WBP_PlayerUI_C_CheckArmorDurability::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, Temp_int_Variable) == 0x000004, "Member 'WBP_PlayerUI_C_CheckArmorDurability::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_TryGetContainerFromInventoryType_OutContainer) == 0x000018, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_TryGetContainerFromInventoryType_OutContainer' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_TryGetContainerFromInventoryType_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_TryGetContainerFromInventoryType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_Get_ReturnValue) == 0x000028, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_Num_ReturnValue) == 0x000030, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_Num_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_TryGetDynamicItemData_OutDynamicItemData) == 0x000038, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_TryGetDynamicItemData_OutDynamicItemData' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_TryGetDynamicItemData_ReturnValue) == 0x000040, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_TryGetDynamicItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, K2Node_DynamicCast_AsPal_Object_Durability_Interface) == 0x000050, "Member 'WBP_PlayerUI_C_CheckArmorDurability::K2Node_DynamicCast_AsPal_Object_Durability_Interface' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_PlayerUI_C_CheckArmorDurability::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_GetDurability_ReturnValue) == 0x000064, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_GetDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000068, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_GetMaxDurability_ReturnValue) == 0x00006C, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_GetMaxDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000070, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckArmorDurability, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000080, "Member 'WBP_PlayerUI_C_CheckArmorDurability::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.CheckAutoUIHide
// 0x0038 (0x0038 - 0x0000)
struct WBP_PlayerUI_C_CheckAutoUIHide final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerWeaponInfoShouldShow_isShow;      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Player_Gauge_Should_Show_isShow;       // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Should_Check_UIAuto_Hide_shouldCheck;     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_CheckAutoUIHide) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_CheckAutoUIHide");
static_assert(sizeof(WBP_PlayerUI_C_CheckAutoUIHide) == 0x000038, "Wrong size on WBP_PlayerUI_C_CheckAutoUIHide");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, DeltaTime) == 0x000000, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::DeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_GetBattleMode_ReturnValue) == 0x000011, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_IsPlayerWeaponInfoShouldShow_isShow) == 0x000021, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_IsPlayerWeaponInfoShouldShow_isShow' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_Is_Player_Gauge_Should_Show_isShow) == 0x000022, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_Is_Player_Gauge_Should_Show_isShow' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1) == 0x000023, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckAutoUIHide, CallFunc_Should_Check_UIAuto_Hide_shouldCheck) == 0x000030, "Member 'WBP_PlayerUI_C_CheckAutoUIHide::CallFunc_Should_Check_UIAuto_Hide_shouldCheck' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.CheckWeaponDurability
// 0x0058 (0x0058 - 0x0000)
struct WBP_PlayerUI_C_CheckWeaponDurability final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalWeaponBase*                         CallFunc_GetHasWeapon_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDynamicWeaponItemDataBase*          CallFunc_TryGetDynamicWeaponData_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface; // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMaxDurability_ReturnValue;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDurability_ReturnValue;                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_47[0x1];                                       // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_CheckWeaponDurability) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_CheckWeaponDurability");
static_assert(sizeof(WBP_PlayerUI_C_CheckWeaponDurability) == 0x000058, "Wrong size on WBP_PlayerUI_C_CheckWeaponDurability");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_GetPalmi_ReturnValue) == 0x000000, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_GetHasWeapon_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_GetHasWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_TryGetDynamicWeaponData_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_TryGetDynamicWeaponData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_IsValid_ReturnValue_2) == 0x000020, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_IsValid_ReturnValue_3) == 0x000021, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, K2Node_DynamicCast_AsPal_Object_Durability_Interface) == 0x000028, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::K2Node_DynamicCast_AsPal_Object_Durability_Interface' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_GetMaxDurability_ReturnValue) == 0x00003C, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_GetMaxDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_GetDurability_ReturnValue) == 0x000040, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_GetDurability_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000044, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000045, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_BooleanAND_ReturnValue) == 0x000046, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_CheckWeaponDurability, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000050, "Member 'WBP_PlayerUI_C_CheckWeaponDurability::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.ExecuteUbergraph_WBP_PlayerUI
// 0x0178 (0x0178 - 0x0000)
struct WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F[0x1];                                        // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalTechnologyData*                     CallFunc_GetLocalTechnologyData_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerLocalRecordData*              CallFunc_GetLocalRecordData_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0098(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x00E0(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNewUnlockedBuild_Radial_ReturnValue;    // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       K2Node_CustomEvent_NewParam2;                      // 0x00FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NewParam;                       // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                       CallFunc_GetPalDebugSetting_ReturnValue;           // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  K2Node_CustomEvent_CrimeInstance_1;                // 0x011C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_CustomEvent_CrimeInstance;                  // 0x012C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          K2Node_CustomEvent_CriminalHandle_1;               // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_CustomEvent_CrimeIds;                       // 0x0148(0x0010)(ConstParm, ReferenceParm)
	class UPalIndividualCharacterHandle*          K2Node_CustomEvent_CriminalHandle;                 // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_TargetCharacter;                // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_CheckAutoUIHide_deltaTime_ImplicitCast;   // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_hideUITime_ImplicitCast;        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI");
static_assert(sizeof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI) == 0x000178, "Wrong size on WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, EntryPoint) == 0x000000, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, Temp_bool_True_if_break_was_hit_Variable) == 0x000004, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, Temp_bool_IsClosed_Variable) == 0x00000D, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, Temp_bool_Has_Been_Initd_Variable) == 0x00000E, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_PlayAnimation_ReturnValue_3) == 0x000028, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_PlayAnimation_ReturnValue_4) == 0x000030, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000050, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000058, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_GetLocalTechnologyData_ReturnValue) == 0x000068, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_GetLocalTechnologyData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_PlayAnimation_ReturnValue_5) == 0x000070, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000078, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_GetLocalRecordData_ReturnValue) == 0x000088, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_IsValid_ReturnValue_2) == 0x000090, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_Event_MyGeometry) == 0x000098, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_Event_InDeltaTime) == 0x0000D8, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_Map_Keys_Keys) == 0x0000E0, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_Array_Length_ReturnValue) == 0x0000F8, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_IsNewUnlockedBuild_Radial_ReturnValue) == 0x0000FC, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_IsNewUnlockedBuild_Radial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_Less_IntInt_ReturnValue) == 0x0000FD, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_BooleanAND_ReturnValue) == 0x0000FE, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_CustomEvent_NewParam2) == 0x0000FF, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_CustomEvent_NewParam2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_CustomEvent_NewParam) == 0x000100, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_GetGameSetting_ReturnValue) == 0x000108, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_GetPalDebugSetting_ReturnValue) == 0x000110, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_GetPalDebugSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_IsValid_ReturnValue_3) == 0x000118, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_CustomEvent_CrimeInstance_1) == 0x00011C, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_CustomEvent_CrimeInstance_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_CustomEvent_CrimeInstance) == 0x00012C, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_CustomEvent_CrimeInstance' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_CustomEvent_CriminalHandle_1) == 0x000140, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_CustomEvent_CriminalHandle_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_CustomEvent_CrimeIds) == 0x000148, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_CustomEvent_CrimeIds' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_CustomEvent_CriminalHandle) == 0x000158, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_CustomEvent_CriminalHandle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_CustomEvent_TargetCharacter) == 0x000160, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_CustomEvent_TargetCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, CallFunc_CheckAutoUIHide_deltaTime_ImplicitCast) == 0x000168, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::CallFunc_CheckAutoUIHide_deltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI, K2Node_VariableSet_hideUITime_ImplicitCast) == 0x000170, "Member 'WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI::K2Node_VariableSet_hideUITime_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.InitializeWorldMapTexture
// 0x0040 (0x0040 - 0x0000)
struct WBP_PlayerUI_C_InitializeWorldMapTexture final
{
public:
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalWorldMapUIData*                     CallFunc_GetLocalWorldMapData_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvas*                                CallFunc_BeginDrawCanvasToRenderTarget_Canvas;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_BeginDrawCanvasToRenderTarget_Size;       // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext             CallFunc_BeginDrawCanvasToRenderTarget_Context;    // 0x0030(0x0008)(NoDestructor)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_InitializeWorldMapTexture) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_InitializeWorldMapTexture");
static_assert(sizeof(WBP_PlayerUI_C_InitializeWorldMapTexture) == 0x000040, "Wrong size on WBP_PlayerUI_C_InitializeWorldMapTexture");
static_assert(offsetof(WBP_PlayerUI_C_InitializeWorldMapTexture, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000000, "Member 'WBP_PlayerUI_C_InitializeWorldMapTexture::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_InitializeWorldMapTexture, CallFunc_GetLocalWorldMapData_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_InitializeWorldMapTexture::CallFunc_GetLocalWorldMapData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_InitializeWorldMapTexture, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_InitializeWorldMapTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_InitializeWorldMapTexture, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_PlayerUI_C_InitializeWorldMapTexture::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_InitializeWorldMapTexture, CallFunc_BeginDrawCanvasToRenderTarget_Canvas) == 0x000018, "Member 'WBP_PlayerUI_C_InitializeWorldMapTexture::CallFunc_BeginDrawCanvasToRenderTarget_Canvas' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_InitializeWorldMapTexture, CallFunc_BeginDrawCanvasToRenderTarget_Size) == 0x000020, "Member 'WBP_PlayerUI_C_InitializeWorldMapTexture::CallFunc_BeginDrawCanvasToRenderTarget_Size' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_InitializeWorldMapTexture, CallFunc_BeginDrawCanvasToRenderTarget_Context) == 0x000030, "Member 'WBP_PlayerUI_C_InitializeWorldMapTexture::CallFunc_BeginDrawCanvasToRenderTarget_Context' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_InitializeWorldMapTexture, CallFunc_GetGameSetting_ReturnValue) == 0x000038, "Member 'WBP_PlayerUI_C_InitializeWorldMapTexture::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.Is Player Gauge Should Show
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerUI_C_Is_Player_Gauge_Should_Show final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_Is_Player_Gauge_Should_Show) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_Is_Player_Gauge_Should_Show");
static_assert(sizeof(WBP_PlayerUI_C_Is_Player_Gauge_Should_Show) == 0x000018, "Wrong size on WBP_PlayerUI_C_Is_Player_Gauge_Should_Show");
static_assert(offsetof(WBP_PlayerUI_C_Is_Player_Gauge_Should_Show, IsShow) == 0x000000, "Member 'WBP_PlayerUI_C_Is_Player_Gauge_Should_Show::IsShow' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Is_Player_Gauge_Should_Show, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WBP_PlayerUI_C_Is_Player_Gauge_Should_Show::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Is_Player_Gauge_Should_Show, CallFunc_Not_PreBool_ReturnValue_1) == 0x000002, "Member 'WBP_PlayerUI_C_Is_Player_Gauge_Should_Show::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Is_Player_Gauge_Should_Show, CallFunc_Not_PreBool_ReturnValue_2) == 0x000003, "Member 'WBP_PlayerUI_C_Is_Player_Gauge_Should_Show::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Is_Player_Gauge_Should_Show, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_Is_Player_Gauge_Should_Show::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Is_Player_Gauge_Should_Show, CallFunc_BooleanOR_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_Is_Player_Gauge_Should_Show::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Is_Player_Gauge_Should_Show, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_PlayerUI_C_Is_Player_Gauge_Should_Show::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.IsPalGaugeShouldShow
// 0x0058 (0x0058 - 0x0000)
struct WBP_PlayerUI_C_IsPalGaugeShouldShow final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterHandle*>  CallFunc_GetAllIndividualHandle_OutArray;          // 0x0020(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHPFullRecovered_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_IsPalGaugeShouldShow) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_IsPalGaugeShouldShow");
static_assert(sizeof(WBP_PlayerUI_C_IsPalGaugeShouldShow) == 0x000058, "Wrong size on WBP_PlayerUI_C_IsPalGaugeShouldShow");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, IsShow) == 0x000000, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::IsShow' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x000010, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_GetAllIndividualHandle_OutArray) == 0x000020, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_GetAllIndividualHandle_OutArray' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000048, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_IsValid_ReturnValue_2) == 0x000050, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_IsHPFullRecovered_ReturnValue) == 0x000051, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_IsHPFullRecovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPalGaugeShouldShow, CallFunc_Not_PreBool_ReturnValue) == 0x000052, "Member 'WBP_PlayerUI_C_IsPalGaugeShouldShow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.IsPlayerWeaponInfoShouldShow
// 0x0028 (0x0028 - 0x0000)
struct WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow final
{
public:
	bool                                          IsShow;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalWeaponBase*                         CallFunc_GetHasWeapon_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFullMagazine_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow");
static_assert(sizeof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow) == 0x000028, "Wrong size on WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, IsShow) == 0x000000, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::IsShow' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, CallFunc_GetHasWeapon_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::CallFunc_GetHasWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, CallFunc_IsValid_ReturnValue_2) == 0x000020, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, CallFunc_IsFullMagazine_ReturnValue) == 0x000021, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::CallFunc_IsFullMagazine_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, CallFunc_Not_PreBool_ReturnValue_1) == 0x000022, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow, CallFunc_BooleanOR_ReturnValue) == 0x000023, "Member 'WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.On Change Loadout
// 0x0020 (0x0020 - 0x0000)
struct WBP_PlayerUI_C_On_Change_Loadout final
{
public:
	EPalPlayerInventoryType                       InventoryType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_0;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_On_Change_Loadout) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_On_Change_Loadout");
static_assert(sizeof(WBP_PlayerUI_C_On_Change_Loadout) == 0x000020, "Wrong size on WBP_PlayerUI_C_On_Change_Loadout");
static_assert(offsetof(WBP_PlayerUI_C_On_Change_Loadout, InventoryType) == 0x000000, "Member 'WBP_PlayerUI_C_On_Change_Loadout::InventoryType' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Change_Loadout, Index_0) == 0x000004, "Member 'WBP_PlayerUI_C_On_Change_Loadout::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Change_Loadout, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_On_Change_Loadout::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Change_Loadout, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000009, "Member 'WBP_PlayerUI_C_On_Change_Loadout::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Change_Loadout, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_On_Change_Loadout::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Change_Loadout, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_On_Change_Loadout::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Change_Loadout, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'WBP_PlayerUI_C_On_Change_Loadout::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.On Update Player SP
// 0x0040 (0x0040 - 0x0000)
struct WBP_PlayerUI_C_On_Update_Player_SP final
{
public:
	struct FFixedPoint64                          NowSP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxSP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          IsOverHeated;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue; // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_On_Update_Player_SP) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_On_Update_Player_SP");
static_assert(sizeof(WBP_PlayerUI_C_On_Update_Player_SP) == 0x000040, "Wrong size on WBP_PlayerUI_C_On_Update_Player_SP");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, NowSP) == 0x000000, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::NowSP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, NowMaxSP) == 0x000008, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::NowMaxSP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, IsOverHeated) == 0x000010, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::IsOverHeated' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue) == 0x000012, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000014, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, CallFunc_BooleanAND_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x00001C, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000030, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Player_SP, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_PlayerUI_C_On_Update_Player_SP::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.On Update Ride Character SP
// 0x0040 (0x0040 - 0x0000)
struct WBP_PlayerUI_C_On_Update_Ride_Character_SP final
{
public:
	struct FFixedPoint64                          NowSP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxSP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          IsOverHeated;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue; // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0018(0x0008)(NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetPercent_percent_ImplicitCast;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_On_Update_Ride_Character_SP) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_On_Update_Ride_Character_SP");
static_assert(sizeof(WBP_PlayerUI_C_On_Update_Ride_Character_SP) == 0x000040, "Wrong size on WBP_PlayerUI_C_On_Update_Ride_Character_SP");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, NowSP) == 0x000000, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::NowSP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, NowMaxSP) == 0x000008, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::NowMaxSP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, IsOverHeated) == 0x000010, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::IsOverHeated' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue) == 0x000012, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000024, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, CallFunc_SetPercent_percent_ImplicitCast) == 0x000030, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Ride_Character_SP, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_PlayerUI_C_On_Update_Ride_Character_SP::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.On Update Shield Max HP
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerUI_C_On_Update_Shield_Max_HP final
{
public:
	struct FFixedPoint64                          NowShieldMaxHP;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_On_Update_Shield_Max_HP) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_On_Update_Shield_Max_HP");
static_assert(sizeof(WBP_PlayerUI_C_On_Update_Shield_Max_HP) == 0x000018, "Wrong size on WBP_PlayerUI_C_On_Update_Shield_Max_HP");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Shield_Max_HP, NowShieldMaxHP) == 0x000000, "Member 'WBP_PlayerUI_C_On_Update_Shield_Max_HP::NowShieldMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Shield_Max_HP, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_On_Update_Shield_Max_HP::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_On_Update_Shield_Max_HP, CallFunc_EqualEqual_Int64Int64_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_On_Update_Shield_Max_HP::CallFunc_EqualEqual_Int64Int64_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnActivatedOtomo
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_PlayerUI_C_OnActivatedOtomo final
{
public:
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerLocalRecordData*              CallFunc_GetLocalRecordData_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetOtomoIndividualHandle_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UPalIndividualCharacterHandle> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0040(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalTribeID                                   CallFunc_GetTribeID_ReturnValue;                   // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x5];                                       // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MonsterBase_C*                      K2Node_DynamicCast_AsBP_Monster_Base;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnActivatedOtomo) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnActivatedOtomo");
static_assert(sizeof(WBP_PlayerUI_C_OnActivatedOtomo) == 0x0000B0, "Wrong size on WBP_PlayerUI_C_OnActivatedOtomo");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000000, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_GetLocalRecordData_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000028, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000030, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_IsValid_ReturnValue_1) == 0x000034, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_GetOtomoIndividualHandle_ReturnValue) == 0x000038, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_GetOtomoIndividualHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000040, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000070, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_IsValid_ReturnValue_2) == 0x000078, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_IsValid_ReturnValue_3) == 0x000079, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_GetTribeID_ReturnValue) == 0x00007A, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_GetTribeID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000080, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_Map_Find_Value) == 0x000088, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_Map_Find_ReturnValue) == 0x00008C, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, K2Node_DynamicCast_AsBP_Monster_Base) == 0x000090, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::K2Node_DynamicCast_AsBP_Monster_Base' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_Conv_IntToInt64_ReturnValue) == 0x0000A0, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_IsValid_ReturnValue_4) == 0x0000A8, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnActivatedOtomo, CallFunc_EqualEqual_Int64Int64_ReturnValue) == 0x0000A9, "Member 'WBP_PlayerUI_C_OnActivatedOtomo::CallFunc_EqualEqual_Int64Int64_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnArenaSequenceStageChanged
// 0x0028 (0x0028 - 0x0000)
struct WBP_PlayerUI_C_OnArenaSequenceStageChanged final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnArenaSequenceStageChanged) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnArenaSequenceStageChanged");
static_assert(sizeof(WBP_PlayerUI_C_OnArenaSequenceStageChanged) == 0x000028, "Wrong size on WBP_PlayerUI_C_OnArenaSequenceStageChanged");
static_assert(offsetof(WBP_PlayerUI_C_OnArenaSequenceStageChanged, Index_0) == 0x000000, "Member 'WBP_PlayerUI_C_OnArenaSequenceStageChanged::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnArenaSequenceStageChanged, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PlayerUI_C_OnArenaSequenceStageChanged::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnArenaSequenceStageChanged, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'WBP_PlayerUI_C_OnArenaSequenceStageChanged::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnArenaSequenceStageChanged, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnArenaSequenceStageChanged::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnArenaSequenceStageChanged, CallFunc_GetSyncTeleportComp_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_OnArenaSequenceStageChanged::CallFunc_GetSyncTeleportComp_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnArenaSequnceStart
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerUI_C_OnArenaSequnceStart final
{
public:
	class UPalArenaSequencer*                     ArenaSequencer;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 CurrentIndex)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnArenaSequnceStart) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnArenaSequnceStart");
static_assert(sizeof(WBP_PlayerUI_C_OnArenaSequnceStart) == 0x000018, "Wrong size on WBP_PlayerUI_C_OnArenaSequnceStart");
static_assert(offsetof(WBP_PlayerUI_C_OnArenaSequnceStart, ArenaSequencer) == 0x000000, "Member 'WBP_PlayerUI_C_OnArenaSequnceStart::ArenaSequencer' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnArenaSequnceStart, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PlayerUI_C_OnArenaSequnceStart::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnCapturedPal
// 0x0028 (0x0028 - 0x0000)
struct WBP_PlayerUI_C_OnCapturedPal final
{
public:
	struct FPalUIPalCaptureInfo                   CaptureInfo;                                       // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PlayerUI_C_OnCapturedPal) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnCapturedPal");
static_assert(sizeof(WBP_PlayerUI_C_OnCapturedPal) == 0x000028, "Wrong size on WBP_PlayerUI_C_OnCapturedPal");
static_assert(offsetof(WBP_PlayerUI_C_OnCapturedPal, CaptureInfo) == 0x000000, "Member 'WBP_PlayerUI_C_OnCapturedPal::CaptureInfo' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnChangedRegion
// 0x000C (0x000C - 0x0000)
struct WBP_PlayerUI_C_OnChangedRegion final
{
public:
	class FName                                   RegionNameID;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnChangedRegion) == 0x000004, "Wrong alignment on WBP_PlayerUI_C_OnChangedRegion");
static_assert(sizeof(WBP_PlayerUI_C_OnChangedRegion) == 0x00000C, "Wrong size on WBP_PlayerUI_C_OnChangedRegion");
static_assert(offsetof(WBP_PlayerUI_C_OnChangedRegion, RegionNameID) == 0x000000, "Member 'WBP_PlayerUI_C_OnChangedRegion::RegionNameID' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnChangedRegion, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_OnChangedRegion::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnChangedTemperanture
// 0x0004 (0x0004 - 0x0000)
struct WBP_PlayerUI_C_OnChangedTemperanture final
{
public:
	int32                                         NextTemperature;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnChangedTemperanture) == 0x000004, "Wrong alignment on WBP_PlayerUI_C_OnChangedTemperanture");
static_assert(sizeof(WBP_PlayerUI_C_OnChangedTemperanture) == 0x000004, "Wrong size on WBP_PlayerUI_C_OnChangedTemperanture");
static_assert(offsetof(WBP_PlayerUI_C_OnChangedTemperanture, NextTemperature) == 0x000000, "Member 'WBP_PlayerUI_C_OnChangedTemperanture::NextTemperature' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnChangedTemperatureBodyState
// 0x0003 (0x0003 - 0x0000)
struct WBP_PlayerUI_C_OnChangedTemperatureBodyState final
{
public:
	EPalBodyTemperatureState                      BodyState;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnChangedTemperatureBodyState) == 0x000001, "Wrong alignment on WBP_PlayerUI_C_OnChangedTemperatureBodyState");
static_assert(sizeof(WBP_PlayerUI_C_OnChangedTemperatureBodyState) == 0x000003, "Wrong size on WBP_PlayerUI_C_OnChangedTemperatureBodyState");
static_assert(offsetof(WBP_PlayerUI_C_OnChangedTemperatureBodyState, BodyState) == 0x000000, "Member 'WBP_PlayerUI_C_OnChangedTemperatureBodyState::BodyState' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnChangedTemperatureBodyState, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'WBP_PlayerUI_C_OnChangedTemperatureBodyState::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnChangedTemperatureBodyState, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'WBP_PlayerUI_C_OnChangedTemperatureBodyState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnChangedWeapon
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerUI_C_OnChangedWeapon final
{
public:
	class APalWeaponBase*                         Weapon;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnChangedWeapon) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnChangedWeapon");
static_assert(sizeof(WBP_PlayerUI_C_OnChangedWeapon) == 0x000008, "Wrong size on WBP_PlayerUI_C_OnChangedWeapon");
static_assert(offsetof(WBP_PlayerUI_C_OnChangedWeapon, Weapon) == 0x000000, "Member 'WBP_PlayerUI_C_OnChangedWeapon::Weapon' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnDamagedShield
// 0x0028 (0x0028 - 0x0000)
struct WBP_PlayerUI_C_OnDamagedShield final
{
public:
	int32                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShieldBroken;                                    // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetShieldMaxHP_ReturnValue;               // 0x0018(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetShieldHP_ReturnValue;                  // 0x0020(0x0008)(NoDestructor)
};
static_assert(alignof(WBP_PlayerUI_C_OnDamagedShield) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnDamagedShield");
static_assert(sizeof(WBP_PlayerUI_C_OnDamagedShield) == 0x000028, "Wrong size on WBP_PlayerUI_C_OnDamagedShield");
static_assert(offsetof(WBP_PlayerUI_C_OnDamagedShield, Damage) == 0x000000, "Member 'WBP_PlayerUI_C_OnDamagedShield::Damage' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDamagedShield, IsShieldBroken) == 0x000004, "Member 'WBP_PlayerUI_C_OnDamagedShield::IsShieldBroken' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDamagedShield, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_OnDamagedShield::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDamagedShield, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnDamagedShield::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDamagedShield, CallFunc_GetShieldMaxHP_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnDamagedShield::CallFunc_GetShieldMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDamagedShield, CallFunc_GetShieldHP_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_OnDamagedShield::CallFunc_GetShieldHP_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnDeactivatedOtomo
// 0x0048 (0x0048 - 0x0000)
struct WBP_PlayerUI_C_OnDeactivatedOtomo final
{
public:
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          K2Node_DynamicCast_AsPal_Individual_Character_Handle; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MonsterBase_C*                      K2Node_DynamicCast_AsBP_Monster_Base;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnDeactivatedOtomo) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnDeactivatedOtomo");
static_assert(sizeof(WBP_PlayerUI_C_OnDeactivatedOtomo) == 0x000048, "Wrong size on WBP_PlayerUI_C_OnDeactivatedOtomo");
static_assert(offsetof(WBP_PlayerUI_C_OnDeactivatedOtomo, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PlayerUI_C_OnDeactivatedOtomo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDeactivatedOtomo, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnDeactivatedOtomo::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDeactivatedOtomo, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnDeactivatedOtomo::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDeactivatedOtomo, K2Node_DynamicCast_AsPal_Individual_Character_Handle) == 0x000020, "Member 'WBP_PlayerUI_C_OnDeactivatedOtomo::K2Node_DynamicCast_AsPal_Individual_Character_Handle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDeactivatedOtomo, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_PlayerUI_C_OnDeactivatedOtomo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDeactivatedOtomo, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000030, "Member 'WBP_PlayerUI_C_OnDeactivatedOtomo::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDeactivatedOtomo, K2Node_DynamicCast_AsBP_Monster_Base) == 0x000038, "Member 'WBP_PlayerUI_C_OnDeactivatedOtomo::K2Node_DynamicCast_AsBP_Monster_Base' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDeactivatedOtomo, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'WBP_PlayerUI_C_OnDeactivatedOtomo::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnDeactivatedOtomo, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'WBP_PlayerUI_C_OnDeactivatedOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnEndBuilding
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerUI_C_OnEndBuilding final
{
public:
	class UPalBuilderComponent*                   BuilderComponent;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnEndBuilding) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnEndBuilding");
static_assert(sizeof(WBP_PlayerUI_C_OnEndBuilding) == 0x000008, "Wrong size on WBP_PlayerUI_C_OnEndBuilding");
static_assert(offsetof(WBP_PlayerUI_C_OnEndBuilding, BuilderComponent) == 0x000000, "Member 'WBP_PlayerUI_C_OnEndBuilding::BuilderComponent' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnEndCrime
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerUI_C_OnEndCrime final
{
public:
	struct FGuid                                  CrimeInstance;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnEndCrime) == 0x000004, "Wrong alignment on WBP_PlayerUI_C_OnEndCrime");
static_assert(sizeof(WBP_PlayerUI_C_OnEndCrime) == 0x000010, "Wrong size on WBP_PlayerUI_C_OnEndCrime");
static_assert(offsetof(WBP_PlayerUI_C_OnEndCrime, CrimeInstance) == 0x000000, "Member 'WBP_PlayerUI_C_OnEndCrime::CrimeInstance' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnEndWanted
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerUI_C_OnEndWanted final
{
public:
	class UPalIndividualCharacterHandle*          CriminalHandle;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnEndWanted) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnEndWanted");
static_assert(sizeof(WBP_PlayerUI_C_OnEndWanted) == 0x000008, "Wrong size on WBP_PlayerUI_C_OnEndWanted");
static_assert(offsetof(WBP_PlayerUI_C_OnEndWanted, CriminalHandle) == 0x000000, "Member 'WBP_PlayerUI_C_OnEndWanted::CriminalHandle' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnExitArena
// 0x0020 (0x0020 - 0x0000)
struct WBP_PlayerUI_C_OnExitArena final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnExitArena) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnExitArena");
static_assert(sizeof(WBP_PlayerUI_C_OnExitArena) == 0x000020, "Wrong size on WBP_PlayerUI_C_OnExitArena");
static_assert(offsetof(WBP_PlayerUI_C_OnExitArena, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PlayerUI_C_OnExitArena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnExitArena, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnExitArena::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnExitArena, CallFunc_GetSyncTeleportComp_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnExitArena::CallFunc_GetSyncTeleportComp_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnGetoffOtomo
// 0x0050 (0x0050 - 0x0000)
struct WBP_PlayerUI_C_OnGetoffOtomo final
{
public:
	class AActor*                                 RideActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)> K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnGetoffOtomo) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnGetoffOtomo");
static_assert(sizeof(WBP_PlayerUI_C_OnGetoffOtomo) == 0x000050, "Wrong size on WBP_PlayerUI_C_OnGetoffOtomo");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, RideActor) == 0x000000, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::RideActor' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, K2Node_DynamicCast_AsPal_Character) == 0x000010, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, CallFunc_IsValid_ReturnValue_2) == 0x000029, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000030, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, CallFunc_IsValid_ReturnValue_3) == 0x000038, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnGetoffOtomo, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'WBP_PlayerUI_C_OnGetoffOtomo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnLiftCampPal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerUI_C_OnLiftCampPal final
{
public:
	class APalCharacter*                          TargetCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnLiftCampPal) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnLiftCampPal");
static_assert(sizeof(WBP_PlayerUI_C_OnLiftCampPal) == 0x000008, "Wrong size on WBP_PlayerUI_C_OnLiftCampPal");
static_assert(offsetof(WBP_PlayerUI_C_OnLiftCampPal, TargetCharacter) == 0x000000, "Member 'WBP_PlayerUI_C_OnLiftCampPal::TargetCharacter' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnOtomoInflictDamage
// 0x0228 (0x0228 - 0x0000)
struct WBP_PlayerUI_C_OnOtomoInflictDamage final
{
public:
	struct FPalDamageResult                       DamageResult;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character_1;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue_1; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeakCount_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNickName_outName;                      // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B8(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetNickName_outName_1;                    // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0118(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0128(0x0018)()
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0140(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0148(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0198(0x0010)(ReferenceParm)
	class FText                                   CallFunc_CreateLogText_outText;                    // 0x01A8(0x0018)()
	struct FPalLogAdditionalData                  K2Node_MakeStruct_PalLogAdditionalData;            // 0x01C0(0x0038)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01F8(0x0018)()
	class UPalLogManager*                         CallFunc_GetLogManager_ReturnValue;                // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_AddLog_ReturnValue;                       // 0x0218(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnOtomoInflictDamage) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnOtomoInflictDamage");
static_assert(sizeof(WBP_PlayerUI_C_OnOtomoInflictDamage) == 0x000228, "Wrong size on WBP_PlayerUI_C_OnOtomoInflictDamage");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, DamageResult) == 0x000000, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::DamageResult' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, K2Node_DynamicCast_AsPal_Character) == 0x000050, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000060, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, K2Node_DynamicCast_AsPal_Character_1) == 0x000068, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::K2Node_DynamicCast_AsPal_Character_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_GetCharacterParameterComponent_ReturnValue_1) == 0x000078, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_GetCharacterParameterComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_GetWeakCount_ReturnValue) == 0x000080, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_GetWeakCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_GetNickName_outName) == 0x000088, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_GetNickName_outName' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_Greater_IntInt_ReturnValue) == 0x000098, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, K2Node_MakeStruct_FormatArgumentData) == 0x0000B8, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_GetNickName_outName_1) == 0x000108, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_GetNickName_outName_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, K2Node_CreateDelegate_OutputDelegate) == 0x000118, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000128, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000140, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, K2Node_MakeStruct_FormatArgumentData_1) == 0x000148, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, K2Node_MakeArray_Array) == 0x000198, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_CreateLogText_outText) == 0x0001A8, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_CreateLogText_outText' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, K2Node_MakeStruct_PalLogAdditionalData) == 0x0001C0, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::K2Node_MakeStruct_PalLogAdditionalData' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_Format_ReturnValue) == 0x0001F8, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_GetLogManager_ReturnValue) == 0x000210, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_GetLogManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnOtomoInflictDamage, CallFunc_AddLog_ReturnValue) == 0x000218, "Member 'WBP_PlayerUI_C_OnOtomoInflictDamage::CallFunc_AddLog_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnPlayerDamage
// 0x0050 (0x0050 - 0x0000)
struct WBP_PlayerUI_C_OnPlayerDamage final
{
public:
	struct FPalDamageResult                       DamageResult;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_PlayerUI_C_OnPlayerDamage) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnPlayerDamage");
static_assert(sizeof(WBP_PlayerUI_C_OnPlayerDamage) == 0x000050, "Wrong size on WBP_PlayerUI_C_OnPlayerDamage");
static_assert(offsetof(WBP_PlayerUI_C_OnPlayerDamage, DamageResult) == 0x000000, "Member 'WBP_PlayerUI_C_OnPlayerDamage::DamageResult' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnRadialMenuOpened
// 0x0020 (0x0020 - 0x0000)
struct WBP_PlayerUI_C_OnRadialMenuOpened final
{
public:
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerLocalRecordData*              CallFunc_GetLocalRecordData_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnRadialMenuOpened) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnRadialMenuOpened");
static_assert(sizeof(WBP_PlayerUI_C_OnRadialMenuOpened) == 0x000020, "Wrong size on WBP_PlayerUI_C_OnRadialMenuOpened");
static_assert(offsetof(WBP_PlayerUI_C_OnRadialMenuOpened, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000000, "Member 'WBP_PlayerUI_C_OnRadialMenuOpened::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRadialMenuOpened, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_OnRadialMenuOpened::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRadialMenuOpened, CallFunc_GetLocalRecordData_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnRadialMenuOpened::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRadialMenuOpened, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_PlayerUI_C_OnRadialMenuOpened::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnReportCrime
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerUI_C_OnReportCrime final
{
public:
	class UPalIndividualCharacterHandle*          CriminalHandle;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CrimeIds;                                          // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PlayerUI_C_OnReportCrime) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnReportCrime");
static_assert(sizeof(WBP_PlayerUI_C_OnReportCrime) == 0x000018, "Wrong size on WBP_PlayerUI_C_OnReportCrime");
static_assert(offsetof(WBP_PlayerUI_C_OnReportCrime, CriminalHandle) == 0x000000, "Member 'WBP_PlayerUI_C_OnReportCrime::CriminalHandle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnReportCrime, CrimeIds) == 0x000008, "Member 'WBP_PlayerUI_C_OnReportCrime::CrimeIds' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnRideOtomo
// 0x0048 (0x0048 - 0x0000)
struct WBP_PlayerUI_C_OnRideOtomo final
{
public:
	class AActor*                                 RideActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFlyPal_ReturnValue;                     // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)> K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnRideOtomo) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnRideOtomo");
static_assert(sizeof(WBP_PlayerUI_C_OnRideOtomo) == 0x000048, "Wrong size on WBP_PlayerUI_C_OnRideOtomo");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, RideActor) == 0x000000, "Member 'WBP_PlayerUI_C_OnRideOtomo::RideActor' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, K2Node_DynamicCast_AsPal_Character) == 0x000008, "Member 'WBP_PlayerUI_C_OnRideOtomo::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_PlayerUI_C_OnRideOtomo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_PlayerUI_C_OnRideOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnRideOtomo::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_PlayerUI_C_OnRideOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, CallFunc_IsValid_ReturnValue_2) == 0x000021, "Member 'WBP_PlayerUI_C_OnRideOtomo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, CallFunc_IsFlyPal_ReturnValue) == 0x000022, "Member 'WBP_PlayerUI_C_OnRideOtomo::CallFunc_IsFlyPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, CallFunc_IsValid_ReturnValue_3) == 0x000023, "Member 'WBP_PlayerUI_C_OnRideOtomo::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000028, "Member 'WBP_PlayerUI_C_OnRideOtomo::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, CallFunc_IsValid_ReturnValue_4) == 0x000030, "Member 'WBP_PlayerUI_C_OnRideOtomo::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnRideOtomo, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'WBP_PlayerUI_C_OnRideOtomo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnStartBuilding
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerUI_C_OnStartBuilding final
{
public:
	class UPalBuilderComponent*                   BuilderComponent;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnStartBuilding) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnStartBuilding");
static_assert(sizeof(WBP_PlayerUI_C_OnStartBuilding) == 0x000008, "Wrong size on WBP_PlayerUI_C_OnStartBuilding");
static_assert(offsetof(WBP_PlayerUI_C_OnStartBuilding, BuilderComponent) == 0x000000, "Member 'WBP_PlayerUI_C_OnStartBuilding::BuilderComponent' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnStartCrime
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerUI_C_OnStartCrime final
{
public:
	struct FGuid                                  CrimeInstance;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnStartCrime) == 0x000004, "Wrong alignment on WBP_PlayerUI_C_OnStartCrime");
static_assert(sizeof(WBP_PlayerUI_C_OnStartCrime) == 0x000010, "Wrong size on WBP_PlayerUI_C_OnStartCrime");
static_assert(offsetof(WBP_PlayerUI_C_OnStartCrime, CrimeInstance) == 0x000000, "Member 'WBP_PlayerUI_C_OnStartCrime::CrimeInstance' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnTimer_CheckOtomoHunger
// 0x0060 (0x0060 - 0x0000)
struct WBP_PlayerUI_C_OnTimer_CheckOtomoHunger final
{
public:
	bool                                          IsExistStarvationPal;                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExistHungerPal;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIConditionType                           Temp_byte_Variable;                                // 0x0009(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalUIConditionType                           Temp_byte_Variable_1;                              // 0x000A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterHandle*>  CallFunc_GetAllIndividualHandle_OutArray;          // 0x0028(0x0010)(ReferenceParm)
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalUIConditionType>                   CallFunc_GetUIDisplayPalCondition_outArray;        // 0x0048(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnTimer_CheckOtomoHunger");
static_assert(sizeof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger) == 0x000060, "Wrong size on WBP_PlayerUI_C_OnTimer_CheckOtomoHunger");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, IsExistStarvationPal) == 0x000000, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::IsExistStarvationPal' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, IsExistHungerPal) == 0x000001, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::IsExistHungerPal' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, Temp_bool_True_if_break_was_hit_Variable) == 0x000002, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, Temp_byte_Variable) == 0x000009, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, Temp_byte_Variable_1) == 0x00000A, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_Not_PreBool_ReturnValue_1) == 0x00000B, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_GetAllIndividualHandle_OutArray) == 0x000028, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_GetAllIndividualHandle_OutArray' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_GetUIDisplayPalCondition_outArray) == 0x000048, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_GetUIDisplayPalCondition_outArray' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_Array_Contains_ReturnValue) == 0x000059, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_BooleanAND_ReturnValue) == 0x00005A, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_BooleanAND_ReturnValue_1) == 0x00005B, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnTimer_CheckOtomoHunger, CallFunc_Array_Contains_ReturnValue_1) == 0x00005C, "Member 'WBP_PlayerUI_C_OnTimer_CheckOtomoHunger::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnToggleGrapplingCancel
// 0x0005 (0x0005 - 0x0000)
struct WBP_PlayerUI_C_OnToggleGrapplingCancel final
{
public:
	bool                                          CancelEnable;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnToggleGrapplingCancel) == 0x000001, "Wrong alignment on WBP_PlayerUI_C_OnToggleGrapplingCancel");
static_assert(sizeof(WBP_PlayerUI_C_OnToggleGrapplingCancel) == 0x000005, "Wrong size on WBP_PlayerUI_C_OnToggleGrapplingCancel");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleGrapplingCancel, CancelEnable) == 0x000000, "Member 'WBP_PlayerUI_C_OnToggleGrapplingCancel::CancelEnable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleGrapplingCancel, Temp_bool_Variable) == 0x000001, "Member 'WBP_PlayerUI_C_OnToggleGrapplingCancel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleGrapplingCancel, Temp_byte_Variable) == 0x000002, "Member 'WBP_PlayerUI_C_OnToggleGrapplingCancel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleGrapplingCancel, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_PlayerUI_C_OnToggleGrapplingCancel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleGrapplingCancel, K2Node_Select_Default) == 0x000004, "Member 'WBP_PlayerUI_C_OnToggleGrapplingCancel::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnToggleSleepPlayerBed
// 0x0005 (0x0005 - 0x0000)
struct WBP_PlayerUI_C_OnToggleSleepPlayerBed final
{
public:
	bool                                          IsSleep;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnToggleSleepPlayerBed) == 0x000001, "Wrong alignment on WBP_PlayerUI_C_OnToggleSleepPlayerBed");
static_assert(sizeof(WBP_PlayerUI_C_OnToggleSleepPlayerBed) == 0x000005, "Wrong size on WBP_PlayerUI_C_OnToggleSleepPlayerBed");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleSleepPlayerBed, IsSleep) == 0x000000, "Member 'WBP_PlayerUI_C_OnToggleSleepPlayerBed::IsSleep' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleSleepPlayerBed, Temp_bool_Variable) == 0x000001, "Member 'WBP_PlayerUI_C_OnToggleSleepPlayerBed::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleSleepPlayerBed, Temp_byte_Variable) == 0x000002, "Member 'WBP_PlayerUI_C_OnToggleSleepPlayerBed::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleSleepPlayerBed, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_PlayerUI_C_OnToggleSleepPlayerBed::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnToggleSleepPlayerBed, K2Node_Select_Default) == 0x000004, "Member 'WBP_PlayerUI_C_OnToggleSleepPlayerBed::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUnlockedMap
// 0x0168 (0x0168 - 0x0000)
struct WBP_PlayerUI_C_OnUnlockedMap final
{
public:
	class FName                                   UnlockedRegionId;                                  // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerId;                                          // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalWorldMapUIData*                     CallFunc_GetLocalWorldMapData_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalWorldMapUIDataTableRow             CallFunc_GetCurrentPlayMapUIData_outData;          // 0x0018(0x00D8)()
	bool                                          CallFunc_GetCurrentPlayMapUIData_ReturnValue;      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalWorldMapUIRegionData               CallFunc_Map_Find_Value;                           // 0x0100(0x0058)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15A[0x2];                                      // 0x015A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPlayerId_ReturnValue;                  // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnUnlockedMap) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnUnlockedMap");
static_assert(sizeof(WBP_PlayerUI_C_OnUnlockedMap) == 0x000168, "Wrong size on WBP_PlayerUI_C_OnUnlockedMap");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, UnlockedRegionId) == 0x000000, "Member 'WBP_PlayerUI_C_OnUnlockedMap::UnlockedRegionId' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, PlayerId) == 0x000008, "Member 'WBP_PlayerUI_C_OnUnlockedMap::PlayerId' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_GetLocalWorldMapData_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_GetLocalWorldMapData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_GetCurrentPlayMapUIData_outData) == 0x000018, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_GetCurrentPlayMapUIData_outData' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_GetCurrentPlayMapUIData_ReturnValue) == 0x0000F0, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_GetCurrentPlayMapUIData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000F8, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_Map_Find_Value) == 0x000100, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_Map_Find_ReturnValue) == 0x000158, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_IsValid_ReturnValue) == 0x000159, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_GetPlayerId_ReturnValue) == 0x00015C, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_IsValid_ReturnValue_1) == 0x000160, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUnlockedMap, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000161, "Member 'WBP_PlayerUI_C_OnUnlockedMap::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateInventoryMaxWeight
// 0x0028 (0x0028 - 0x0000)
struct WBP_PlayerUI_C_OnUpdateInventoryMaxWeight final
{
public:
	float                                         MaxWeight;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetNowItemWeight_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateWeight_MaxWeight_ImplicitCast;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateWeight_NowWeight_ImplicitCast;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnUpdateInventoryMaxWeight) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnUpdateInventoryMaxWeight");
static_assert(sizeof(WBP_PlayerUI_C_OnUpdateInventoryMaxWeight) == 0x000028, "Wrong size on WBP_PlayerUI_C_OnUpdateInventoryMaxWeight");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryMaxWeight, MaxWeight) == 0x000000, "Member 'WBP_PlayerUI_C_OnUpdateInventoryMaxWeight::MaxWeight' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryMaxWeight, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_OnUpdateInventoryMaxWeight::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryMaxWeight, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnUpdateInventoryMaxWeight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryMaxWeight, CallFunc_GetNowItemWeight_ReturnValue) == 0x000014, "Member 'WBP_PlayerUI_C_OnUpdateInventoryMaxWeight::CallFunc_GetNowItemWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryMaxWeight, CallFunc_UpdateWeight_MaxWeight_ImplicitCast) == 0x000018, "Member 'WBP_PlayerUI_C_OnUpdateInventoryMaxWeight::CallFunc_UpdateWeight_MaxWeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryMaxWeight, CallFunc_UpdateWeight_NowWeight_ImplicitCast) == 0x000020, "Member 'WBP_PlayerUI_C_OnUpdateInventoryMaxWeight::CallFunc_UpdateWeight_NowWeight_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateInventoryWeight
// 0x0028 (0x0028 - 0x0000)
struct WBP_PlayerUI_C_OnUpdateInventoryWeight final
{
public:
	float                                         NowWeight;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateWeight_NowWeight_ImplicitCast;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_UpdateWeight_MaxWeight_ImplicitCast;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnUpdateInventoryWeight) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnUpdateInventoryWeight");
static_assert(sizeof(WBP_PlayerUI_C_OnUpdateInventoryWeight) == 0x000028, "Wrong size on WBP_PlayerUI_C_OnUpdateInventoryWeight");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryWeight, NowWeight) == 0x000000, "Member 'WBP_PlayerUI_C_OnUpdateInventoryWeight::NowWeight' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryWeight, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_OnUpdateInventoryWeight::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryWeight, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnUpdateInventoryWeight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryWeight, CallFunc_UpdateWeight_NowWeight_ImplicitCast) == 0x000018, "Member 'WBP_PlayerUI_C_OnUpdateInventoryWeight::CallFunc_UpdateWeight_NowWeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateInventoryWeight, CallFunc_UpdateWeight_MaxWeight_ImplicitCast) == 0x000020, "Member 'WBP_PlayerUI_C_OnUpdateInventoryWeight::CallFunc_UpdateWeight_MaxWeight_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateLoadout
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerUI_C_OnUpdateLoadout final
{
public:
	EPalPlayerInventoryType                       NewParam2;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NewParam;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnUpdateLoadout) == 0x000004, "Wrong alignment on WBP_PlayerUI_C_OnUpdateLoadout");
static_assert(sizeof(WBP_PlayerUI_C_OnUpdateLoadout) == 0x000008, "Wrong size on WBP_PlayerUI_C_OnUpdateLoadout");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateLoadout, NewParam2) == 0x000000, "Member 'WBP_PlayerUI_C_OnUpdateLoadout::NewParam2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateLoadout, NewParam) == 0x000004, "Member 'WBP_PlayerUI_C_OnUpdateLoadout::NewParam' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateOtomoSlot
// 0x0020 (0x0020 - 0x0000)
struct WBP_PlayerUI_C_OnUpdateOtomoSlot final
{
public:
	int32                                         SlotIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          LastHandle;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSpawnedOtomoID_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnUpdateOtomoSlot) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnUpdateOtomoSlot");
static_assert(sizeof(WBP_PlayerUI_C_OnUpdateOtomoSlot) == 0x000020, "Wrong size on WBP_PlayerUI_C_OnUpdateOtomoSlot");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateOtomoSlot, SlotIndex) == 0x000000, "Member 'WBP_PlayerUI_C_OnUpdateOtomoSlot::SlotIndex' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateOtomoSlot, LastHandle) == 0x000008, "Member 'WBP_PlayerUI_C_OnUpdateOtomoSlot::LastHandle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateOtomoSlot, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnUpdateOtomoSlot::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateOtomoSlot, CallFunc_GetSpawnedOtomoID_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnUpdateOtomoSlot::CallFunc_GetSpawnedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateOtomoSlot, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_PlayerUI_C_OnUpdateOtomoSlot::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdatePlayerHp
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerUI_C_OnUpdatePlayerHp final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnUpdatePlayerHp) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnUpdatePlayerHp");
static_assert(sizeof(WBP_PlayerUI_C_OnUpdatePlayerHp) == 0x000018, "Wrong size on WBP_PlayerUI_C_OnUpdatePlayerHp");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHp, NowHP) == 0x000000, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHp::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHp, NowMaxHP) == 0x000008, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHp::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHp, CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHp::CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdatePlayerHP_LowHealthEffect
// 0x0030 (0x0030 - 0x0000)
struct WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_lastHpPercent_ImplicitCast;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_lastHpPercent_ImplicitCast_1;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect");
static_assert(sizeof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect) == 0x000030, "Wrong size on WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect, NowHP) == 0x000000, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect, NowMaxHP) == 0x000008, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00001C, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00001D, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x00001E, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect, K2Node_VariableSet_lastHpPercent_ImplicitCast) == 0x000020, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect::K2Node_VariableSet_lastHpPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect, K2Node_VariableSet_lastHpPercent_ImplicitCast_1) == 0x000028, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect::K2Node_VariableSet_lastHpPercent_ImplicitCast_1' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdatePlayerHunger
// 0x0038 (0x0038 - 0x0000)
struct WBP_PlayerUI_C_OnUpdatePlayerHunger final
{
public:
	float                                         Current;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Last;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnUpdatePlayerHunger) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnUpdatePlayerHunger");
static_assert(sizeof(WBP_PlayerUI_C_OnUpdatePlayerHunger) == 0x000038, "Wrong size on WBP_PlayerUI_C_OnUpdatePlayerHunger");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHunger, Current) == 0x000000, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHunger::Current' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHunger, Last) == 0x000004, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHunger::Last' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHunger, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHunger::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHunger, CallFunc_GetGameSetting_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHunger::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHunger, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHunger::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHunger, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHunger::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHunger, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHunger::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdatePlayerHunger, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'WBP_PlayerUI_C_OnUpdatePlayerHunger::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateShieldHP
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerUI_C_OnUpdateShieldHP final
{
public:
	struct FFixedPoint64                          NowShieldMaxHP;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowShieldHP;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_OnUpdateShieldHP) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_OnUpdateShieldHP");
static_assert(sizeof(WBP_PlayerUI_C_OnUpdateShieldHP) == 0x000018, "Wrong size on WBP_PlayerUI_C_OnUpdateShieldHP");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateShieldHP, NowShieldMaxHP) == 0x000000, "Member 'WBP_PlayerUI_C_OnUpdateShieldHP::NowShieldMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateShieldHP, NowShieldHP) == 0x000008, "Member 'WBP_PlayerUI_C_OnUpdateShieldHP::NowShieldHP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_OnUpdateShieldHP, CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_OnUpdateShieldHP::CallFunc_GreaterEqual_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.PaintWorldMap
// 0x01E8 (0x01E8 - 0x0000)
struct WBP_PlayerUI_C_PaintWorldMap final
{
public:
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSyncTeleportComponent*              CallFunc_GetSyncTeleportComp_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInStage_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTeleporting_ReturnValue;                // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalWorldMapUIData*                     CallFunc_GetLocalWorldMapData_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvas*                                CallFunc_BeginDrawCanvasToRenderTarget_Canvas;     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_BeginDrawCanvasToRenderTarget_Size;       // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext             CallFunc_BeginDrawCanvasToRenderTarget_Context;    // 0x0058(0x0008)(NoDestructor)
	struct FPalWorldMapUIDataTableRow             CallFunc_GetCurrentPlayMapUIData_outData;          // 0x0060(0x00D8)()
	bool                                          CallFunc_GetCurrentPlayMapUIData_ReturnValue;      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x0140(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_WorldLocationToWidgetOffset_offset;       // 0x01A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;  // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;              // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_PaintWorldMap) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_PaintWorldMap");
static_assert(sizeof(WBP_PlayerUI_C_PaintWorldMap) == 0x0001E8, "Wrong size on WBP_PlayerUI_C_PaintWorldMap");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000000, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_GetSyncTeleportComp_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_GetSyncTeleportComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_IsInStage_ReturnValue) == 0x000028, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_IsInStage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_IsTeleporting_ReturnValue) == 0x00002A, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_IsTeleporting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_GetLocalWorldMapData_ReturnValue) == 0x000030, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_GetLocalWorldMapData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_BeginDrawCanvasToRenderTarget_Canvas) == 0x000040, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_BeginDrawCanvasToRenderTarget_Canvas' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_BeginDrawCanvasToRenderTarget_Size) == 0x000048, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_BeginDrawCanvasToRenderTarget_Size' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_BeginDrawCanvasToRenderTarget_Context) == 0x000058, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_BeginDrawCanvasToRenderTarget_Context' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_GetCurrentPlayMapUIData_outData) == 0x000060, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_GetCurrentPlayMapUIData_outData' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_GetCurrentPlayMapUIData_ReturnValue) == 0x000138, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_GetCurrentPlayMapUIData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_Divide_Vector2DVector2D_ReturnValue) == 0x000140, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_Divide_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000150, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000160, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x000170, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_GetPalmi_ReturnValue) == 0x000180, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_IsValid_ReturnValue_3) == 0x000188, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000190, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_WorldLocationToWidgetOffset_offset) == 0x0001A8, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_WorldLocationToWidgetOffset_offset' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x0001B8, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_Multiply_Vector2DVector2D_ReturnValue_1) == 0x0001C8, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_Multiply_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_MakeVector2D_X_ImplicitCast) == 0x0001D8, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_MakeVector2D_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_PaintWorldMap, CallFunc_MakeVector2D_Y_ImplicitCast) == 0x0001E0, "Member 'WBP_PlayerUI_C_PaintWorldMap::CallFunc_MakeVector2D_Y_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.SetIsHideWeaponInfo
// 0x0002 (0x0002 - 0x0000)
struct WBP_PlayerUI_C_SetIsHideWeaponInfo final
{
public:
	bool                                          bHide;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_SetIsHideWeaponInfo) == 0x000001, "Wrong alignment on WBP_PlayerUI_C_SetIsHideWeaponInfo");
static_assert(sizeof(WBP_PlayerUI_C_SetIsHideWeaponInfo) == 0x000002, "Wrong size on WBP_PlayerUI_C_SetIsHideWeaponInfo");
static_assert(offsetof(WBP_PlayerUI_C_SetIsHideWeaponInfo, bHide) == 0x000000, "Member 'WBP_PlayerUI_C_SetIsHideWeaponInfo::bHide' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_SetIsHideWeaponInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WBP_PlayerUI_C_SetIsHideWeaponInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.Setup After CreatePlayerIndividualParameter
// 0x04B0 (0x04B0 - 0x0000)
struct WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter final
{
public:
	class UPalCharacterParameterComponent*        CharacterParameterComponent;                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTechnologyData*                     CallFunc_GetLocalTechnologyData_ReturnValue;       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float MaxWeight)>              K2Node_CreateDelegate_OutputDelegate_4;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float NowWeight)>              K2Node_CreateDelegate_OutputDelegate_5;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalBuilderComponent* Self)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalBuilderComponent* Self)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBuilderComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalWeaponBase* Weapon)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalArenaSequencer* ArenaSequencer)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x00E4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x00F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGuid& CampID, EPalRaidBossBattleFinishType FinishType)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0114(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGuid& CampID)>   K2Node_CreateDelegate_OutputDelegate_13;           // 0x0124(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalBossTower* BossTower)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x0134(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPalBossBattleCombatResult CombatResult)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x0144(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_16;           // 0x0154(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalBossBattleManager*                  CallFunc_GetBossBattleManager_ReturnValue;         // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName BossType, EPalBossBattleDifficulty Difficulty, TArray<class APalPlayerCharacter*>& PlayerList)> K2Node_CreateDelegate_OutputDelegate_17;           // 0x0170(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGuid& CrimeInstanceId)> K2Node_CreateDelegate_OutputDelegate_18;           // 0x0184(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGuid& CrimeInstanceId)> K2Node_CreateDelegate_OutputDelegate_19;           // 0x0194(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterHandle* CriminalHandle)> K2Node_CreateDelegate_OutputDelegate_20;           // 0x01A4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalIndividualCharacterHandle* CriminalHandle, TArray<class FName>& CrimeIds)> K2Node_CreateDelegate_OutputDelegate_21;           // 0x01B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 NextTemperature)>        K2Node_CreateDelegate_OutputDelegate_22;           // 0x01D4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRaidBossManager*                    CallFunc_GetRaidBossManager_ReturnValue;           // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPalBodyTemperatureState BodyState)> K2Node_CreateDelegate_OutputDelegate_23;           // 0x01F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0x7];                                      // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_2;                   // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBodyTemperatureComponent*           CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0210(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* RideActor)>      K2Node_CreateDelegate_OutputDelegate_24;           // 0x0218(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* RideActor)>      K2Node_CreateDelegate_OutputDelegate_25;           // 0x0228(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_3;                   // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName& RegionNameID)>    K2Node_CreateDelegate_OutputDelegate_26;           // 0x0240(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue_2;        // 0x0250(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_4;                   // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetLastInsideRegionNameID_OutNameID;      // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetShieldMaxHP_ReturnValue;               // 0x0268(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetShieldHP_ReturnValue;                  // 0x0270(0x0008)(NoDestructor)
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate_27;           // 0x0278(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_5;                   // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APalCharacter* LiftingPal)> K2Node_CreateDelegate_OutputDelegate_28;           // 0x0290(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName BossType, EPalBossBattleDifficulty Difficulty, TArray<class APalPlayerCharacter*>& PlayerList)> K2Node_CreateDelegate_OutputDelegate_29;           // 0x02A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle)> K2Node_CreateDelegate_OutputDelegate_30;           // 0x02B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_31;           // 0x02C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_32;           // 0x02D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_33;           // 0x02E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_34;           // 0x02F0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_6;                   // 0x0300(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowShieldMaxHP)> K2Node_CreateDelegate_OutputDelegate_35;           // 0x0308(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x3];                                      // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_36;           // 0x031C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0330(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowShieldMaxHP, const struct FFixedPoint64& NowShieldHP)> K2Node_CreateDelegate_OutputDelegate_37;           // 0x0338(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_7;                   // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Damage, bool IsShieldBroken)> K2Node_CreateDelegate_OutputDelegate_38;           // 0x0350(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x3];                                      // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFullStomach_ReturnValue;               // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float Current, float Last)>    K2Node_CreateDelegate_OutputDelegate_39;           // 0x0368(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_8;                   // 0x0378(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0380(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_40;           // 0x0398(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPalPlayerInventoryType InventoryType, int32 Index)> K2Node_CreateDelegate_OutputDelegate_41;           // 0x03A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_9;                   // 0x03B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_42;           // 0x03C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D1[0x3];                                      // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNowSelectedIndex_ReturnValue;          // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x03D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_43;           // 0x03E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1[0x7];                                      // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x03F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x3];                                      // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_44;           // 0x0404(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsSleep)>                 K2Node_CreateDelegate_OutputDelegate_45;           // 0x0414(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool CancelEnable)>            K2Node_CreateDelegate_OutputDelegate_46;           // 0x0424(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_10;                  // 0x0438(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FPalUIPalCaptureInfo& CaptureInfo)> K2Node_CreateDelegate_OutputDelegate_47;           // 0x0440(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_451[0x7];                                      // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0458(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_461[0x7];                                      // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_ReturnValue;                     // 0x0468(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0470(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetMaxSP_ReturnValue;                     // 0x0478(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetSP_ReturnValue;                        // 0x0480(0x0008)(NoDestructor)
	TDelegate<void(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)> K2Node_CreateDelegate_OutputDelegate_48;           // 0x0488(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_49;           // 0x0498(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x04A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter");
static_assert(sizeof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter) == 0x0004B0, "Wrong size on WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CharacterParameterComponent) == 0x000000, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CharacterParameterComponent' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000030, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetLocalTechnologyData_ReturnValue) == 0x000048, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetLocalTechnologyData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_3) == 0x000050, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_4) == 0x000060, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_5) == 0x000070, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000080, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_6) == 0x000088, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_7) == 0x00009C, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue) == 0x0000B0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetComponentByClass_ReturnValue) == 0x0000B8, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_1) == 0x0000C0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000C4, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_9) == 0x0000D4, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000E4, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_11) == 0x0000F4, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000108, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_2) == 0x000110, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_12) == 0x000114, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_13) == 0x000124, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_14) == 0x000134, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_15) == 0x000144, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_16) == 0x000154, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetBossBattleManager_ReturnValue) == 0x000168, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetBossBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_17) == 0x000170, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_3) == 0x000180, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_18) == 0x000184, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_19) == 0x000194, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_20) == 0x0001A4, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_21) == 0x0001B4, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_1) == 0x0001C8, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_4) == 0x0001D0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_22) == 0x0001D4, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetRaidBossManager_ReturnValue) == 0x0001E8, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetRaidBossManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_23) == 0x0001F0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_5) == 0x000200, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_2) == 0x000208, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000210, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_24) == 0x000218, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_25) == 0x000228, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_25' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_3) == 0x000238, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_26) == 0x000240, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_26' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetComponentByClass_ReturnValue_2) == 0x000250, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_4) == 0x000258, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetLastInsideRegionNameID_OutNameID) == 0x000260, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetLastInsideRegionNameID_OutNameID' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetShieldMaxHP_ReturnValue) == 0x000268, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetShieldMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetShieldHP_ReturnValue) == 0x000270, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetShieldHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_27) == 0x000278, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_27' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_5) == 0x000288, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_28) == 0x000290, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_28' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_29) == 0x0002A0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_29' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_30) == 0x0002B0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_30' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_31) == 0x0002C0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_31' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_32) == 0x0002D0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_32' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_33) == 0x0002E0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_33' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_34) == 0x0002F0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_34' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_6) == 0x000300, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_35) == 0x000308, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_35' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_6) == 0x000318, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_36) == 0x00031C, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_36' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000330, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_37) == 0x000338, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_37' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_7) == 0x000348, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_38) == 0x000350, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_38' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_7) == 0x000360, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetFullStomach_ReturnValue) == 0x000364, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetFullStomach_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_39) == 0x000368, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_39' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_8) == 0x000378, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetGameSetting_ReturnValue) == 0x000380, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000388, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000390, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_40) == 0x000398, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_40' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_41) == 0x0003A8, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_41' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_9) == 0x0003B8, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_42) == 0x0003C0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_42' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_8) == 0x0003D0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetNowSelectedIndex_ReturnValue) == 0x0003D4, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetNowSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x0003D8, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_43) == 0x0003E0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_43' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_9) == 0x0003F0, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x0003F8, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_DynamicCast_bSuccess) == 0x000400, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_44) == 0x000404, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_44' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_45) == 0x000414, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_45' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_46) == 0x000424, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_46' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetPalmi_ReturnValue_10) == 0x000438, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetPalmi_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_47) == 0x000440, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_47' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_10) == 0x000450, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetHUDService_ReturnValue) == 0x000458, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_IsValid_ReturnValue_11) == 0x000460, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetMaxHP_ReturnValue) == 0x000468, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetHP_ReturnValue) == 0x000470, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetMaxSP_ReturnValue) == 0x000478, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetMaxSP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_GetSP_ReturnValue) == 0x000480, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_GetSP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_48) == 0x000488, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_48' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, K2Node_CreateDelegate_OutputDelegate_49) == 0x000498, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::K2Node_CreateDelegate_OutputDelegate_49' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0004A8, "Member 'WBP_PlayerUI_C_Setup_After_CreatePlayerIndividualParameter::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.Should Check UIAuto Hide
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerUI_C_Should_Check_UIAuto_Hide final
{
public:
	bool                                          ShouldCheck;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Should_Show_UI_ShouldShow;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_Should_Check_UIAuto_Hide");
static_assert(sizeof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide) == 0x000018, "Wrong size on WBP_PlayerUI_C_Should_Check_UIAuto_Hide");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, ShouldCheck) == 0x000000, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::ShouldCheck' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_Should_Show_UI_ShouldShow) == 0x000001, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_Should_Show_UI_ShouldShow' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_Not_PreBool_ReturnValue_1) == 0x000004, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_BooleanAND_ReturnValue_1) == 0x000010, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_BooleanAND_ReturnValue_2) == 0x000012, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_BooleanAND_ReturnValue_3) == 0x000013, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Should_Check_UIAuto_Hide, CallFunc_GetBattleMode_ReturnValue) == 0x000014, "Member 'WBP_PlayerUI_C_Should_Check_UIAuto_Hide::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_PlayerUI_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_Tick) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_Tick");
static_assert(sizeof(WBP_PlayerUI_C_Tick) == 0x000048, "Wrong size on WBP_PlayerUI_C_Tick");
static_assert(offsetof(WBP_PlayerUI_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_PlayerUI_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_PlayerUI_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.UpdateAimVisibility
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerUI_C_UpdateAimVisibility final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInstallAtReticle_ReturnValue;           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_UpdateAimVisibility) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_UpdateAimVisibility");
static_assert(sizeof(WBP_PlayerUI_C_UpdateAimVisibility) == 0x000018, "Wrong size on WBP_PlayerUI_C_UpdateAimVisibility");
static_assert(offsetof(WBP_PlayerUI_C_UpdateAimVisibility, Temp_byte_Variable) == 0x000000, "Member 'WBP_PlayerUI_C_UpdateAimVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateAimVisibility, Temp_byte_Variable_1) == 0x000001, "Member 'WBP_PlayerUI_C_UpdateAimVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateAimVisibility, Temp_bool_Variable) == 0x000002, "Member 'WBP_PlayerUI_C_UpdateAimVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateAimVisibility, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_UpdateAimVisibility::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateAimVisibility, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_UpdateAimVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateAimVisibility, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_PlayerUI_C_UpdateAimVisibility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateAimVisibility, CallFunc_IsInstallAtReticle_ReturnValue) == 0x000012, "Member 'WBP_PlayerUI_C_UpdateAimVisibility::CallFunc_IsInstallAtReticle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateAimVisibility, K2Node_Select_Default) == 0x000013, "Member 'WBP_PlayerUI_C_UpdateAimVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PlayerUI.WBP_PlayerUI_C.UpdateStaminaGaugePosition
// 0x0140 (0x0140 - 0x0000)
struct WBP_PlayerUI_C_UpdateStaminaGaugePosition final
{
public:
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              CallFunc_GetViewportWidgetGeometry_ReturnValue;    // 0x0040(0x0040)(IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetLocalSize_ReturnValue;                 // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;  // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition; // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue; // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X_2;                        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_2;                        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue_1;                       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue;                         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMin_ReturnValue_1;                       // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerUI_C_UpdateStaminaGaugePosition) == 0x000008, "Wrong alignment on WBP_PlayerUI_C_UpdateStaminaGaugePosition");
static_assert(sizeof(WBP_PlayerUI_C_UpdateStaminaGaugePosition) == 0x000140, "Wrong size on WBP_PlayerUI_C_UpdateStaminaGaugePosition");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000000, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_GetViewportWidgetGeometry_ReturnValue) == 0x000040, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_GetViewportWidgetGeometry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_GetLocalSize_ReturnValue) == 0x000080, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_GetLocalSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_Multiply_Vector2DVector2D_ReturnValue) == 0x000090, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_Multiply_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_Multiply_Vector2DVector2D_ReturnValue_1) == 0x0000A0, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_Multiply_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_BreakVector2D_X) == 0x0000B0, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_BreakVector2D_Y) == 0x0000B8, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_BreakVector2D_X_1) == 0x0000C0, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_BreakVector2D_Y_1) == 0x0000C8, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x0000D0, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition) == 0x0000D8, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue) == 0x0000E8, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_BreakVector2D_X_2) == 0x0000F0, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_BreakVector2D_Y_2) == 0x0000F8, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_FMax_ReturnValue) == 0x000100, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_FMax_ReturnValue_1) == 0x000108, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_FMin_ReturnValue) == 0x000110, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_FMin_ReturnValue_1) == 0x000118, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_FMin_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_MakeVector2D_ReturnValue_1) == 0x000120, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerUI_C_UpdateStaminaGaugePosition, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000130, "Member 'WBP_PlayerUI_C_UpdateStaminaGaugePosition::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");

}

