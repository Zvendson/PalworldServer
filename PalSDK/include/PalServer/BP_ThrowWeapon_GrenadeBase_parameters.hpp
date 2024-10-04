#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetBulletShootRotation
// 0x0080 (0x0080 - 0x0000)
struct BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation final
{
public:
	struct FRotator                               BulletRotate;                                      // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_GetShootPitch_Pitch;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetBulletShootRotation_BulletRotate;      // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation) == 0x000008, "Wrong alignment on BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation");
static_assert(sizeof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation) == 0x000080, "Wrong size on BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, BulletRotate) == 0x000000, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::BulletRotate' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_GetShootPitch_Pitch) == 0x000018, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_GetShootPitch_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_GetBulletShootRotation_BulletRotate) == 0x000020, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_GetBulletShootRotation_BulletRotate' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_BreakRotator_Roll) == 0x000038, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_BreakRotator_Pitch) == 0x00003C, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_BreakRotator_Yaw) == 0x000040, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000048, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_FClamp_ReturnValue) == 0x000050, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_MakeRotator_ReturnValue) == 0x000058, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000078, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetEquipSocketName
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowWeapon_GrenadeBase_C_GetEquipSocketName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeapon_GrenadeBase_C_GetEquipSocketName) == 0x000004, "Wrong alignment on BP_ThrowWeapon_GrenadeBase_C_GetEquipSocketName");
static_assert(sizeof(BP_ThrowWeapon_GrenadeBase_C_GetEquipSocketName) == 0x000008, "Wrong size on BP_ThrowWeapon_GrenadeBase_C_GetEquipSocketName");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetEquipSocketName, ReturnValue) == 0x000000, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetEquipSocketName::ReturnValue' has a wrong offset!");

// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetShootPitch
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowWeapon_GrenadeBase_C_GetShootPitch final
{
public:
	double                                        Pitch;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeapon_GrenadeBase_C_GetShootPitch) == 0x000008, "Wrong alignment on BP_ThrowWeapon_GrenadeBase_C_GetShootPitch");
static_assert(sizeof(BP_ThrowWeapon_GrenadeBase_C_GetShootPitch) == 0x000008, "Wrong size on BP_ThrowWeapon_GrenadeBase_C_GetShootPitch");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetShootPitch, Pitch) == 0x000000, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetShootPitch::Pitch' has a wrong offset!");

// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetThrowObjectClass
// 0x0008 (0x0008 - 0x0000)
struct BP_ThrowWeapon_GrenadeBase_C_GetThrowObjectClass final
{
public:
	class UClass*                                 ThrowObject;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeapon_GrenadeBase_C_GetThrowObjectClass) == 0x000008, "Wrong alignment on BP_ThrowWeapon_GrenadeBase_C_GetThrowObjectClass");
static_assert(sizeof(BP_ThrowWeapon_GrenadeBase_C_GetThrowObjectClass) == 0x000008, "Wrong size on BP_ThrowWeapon_GrenadeBase_C_GetThrowObjectClass");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetThrowObjectClass, ThrowObject) == 0x000000, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetThrowObjectClass::ThrowObject' has a wrong offset!");

// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetRemainBulletCount
// 0x0038 (0x0038 - 0x0000)
struct BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemContainer*                      CallFunc_TryGetContainerFromInventoryType_OutContainer; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetContainerFromInventoryType_ReturnValue; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNowSelectedIndex_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackCount_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount) == 0x000008, "Wrong alignment on BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount");
static_assert(sizeof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount) == 0x000038, "Wrong size on BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount, ReturnValue) == 0x000000, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount, CallFunc_GetPalmi_ReturnValue) == 0x000008, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000010, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount, CallFunc_TryGetContainerFromInventoryType_OutContainer) == 0x000018, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount::CallFunc_TryGetContainerFromInventoryType_OutContainer' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount, CallFunc_TryGetContainerFromInventoryType_ReturnValue) == 0x000020, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount::CallFunc_TryGetContainerFromInventoryType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount, CallFunc_GetNowSelectedIndex_ReturnValue) == 0x000024, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount::CallFunc_GetNowSelectedIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount, CallFunc_GetStackCount_ReturnValue) == 0x000030, "Member 'BP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount::CallFunc_GetStackCount_ReturnValue' has a wrong offset!");

// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.IsEnableAutoAim
// 0x0001 (0x0001 - 0x0000)
struct BP_ThrowWeapon_GrenadeBase_C_IsEnableAutoAim final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ThrowWeapon_GrenadeBase_C_IsEnableAutoAim) == 0x000001, "Wrong alignment on BP_ThrowWeapon_GrenadeBase_C_IsEnableAutoAim");
static_assert(sizeof(BP_ThrowWeapon_GrenadeBase_C_IsEnableAutoAim) == 0x000001, "Wrong size on BP_ThrowWeapon_GrenadeBase_C_IsEnableAutoAim");
static_assert(offsetof(BP_ThrowWeapon_GrenadeBase_C_IsEnableAutoAim, ReturnValue) == 0x000000, "Member 'BP_ThrowWeapon_GrenadeBase_C_IsEnableAutoAim::ReturnValue' has a wrong offset!");

}

