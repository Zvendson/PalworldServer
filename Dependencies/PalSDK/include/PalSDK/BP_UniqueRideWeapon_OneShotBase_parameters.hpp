#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_UniqueRideWeapon_OneShotBase.BP_UniqueRideWeapon_OneShotBase_C.GetShootInterval
// 0x0008 (0x0008 - 0x0000)
struct BP_UniqueRideWeapon_OneShotBase_C_GetShootInterval final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_OneShotBase_C_GetShootInterval) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_OneShotBase_C_GetShootInterval");
static_assert(sizeof(BP_UniqueRideWeapon_OneShotBase_C_GetShootInterval) == 0x000008, "Wrong size on BP_UniqueRideWeapon_OneShotBase_C_GetShootInterval");
static_assert(offsetof(BP_UniqueRideWeapon_OneShotBase_C_GetShootInterval, Time) == 0x000000, "Member 'BP_UniqueRideWeapon_OneShotBase_C_GetShootInterval::Time' has a wrong offset!");

// Function BP_UniqueRideWeapon_OneShotBase.BP_UniqueRideWeapon_OneShotBase_C.ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase
// 0x0018 (0x0018 - 0x0000)
struct BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetShootInterval_Time;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanUse_ReturnValue;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase) == 0x000008, "Wrong alignment on BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase");
static_assert(sizeof(BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase) == 0x000018, "Wrong size on BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase");
static_assert(offsetof(BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase, EntryPoint) == 0x000000, "Member 'BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase, CallFunc_GetShootInterval_Time) == 0x000008, "Member 'BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase::CallFunc_GetShootInterval_Time' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase, CallFunc_CanUse_ReturnValue) == 0x000010, "Member 'BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase::CallFunc_CanUse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase, CallFunc_Delay_Duration_ImplicitCast) == 0x000014, "Member 'BP_UniqueRideWeapon_OneShotBase_C_ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}

