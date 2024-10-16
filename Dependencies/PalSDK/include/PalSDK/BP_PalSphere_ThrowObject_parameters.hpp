#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// 0x0100 (0x0100 - 0x0000)
struct BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature final
{
public:
	struct FHitResult                             ImpactResult;                                      // 0x0000(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                ImpactVelocity;                                    // 0x00E8(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature) == 0x000100, "Wrong size on BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature, ImpactResult) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature::ImpactResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature, ImpactVelocity) == 0x0000E8, "Member 'BP_PalSphere_ThrowObject_C_BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature::ImpactVelocity' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.Capture Start Process After Delay
// 0x0028 (0x0028 - 0x0000)
struct BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay final
{
public:
	class ABP_PalCaptureBodyBase_C*               Body;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          TargetActor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          SneakAttack;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCaptureLevel_level;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay) == 0x000028, "Wrong size on BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay, Body) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay::Body' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay, TargetActor) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay, SneakAttack) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay::SneakAttack' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000018, "Member 'BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay, CallFunc_GetCaptureLevel_level) == 0x000020, "Member 'BP_PalSphere_ThrowObject_C_Capture_Start_Process_After_Delay::CallFunc_GetCaptureLevel_level' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.CaptureStartProcess
// 0x0140 (0x0140 - 0x0000)
struct BP_PalSphere_ThrowObject_C_CaptureStartProcess final
{
public:
	TDelegate<void(const struct FGuid& SpawnGUID, class AActor* SpawnActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSneakAttackSuccessByLocation_ReturnValue; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerCharacterOrRidingCharacter_RidingCharacter; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetBodyClass_bodyClass;                   // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue_1; // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00C0(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoAttackStopJudgeByBallList*     CallFunc_GetOtomoAttackStopJudge_ReturnValue;      // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_SpawnActorBroadcast_SpawnGuid;            // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SpawnActorBroadcast_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_CaptureStartProcess) == 0x000010, "Wrong alignment on BP_PalSphere_ThrowObject_C_CaptureStartProcess");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_CaptureStartProcess) == 0x000140, "Wrong size on BP_PalSphere_ThrowObject_C_CaptureStartProcess");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000028, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000030, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000048, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_IsSneakAttackSuccessByLocation_ReturnValue) == 0x000050, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_IsSneakAttackSuccessByLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_GetOwnerCharacterOrRidingCharacter_RidingCharacter) == 0x000058, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_GetOwnerCharacterOrRidingCharacter_RidingCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000060, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000078, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_GetBodyClass_bodyClass) == 0x000080, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_GetBodyClass_bodyClass' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_GetOwner_ReturnValue) == 0x000088, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000090, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_GetOwner_ReturnValue_1) == 0x0000A8, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_GetBattleManager_ReturnValue) == 0x0000B0, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_GetCharacterParameterComponent_ReturnValue_1) == 0x0000B8, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_GetCharacterParameterComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_GetTransform_ReturnValue) == 0x0000C0, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_GetOtomoAttackStopJudge_ReturnValue) == 0x000120, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_GetOtomoAttackStopJudge_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_SpawnActorBroadcast_SpawnGuid) == 0x000128, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_SpawnActorBroadcast_SpawnGuid' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_SpawnActorBroadcast_ReturnValue) == 0x000138, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_SpawnActorBroadcast_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_CaptureStartProcess, CallFunc_IsValid_ReturnValue) == 0x000139, "Member 'BP_PalSphere_ThrowObject_C_CaptureStartProcess::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.DelayCaptureBodyStart
// 0x0020 (0x0020 - 0x0000)
struct BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart final
{
public:
	class ABP_PalCaptureBodyBase_C*               BodyActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          Target;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Delay;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SneakAttack;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart) == 0x000020, "Wrong size on BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart, BodyActor) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart::BodyActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart, Target) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart::Target' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart, Delay) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart::Delay' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart, SneakAttack) == 0x000018, "Member 'BP_PalSphere_ThrowObject_C_DelayCaptureBodyStart::SneakAttack' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.ExecuteUbergraph_BP_PalSphere_ThrowObject
// 0x0288 (0x0288 - 0x0000)
struct BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCaptureablePal_Captureable;             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_IsCaptureablePal_TargetPalCharacter;      // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_ImpactResult;           // 0x0150(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                K2Node_ComponentBoundEvent_ImpactVelocity;         // 0x0238(0x0018)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PalCaptureBodyBase_C*               K2Node_CustomEvent_BodyActor;                      // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          K2Node_CustomEvent_Target;                         // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_Delay;                          // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_SneakAttack;                    // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateRotator_DeltaTime_ImplicitCast;     // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject) == 0x000288, "Wrong size on BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, EntryPoint) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000110, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, CallFunc_IsCaptureablePal_Captureable) == 0x000128, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::CallFunc_IsCaptureablePal_Captureable' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, CallFunc_IsCaptureablePal_TargetPalCharacter) == 0x000130, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::CallFunc_IsCaptureablePal_TargetPalCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000138, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_ComponentBoundEvent_ImpactResult) == 0x000150, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_ComponentBoundEvent_ImpactResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_ComponentBoundEvent_ImpactVelocity) == 0x000238, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_ComponentBoundEvent_ImpactVelocity' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, CallFunc_IsValid_ReturnValue) == 0x000250, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_Event_DeltaSeconds) == 0x000254, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_CustomEvent_BodyActor) == 0x000258, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_CustomEvent_BodyActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_CustomEvent_Target) == 0x000260, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_CustomEvent_Delay) == 0x000268, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_CustomEvent_Delay' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, K2Node_CustomEvent_SneakAttack) == 0x000270, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::K2Node_CustomEvent_SneakAttack' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, CallFunc_UpdateRotator_DeltaTime_ImplicitCast) == 0x000278, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::CallFunc_UpdateRotator_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject, CallFunc_Delay_Duration_ImplicitCast) == 0x000280, "Member 'BP_PalSphere_ThrowObject_C_ExecuteUbergraph_BP_PalSphere_ThrowObject::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.GetBodyClass
// 0x0008 (0x0008 - 0x0000)
struct BP_PalSphere_ThrowObject_C_GetBodyClass final
{
public:
	class UClass*                                 bodyClass;                                         // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_GetBodyClass) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_GetBodyClass");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_GetBodyClass) == 0x000008, "Wrong size on BP_PalSphere_ThrowObject_C_GetBodyClass");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetBodyClass, bodyClass) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_GetBodyClass::bodyClass' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.GetMaxBoundCount
// 0x0018 (0x0018 - 0x0000)
struct BP_PalSphere_ThrowObject_C_GetMaxBoundCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_GetMaxBoundCount) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_GetMaxBoundCount");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_GetMaxBoundCount) == 0x000018, "Wrong size on BP_PalSphere_ThrowObject_C_GetMaxBoundCount");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetMaxBoundCount, Count) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_GetMaxBoundCount::Count' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetMaxBoundCount, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_GetMaxBoundCount::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetMaxBoundCount, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_GetMaxBoundCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.IsCaptureablePal
// 0x0068 (0x0068 - 0x0000)
struct BP_PalSphere_ThrowObject_C_IsCaptureablePal final
{
public:
	class AActor*                                 TargetActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Captureable;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          TargetPalCharacter;                                // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          TempPalCharacter;                                  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    K2Node_DynamicCast_AsPal_Player_Character;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterParameterComponent*        CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsCapturedProcessing_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnemy_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_IsCaptureablePal) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_IsCaptureablePal");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_IsCaptureablePal) == 0x000068, "Wrong size on BP_PalSphere_ThrowObject_C_IsCaptureablePal");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, TargetActor) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::TargetActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, Captureable) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::Captureable' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, TargetPalCharacter) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::TargetPalCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, TempPalCharacter) == 0x000018, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::TempPalCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, K2Node_DynamicCast_AsPal_Player_Character) == 0x000028, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::K2Node_DynamicCast_AsPal_Player_Character' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, K2Node_DynamicCast_AsPal_Character) == 0x000038, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, CallFunc_GetCharacterParameterComponent_ReturnValue) == 0x000048, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::CallFunc_GetCharacterParameterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, CallFunc_GetIsCapturedProcessing_ReturnValue) == 0x000050, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::CallFunc_GetIsCapturedProcessing_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000058, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, CallFunc_IsEnemy_ReturnValue) == 0x000060, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::CallFunc_IsEnemy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCaptureablePal, CallFunc_IsDead_ReturnValue) == 0x000061, "Member 'BP_PalSphere_ThrowObject_C_IsCaptureablePal::CallFunc_IsDead_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.IsCountDestroy
// 0x0002 (0x0002 - 0x0000)
struct BP_PalSphere_ThrowObject_C_IsCountDestroy final
{
public:
	bool                                          Param_IsDestroy_0;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_IsCountDestroy) == 0x000001, "Wrong alignment on BP_PalSphere_ThrowObject_C_IsCountDestroy");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_IsCountDestroy) == 0x000002, "Wrong size on BP_PalSphere_ThrowObject_C_IsCountDestroy");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCountDestroy, Param_IsDestroy_0) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_IsCountDestroy::Param_IsDestroy_0' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsCountDestroy, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_PalSphere_ThrowObject_C_IsCountDestroy::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.OnSpawnJudgeBall
