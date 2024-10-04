#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.EnableFirstSummonPalGuide
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_EnableFirstSummonPalGuide final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_EnableFirstSummonPalGuide) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_EnableFirstSummonPalGuide");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_EnableFirstSummonPalGuide) == 0x000018, "Wrong size on WBP_PlayerSideInfo_Separated_C_EnableFirstSummonPalGuide");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_EnableFirstSummonPalGuide, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_EnableFirstSummonPalGuide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_EnableFirstSummonPalGuide, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'WBP_PlayerSideInfo_Separated_C_EnableFirstSummonPalGuide::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.ExecuteUbergraph_WBP_PlayerSideInfo_Separated
// 0x0088 (0x0088 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(double NowHunger, double NowMaxHunger)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_nowHunger;                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_nowMaxHunger;                   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_GetIndividualParameter_ReturnValue;       // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated) == 0x000088, "Wrong size on WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, EntryPoint) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, K2Node_CustomEvent_nowHunger) == 0x000028, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::K2Node_CustomEvent_nowHunger' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, K2Node_CustomEvent_nowMaxHunger) == 0x000030, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::K2Node_CustomEvent_nowMaxHunger' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000048, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, K2Node_CreateDelegate_OutputDelegate_3) == 0x000050, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, CallFunc_GetPalmi_ReturnValue) == 0x000060, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000068, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, CallFunc_GetIndividualParameter_ReturnValue) == 0x000078, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::CallFunc_GetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated, CallFunc_IsValid_ReturnValue_1) == 0x000080, "Member 'WBP_PlayerSideInfo_Separated_C_ExecuteUbergraph_WBP_PlayerSideInfo_Separated::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangedBodyTenperatureState
// 0x0002 (0x0002 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState final
{
public:
	EPalBodyTemperatureState                      BodyState;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState) == 0x000001, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState) == 0x000002, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState, BodyState) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState::BodyState' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedBodyTenperatureState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangedLoadoutIndex
// 0x0030 (0x0030 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex final
{
public:
	EPalPlayerInventoryType                       InventoryType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Index_0;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetNowEquipedBallItemID_OutBallItemID;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CountItemNum_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex) == 0x000030, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex, InventoryType) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex::InventoryType' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex, Index_0) == 0x000004, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000008, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex, CallFunc_GetPalmi_ReturnValue) == 0x000018, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex, CallFunc_GetNowEquipedBallItemID_OutBallItemID) == 0x000020, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex::CallFunc_GetNowEquipedBallItemID_OutBallItemID' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000028, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex, CallFunc_CountItemNum_ReturnValue) == 0x00002C, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedLoadoutIndex::CallFunc_CountItemNum_ReturnValue' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangedTemperature
// 0x0004 (0x0004 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnChangedTemperature final
{
public:
	int32                                         NextTemperature;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnChangedTemperature) == 0x000004, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnChangedTemperature");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnChangedTemperature) == 0x000004, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnChangedTemperature");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedTemperature, NextTemperature) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedTemperature::NextTemperature' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangedTenperatureRegistRate
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate final
{
public:
	int32                                         NextResistHeat;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextResistCold;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate) == 0x000004, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate) == 0x000008, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate, NextResistHeat) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate::NextResistHeat' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate, NextResistCold) == 0x000004, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangedTenperatureRegistRate::NextResistCold' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnChangeOtomoIndex
