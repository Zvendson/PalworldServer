#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_SphereLauncher.BP_SphereLauncher_C.ChangeTransformForRocketReload
// 0x0030 (0x0030 - 0x0000)
struct BP_SphereLauncher_C_ChangeTransformForRocketReload final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SphereLauncher_C_ChangeTransformForRocketReload) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_ChangeTransformForRocketReload");
static_assert(sizeof(BP_SphereLauncher_C_ChangeTransformForRocketReload) == 0x000030, "Wrong size on BP_SphereLauncher_C_ChangeTransformForRocketReload");
static_assert(offsetof(BP_SphereLauncher_C_ChangeTransformForRocketReload, Location) == 0x000000, "Member 'BP_SphereLauncher_C_ChangeTransformForRocketReload::Location' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ChangeTransformForRocketReload, Rotation) == 0x000018, "Member 'BP_SphereLauncher_C_ChangeTransformForRocketReload::Rotation' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.ChangeTransformForRocketWhenReloadIsDone
// 0x0030 (0x0030 - 0x0000)
struct BP_SphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Lotation;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone");
static_assert(sizeof(BP_SphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone) == 0x000030, "Wrong size on BP_SphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone");
static_assert(offsetof(BP_SphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone, Location) == 0x000000, "Member 'BP_SphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone::Location' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone, Lotation) == 0x000018, "Member 'BP_SphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone::Lotation' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.CustomEvent
// 0x0004 (0x0004 - 0x0000)
struct BP_SphereLauncher_C_CustomEvent final
{
public:
	int32                                         bulletsNum;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_CustomEvent) == 0x000004, "Wrong alignment on BP_SphereLauncher_C_CustomEvent");
static_assert(sizeof(BP_SphereLauncher_C_CustomEvent) == 0x000004, "Wrong size on BP_SphereLauncher_C_CustomEvent");
static_assert(offsetof(BP_SphereLauncher_C_CustomEvent, bulletsNum) == 0x000000, "Member 'BP_SphereLauncher_C_CustomEvent::bulletsNum' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.ExecuteUbergraph_BP_SphereLauncher
// 0x001C (0x001C - 0x0000)
struct BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 bulletsNum)>             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_bulletsNum;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher) == 0x000004, "Wrong alignment on BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher");
static_assert(sizeof(BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher) == 0x00001C, "Wrong size on BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher");
static_assert(offsetof(BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher, EntryPoint) == 0x000000, "Member 'BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher, K2Node_CustomEvent_bulletsNum) == 0x000014, "Member 'BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher::K2Node_CustomEvent_bulletsNum' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000018, "Member 'BP_SphereLauncher_C_ExecuteUbergraph_BP_SphereLauncher::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.GetAimingBlurAngle
// 0x0008 (0x0008 - 0x0000)
struct BP_SphereLauncher_C_GetAimingBlurAngle final
{
public:
	double                                        Angle;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_GetAimingBlurAngle) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_GetAimingBlurAngle");
static_assert(sizeof(BP_SphereLauncher_C_GetAimingBlurAngle) == 0x000008, "Wrong size on BP_SphereLauncher_C_GetAimingBlurAngle");
static_assert(offsetof(BP_SphereLauncher_C_GetAimingBlurAngle, Angle) == 0x000000, "Member 'BP_SphereLauncher_C_GetAimingBlurAngle::Angle' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.GetBlurAngle
// 0x0008 (0x0008 - 0x0000)
struct BP_SphereLauncher_C_GetBlurAngle final
{
public:
	double                                        Angle;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_GetBlurAngle) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_GetBlurAngle");
static_assert(sizeof(BP_SphereLauncher_C_GetBlurAngle) == 0x000008, "Wrong size on BP_SphereLauncher_C_GetBlurAngle");
static_assert(offsetof(BP_SphereLauncher_C_GetBlurAngle, Angle) == 0x000000, "Member 'BP_SphereLauncher_C_GetBlurAngle::Angle' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.GetBulletClass
// 0x0010 (0x0010 - 0x0000)
struct BP_SphereLauncher_C_GetBulletClass final
{
public:
	class UClass*                                 NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_GetBulletClass) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_GetBulletClass");
static_assert(sizeof(BP_SphereLauncher_C_GetBulletClass) == 0x000010, "Wrong size on BP_SphereLauncher_C_GetBulletClass");
static_assert(offsetof(BP_SphereLauncher_C_GetBulletClass, NewParam) == 0x000000, "Member 'BP_SphereLauncher_C_GetBulletClass::NewParam' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetBulletClass, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_SphereLauncher_C_GetBulletClass::CallFunc_Array_Get_Item' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.GetMuzzleLocation
// 0x0030 (0x0030 - 0x0000)
struct BP_SphereLauncher_C_GetMuzzleLocation final
{
public:
	struct FVector                                MuzzleLocation;                                    // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetMuzzleLocation_MuzzleLocation;         // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_GetMuzzleLocation) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_GetMuzzleLocation");
static_assert(sizeof(BP_SphereLauncher_C_GetMuzzleLocation) == 0x000030, "Wrong size on BP_SphereLauncher_C_GetMuzzleLocation");
static_assert(offsetof(BP_SphereLauncher_C_GetMuzzleLocation, MuzzleLocation) == 0x000000, "Member 'BP_SphereLauncher_C_GetMuzzleLocation::MuzzleLocation' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetMuzzleLocation, CallFunc_GetMuzzleLocation_MuzzleLocation) == 0x000018, "Member 'BP_SphereLauncher_C_GetMuzzleLocation::CallFunc_GetMuzzleLocation_MuzzleLocation' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.GetMuzzleRotator
// 0x0030 (0x0030 - 0x0000)
struct BP_SphereLauncher_C_GetMuzzleRotator final
{
public:
	struct FRotator                               Rotator;                                           // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_GetMuzzleRotator_Rotator;                 // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_SphereLauncher_C_GetMuzzleRotator) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_GetMuzzleRotator");
static_assert(sizeof(BP_SphereLauncher_C_GetMuzzleRotator) == 0x000030, "Wrong size on BP_SphereLauncher_C_GetMuzzleRotator");
static_assert(offsetof(BP_SphereLauncher_C_GetMuzzleRotator, Rotator) == 0x000000, "Member 'BP_SphereLauncher_C_GetMuzzleRotator::Rotator' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetMuzzleRotator, CallFunc_GetMuzzleRotator_Rotator) == 0x000018, "Member 'BP_SphereLauncher_C_GetMuzzleRotator::CallFunc_GetMuzzleRotator_Rotator' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.GetMuzzleTransform
// 0x00C0 (0x00C0 - 0x0000)
struct BP_SphereLauncher_C_GetMuzzleTransform final
{
public:
	struct FTransform                             Transform;                                         // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_GetMuzzleTransform) == 0x000010, "Wrong alignment on BP_SphereLauncher_C_GetMuzzleTransform");
static_assert(sizeof(BP_SphereLauncher_C_GetMuzzleTransform) == 0x0000C0, "Wrong size on BP_SphereLauncher_C_GetMuzzleTransform");
static_assert(offsetof(BP_SphereLauncher_C_GetMuzzleTransform, Transform) == 0x000000, "Member 'BP_SphereLauncher_C_GetMuzzleTransform::Transform' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetMuzzleTransform, CallFunc_GetSocketTransform_ReturnValue) == 0x000060, "Member 'BP_SphereLauncher_C_GetMuzzleTransform::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.GetShootInterval
// 0x0008 (0x0008 - 0x0000)
struct BP_SphereLauncher_C_GetShootInterval final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_GetShootInterval) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_GetShootInterval");
static_assert(sizeof(BP_SphereLauncher_C_GetShootInterval) == 0x000008, "Wrong size on BP_SphereLauncher_C_GetShootInterval");
static_assert(offsetof(BP_SphereLauncher_C_GetShootInterval, Time) == 0x000000, "Member 'BP_SphereLauncher_C_GetShootInterval::Time' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.GetShootTransformList
// 0x03B0 (0x03B0 - 0x0000)
struct BP_SphereLauncher_C_GetShootTransformList final
{
public:
	double                                        BaseAnglePitch;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BaseAngleYaw;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BlurAngle;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                     ShootTransformList;                                // 0x0018(0x0010)(Parm, OutParm)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             BaseTransform;                                     // 0x0030(0x0060)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                     TransformList;                                     // 0x0090(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B8[0x8];                                       // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetMuzzleTransform_Transform;             // 0x00C0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetPosition_TargetPosition;         // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetMuzzleTransform_Transform_1;           // 0x0180(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x01E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0270(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EC[0x4];                                      // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0320(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_338[0x8];                                      // 0x0338(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0340(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x03AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_GetShootTransformList) == 0x000010, "Wrong alignment on BP_SphereLauncher_C_GetShootTransformList");
static_assert(sizeof(BP_SphereLauncher_C_GetShootTransformList) == 0x0003B0, "Wrong size on BP_SphereLauncher_C_GetShootTransformList");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, BaseAnglePitch) == 0x000000, "Member 'BP_SphereLauncher_C_GetShootTransformList::BaseAnglePitch' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, BaseAngleYaw) == 0x000008, "Member 'BP_SphereLauncher_C_GetShootTransformList::BaseAngleYaw' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, BlurAngle) == 0x000010, "Member 'BP_SphereLauncher_C_GetShootTransformList::BlurAngle' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, ShootTransformList) == 0x000018, "Member 'BP_SphereLauncher_C_GetShootTransformList::ShootTransformList' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, BaseTransform) == 0x000030, "Member 'BP_SphereLauncher_C_GetShootTransformList::BaseTransform' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, TransformList) == 0x000090, "Member 'BP_SphereLauncher_C_GetShootTransformList::TransformList' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, Temp_int_Variable) == 0x0000A0, "Member 'BP_SphereLauncher_C_GetShootTransformList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A4, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000B0, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_GetMuzzleTransform_Transform) == 0x0000C0, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_GetMuzzleTransform_Transform' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_BreakTransform_Location) == 0x000120, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_BreakTransform_Rotation) == 0x000138, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_BreakTransform_Scale) == 0x000150, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_GetTargetPosition_TargetPosition) == 0x000168, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_GetTargetPosition_TargetPosition' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_GetMuzzleTransform_Transform_1) == 0x000180, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_GetMuzzleTransform_Transform_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_BreakTransform_Location_1) == 0x0001E0, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_BreakTransform_Rotation_1) == 0x0001F8, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_BreakTransform_Scale_1) == 0x000210, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000228, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000230, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_MakeRotFromX_ReturnValue) == 0x000248, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_RandomFloatInRange_ReturnValue) == 0x000260, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_MakeTransform_ReturnValue) == 0x000270, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0002D0, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0002D8, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0002E0, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, Temp_int_Variable_1) == 0x0002E8, "Member 'BP_SphereLauncher_C_GetShootTransformList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0002F0, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0002F8, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_MakeRotator_ReturnValue) == 0x000300, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000318, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_ComposeRotators_ReturnValue) == 0x000320, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_MakeTransform_ReturnValue_1) == 0x000340, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0003A0, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_Array_Add_ReturnValue) == 0x0003A4, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0003A8, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_GetShootTransformList, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x0003AC, "Member 'BP_SphereLauncher_C_GetShootTransformList::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.OnLaunchPalSphere__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_SphereLauncher_C_OnLaunchPalSphere__DelegateSignature final
{
public:
	class AActor*                                 Bullet;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_OnLaunchPalSphere__DelegateSignature) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_OnLaunchPalSphere__DelegateSignature");
static_assert(sizeof(BP_SphereLauncher_C_OnLaunchPalSphere__DelegateSignature) == 0x000008, "Wrong size on BP_SphereLauncher_C_OnLaunchPalSphere__DelegateSignature");
static_assert(offsetof(BP_SphereLauncher_C_OnLaunchPalSphere__DelegateSignature, Bullet) == 0x000000, "Member 'BP_SphereLauncher_C_OnLaunchPalSphere__DelegateSignature::Bullet' has a wrong offset!");

// Function BP_SphereLauncher.BP_SphereLauncher_C.ShootBullet
// 0x00C0 (0x00C0 - 0x0000)
struct BP_SphereLauncher_C_ShootBullet final
{
public:
	int32                                         ShootAbleNum;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTransform>                     ShootTransform;                                    // 0x0008(0x0010)(Edit, BlueprintVisible)
	class FName                                   UseItemName;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalCaptureSphereLevelType                    CallFunc_Map_Find_Value;                           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCaptureLevelBySphereType_ReturnValue;  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_DecrementCurrentSelectPalSphere_UsedItemID; // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_DecrementCurrentSelectPalSphere_ReturnValue; // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetBulletClass_NewParam;                  // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBulletCreator*                      CallFunc_GetBulletCreator_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWeaponDamage_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalBullet*                             CallFunc_CreateBullet_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                     CallFunc_GetShootTransformList_ShootTransformList; // 0x0090(0x0010)(ReferenceParm)
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PalSphere_ThrowObject_C*            K2Node_DynamicCast_AsBP_Pal_Sphere_Throw_Object;   // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanShoot_can;                             // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmptyMagazine_ReturnValue;              // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B3[0x1];                                       // 0x00B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_VariableSet_MaxSpeed_ImplicitCast;          // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_InitialSpeed_ImplicitCast;      // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SphereLauncher_C_ShootBullet) == 0x000008, "Wrong alignment on BP_SphereLauncher_C_ShootBullet");
static_assert(sizeof(BP_SphereLauncher_C_ShootBullet) == 0x0000C0, "Wrong size on BP_SphereLauncher_C_ShootBullet");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, ShootAbleNum) == 0x000000, "Member 'BP_SphereLauncher_C_ShootBullet::ShootAbleNum' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, ShootTransform) == 0x000008, "Member 'BP_SphereLauncher_C_ShootBullet::ShootTransform' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, UseItemName) == 0x000018, "Member 'BP_SphereLauncher_C_ShootBullet::UseItemName' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_MakeVector_ReturnValue) == 0x000020, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_GetGameSetting_ReturnValue) == 0x000038, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_Map_Find_Value) == 0x000040, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_Map_Find_ReturnValue) == 0x000041, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_GetCaptureLevelBySphereType_ReturnValue) == 0x000044, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_GetCaptureLevelBySphereType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, Temp_int_Variable) == 0x00004C, "Member 'BP_SphereLauncher_C_ShootBullet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_DecrementCurrentSelectPalSphere_UsedItemID) == 0x00005C, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_DecrementCurrentSelectPalSphere_UsedItemID' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_DecrementCurrentSelectPalSphere_ReturnValue) == 0x000064, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_DecrementCurrentSelectPalSphere_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000068, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_Array_Find_ReturnValue) == 0x00006C, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_GetBulletClass_NewParam) == 0x000070, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_GetBulletClass_NewParam' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_GetBulletCreator_ReturnValue) == 0x000078, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_GetBulletCreator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_GetWeaponDamage_ReturnValue) == 0x000080, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_GetWeaponDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_CreateBullet_ReturnValue) == 0x000088, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_CreateBullet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_GetShootTransformList_ShootTransformList) == 0x000090, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_GetShootTransformList_ShootTransformList' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_GetComponentByClass_ReturnValue) == 0x0000A0, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, K2Node_DynamicCast_AsBP_Pal_Sphere_Throw_Object) == 0x0000A8, "Member 'BP_SphereLauncher_C_ShootBullet::K2Node_DynamicCast_AsBP_Pal_Sphere_Throw_Object' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'BP_SphereLauncher_C_ShootBullet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_CanShoot_can) == 0x0000B1, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_CanShoot_can' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, CallFunc_IsEmptyMagazine_ReturnValue) == 0x0000B2, "Member 'BP_SphereLauncher_C_ShootBullet::CallFunc_IsEmptyMagazine_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, K2Node_VariableSet_MaxSpeed_ImplicitCast) == 0x0000B4, "Member 'BP_SphereLauncher_C_ShootBullet::K2Node_VariableSet_MaxSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SphereLauncher_C_ShootBullet, K2Node_VariableSet_InitialSpeed_ImplicitCast) == 0x0000B8, "Member 'BP_SphereLauncher_C_ShootBullet::K2Node_VariableSet_InitialSpeed_ImplicitCast' has a wrong offset!");

}

