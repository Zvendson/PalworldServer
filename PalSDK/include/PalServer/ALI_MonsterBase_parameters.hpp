#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function ALI_MonsterBase.ALI_MonsterBase_C.UpperOverride
// 0x0030 (0x0030 - 0x0000)
struct ALI_MonsterBase_C_UpperOverride final
{
public:
	struct FPoseLink                              NativePose;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              ActionPose;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperOverride_0;                                   // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_MonsterBase_C_UpperOverride) == 0x000008, "Wrong alignment on ALI_MonsterBase_C_UpperOverride");
static_assert(sizeof(ALI_MonsterBase_C_UpperOverride) == 0x000030, "Wrong size on ALI_MonsterBase_C_UpperOverride");
static_assert(offsetof(ALI_MonsterBase_C_UpperOverride, NativePose) == 0x000000, "Member 'ALI_MonsterBase_C_UpperOverride::NativePose' has a wrong offset!");
static_assert(offsetof(ALI_MonsterBase_C_UpperOverride, ActionPose) == 0x000010, "Member 'ALI_MonsterBase_C_UpperOverride::ActionPose' has a wrong offset!");
static_assert(offsetof(ALI_MonsterBase_C_UpperOverride, UpperOverride_0) == 0x000020, "Member 'ALI_MonsterBase_C_UpperOverride::UpperOverride_0' has a wrong offset!");

// Function ALI_MonsterBase.ALI_MonsterBase_C.LookAtOverride
// 0x0038 (0x0038 - 0x0000)
struct ALI_MonsterBase_C_LookAtOverride final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                                LookAtWorldLocation;                               // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                              LookAtOverride_0;                                  // 0x0028(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_MonsterBase_C_LookAtOverride) == 0x000008, "Wrong alignment on ALI_MonsterBase_C_LookAtOverride");
static_assert(sizeof(ALI_MonsterBase_C_LookAtOverride) == 0x000038, "Wrong size on ALI_MonsterBase_C_LookAtOverride");
static_assert(offsetof(ALI_MonsterBase_C_LookAtOverride, InPose) == 0x000000, "Member 'ALI_MonsterBase_C_LookAtOverride::InPose' has a wrong offset!");
static_assert(offsetof(ALI_MonsterBase_C_LookAtOverride, LookAtWorldLocation) == 0x000010, "Member 'ALI_MonsterBase_C_LookAtOverride::LookAtWorldLocation' has a wrong offset!");
static_assert(offsetof(ALI_MonsterBase_C_LookAtOverride, LookAtOverride_0) == 0x000028, "Member 'ALI_MonsterBase_C_LookAtOverride::LookAtOverride_0' has a wrong offset!");

// Function ALI_MonsterBase.ALI_MonsterBase_C.AimingOverride
// 0x0038 (0x0038 - 0x0000)
struct ALI_MonsterBase_C_AimingOverride final
{
public:
	struct FPoseLink                              DefaultPose;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FRotator                               AimRotator;                                        // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPoseLink                              AimingOverride_0;                                  // 0x0028(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_MonsterBase_C_AimingOverride) == 0x000008, "Wrong alignment on ALI_MonsterBase_C_AimingOverride");
static_assert(sizeof(ALI_MonsterBase_C_AimingOverride) == 0x000038, "Wrong size on ALI_MonsterBase_C_AimingOverride");
static_assert(offsetof(ALI_MonsterBase_C_AimingOverride, DefaultPose) == 0x000000, "Member 'ALI_MonsterBase_C_AimingOverride::DefaultPose' has a wrong offset!");
static_assert(offsetof(ALI_MonsterBase_C_AimingOverride, AimRotator) == 0x000010, "Member 'ALI_MonsterBase_C_AimingOverride::AimRotator' has a wrong offset!");
static_assert(offsetof(ALI_MonsterBase_C_AimingOverride, AimingOverride_0) == 0x000028, "Member 'ALI_MonsterBase_C_AimingOverride::AimingOverride_0' has a wrong offset!");

}