// 0x0018 (0x0018 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex final
{
public:
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSelectedOtomoID_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex) == 0x000018, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex, CallFunc_GetSelectedOtomoID_ReturnValue) == 0x000008, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex::CallFunc_GetSelectedOtomoID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex, CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue) == 0x000010, "Member 'WBP_PlayerSideInfo_Separated_C_OnChangeOtomoIndex::CallFunc_GetOtomoIndividualCharacterSlot_ReturnValue' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnDamagePlayer
// 0x0050 (0x0050 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnDamagePlayer final
{
public:
	struct FPalDamageResult                       DamageResult;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnDamagePlayer) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnDamagePlayer");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnDamagePlayer) == 0x000050, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnDamagePlayer");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnDamagePlayer, DamageResult) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnDamagePlayer::DamageResult' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnGetOff
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnGetOff final
{
public:
	class AActor*                                 RideActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnGetOff) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnGetOff");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnGetOff) == 0x000008, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnGetOff");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnGetOff, RideActor) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnGetOff::RideActor' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnRideon
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnRideon final
{
public:
	class AActor*                                 RideActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnRideon) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnRideon");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnRideon) == 0x000008, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnRideon");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnRideon, RideActor) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnRideon::RideActor' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnTimer_CheckActivationOtomo
// 0x0020 (0x0020 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo final
{
public:
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerLocalRecordData*              CallFunc_GetLocalRecordData_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo) == 0x000020, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo, CallFunc_GetLocalRecordData_ReturnValue) == 0x000008, "Member 'WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo, CallFunc_Map_Length_ReturnValue) == 0x000014, "Member 'WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'WBP_PlayerSideInfo_Separated_C_OnTimer_CheckActivationOtomo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnTimer_CheckCaptureCount
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount final
{
public:
	class UPalPlayerRecordData*                   CallFunc_GetLocalRecordData_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount) == 0x000010, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount, CallFunc_GetLocalRecordData_ReturnValue) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount, CallFunc_Greater_IntInt_ReturnValue) == 0x000009, "Member 'WBP_PlayerSideInfo_Separated_C_OnTimer_CheckCaptureCount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnUpdatePlayerEquipment
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment final
{
public:
	class UPalItemSlot*                           ItemSlot;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalPlayerEquipItemSlotType                   SlotType;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment) == 0x000010, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment, ItemSlot) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment::ItemSlot' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment, SlotType) == 0x000008, "Member 'WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment::SlotType' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment, CallFunc_IsEmpty_ReturnValue) == 0x00000B, "Member 'WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerEquipment::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnUpdatePlayerInventory
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerInventory final
{
public:
	class UPalItemContainer*                      Container;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerInventory) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerInventory");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerInventory) == 0x000008, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerInventory");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerInventory, Container) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnUpdatePlayerInventory::Container' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.OnUpdateUsableHandFlag
// 0x0002 (0x0002 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag final
{
public:
	bool                                          CanUseLeftHandFlag;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanUseRightHandFlag;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag) == 0x000001, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag) == 0x000002, "Wrong size on WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag, CanUseLeftHandFlag) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag::CanUseLeftHandFlag' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag, CanUseRightHandFlag) == 0x000001, "Member 'WBP_PlayerSideInfo_Separated_C_OnUpdateUsableHandFlag::CanUseRightHandFlag' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.Setup
