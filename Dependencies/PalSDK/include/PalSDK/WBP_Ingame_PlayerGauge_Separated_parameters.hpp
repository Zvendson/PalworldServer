#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_ShowHideLeft
// 0x0001 (0x0001 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideLeft final
{
public:
	bool                                          Hide;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideLeft) == 0x000001, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideLeft");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideLeft) == 0x000001, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideLeft");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideLeft, Hide) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideLeft::Hide' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_ShowHideRight
// 0x0001 (0x0001 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideRight final
{
public:
	bool                                          Hide;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideRight) == 0x000001, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideRight");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideRight) == 0x000001, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideRight");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideRight, Hide) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideRight::Hide' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.BindWeaponEvent
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent final
{
public:
	class APalWeaponBase*                         WeaponBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float RemainingTime, float CoolDownTime)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GrapplingGun_C*                     K2Node_DynamicCast_AsBP_Grappling_Gun;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ThrowWeapon_GrenadeBase_C*          K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCoolDown_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x2];                                       // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRemainingCoolDownTime_ReturnValue;     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsStart)>                 K2Node_CreateDelegate_OutputDelegate_1;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalItemSlot* Slot)>     K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemContainer*                      CallFunc_TryGetContainerFromInventoryType_OutContainer; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetContainerFromInventoryType_ReturnValue; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNowSelectedIndex_ReturnValue;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RemainingBulletsNum)>    K2Node_CreateDelegate_OutputDelegate_3;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 bulletsNum)>             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RemainingBulletsNum)>    K2Node_CreateDelegate_OutputDelegate_5;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent) == 0x0000C0, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, WeaponBase) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_DynamicCast_AsBP_Grappling_Gun) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_DynamicCast_AsBP_Grappling_Gun' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_IsCoolDown_ReturnValue) == 0x000031, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_IsCoolDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_GetRemainingCoolDownTime_ReturnValue) == 0x000034, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_GetRemainingCoolDownTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_GetPalmi_ReturnValue) == 0x000058, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000060, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_TryGetContainerFromInventoryType_OutContainer) == 0x000068, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_TryGetContainerFromInventoryType_OutContainer' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_TryGetContainerFromInventoryType_ReturnValue) == 0x000070, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_TryGetContainerFromInventoryType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_GetNowSelectedIndex_ReturnValue) == 0x000074, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_GetNowSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_CreateDelegate_OutputDelegate_3) == 0x000078, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_Array_Get_Item) == 0x000088, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_CreateDelegate_OutputDelegate_4) == 0x000090, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000A0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast) == 0x0000B0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent, CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast) == 0x0000B8, "Member 'WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent::CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.CalcMaxBulletNum
// 0x0040 (0x0040 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum final
{
public:
	int32                                         MaxBulletNum;                                      // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         K2Node_DynamicCast_AsPal_Weapon_Base;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetRequiredBulletName_outName;            // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CountItemNum_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum) == 0x000040, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, MaxBulletNum) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::MaxBulletNum' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, K2Node_DynamicCast_AsPal_Weapon_Base) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::K2Node_DynamicCast_AsPal_Weapon_Base' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, CallFunc_GetRequiredBulletName_outName) == 0x00002C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::CallFunc_GetRequiredBulletName_outName' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, CallFunc_NotEqual_NameName_ReturnValue) == 0x000035, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum, CallFunc_CountItemNum_ReturnValue) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum::CallFunc_CountItemNum_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Change Infinity Weapon Detail
// 0x0010 (0x0010 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail final
{
public:
	class APalWeaponBase*                         WeaponBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail) == 0x000010, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail, WeaponBase) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000009, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail, CallFunc_BooleanOR_ReturnValue) == 0x00000A, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Change Normal Weapon Detail