// 0x0030 (0x0030 - 0x0000)
struct BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall final
{
public:
	struct FGuid                                  SpawnGUID;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SpawnActor;                                        // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        TmpDelayTime;                                      // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PalSphere_Body_C*                   K2Node_DynamicCast_AsBP_Pal_Sphere_Body;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInClientConnection_ReturnValue;         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall) == 0x000030, "Wrong size on BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall, SpawnGUID) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall::SpawnGUID' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall, SpawnActor) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall::SpawnActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall, TmpDelayTime) == 0x000018, "Member 'BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall::TmpDelayTime' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall, K2Node_DynamicCast_AsBP_Pal_Sphere_Body) == 0x000020, "Member 'BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall::K2Node_DynamicCast_AsBP_Pal_Sphere_Body' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall, CallFunc_IsInClientConnection_ReturnValue) == 0x000029, "Member 'BP_PalSphere_ThrowObject_C_OnSpawnJudgeBall::CallFunc_IsInClientConnection_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.Play Sound Bounce
// 0x0410 (0x0410 - 0x0000)
struct BP_PalSphere_ThrowObject_C_Play_Sound_Bounce final
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x00E8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FPalDataTableRowName_SoundID           ID;                                                // 0x00E8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F2[0x2];                                       // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0118(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0130(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EA[0x2];                                      // 0x01EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0268(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_1;                // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0290(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x02A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x02C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_2;            // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_2;         // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DA[0x2];                                      // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_2;                    // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_2;                // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location_2;                // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_2;             // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_2;                  // 0x0318(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_2;            // 0x0330(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_2;                 // 0x0348(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_2;                // 0x0350(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_2;            // 0x0358(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_2;             // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName_2;                // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_2;                 // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_2;            // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_2;               // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37C[0x4];                                      // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart_2;              // 0x0380(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_2;                // 0x0398(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x03B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C9[0x7];                                      // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x03D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x03E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_GetSurfaceType_ReturnValue;               // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPhysicalSurfaceType_bHit;              // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              CallFunc_GetPhysicalSurfaceType_ReturnValue;       // 0x0402(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_403[0x5];                                      // 0x0403(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_Play_Sound_Bounce");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce) == 0x000410, "Wrong size on BP_PalSphere_ThrowObject_C_Play_Sound_Bounce");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, HitResult) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::HitResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, ID) == 0x0000E8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::ID' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_bBlockingHit) == 0x0000F0, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000F1, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Time) == 0x0000F4, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Distance) == 0x0000F8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Location) == 0x000100, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_ImpactPoint) == 0x000118, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Normal) == 0x000130, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_ImpactNormal) == 0x000148, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_PhysMat) == 0x000160, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitActor) == 0x000168, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitComponent) == 0x000170, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitBoneName) == 0x000178, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_BoneName) == 0x000180, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitItem) == 0x000188, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_ElementIndex) == 0x00018C, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_FaceIndex) == 0x000190, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_TraceStart) == 0x000198, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_TraceEnd) == 0x0001B0, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0001C8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x0001D0, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_bBlockingHit_1) == 0x0001E8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x0001E9, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Time_1) == 0x0001EC, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Distance_1) == 0x0001F0, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Location_1) == 0x0001F8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000210, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Normal_1) == 0x000228, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000240, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_PhysMat_1) == 0x000258, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitActor_1) == 0x000260, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitComponent_1) == 0x000268, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitBoneName_1) == 0x000270, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_BoneName_1) == 0x000278, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_BoneName_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitItem_1) == 0x000280, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_ElementIndex_1) == 0x000284, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_FaceIndex_1) == 0x000288, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_TraceStart_1) == 0x000290, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_TraceEnd_1) == 0x0002A8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0002C0, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_bBlockingHit_2) == 0x0002D8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_bBlockingHit_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_bInitialOverlap_2) == 0x0002D9, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_bInitialOverlap_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Time_2) == 0x0002DC, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Time_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Distance_2) == 0x0002E0, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Distance_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Location_2) == 0x0002E8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Location_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_ImpactPoint_2) == 0x000300, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_ImpactPoint_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_Normal_2) == 0x000318, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_Normal_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_ImpactNormal_2) == 0x000330, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_ImpactNormal_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_PhysMat_2) == 0x000348, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_PhysMat_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitActor_2) == 0x000350, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitActor_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitComponent_2) == 0x000358, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitComponent_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitBoneName_2) == 0x000360, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitBoneName_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_BoneName_2) == 0x000368, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_BoneName_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_HitItem_2) == 0x000370, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_HitItem_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_ElementIndex_2) == 0x000374, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_ElementIndex_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_FaceIndex_2) == 0x000378, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_FaceIndex_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_TraceStart_2) == 0x000380, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_TraceStart_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_BreakHitResult_TraceEnd_2) == 0x000398, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_BreakHitResult_TraceEnd_2' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_Normal_ReturnValue) == 0x0003B0, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_IsValid_ReturnValue) == 0x0003C8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0003D0, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_Add_VectorVector_ReturnValue) == 0x0003E8, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_GetSurfaceType_ReturnValue) == 0x000400, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_GetSurfaceType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_GetPhysicalSurfaceType_bHit) == 0x000401, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_GetPhysicalSurfaceType_bHit' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_GetPhysicalSurfaceType_ReturnValue) == 0x000402, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_GetPhysicalSurfaceType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_Play_Sound_Bounce, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000408, "Member 'BP_PalSphere_ThrowObject_C_Play_Sound_Bounce::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalSphere_ThrowObject_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalSphere_ThrowObject_C_ReceiveTick");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalSphere_ThrowObject_C_ReceiveTick");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.SetProjectileMovement
// 0x00A8 (0x00A8 - 0x0000)
struct BP_PalSphere_ThrowObject_C_SetProjectileMovement final
{
public:
	class AActor*                                 HitActor;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_VSize_ReturnValue;                        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_SetProjectileMovement) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_SetProjectileMovement");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_SetProjectileMovement) == 0x0000A8, "Wrong size on BP_PalSphere_ThrowObject_C_SetProjectileMovement");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, HitActor) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::HitActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000020, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000038, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_Normal_ReturnValue) == 0x000050, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000068, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_IsFriend_ReturnValue) == 0x000070, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_IsFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_VSize_ReturnValue) == 0x000078, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000088, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_SetProjectileMovement, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000090, "Member 'BP_PalSphere_ThrowObject_C_SetProjectileMovement::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.UpdateRotator
// 0x0128 (0x0128 - 0x0000)
struct BP_PalSphere_ThrowObject_C_UpdateRotator final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0038(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_RotatorFloat_B_ImplicitCast;     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_UpdateRotator) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_UpdateRotator");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_UpdateRotator) == 0x000128, "Wrong size on BP_PalSphere_ThrowObject_C_UpdateRotator");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_UpdateRotator, DeltaTime) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_UpdateRotator::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_UpdateRotator, CallFunc_Multiply_RotatorFloat_ReturnValue) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_UpdateRotator::CallFunc_Multiply_RotatorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_UpdateRotator, CallFunc_ComposeRotators_ReturnValue) == 0x000020, "Member 'BP_PalSphere_ThrowObject_C_UpdateRotator::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_UpdateRotator, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000038, "Member 'BP_PalSphere_ThrowObject_C_UpdateRotator::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_UpdateRotator, CallFunc_Multiply_RotatorFloat_B_ImplicitCast) == 0x000120, "Member 'BP_PalSphere_ThrowObject_C_UpdateRotator::CallFunc_Multiply_RotatorFloat_B_ImplicitCast' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct BP_PalSphere_ThrowObject_C_UserConstructionScript final
{
public:
	class AActor*                                 CallFunc_GetOwnerCharacterOrRidingCharacter_RidingCharacter; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOwnerLocalControlActor_IsLocalControlActor; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_UserConstructionScript");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_UserConstructionScript) == 0x000010, "Wrong size on BP_PalSphere_ThrowObject_C_UserConstructionScript");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_UserConstructionScript, CallFunc_GetOwnerCharacterOrRidingCharacter_RidingCharacter) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_UserConstructionScript::CallFunc_GetOwnerCharacterOrRidingCharacter_RidingCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_UserConstructionScript, CallFunc_IsOwnerLocalControlActor_IsLocalControlActor) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_UserConstructionScript::CallFunc_IsOwnerLocalControlActor_IsLocalControlActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_UserConstructionScript, CallFunc_HasAuthority_ReturnValue) == 0x000009, "Member 'BP_PalSphere_ThrowObject_C_UserConstructionScript::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.GetOwnerCharacterOrRidingCharacter
// 0x0030 (0x0030 - 0x0000)
struct BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter final
{
public:
	class AActor*                                 RidingCharacter;                                   // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalRiderComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetRindingActor_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter) == 0x000030, "Wrong size on BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter, RidingCharacter) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter::RidingCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter, CallFunc_GetRindingActor_ReturnValue) == 0x000020, "Member 'BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter::CallFunc_GetRindingActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter, CallFunc_IsValid_ReturnValue_2) == 0x000029, "Member 'BP_PalSphere_ThrowObject_C_GetOwnerCharacterOrRidingCharacter::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C.IsOwnerLocalControlActor
// 0x0018 (0x0018 - 0x0000)
struct BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor final
{
public:
	bool                                          IsLocalControlActor;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerCharacterOrRidingCharacter_RidingCharacter; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalControlActor_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor) == 0x000008, "Wrong alignment on BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor");
static_assert(sizeof(BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor) == 0x000018, "Wrong size on BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor, IsLocalControlActor) == 0x000000, "Member 'BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor::IsLocalControlActor' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor, CallFunc_GetOwnerCharacterOrRidingCharacter_RidingCharacter) == 0x000008, "Member 'BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor::CallFunc_GetOwnerCharacterOrRidingCharacter_RidingCharacter' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor, CallFunc_IsLocalControlActor_ReturnValue) == 0x000011, "Member 'BP_PalSphere_ThrowObject_C_IsOwnerLocalControlActor::CallFunc_IsLocalControlActor_ReturnValue' has a wrong offset!");

}