// 0x01D8 (0x01D8 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_Setup final
{
public:
	class APalPlayerCharacter*                    Palmi;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool CanUseLeftHandFlag, bool CanUseRightHandFlag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTechnologyData*                     CallFunc_GetLocalTechnologyData_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NextResistHeat, int32 NextResistCold)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPalBodyTemperatureState BodyState)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NextTemperature)>        K2Node_CreateDelegate_OutputDelegate_5;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBodyTemperatureComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalItemSlot* ItemSlot, EPalPlayerEquipItemSlotType SlotType)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPalPlayerInventoryType InventoryType, int32 Index)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_TryGetItemSlotFromEquipmentType_OutSlot;  // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue; // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APalWeaponBase* Weapon)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* RideActor)>      K2Node_CreateDelegate_OutputDelegate_9;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowShieldMaxHP, const struct FFixedPoint64& NowShieldHP)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x00E4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 TechnologyPoint)>        K2Node_CreateDelegate_OutputDelegate_11;           // 0x00F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 UnusedPoint)>            K2Node_CreateDelegate_OutputDelegate_12;           // 0x0104(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x0114(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* RideActor)>      K2Node_CreateDelegate_OutputDelegate_14;           // 0x0124(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x0134(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_152[0x2];                                      // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_16;           // 0x0154(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalItemContainer* Container)> K2Node_CreateDelegate_OutputDelegate_17;           // 0x0170(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x0188(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNowSelectedIndex_ReturnValue;          // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                         CallFunc_GetHasWeapon_ReturnValue;                 // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue_1;                   // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B3[0x5];                                      // 0x01B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetShieldMaxHP_ReturnValue;               // 0x01C0(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetShieldHP_ReturnValue;                  // 0x01C8(0x0008)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_Setup) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_Setup");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_Setup) == 0x0001D8, "Wrong size on WBP_PlayerSideInfo_Separated_C_Setup");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, Palmi) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::Palmi' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetLocalTechnologyData_ReturnValue) == 0x000018, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetLocalTechnologyData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_3) == 0x000044, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_4) == 0x000054, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_5) == 0x000064, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetPalmi_ReturnValue) == 0x000078, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetComponentByClass_ReturnValue) == 0x000080, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_6) == 0x00008C, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetLocalInventoryData_ReturnValue) == 0x0000A0, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000A8, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_TryGetItemSlotFromEquipmentType_OutSlot) == 0x0000B8, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_TryGetItemSlotFromEquipmentType_OutSlot' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue) == 0x0000C0, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue_2) == 0x0000C1, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000C4, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_9) == 0x0000D4, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000E4, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_11) == 0x0000F4, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_12) == 0x000104, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_13) == 0x000114, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_14) == 0x000124, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_15) == 0x000134, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000148, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue_3) == 0x000150, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue_4) == 0x000151, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_16) == 0x000154, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000168, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_CreateDelegate_OutputDelegate_17) == 0x000170, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue_5) == 0x000180, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x000188, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetNowSelectedIndex_ReturnValue) == 0x000194, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetNowSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetHasWeapon_ReturnValue) == 0x000198, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetHasWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x0001A0, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetPalmi_ReturnValue_1) == 0x0001A8, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetPalmi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue_6) == 0x0001B0, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue_7) == 0x0001B1, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue_8) == 0x0001B2, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x0001B8, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetShieldMaxHP_ReturnValue) == 0x0001C0, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetShieldMaxHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_GetShieldHP_ReturnValue) == 0x0001C8, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_GetShieldHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_Setup, CallFunc_IsValid_ReturnValue_9) == 0x0001D0, "Member 'WBP_PlayerSideInfo_Separated_C_Setup::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.SetupFirstPalThrowGuide
// 0x0048 (0x0048 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide final
{
public:
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UPalPlayerLocalRecordData*              CallFunc_GetLocalRecordData_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerRecordData*                   CallFunc_GetLocalRecordData_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide) == 0x000048, "Wrong size on WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_GetLocalRecordData_ReturnValue) == 0x000028, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_Map_Length_ReturnValue) == 0x000034, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_GetLocalRecordData_ReturnValue_1) == 0x000038, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_GetLocalRecordData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_IsValid_ReturnValue_2) == 0x000041, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000042, "Member 'WBP_PlayerSideInfo_Separated_C_SetupFirstPalThrowGuide::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerSideInfo_Separated.WBP_PlayerSideInfo_Separated_C.UpdateHunger_Binded
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded final
{
public:
	double                                        NowHunger;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxHunger;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded) == 0x000008, "Wrong alignment on WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded");
static_assert(sizeof(WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded) == 0x000010, "Wrong size on WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded, NowHunger) == 0x000000, "Member 'WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded::NowHunger' has a wrong offset!");
static_assert(offsetof(WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded, NowMaxHunger) == 0x000008, "Member 'WBP_PlayerSideInfo_Separated_C_UpdateHunger_Binded::NowMaxHunger' has a wrong offset!");

}