// 0x0005 (0x0005 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail final
{
public:
	bool                                          IsGrenade;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail) == 0x000001, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail) == 0x000005, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail, IsGrenade) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail::IsGrenade' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail, Temp_bool_Variable) == 0x000001, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail, Temp_byte_Variable) == 0x000002, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail, K2Node_Select_Default) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ChangePalThrowDetail
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail final
{
public:
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail) == 0x000018, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x00000C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail, CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ChangePalThrowDetail::CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ChangeRideMode
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_ChangeRideMode final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_ChangeRideMode) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_ChangeRideMode");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_ChangeRideMode) == 0x000008, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_ChangeRideMode");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ChangeRideMode, Actor) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ChangeRideMode::Actor' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.CREATEDELEGATE_PROXYFUNCTION_0
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0 final
{
public:
	float                                         RemainingTime;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CoolDownTime;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0) == 0x000018, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0, RemainingTime) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0::RemainingTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0, CoolDownTime) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0::CoolDownTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0, CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0::CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0, CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0::CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.CREATEDELEGATE_PROXYFUNCTION_1
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1 final
{
public:
	float                                         RemainingTime;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CoolDownTime;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1) == 0x000018, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1, RemainingTime) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1::RemainingTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1, CoolDownTime) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1::CoolDownTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1, CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1::CallFunc_OnGrapplingGunCoolTimerUpdate_Timer_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1, CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1::CallFunc_OnGrapplingGunCoolTimerUpdate_CoolTime_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated
// 0x0088 (0x0088 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Hide_1;                         // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Hide;                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0020(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default_1;                           // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated) == 0x000088, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, EntryPoint) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, Temp_byte_Variable) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, Temp_byte_Variable_1) == 0x000005, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, Temp_bool_Variable) == 0x000006, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, Temp_byte_Variable_2) == 0x000007, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, Temp_byte_Variable_3) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, K2Node_CustomEvent_Hide_1) == 0x000009, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::K2Node_CustomEvent_Hide_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, K2Node_CustomEvent_Hide) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::K2Node_CustomEvent_Hide' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, K2Node_Event_MyGeometry) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, K2Node_Event_InDeltaTime) == 0x000060, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, K2Node_Select_Default) == 0x000064, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, CallFunc_PlayAnimation_ReturnValue_1) == 0x000068, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, Temp_bool_Variable_1) == 0x000070, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, K2Node_Select_Default_1) == 0x000071, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, CallFunc_PlayAnimation_ReturnValue_2) == 0x000078, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated, CallFunc_PlayAnimation_ReturnValue_3) == 0x000080, "Member 'WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Is Require Bullet
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet final
{
public:
	class APalWeaponBase*                         WeaponActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRequire;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetRequiredBulletName_outName;            // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet) == 0x000018, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet, WeaponActor) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet::WeaponActor' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet, IsRequire) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet::IsRequire' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet, CallFunc_GetRequiredBulletName_outName) == 0x00000C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet::CallFunc_GetRequiredBulletName_outName' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet, CallFunc_NotEqual_NameName_ReturnValue) == 0x000014, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsDummyWeapon
// 0x0020 (0x0020 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon final
{
public:
	class APalWeaponBase*                         WeaponBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDummy;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ThrowWeapon_Dummy_C*                K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon) == 0x000020, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon, WeaponBase) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon, IsDummy) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon::IsDummy' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon, K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon::K2Node_DynamicCast_AsBP_Throw_Weapon_Dummy' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsInfinityWeapon
// 0x0038 (0x0038 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon final
{
public:
	class FName                                   WeaponName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInfinity;                                        // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                 CallFunc_GetStaticItemData_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStaticWeaponItemData*               K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data;  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon) == 0x000038, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon, WeaponName) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon::WeaponName' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon, IsInfinity) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon::IsInfinity' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon, CallFunc_GetItemIDManager_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon, CallFunc_GetStaticItemData_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon::CallFunc_GetStaticItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon, K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon::K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000032, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsPalThrowWeapon
// 0x0020 (0x0020 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon final
{
public:
	class APalWeaponBase*                         WeaponBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPalThrowWeapon_0;                                // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ThrowPalWeapon_C*                   K2Node_DynamicCast_AsBP_Throw_Pal_Weapon;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon) == 0x000020, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon, WeaponBase) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon, IsPalThrowWeapon_0) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon::IsPalThrowWeapon_0' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon, K2Node_DynamicCast_AsBP_Throw_Pal_Weapon) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon::K2Node_DynamicCast_AsBP_Throw_Pal_Weapon' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsSpecialWeapon
// 0x0060 (0x0060 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon final
{
public:
	class APalWeaponBase*                         WeaponBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpecial;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x000C(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStaticItemDataBase*                 CallFunc_GetStaticItemData_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticWeaponItemData*               K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data;  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon) == 0x000060, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, WeaponBase) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, IsSpecial) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::IsSpecial' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, CallFunc_GetItemId_ReturnValue) == 0x00000C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, CallFunc_GetItemIDManager_ReturnValue) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, CallFunc_GetStaticItemData_ReturnValue) == 0x000048, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::CallFunc_GetStaticItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data) == 0x000050, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::K2Node_DynamicCast_AsPal_Static_Weapon_Item_Data' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00005A, "Member 'WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnEndHPGaugeDelay
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_OnEndHPGaugeDelay final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_OnEndHPGaugeDelay) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_OnEndHPGaugeDelay");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_OnEndHPGaugeDelay) == 0x000008, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_OnEndHPGaugeDelay");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnEndHPGaugeDelay, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnEndHPGaugeDelay::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnEndShieldGaugeDelay
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay final
{
public:
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay) == 0x000018, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay, CallFunc_EqualEqual_Int64Int64_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay::CallFunc_EqualEqual_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnEndShieldGaugeDelay::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnGrapplingGunCoolStateUpdate
// 0x0005 (0x0005 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate final
{
public:
	bool                                          StartCool;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate) == 0x000001, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate) == 0x000005, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate, StartCool) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate::StartCool' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate, Temp_bool_Variable) == 0x000001, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate, Temp_byte_Variable) == 0x000002, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate, K2Node_Select_Default) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnGrapplingGunCoolTimerUpdate
// 0x0048 (0x0048 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate final
{
public:
	double                                        Timer;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CoolTime;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate) == 0x000048, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate, Timer) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate::Timer' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate, CoolTime) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate::CoolTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate, CallFunc_Round_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnReloadWeapon
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon final
{
public:
	int32                                         bulletsNum;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalcMaxBulletNum_maxBulletNum;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon) == 0x000004, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon) == 0x000008, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon, bulletsNum) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon::bulletsNum' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon, CallFunc_CalcMaxBulletNum_maxBulletNum) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon::CallFunc_CalcMaxBulletNum_maxBulletNum' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnStartHPGaugeDelay
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_OnStartHPGaugeDelay final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_OnStartHPGaugeDelay) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_OnStartHPGaugeDelay");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_OnStartHPGaugeDelay) == 0x000008, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_OnStartHPGaugeDelay");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnStartHPGaugeDelay, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnStartHPGaugeDelay::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnStartShieldGaugeDelay
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_OnStartShieldGaugeDelay final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_OnStartShieldGaugeDelay) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_OnStartShieldGaugeDelay");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_OnStartShieldGaugeDelay) == 0x000008, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_OnStartShieldGaugeDelay");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnStartShieldGaugeDelay, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnStartShieldGaugeDelay::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnUpdateBallLoadoutSlot
// 0x0028 (0x0028 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot final
{
public:
	class UPalItemSlot*                           Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackCount_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot) == 0x000028, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot, Slot_0) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot, CallFunc_GetStackCount_ReturnValue) == 0x00000C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot::CallFunc_GetStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnUpdateGrenadeLoadoutSlot
// 0x0010 (0x0010 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot final
{
public:
	class UPalItemSlot*                           Slot_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackCount_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot) == 0x000010, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot, Slot_0) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot::Slot_0' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot, CallFunc_GetStackCount_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot::CallFunc_GetStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.RegisterBallLoadoutEvent
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent final
{
public:
	class UPalItemSlot*                           ItemSlot;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalItemSlot* Slot)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent) == 0x000018, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent, ItemSlot) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent::ItemSlot' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Set Player Hunger
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Set_Player_Hunger final
{
public:
	double                                        HungerRate;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Set_Player_Hunger) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Set_Player_Hunger");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Set_Player_Hunger) == 0x000008, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Set_Player_Hunger");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Set_Player_Hunger, HungerRate) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Set_Player_Hunger::HungerRate' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetBallDetail
// 0x0080 (0x0080 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail final
{
public:
	class FName                                   BallItemID;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplayNum;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_ItemData          K2Node_MakeStruct_PalDataTableRowName_ItemData;    // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetItemName_outName;                      // 0x0018(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_Map_Find_Value;                           // 0x0048(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail) == 0x000080, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail, BallItemID) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail::BallItemID' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail, DisplayNum) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail::DisplayNum' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail, K2Node_MakeStruct_PalDataTableRowName_ItemData) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail::K2Node_MakeStruct_PalDataTableRowName_ItemData' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail, CallFunc_GetItemName_outName) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail::CallFunc_GetItemName_outName' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail, CallFunc_Map_Find_Value) == 0x000048, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail, CallFunc_Map_Find_ReturnValue) == 0x000078, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetBallNum
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_SetBallNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable;                               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0058(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0078(0x0018)()
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable_1;                             // 0x0090(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           K2Node_Select_Default;                             // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable_2;                             // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable_3;                             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           K2Node_Select_Default_1;                           // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable_4;                             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable_5;                             // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           K2Node_Select_Default_3;                           // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_SetBallNum");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum) == 0x0000F0, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_SetBallNum");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Num) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Num' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_bool_Variable) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000005, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_Min_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_class_Variable) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_Max_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_Divide_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_Percent_IntInt_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_Percent_IntInt_ReturnValue_1) == 0x00002C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_BooleanAND_ReturnValue) == 0x000050, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000058, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000070, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000078, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_class_Variable_1) == 0x000090, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_bool_Variable_1) == 0x000098, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, K2Node_Select_Default) == 0x0000A0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_class_Variable_2) == 0x0000A8, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_class_Variable_3) == 0x0000B0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_bool_Variable_2) == 0x0000B8, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, K2Node_Select_Default_1) == 0x0000C0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_byte_Variable) == 0x0000C8, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_byte_Variable_1) == 0x0000C9, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, K2Node_Select_Default_2) == 0x0000CA, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0000CB, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_class_Variable_4) == 0x0000D0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_class_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_class_Variable_5) == 0x0000D8, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_class_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, Temp_bool_Variable_3) == 0x0000E0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetBallNum, K2Node_Select_Default_3) == 0x0000E8, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetBallNum::K2Node_Select_Default_3' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetEnableFirstSummonPalGuide
// 0x0001 (0x0001 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_SetEnableFirstSummonPalGuide final
{
public:
	bool                                          IsEnableFlag;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_SetEnableFirstSummonPalGuide) == 0x000001, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_SetEnableFirstSummonPalGuide");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_SetEnableFirstSummonPalGuide) == 0x000001, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_SetEnableFirstSummonPalGuide");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetEnableFirstSummonPalGuide, IsEnableFlag) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetEnableFirstSummonPalGuide::IsEnableFlag' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Setup Bullet Info
// 0x0050 (0x0050 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info final
{
public:
	class APalWeaponBase*                         WeaponBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ThrowWeapon_GrenadeBase_C*          K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x0014(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPalThrowWeapon_isPalThrowWeapon;        // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInfinityWeapon_isInfinity;              // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Require_Bullet_IsRequire;              // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F[0x1];                                       // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalcMaxBulletNum_maxBulletNum;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRemainBulletCount_ReturnValue;         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMagazineSize_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info) == 0x000050, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, WeaponBase) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, CallFunc_GetItemId_ReturnValue) == 0x000014, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, CallFunc_IsPalThrowWeapon_isPalThrowWeapon) == 0x00003C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::CallFunc_IsPalThrowWeapon_isPalThrowWeapon' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, CallFunc_IsInfinityWeapon_isInfinity) == 0x00003D, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::CallFunc_IsInfinityWeapon_isInfinity' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, CallFunc_Is_Require_Bullet_IsRequire) == 0x00003E, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::CallFunc_Is_Require_Bullet_IsRequire' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, CallFunc_CalcMaxBulletNum_maxBulletNum) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::CallFunc_CalcMaxBulletNum_maxBulletNum' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, CallFunc_GetRemainBulletCount_ReturnValue) == 0x000044, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::CallFunc_GetRemainBulletCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info, CallFunc_GetMagazineSize_ReturnValue) == 0x000048, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info::CallFunc_GetMagazineSize_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Setup Delay Gauge
// 0x0050 (0x0050 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             CallFunc_SpawnObject_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             CallFunc_SpawnObject_ReturnValue_1;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge) == 0x000050, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge, CallFunc_SpawnObject_ReturnValue) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge, CallFunc_SpawnObject_ReturnValue_1) == 0x000048, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Setup_Delay_Gauge::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetupBulletGauge
// 0x000C (0x000C - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge final
{
public:
	int32                                         MagazineSize;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge) == 0x000004, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge) == 0x00000C, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge, MagazineSize) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge::MagazineSize' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetUsableHandFlag
// 0x0048 (0x0048 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag final
{
public:
	bool                                          IsLeftHandUsable;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRightHandUsable;                                 // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         K2Node_DynamicCast_AsPal_Weapon_Base;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanUseWeapon_ReturnValue;                 // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1; // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag) == 0x000048, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, IsLeftHandUsable) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::IsLeftHandUsable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, IsRightHandUsable) == 0x000001, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::IsRightHandUsable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, CallFunc_GetPalmi_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, K2Node_DynamicCast_AsPal_Weapon_Base) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::K2Node_DynamicCast_AsPal_Weapon_Base' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000031, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, CallFunc_CanUseWeapon_ReturnValue) == 0x000032, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::CallFunc_CanUseWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, CallFunc_SelectFloat_ReturnValue_1) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1) == 0x000044, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetVisibilityShield
// 0x0005 (0x0005 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield final
{
public:
	bool                                          IsVisible_0;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield) == 0x000001, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield) == 0x000005, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield, IsVisible_0) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield::IsVisible_0' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield, Temp_bool_Variable) == 0x000002, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield, Temp_byte_Variable) == 0x000003, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield, K2Node_Select_Default) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetWeaponNameText
// 0x0058 (0x0058 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText final
{
public:
	class APalWeaponBase*                         WeaponBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPalThrowWeapon_isPalThrowWeapon;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x000C(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemName_outName;                      // 0x0038(0x0018)()
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText) == 0x000058, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText, WeaponBase) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText, CallFunc_IsPalThrowWeapon_isPalThrowWeapon) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText::CallFunc_IsPalThrowWeapon_isPalThrowWeapon' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText, CallFunc_GetItemId_ReturnValue) == 0x00000C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText, CallFunc_GetItemName_outName) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText::CallFunc_GetItemName_outName' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText, CallFunc_NotEqual_NameName_ReturnValue) == 0x000050, "Member 'WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Tick) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Tick");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Tick) == 0x000048, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Tick");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.TryUpdateMaxBullet
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet final
{
public:
	int32                                         CallFunc_CalcMaxBulletNum_maxBulletNum;            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet) == 0x000004, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet) == 0x000008, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet, CallFunc_CalcMaxBulletNum_maxBulletNum) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet::CallFunc_CalcMaxBulletNum_maxBulletNum' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000004, "Member 'WBP_Ingame_PlayerGauge_Separated_C_TryUpdateMaxBullet::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Unbind Last Equiped Weapon Event
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event final
{
public:
	TDelegate<void(int32 RemainingBulletsNum)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsStart)>                 K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(float RemainingTime, float CoolDownTime)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalItemSlot* Slot)>     K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 bulletsNum)>             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RemainingBulletsNum)>    K2Node_CreateDelegate_OutputDelegate_5;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         K2Node_DynamicCast_AsPal_Weapon_Base;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GrapplingGun_C*                     K2Node_DynamicCast_AsBP_Grappling_Gun;             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ThrowWeapon_GrenadeBase_C*          K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event) == 0x0000A0, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000064, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000068, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_DynamicCast_AsPal_Weapon_Base) == 0x000070, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_DynamicCast_AsPal_Weapon_Base' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, CallFunc_IsValid_ReturnValue_1) == 0x000079, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_DynamicCast_AsBP_Grappling_Gun) == 0x000080, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_DynamicCast_AsBP_Grappling_Gun' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base) == 0x000090, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_DynamicCast_AsBP_Throw_Weapon_Grenade_Base' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event, K2Node_DynamicCast_bSuccess_2) == 0x000098, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Unbind_Last_Equiped_Weapon_Event::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update HP
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Update_HP final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          MaxHP;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0028(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue_1;           // 0x00B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_percent_ImplicitCast;          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercentForce_percent_ImplicitCast;     // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Update_HP");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP) == 0x0000F8, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Update_HP");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, NowHP) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, MaxHP) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::MaxHP' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1) == 0x000098, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, K2Node_MakeArray_Array) == 0x0000A0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Conv_Int64ToText_ReturnValue_1) == 0x0000B0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Conv_Int64ToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0000E0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000E8, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_SetPercent_percent_ImplicitCast) == 0x0000F0, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_HP, CallFunc_SetPercentForce_percent_ImplicitCast) == 0x0000F4, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_HP::CallFunc_SetPercentForce_percent_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update Now Bullet Num
// 0x0040 (0x0040 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num final
{
public:
	int32                                         NowBulletNum;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable_1;                             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	TSubclassOf<class UCommonTextStyle>           K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num) == 0x000040, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num, NowBulletNum) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num::NowBulletNum' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num, Temp_class_Variable) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num, Temp_class_Variable_1) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num, Temp_bool_Variable) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000019, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001A, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num, K2Node_Select_Default) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num::K2Node_Select_Default' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update Weapon
