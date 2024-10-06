#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.AttachToOwner
// 0x0178 (0x0178 - 0x0000)
struct BP_ActionUniqueAttackBase_C_AttachToOwner final
{
public:
	class APalSkillEffectBase*                    Effect;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Offset;                                            // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0078(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue_1;                // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_AttachToOwner) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_AttachToOwner");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_AttachToOwner) == 0x000178, "Wrong size on BP_ActionUniqueAttackBase_C_AttachToOwner");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, Effect) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, Offset) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::Offset' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, SocketName) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::SocketName' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_GetActionCharacter_ReturnValue) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_GetMainMesh_ReturnValue) == 0x000030, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000038, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000040, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_NotEqual_NameName_ReturnValue) == 0x000058, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000060, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000078, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000160, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000168, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_AttachToOwner, CallFunc_GetMainMesh_ReturnValue_1) == 0x000170, "Member 'BP_ActionUniqueAttackBase_C_AttachToOwner::CallFunc_GetMainMesh_ReturnValue_1' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.CalculateTeleportDestination
// 0x0A00 (0x0A00 - 0x0000)
struct BP_ActionUniqueAttackBase_C_CalculateTeleportDestination final
{
public:
	bool                                          IsCharacter;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SearchDegree;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TeleportCheckDistance;                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Destination;                                       // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               FaceRotate;                                        // 0x0030(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_2;                // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetUniqueActionTarget_TargetActor;        // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0190(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x01A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetUniqueActionTarget_TargetActor_1;      // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_201[0xF];                                      // 0x0201(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimalViewInfo                       CallFunc_GetCameraView_DesiredView;                // 0x0210(0x07C0)()
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x09D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x09D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x09D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9DC[0x4];                                      // 0x09DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_3;                // 0x09E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x09F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast_1;           // 0x09FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination) == 0x000010, "Wrong alignment on BP_ActionUniqueAttackBase_C_CalculateTeleportDestination");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination) == 0x000A00, "Wrong size on BP_ActionUniqueAttackBase_C_CalculateTeleportDestination");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, IsCharacter) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::IsCharacter' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, SearchDegree) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::SearchDegree' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, TeleportCheckDistance) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::TeleportCheckDistance' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, Destination) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::Destination' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, FaceRotate) == 0x000030, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::FaceRotate' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000048, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_Conv_DoubleToVector_ReturnValue_1) == 0x000060, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_Conv_DoubleToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_GetActionTarget_ReturnValue) == 0x000078, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000080, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_RandomFloatInRange_ReturnValue) == 0x000090, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_MakeRotator_ReturnValue) == 0x000098, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000B0, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_BreakRotator_Roll) == 0x0000C8, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_BreakRotator_Pitch) == 0x0000CC, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_BreakRotator_Yaw) == 0x0000D0, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_ComposeRotators_ReturnValue) == 0x0000D8, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_MakeRotator_ReturnValue_1) == 0x0000F0, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_GetForwardVector_ReturnValue) == 0x000108, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000120, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000138, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_GetTargetLocation_ReturnValue) == 0x000140, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_MakeRotator_ReturnValue_2) == 0x000158, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_MakeRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_GetUniqueActionTarget_TargetActor) == 0x000170, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_GetUniqueActionTarget_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_GetForwardVector_ReturnValue_1) == 0x000178, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000190, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x0001A8, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_Add_VectorVector_ReturnValue) == 0x0001C0, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0001D8, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_GetUniqueActionTarget_TargetActor_1) == 0x0001F0, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_GetUniqueActionTarget_TargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, K2Node_DynamicCast_AsPal_Player_Character) == 0x0001F8, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, K2Node_DynamicCast_bSuccess) == 0x000200, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_GetCameraView_DesiredView) == 0x000210, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_GetCameraView_DesiredView' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_BreakRotator_Roll_1) == 0x0009D0, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_BreakRotator_Pitch_1) == 0x0009D4, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_BreakRotator_Yaw_1) == 0x0009D8, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_MakeRotator_ReturnValue_3) == 0x0009E0, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_MakeRotator_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0009F8, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CalculateTeleportDestination, CallFunc_MakeRotator_Yaw_ImplicitCast_1) == 0x0009FC, "Member 'BP_ActionUniqueAttackBase_C_CalculateTeleportDestination::CallFunc_MakeRotator_Yaw_ImplicitCast_1' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.CreateSkillActionModule
// 0x0058 (0x0058 - 0x0000)
struct BP_ActionUniqueAttackBase_C_CreateSkillActionModule final
{
public:
	class UClass*                                 UniqueSkillModuleClass;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UniqueSkillModule_Tackle_C*         Module;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalUniqueSkillModule*                  CallFunc_SpawnObject_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UniqueSkillModule_Tackle_C*         K2Node_DynamicCast_AsBP_Unique_Skill_Module_Tackle; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_CreateSkillActionModule");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule) == 0x000058, "Wrong size on BP_ActionUniqueAttackBase_C_CreateSkillActionModule");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule, UniqueSkillModuleClass) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_CreateSkillActionModule::UniqueSkillModuleClass' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule, Module) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_CreateSkillActionModule::Module' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule, CallFunc_IsValidClass_ReturnValue) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_CreateSkillActionModule::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule, CallFunc_Conv_NameToString_ReturnValue) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_CreateSkillActionModule::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_CreateSkillActionModule::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule, CallFunc_GetActionCharacter_ReturnValue) == 0x000038, "Member 'BP_ActionUniqueAttackBase_C_CreateSkillActionModule::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule, CallFunc_SpawnObject_ReturnValue) == 0x000040, "Member 'BP_ActionUniqueAttackBase_C_CreateSkillActionModule::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule, K2Node_DynamicCast_AsBP_Unique_Skill_Module_Tackle) == 0x000048, "Member 'BP_ActionUniqueAttackBase_C_CreateSkillActionModule::K2Node_DynamicCast_AsBP_Unique_Skill_Module_Tackle' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_CreateSkillActionModule, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_ActionUniqueAttackBase_C_CreateSkillActionModule::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.ExecuteUbergraph_BP_ActionUniqueAttackBase
// 0x0150 (0x0150 - 0x0000)
struct BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_EffectKey;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter             CallFunc_Map_Find_Value;                           // 0x0048(0x0038)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRandomStream                          CallFunc_GetRandomStream_ReturnValue;              // 0x0084(0x0008)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetUniqueActionTarget_TargetActor;        // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    CallFunc_FinishSpawningActor_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class APalSkillEffectBase>     CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0110(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase) == 0x000010, "Wrong alignment on BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase) == 0x000150, "Wrong size on BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, EntryPoint) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, K2Node_CustomEvent_EffectKey) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::K2Node_CustomEvent_EffectKey' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, K2Node_Event_DeltaTime) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_Conv_NameToString_ReturnValue) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_Map_Find_Value) == 0x000048, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_Map_Find_ReturnValue) == 0x000080, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_GetRandomStream_ReturnValue) == 0x000084, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_GetRandomStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_GetUniqueActionTarget_TargetActor) == 0x0000F0, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_GetUniqueActionTarget_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000F8, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_FinishSpawningActor_ReturnValue) == 0x000100, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000110, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase, CallFunc_Array_Add_ReturnValue) == 0x000140, "Member 'BP_ActionUniqueAttackBase_C_ExecuteUbergraph_BP_ActionUniqueAttackBase::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.FindActionTarget
// 0x0090 (0x0090 - 0x0000)
struct BP_ActionUniqueAttackBase_C_FindActionTarget final
{
public:
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalActionDummyTargetActor*             K2Node_DynamicCast_AsPal_Action_Dummy_Target_Actor; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_1;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetRiderPlayer_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetRiderPlayer_ReturnValue_1;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue_2;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplicableDamage_ReturnValue;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InHeight_ImplicitCast; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDistance_ImplicitCast; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDegree_ImplicitCast; // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_FindActionTarget) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_FindActionTarget");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_FindActionTarget) == 0x000090, "Wrong size on BP_ActionUniqueAttackBase_C_FindActionTarget");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetActionTarget_ReturnValue) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, K2Node_DynamicCast_AsPal_Action_Dummy_Target_Actor) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::K2Node_DynamicCast_AsPal_Action_Dummy_Target_Actor' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetActionTarget_ReturnValue_1) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetActionTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetRiderPlayer_ReturnValue) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetRiderPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetRiderPlayer_ReturnValue_1) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetRiderPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetActionCharacter_ReturnValue) == 0x000030, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_IsPlayerControlled_ReturnValue) == 0x000039, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000040, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetActionTarget_ReturnValue_2) == 0x000048, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetActionTarget_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_IsApplicableDamage_ReturnValue) == 0x000050, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_IsApplicableDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000058, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_ReturnValue) == 0x000078, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_IsValid_ReturnValue_2) == 0x000080, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InHeight_ImplicitCast) == 0x000084, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InHeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDistance_ImplicitCast) == 0x000088, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDistance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindActionTarget, CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDegree_ImplicitCast) == 0x00008C, "Member 'BP_ActionUniqueAttackBase_C_FindActionTarget::CallFunc_GetNearestEnemyByLocation_FrontPlayerCamera_InDegree_ImplicitCast' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.FindEffectByClass
// 0x0080 (0x0080 - 0x0000)
struct BP_ActionUniqueAttackBase_C_FindEffectByClass final
{
public:
	class UClass*                                 EffectClass;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    Effect;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalSkillEffectBase>     CallFunc_Array_Get_Item;                           // 0x0020(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    K2Node_DynamicCast_AsPal_Skill_Effect_Base;        // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_FindEffectByClass) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_FindEffectByClass");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_FindEffectByClass) == 0x000080, "Wrong size on BP_ActionUniqueAttackBase_C_FindEffectByClass");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, EffectClass) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::EffectClass' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, Effect) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000058, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, K2Node_DynamicCast_AsPal_Skill_Effect_Base) == 0x000060, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::K2Node_DynamicCast_AsPal_Skill_Effect_Base' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, CallFunc_GetObjectClass_ReturnValue) == 0x000070, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000078, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_FindEffectByClass, CallFunc_IsValid_ReturnValue) == 0x000079, "Member 'BP_ActionUniqueAttackBase_C_FindEffectByClass::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetAttackTargetLocation
// 0x00F0 (0x00F0 - 0x0000)
struct BP_ActionUniqueAttackBase_C_GetAttackTargetLocation final
{
public:
	bool                                          IsFrontLocation;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FrontDistance;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetUniqueActionTarget_TargetActor;        // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetAttackTargetLocation_ReturnValue;      // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_GetAttackTargetLocation");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation) == 0x0000F0, "Wrong size on BP_ActionUniqueAttackBase_C_GetAttackTargetLocation");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, IsFrontLocation) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::IsFrontLocation' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, FrontDistance) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::FrontDistance' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, Location) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_GetTargetLocation_ReturnValue) == 0x000040, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_GetActionCharacter_ReturnValue) == 0x000058, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_GetActorForwardVector_ReturnValue) == 0x000078, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000090, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000098, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_GetUniqueActionTarget_TargetActor) == 0x0000B0, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_GetUniqueActionTarget_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_Add_VectorVector_ReturnValue) == 0x0000B8, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetAttackTargetLocation, CallFunc_GetAttackTargetLocation_ReturnValue) == 0x0000D8, "Member 'BP_ActionUniqueAttackBase_C_GetAttackTargetLocation::CallFunc_GetAttackTargetLocation_ReturnValue' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetCapsuleHalfHeight
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight final
{
public:
	double                                        HalfHeight;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_FunctionResult_HalfHeight_ImplicitCast;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight) == 0x000020, "Wrong size on BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight, HalfHeight) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight::HalfHeight' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight, CallFunc_GetScaledCapsuleHalfHeight_ReturnValue) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight::CallFunc_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight, K2Node_FunctionResult_HalfHeight_ImplicitCast) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_GetCapsuleHalfHeight::K2Node_FunctionResult_HalfHeight_ImplicitCast' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetCapsuleHalfRadius
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius final
{
public:
	double                                        HalfRadius;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_FunctionResult_HalfRadius_ImplicitCast;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius) == 0x000020, "Wrong size on BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius, HalfRadius) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius::HalfRadius' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius, CallFunc_GetScaledCapsuleRadius_ReturnValue) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius::CallFunc_GetScaledCapsuleRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius, K2Node_FunctionResult_HalfRadius_ImplicitCast) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_GetCapsuleHalfRadius::K2Node_FunctionResult_HalfRadius_ImplicitCast' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetCheckedTeleportDestination
// 0x0850 (0x0850 - 0x0000)
struct BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination final
{
public:
	int32                                         WarpCheckCount;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WarpFaceOriDegree;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WarpDestinationDistance;                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WarpDestinationDistance_MapOb;                     // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AcceptSideBlockPos;                                // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreFloor;                                       // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRiding;                                          // 0x0022(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetLocation;                                    // 0x0028(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasFloor;                                          // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TempWarpCheckDistance;                             // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TempSearchDegree;                                  // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentCheckPos;                                   // 0x0058(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCharacter;                                       // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0078(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0120(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20B[0x1];                                      // 0x020B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0260(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0278(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0288(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x02E0(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x02F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0330(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0340(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0358(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0370(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit_1;                 // 0x0388(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue_1;            // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_471[0x7];                                      // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Temp_struct_Variable;                              // 0x0478(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x0491(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_492[0x2];                                      // 0x0492(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0494(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C[0x4];                                      // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x04A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x04B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x04D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x04E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0500(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0508(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0510(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0518(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_1;                // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x052C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0530(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_534[0x4];                                      // 0x0534(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0538(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0550(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_Distance_ReturnValue;              // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_571[0x7];                                      // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Temp_struct_Variable_1;                            // 0x0578(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0590(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue_1;          // 0x0598(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x05B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x05C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C9[0x7];                                      // 0x05C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Select_Default;                             // 0x05D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x05E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_1;               // 0x0608(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit_2;                 // 0x0620(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue_2;            // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_709[0x7];                                      // 0x0709(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_CalculateTeleportDestination_Destination; // 0x0710(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_2;            // 0x0728(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_2;         // 0x0729(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72A[0x2];                                      // 0x072A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_2;                    // 0x072C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_2;                // 0x0730(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_734[0x4];                                      // 0x0734(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_2;                // 0x0738(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_2;             // 0x0750(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_2;                  // 0x0768(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_2;            // 0x0780(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_2;                 // 0x0798(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_2;                // 0x07A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_2;            // 0x07A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_2;             // 0x07B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_2;                // 0x07B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_2;                 // 0x07C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_2;            // 0x07C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_2;               // 0x07C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CC[0x4];                                      // 0x07CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_2;              // 0x07D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_2;                // 0x07E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetUniqueActionTarget_TargetActor;        // 0x0800(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_BuildObject_PalBoxV2_C*             K2Node_DynamicCast_AsBP_Build_Object_Pal_Box_V2;   // 0x0808(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_811[0x7];                                      // 0x0811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0818(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0820(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_821[0x7];                                      // 0x0821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FMax_ReturnValue_1;                       // 0x0828(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0830(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FMax_A_ImplicitCast;                      // 0x0848(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination) == 0x000850, "Wrong size on BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, WarpCheckCount) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::WarpCheckCount' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, WarpFaceOriDegree) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::WarpFaceOriDegree' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, WarpDestinationDistance) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::WarpDestinationDistance' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, WarpDestinationDistance_MapOb) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::WarpDestinationDistance_MapOb' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, AcceptSideBlockPos) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::AcceptSideBlockPos' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, IgnoreFloor) == 0x000021, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::IgnoreFloor' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, IsRiding) == 0x000022, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::IsRiding' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, TargetLocation) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::TargetLocation' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, HasFloor) == 0x000040, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::HasFloor' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, TempWarpCheckDistance) == 0x000048, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::TempWarpCheckDistance' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, TempSearchDegree) == 0x000050, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::TempSearchDegree' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CurrentCheckPos) == 0x000058, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CurrentCheckPos' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, IsCharacter) == 0x000070, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::IsCharacter' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, Temp_object_Variable) == 0x000078, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, Temp_int_Variable) == 0x000088, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00008C, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_GetActionCharacter_ReturnValue) == 0x000098, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000A0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_GetTargetLocation_ReturnValue) == 0x0000B8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Add_VectorVector_ReturnValue) == 0x0000D0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_SelectFloat_ReturnValue) == 0x0000E8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_MakeVector_ReturnValue) == 0x0000F0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000108, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_LineTraceSingle_OutHit) == 0x000120, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_LineTraceSingle_ReturnValue) == 0x000208, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_bBlockingHit) == 0x000209, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_bInitialOverlap) == 0x00020A, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Time) == 0x00020C, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Distance) == 0x000210, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Location) == 0x000218, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_ImpactPoint) == 0x000230, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Normal) == 0x000248, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_ImpactNormal) == 0x000260, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_PhysMat) == 0x000278, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitActor) == 0x000280, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitComponent) == 0x000288, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitBoneName) == 0x000290, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_BoneName) == 0x000298, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitItem) == 0x0002A0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_ElementIndex) == 0x0002A4, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_FaceIndex) == 0x0002A8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_TraceStart) == 0x0002B0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_TraceEnd) == 0x0002C8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, K2Node_MakeArray_Array) == 0x0002E0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Subtract_IntInt_ReturnValue) == 0x0002F0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0002F8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000310, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000318, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000320, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_FMax_ReturnValue) == 0x000328, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, Temp_object_Variable_1) == 0x000330, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_SelectVector_ReturnValue) == 0x000340, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000358, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000370, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_LineTraceSingle_OutHit_1) == 0x000388, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_LineTraceSingle_OutHit_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_LineTraceSingle_ReturnValue_1) == 0x000470, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_LineTraceSingle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, Temp_struct_Variable) == 0x000478, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000490, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000491, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Time_1) == 0x000494, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Distance_1) == 0x000498, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Location_1) == 0x0004A0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_ImpactPoint_1) == 0x0004B8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Normal_1) == 0x0004D0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_ImpactNormal_1) == 0x0004E8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_PhysMat_1) == 0x000500, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitActor_1) == 0x000508, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitComponent_1) == 0x000510, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitBoneName_1) == 0x000518, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_BoneName_1) == 0x000520, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitItem_1) == 0x000528, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_ElementIndex_1) == 0x00052C, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_FaceIndex_1) == 0x000530, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_TraceStart_1) == 0x000538, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_TraceEnd_1) == 0x000550, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Vector_Distance_ReturnValue) == 0x000568, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000570, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, Temp_struct_Variable_1) == 0x000578, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000590, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_GetTargetLocation_ReturnValue_1) == 0x000598, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_GetTargetLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0005B0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, Temp_bool_Variable) == 0x0005C8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, K2Node_Select_Default) == 0x0005D0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_Add_VectorVector_ReturnValue_3) == 0x0005E8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_SelectFloat_ReturnValue_1) == 0x000600, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_SelectVector_ReturnValue_1) == 0x000608, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_SelectVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_LineTraceSingle_OutHit_2) == 0x000620, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_LineTraceSingle_OutHit_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_LineTraceSingle_ReturnValue_2) == 0x000708, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_LineTraceSingle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_CalculateTeleportDestination_Destination) == 0x000710, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_CalculateTeleportDestination_Destination' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_bBlockingHit_2) == 0x000728, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_bBlockingHit_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_bInitialOverlap_2) == 0x000729, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_bInitialOverlap_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Time_2) == 0x00072C, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Time_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Distance_2) == 0x000730, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Distance_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Location_2) == 0x000738, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Location_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_ImpactPoint_2) == 0x000750, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_ImpactPoint_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_Normal_2) == 0x000768, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_Normal_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_ImpactNormal_2) == 0x000780, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_ImpactNormal_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_PhysMat_2) == 0x000798, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_PhysMat_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitActor_2) == 0x0007A0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitActor_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitComponent_2) == 0x0007A8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitComponent_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitBoneName_2) == 0x0007B0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitBoneName_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_BoneName_2) == 0x0007B8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_BoneName_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_HitItem_2) == 0x0007C0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_HitItem_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_ElementIndex_2) == 0x0007C4, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_ElementIndex_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_FaceIndex_2) == 0x0007C8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_FaceIndex_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_TraceStart_2) == 0x0007D0, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_TraceStart_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_BreakHitResult_TraceEnd_2) == 0x0007E8, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_BreakHitResult_TraceEnd_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_GetUniqueActionTarget_TargetActor) == 0x000800, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_GetUniqueActionTarget_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, K2Node_DynamicCast_AsBP_Build_Object_Pal_Box_V2) == 0x000808, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::K2Node_DynamicCast_AsBP_Build_Object_Pal_Box_V2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, K2Node_DynamicCast_bSuccess) == 0x000810, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, K2Node_DynamicCast_AsPal_Character) == 0x000818, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, K2Node_DynamicCast_bSuccess_1) == 0x000820, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_FMax_ReturnValue_1) == 0x000828, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000830, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination, CallFunc_FMax_A_ImplicitCast) == 0x000848, "Member 'BP_ActionUniqueAttackBase_C_GetCheckedTeleportDestination::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetFootLocation
// 0x0078 (0x0078 - 0x0000)
struct BP_ActionUniqueAttackBase_C_GetFootLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_GetFootLocation) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_GetFootLocation");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_GetFootLocation) == 0x000078, "Wrong size on BP_ActionUniqueAttackBase_C_GetFootLocation");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetFootLocation, Location) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_GetFootLocation::Location' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetFootLocation, CallFunc_GetActionCharacter_ReturnValue) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_GetFootLocation::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetFootLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_GetFootLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetFootLocation, CallFunc_BreakVector_X) == 0x000038, "Member 'BP_ActionUniqueAttackBase_C_GetFootLocation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetFootLocation, CallFunc_BreakVector_Y) == 0x000040, "Member 'BP_ActionUniqueAttackBase_C_GetFootLocation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetFootLocation, CallFunc_BreakVector_Z) == 0x000048, "Member 'BP_ActionUniqueAttackBase_C_GetFootLocation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetFootLocation, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000050, "Member 'BP_ActionUniqueAttackBase_C_GetFootLocation::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetFootLocation, CallFunc_MakeVector_ReturnValue) == 0x000058, "Member 'BP_ActionUniqueAttackBase_C_GetFootLocation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetFootLocation, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000070, "Member 'BP_ActionUniqueAttackBase_C_GetFootLocation::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetHeightToFloor
// 0x0078 (0x0078 - 0x0000)
struct BP_ActionUniqueAttackBase_C_GetHeightToFloor final
{
public:
	double                                        Height;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFootLocation_Location;                 // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFloorHitLocationByActor_ReturnValue;   // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_GetHeightToFloor) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_GetHeightToFloor");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_GetHeightToFloor) == 0x000078, "Wrong size on BP_ActionUniqueAttackBase_C_GetHeightToFloor");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, Height) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::Height' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_GetFootLocation_Location) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_GetFootLocation_Location' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_GetActionCharacter_ReturnValue) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_BreakVector_X) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_BreakVector_Y) == 0x000030, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_BreakVector_Z) == 0x000038, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_GetFloorHitLocationByActor_ReturnValue) == 0x000040, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_GetFloorHitLocationByActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_BreakVector_X_1) == 0x000058, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_BreakVector_Y_1) == 0x000060, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_BreakVector_Z_1) == 0x000068, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetHeightToFloor, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_ActionUniqueAttackBase_C_GetHeightToFloor::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetPalAnimInstance
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionUniqueAttackBase_C_GetPalAnimInstance final
{
public:
	class UPalAnimInstance*                       AnimInstance;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                       K2Node_DynamicCast_AsPal_Anim_Instance;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_GetPalAnimInstance) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_GetPalAnimInstance");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_GetPalAnimInstance) == 0x000030, "Wrong size on BP_ActionUniqueAttackBase_C_GetPalAnimInstance");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetPalAnimInstance, AnimInstance) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_GetPalAnimInstance::AnimInstance' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetPalAnimInstance, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_GetPalAnimInstance::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetPalAnimInstance, CallFunc_GetMainMesh_ReturnValue) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_GetPalAnimInstance::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetPalAnimInstance, CallFunc_GetAnimInstance_ReturnValue) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_GetPalAnimInstance::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetPalAnimInstance, K2Node_DynamicCast_AsPal_Anim_Instance) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_GetPalAnimInstance::K2Node_DynamicCast_AsPal_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetPalAnimInstance, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_GetPalAnimInstance::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetRotation
// 0x0230 (0x0230 - 0x0000)
struct BP_ActionUniqueAttackBase_C_GetRotation final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoInterp;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Rotation;                                          // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetAttackTargetLocation_ReturnValue;      // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_2;                      // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_2;                     // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_2;                       // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue_1;         // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_3;                      // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_3;                     // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_3;                       // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_2;         // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsApplicableDamage_ReturnValue;           // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17A[0x6];                                      // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_3;         // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_2;        // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue_2;         // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_4;                      // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_4;                     // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_4;                       // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_2;                // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RInterpTo_DeltaTime_ImplicitCast;         // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RInterpTo_InterpSpeed_ImplicitCast;       // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_GetRotation) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_GetRotation");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_GetRotation) == 0x000230, "Wrong size on BP_ActionUniqueAttackBase_C_GetRotation");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, DeltaTime) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, NoInterp) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::NoInterp' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, Rotation) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::Rotation' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_GetActionCharacter_ReturnValue) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_GetActionTarget_ReturnValue) == 0x000030, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000038, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_GetAttackTargetLocation_ReturnValue) == 0x000050, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_GetAttackTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Roll) == 0x000068, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Pitch) == 0x00006C, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Yaw) == 0x000070, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_FindLookAtRotation_ReturnValue) == 0x000090, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000A8, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Roll_1) == 0x0000C0, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Pitch_1) == 0x0000C4, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Yaw_1) == 0x0000C8, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_GetActionCharacter_ReturnValue_1) == 0x0000D0, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_MakeRotator_ReturnValue) == 0x0000D8, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x0000F0, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Roll_2) == 0x000108, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Roll_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Pitch_2) == 0x00010C, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Pitch_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Yaw_2) == 0x000110, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Yaw_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000118, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_FindLookAtRotation_ReturnValue_1) == 0x000130, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_FindLookAtRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Roll_3) == 0x000148, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Roll_3' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Pitch_3) == 0x00014C, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Pitch_3' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Yaw_3) == 0x000150, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Yaw_3' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_MakeRotator_ReturnValue_1) == 0x000158, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_GetActionCharacter_ReturnValue_2) == 0x000170, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_GetActionCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_IsApplicableDamage_ReturnValue) == 0x000178, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_IsApplicableDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_IsValid_ReturnValue) == 0x000179, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000180, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_GetActionCharacter_ReturnValue_3) == 0x000198, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_GetActionCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x0001A0, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_K2_GetActorRotation_ReturnValue_2) == 0x0001B8, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_K2_GetActorRotation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_FindLookAtRotation_ReturnValue_2) == 0x0001D0, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_FindLookAtRotation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Roll_4) == 0x0001E8, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Roll_4' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Pitch_4) == 0x0001EC, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Pitch_4' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_BreakRotator_Yaw_4) == 0x0001F0, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_BreakRotator_Yaw_4' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_MakeRotator_ReturnValue_2) == 0x0001F8, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_MakeRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_RInterpTo_ReturnValue) == 0x000210, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_RInterpTo_DeltaTime_ImplicitCast) == 0x000228, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_RInterpTo_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetRotation, CallFunc_RInterpTo_InterpSpeed_ImplicitCast) == 0x00022C, "Member 'BP_ActionUniqueAttackBase_C_GetRotation::CallFunc_RInterpTo_InterpSpeed_ImplicitCast' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.GetUniqueActionTarget
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionUniqueAttackBase_C_GetUniqueActionTarget final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_GetUniqueActionTarget) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_GetUniqueActionTarget");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_GetUniqueActionTarget) == 0x000008, "Wrong size on BP_ActionUniqueAttackBase_C_GetUniqueActionTarget");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_GetUniqueActionTarget, TargetActor) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_GetUniqueActionTarget::TargetActor' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.IsMontagePlaying
// 0x0030 (0x0030 - 0x0000)
struct BP_ActionUniqueAttackBase_C_IsMontagePlaying final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlaying;                                         // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_IsMontagePlaying) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_IsMontagePlaying");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_IsMontagePlaying) == 0x000030, "Wrong size on BP_ActionUniqueAttackBase_C_IsMontagePlaying");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_IsMontagePlaying, Montage) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_IsMontagePlaying::Montage' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_IsMontagePlaying, IsPlaying) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_IsMontagePlaying::IsPlaying' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_IsMontagePlaying, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_IsMontagePlaying::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_IsMontagePlaying, CallFunc_GetMainMesh_ReturnValue) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_IsMontagePlaying::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_IsMontagePlaying, CallFunc_GetAnimInstance_ReturnValue) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_IsMontagePlaying::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_IsMontagePlaying, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_IsMontagePlaying::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionUniqueAttackBase_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionUniqueAttackBase_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_OnSpawnEffect, Effect) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_OnSpawnEffect::Effect' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.SetMoveState_Common
// 0x0040 (0x0040 - 0x0000)
struct BP_ActionUniqueAttackBase_C_SetMoveState_Common final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                       K2Node_DynamicCast_AsPal_Anim_Instance;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_SetMoveState_Common) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_SetMoveState_Common");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_SetMoveState_Common) == 0x000040, "Wrong size on BP_ActionUniqueAttackBase_C_SetMoveState_Common");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Common, IsDisable) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Common::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Common, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Common::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Common, CallFunc_GetMainMesh_ReturnValue) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Common::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Common, CallFunc_GetAnimInstance_ReturnValue) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Common::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Common, K2Node_DynamicCast_AsPal_Anim_Instance) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Common::K2Node_DynamicCast_AsPal_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Common, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Common::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Common, CallFunc_GetActionCharacter_ReturnValue_1) == 0x000030, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Common::CallFunc_GetActionCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Common, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Common::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.SetMoveState_Gravity
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionUniqueAttackBase_C_SetMoveState_Gravity final
{
public:
	double                                        GravityRate;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetPalCharacterMovementComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetGravityZMultiplier_rate_ImplicitCast;  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_SetMoveState_Gravity) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_SetMoveState_Gravity");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_SetMoveState_Gravity) == 0x000020, "Wrong size on BP_ActionUniqueAttackBase_C_SetMoveState_Gravity");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Gravity, GravityRate) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Gravity::GravityRate' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Gravity, CallFunc_GetActionCharacter_ReturnValue) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Gravity::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Gravity, CallFunc_GetPalCharacterMovementComponent_ReturnValue) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Gravity::CallFunc_GetPalCharacterMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Gravity, CallFunc_SetGravityZMultiplier_rate_ImplicitCast) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Gravity::CallFunc_SetGravityZMultiplier_rate_ImplicitCast' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.SetMoveState_Rotate
// 0x0028 (0x0028 - 0x0000)
struct BP_ActionUniqueAttackBase_C_SetMoveState_Rotate final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_SetMoveState_Rotate) == 0x000008, "Wrong alignment on BP_ActionUniqueAttackBase_C_SetMoveState_Rotate");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_SetMoveState_Rotate) == 0x000028, "Wrong size on BP_ActionUniqueAttackBase_C_SetMoveState_Rotate");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Rotate, IsDisable) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Rotate::IsDisable' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Rotate, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Rotate::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Rotate, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Rotate::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Rotate, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Rotate::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SetMoveState_Rotate, CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast) == 0x000020, "Member 'BP_ActionUniqueAttackBase_C_SetMoveState_Rotate::CallFunc_SetYawRotatorMultiplier_rate_ImplicitCast' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.SpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionUniqueAttackBase_C_SpawnEffect final
{
public:
	class FName                                   EffectKey;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_SpawnEffect) == 0x000004, "Wrong alignment on BP_ActionUniqueAttackBase_C_SpawnEffect");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_SpawnEffect) == 0x000008, "Wrong size on BP_ActionUniqueAttackBase_C_SpawnEffect");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_SpawnEffect, EffectKey) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_SpawnEffect::EffectKey' has a wrong offset!");

// Function BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionUniqueAttackBase_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionUniqueAttackBase_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionUniqueAttackBase_C_TickAction");
static_assert(sizeof(BP_ActionUniqueAttackBase_C_TickAction) == 0x000004, "Wrong size on BP_ActionUniqueAttackBase_C_TickAction");
static_assert(offsetof(BP_ActionUniqueAttackBase_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionUniqueAttackBase_C_TickAction::DeltaTime' has a wrong offset!");

}