// 0x0090 (0x0090 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon final
{
public:
	class APalWeaponBase*                         WeaponBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDummyWeapon_IsDummy;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSpecialWeapon_isSpecial;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsALLEmpty_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_GetPrimaryInventoryType_ReturnValue;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalShooterComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanUseRightHand_ReturnValue;              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanUseLeftHand_ReturnValue;               // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x5];                                       // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_2;                   // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_GetPrimaryInventoryType_ReturnValue_1;    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class APalWeaponBase>          CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0058(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon) == 0x000090, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, WeaponBase) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_IsDummyWeapon_IsDummy) == 0x000009, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_IsDummyWeapon_IsDummy' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_IsSpecialWeapon_isSpecial) == 0x00000A, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_IsSpecialWeapon_isSpecial' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_BooleanOR_ReturnValue) == 0x00000B, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_IsALLEmpty_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_IsALLEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_GetPalmi_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_GetPalmi_ReturnValue_1) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_GetPrimaryInventoryType_ReturnValue) == 0x000031, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_GetPrimaryInventoryType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_CanUseRightHand_ReturnValue) == 0x000041, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_CanUseRightHand_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_CanUseLeftHand_ReturnValue) == 0x000042, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_CanUseLeftHand_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_GetPalmi_ReturnValue_2) == 0x000048, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_GetPalmi_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_IsValid_ReturnValue_3) == 0x000050, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_GetPrimaryInventoryType_ReturnValue_1) == 0x000051, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_GetPrimaryInventoryType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000052, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000058, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_IsValid_ReturnValue_4) == 0x000088, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000089, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update Weapon Icon
// 0x0010 (0x0010 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon final
{
public:
	class APalWeaponBase*                         WeaponBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPalThrowWeapon_isPalThrowWeapon;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSpecialWeapon_isSpecial;                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon) == 0x000010, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon, WeaponBase) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon::WeaponBase' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon, CallFunc_IsPalThrowWeapon_isPalThrowWeapon) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon::CallFunc_IsPalThrowWeapon_isPalThrowWeapon' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00000A, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon, CallFunc_IsSpecialWeapon_isSpecial) == 0x00000B, "Member 'WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon::CallFunc_IsSpecialWeapon_isSpecial' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateMaxBulletNum
// 0x0050 (0x0050 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum final
{
public:
	int32                                         MaxBulletNum;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           Temp_class_Variable_1;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonTextStyle>           K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum) == 0x000050, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum, MaxBulletNum) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum::MaxBulletNum' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum, Temp_class_Variable) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum, Temp_class_Variable_1) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum, Temp_bool_Variable) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum, K2Node_Select_Default) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdatePalInfo
// 0x0008 (0x0008 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_UpdatePalInfo final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_UpdatePalInfo) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_UpdatePalInfo");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_UpdatePalInfo) == 0x000008, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_UpdatePalInfo");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdatePalInfo, TargetSlot) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdatePalInfo::TargetSlot' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateShield
// 0x0058 (0x0058 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_UpdateShield final
{
public:
	struct FFixedPoint64                          MaxShield;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowShield;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_percent_ImplicitCast;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_UpdateShield");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield) == 0x000058, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_UpdateShield");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, MaxShield) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::MaxShield' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, NowShield) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::NowShield' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_EqualEqual_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000014, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x00001C, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_Convert_FixedPoint64ToInt64_ReturnValue) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_Convert_FixedPoint64ToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_EqualEqual_Int64Int64_ReturnValue) == 0x000028, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_EqualEqual_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000040, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateShield, CallFunc_SetPercent_percent_ImplicitCast) == 0x000050, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateShield::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateSP
// 0x0018 (0x0018 - 0x0000)
struct WBP_Ingame_PlayerGauge_Separated_C_UpdateSP final
{
public:
	struct FFixedPoint64                          NowSP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          MaxSP;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          IsOverHeated;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_Separated_C_UpdateSP) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_Separated_C_UpdateSP");
static_assert(sizeof(WBP_Ingame_PlayerGauge_Separated_C_UpdateSP) == 0x000018, "Wrong size on WBP_Ingame_PlayerGauge_Separated_C_UpdateSP");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateSP, NowSP) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateSP::NowSP' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateSP, MaxSP) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateSP::MaxSP' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_Separated_C_UpdateSP, IsOverHeated) == 0x000010, "Member 'WBP_Ingame_PlayerGauge_Separated_C_UpdateSP::IsOverHeated' has a wrong offset!");

}

