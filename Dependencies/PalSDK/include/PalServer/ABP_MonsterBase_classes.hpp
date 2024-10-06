#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ABP_MonsterBase_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// AnimBlueprintGeneratedClass ABP_MonsterBase.ABP_MonsterBase_C
// 0x1E20 (0x2430 - 0x0610)
class UABP_MonsterBase_C : public UPalAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_MonsterBase::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0618(0x0060)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0678(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0680(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_4;                              // 0x0688(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;                   // 0x06A8(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0770(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x0790(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0858(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0920(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0940(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0A08(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0A28(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0AF0(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0B10(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0B38(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0B60(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0B88(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0BB0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0BD8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0C00(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0C28(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0C50(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0C78(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0CA0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0CC8(0x0028)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_3;                   // 0x0CF0(0x00C8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_7;                  // 0x0DB8(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0E28(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_6;                  // 0x0E48(0x0070)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;                   // 0x0EB8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0F00(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0F48(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_5;                  // 0x0F68(0x0070)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x0FD8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1020(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1068(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1088(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x10D0(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x10F0(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_4;                  // 0x1138(0x0070)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x11A8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x11F0(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_3;                  // 0x1238(0x0070)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x12A8(0x0070)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1318(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x1360(0x0070)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x13D0(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1440(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1460(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_2;                              // 0x1528(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x1570(0x0048)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_2;                   // 0x15B8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x1680(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x1788(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x17B0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x17F8(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x1820(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1928(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1950(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x1998(0x0028)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x19C0(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1A08(0x0028)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_1;                   // 0x1A30(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1AF8(0x0108)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1C00(0x0028)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x1C28(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x1CF0(0x0028)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x1D18(0x00C8)()
	class UPalCharacterMovementComponent*         K2Node_PropertyAccess_17;                          // 0x1DE0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_PropertyAccess_15;                          // 0x1DE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DE9[0x7];                                     // 0x1DE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCharacterMovementComponent*         K2Node_PropertyAccess_14;                          // 0x1DF0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_PropertyAccess_12;                          // 0x1DF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DF9[0x3];                                     // 0x1DF9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_PropertyAccess_10;                          // 0x1DFC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_PropertyAccess_9;                           // 0x1E00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E04[0x4];                                     // 0x1E04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_PropertyAccess_8;                           // 0x1E08(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_PropertyAccess_7;                           // 0x1E20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E21[0x7];                                     // 0x1E21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeaponAnimationInfo                   K2Node_PropertyAccess_6;                           // 0x1E28(0x0258)()
	struct FVector                                K2Node_PropertyAccess_5;                           // 0x2080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_PropertyAccess_3;                           // 0x2098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_PropertyAccess_2;                           // 0x20B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_PropertyAccess_1;                           // 0x20C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_PropertyAccess;                             // 0x20C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20CA[0x6];                                     // 0x20CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               __CustomProperty_AimRotator_D409488B47D1A68373AC2E9D883DDF47; // 0x20D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                __CustomProperty_LookAtWorldLocation_FBA1F7A649A7D6231954198C8C515A62; // 0x20E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAiming;                                          // 0x2100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShooting;                                        // 0x2101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2102[0x6];                                     // 0x2102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeaponAnimationInfo                   WeaponAnimInfo;                                    // 0x2108(0x0258)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              CameraVelocityXY;                                  // 0x2360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               AimRotator;                                        // 0x2370(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLookatEnable;                                    // 0x2388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2389[0x7];                                     // 0x2389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LookAtTarget;                                      // 0x2390(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LookatInTime;                                      // 0x23A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LookatOutTime;                                     // 0x23B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsJumpPreliminary;                                 // 0x23B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkipJumpStart;                                   // 0x23B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23BA[0x6];                                     // 0x23BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AngleSpeed;                                        // 0x23C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRiding;                                          // 0x23C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFlying;                                          // 0x23C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldBeUseShooterComponent;                       // 0x23CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldBeUseRiderComponent;                         // 0x23CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23CC[0x4];                                     // 0x23CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PrevMoveSpeed;                                     // 0x23D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         FootStepEffectClass;                               // 0x23D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   FootStepAttachPointName;                           // 0x23E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FootStepEffect;                                    // 0x23E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          TSCached_OwnerPalCharacter;                        // 0x23F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                   TSCached_ShooterComponent;                         // 0x23F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                    TSCached_LookAtComponent;                          // 0x2400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalRideMarkerComponent*                TSCached_RideMarker;                               // 0x2408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSpawnDashEffect;                                 // 0x2410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2411[0x7];                                     // 0x2411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DashEffectSpeed;                                   // 0x2418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFloating;                                        // 0x2420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2421[0x7];                                     // 0x2421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MovementScale;                                     // 0x2428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_EE0E56854535C9DCA7F729A194F159F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_CE52F1054119833750D5A6BE24F3D0CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_A47488D6499D3064732F10A46F49E205();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_94EBA2794624A1AE0E87B0B8F0C035CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_8E5298E14CFFC43AC4CB97899CB66188();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_6D5D23194B5DCCF74E79899BDAC0B9BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_56B64F4E4C9E82DE226407ACE61B8F62();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_12D0A21548EC4F9A1B3A7F89B42E002E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_FE682B1C41C3E7BF960F52B352036D22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_EA0B5CD54E5A85E50831B98555463D29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_128A52BB436E9B3A31FBB7A0A5CC15C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ECFECB414886E0974195E991463ACD99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_E84338B149C6CA71A04CD2A2AFEE1A26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ADBAEE7E4B8D4BFED7B43DBC07178B76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_925DF20E402882570857548CCD9E3C68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_6FEC962E4C28F1AC8D56A49C89C4ADFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_672678E246E619FB275DE5AFE6DDA234();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_40ADA346423143A5CAA0D4B50B157F15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_FB442B974C195CB35B6129B622134627();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_C95153CD4007A62F8D752891550DF5D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_B62C4ED042628BD16274AFA4FDD16719();
	void CanSpawnFootStepEffect(bool* CanSpawn);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void BlueprintPostEvaluateAnimation();
	void BlueprintBeginPlay();
	void AnimNotify_Landing();
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AimingOverride(const struct FPoseLink& DefaultPose, const struct FRotator& AimRotator_0, struct FPoseLink* AimingOverride_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F0D464AD4B31CE2D2A7A7EA95C239B70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F48506EF4272DE0D9403FC8091658CC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F96787034784DF12FF90028A34BB8B39();
	void ExecuteUbergraph_ABP_MonsterBase(int32 EntryPoint);
	void GetFootStepCharacterSpeed(double* CharacterSpeed);
	void GetFootStepEffectScale(double* Scale);
	void GetSprint(bool* IsSprint);
	void IsFloatingPal();
	void LookAtOverride(const struct FPoseLink& InPose, const struct FVector& LookAtWorldLocation, struct FPoseLink* LookAtOverride_0);
	void MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, class FString* PalSize);
	void MonsterPhysics(const struct FPoseLink& InPose, struct FPoseLink* MonsterPhysics_0);
	void PlayLandingSound();
	void PlaySound(class FName SoundId);
	void PostUpdateDashEffect();
	void StartFootStepEffect();
	void StopFootStepEffect();
	void Update_Look_at_Parameter();
	void UpdateBasicParameter();
	void UpdateDashEffect_AnyThread();
	void UpdateRidingParameter();
	void UpdateShooterParameter();
	void UpperOverride(const struct FPoseLink& NativePose, const struct FPoseLink& ActionPose, struct FPoseLink* UpperOverride_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_MonsterBase_C">();
	}
	static class UABP_MonsterBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_MonsterBase_C>();
	}
};
static_assert(alignof(UABP_MonsterBase_C) == 0x000010, "Wrong alignment on UABP_MonsterBase_C");
static_assert(sizeof(UABP_MonsterBase_C) == 0x002430, "Wrong size on UABP_MonsterBase_C");
static_assert(offsetof(UABP_MonsterBase_C, UberGraphFrame) == 0x000610, "Member 'UABP_MonsterBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, __AnimBlueprintMutables) == 0x000618, "Member 'UABP_MonsterBase_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimBlueprintExtension_PropertyAccess) == 0x000678, "Member 'UABP_MonsterBase_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimBlueprintExtension_Base) == 0x000680, "Member 'UABP_MonsterBase_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_Root_4) == 0x000688, "Member 'UABP_MonsterBase_C::AnimGraphNode_Root_4' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_LinkedInputPose_4) == 0x0006A8, "Member 'UABP_MonsterBase_C::AnimGraphNode_LinkedInputPose_4' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_Root_3) == 0x000770, "Member 'UABP_MonsterBase_C::AnimGraphNode_Root_3' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_LinkedInputPose_3) == 0x000790, "Member 'UABP_MonsterBase_C::AnimGraphNode_LinkedInputPose_3' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_LinkedInputPose_2) == 0x000858, "Member 'UABP_MonsterBase_C::AnimGraphNode_LinkedInputPose_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_Root_2) == 0x000920, "Member 'UABP_MonsterBase_C::AnimGraphNode_Root_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_LinkedInputPose_1) == 0x000940, "Member 'UABP_MonsterBase_C::AnimGraphNode_LinkedInputPose_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_Root_1) == 0x000A08, "Member 'UABP_MonsterBase_C::AnimGraphNode_Root_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_LinkedInputPose) == 0x000A28, "Member 'UABP_MonsterBase_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_Root) == 0x000AF0, "Member 'UABP_MonsterBase_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_11) == 0x000B10, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_10) == 0x000B38, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_9) == 0x000B60, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_8) == 0x000B88, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_7) == 0x000BB0, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_6) == 0x000BD8, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_5) == 0x000C00, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_4) == 0x000C28, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_3) == 0x000C50, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_2) == 0x000C78, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult_1) == 0x000CA0, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TransitionResult) == 0x000CC8, "Member 'UABP_MonsterBase_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_LinkedAnimLayer_3) == 0x000CF0, "Member 'UABP_MonsterBase_C::AnimGraphNode_LinkedAnimLayer_3' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendSpacePlayer_7) == 0x000DB8, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendSpacePlayer_7' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_StateResult_4) == 0x000E28, "Member 'UABP_MonsterBase_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendSpacePlayer_6) == 0x000E48, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendSpacePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendListByBool_7) == 0x000EB8, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_SequencePlayer_2) == 0x000F00, "Member 'UABP_MonsterBase_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_StateResult_3) == 0x000F48, "Member 'UABP_MonsterBase_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendSpacePlayer_5) == 0x000F68, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendSpacePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendListByBool_6) == 0x000FD8, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_SequencePlayer_1) == 0x001020, "Member 'UABP_MonsterBase_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_StateResult_2) == 0x001068, "Member 'UABP_MonsterBase_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_SequencePlayer) == 0x001088, "Member 'UABP_MonsterBase_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_StateResult_1) == 0x0010D0, "Member 'UABP_MonsterBase_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendListByBool_5) == 0x0010F0, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendSpacePlayer_4) == 0x001138, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendSpacePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendListByBool_4) == 0x0011A8, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendListByBool_3) == 0x0011F0, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendSpacePlayer_3) == 0x001238, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendSpacePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendSpacePlayer_2) == 0x0012A8, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendListByBool_2) == 0x001318, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendSpacePlayer_1) == 0x001360, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendSpacePlayer) == 0x0013D0, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_StateResult) == 0x001440, "Member 'UABP_MonsterBase_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_StateMachine) == 0x001460, "Member 'UABP_MonsterBase_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_Slot_2) == 0x001528, "Member 'UABP_MonsterBase_C::AnimGraphNode_Slot_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_Slot_1) == 0x001570, "Member 'UABP_MonsterBase_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_LinkedAnimLayer_2) == 0x0015B8, "Member 'UABP_MonsterBase_C::AnimGraphNode_LinkedAnimLayer_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_SaveCachedPose_2) == 0x001680, "Member 'UABP_MonsterBase_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_UseCachedPose_6) == 0x001788, "Member 'UABP_MonsterBase_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendListByBool_1) == 0x0017B0, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_UseCachedPose_5) == 0x0017F8, "Member 'UABP_MonsterBase_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_SaveCachedPose_1) == 0x001820, "Member 'UABP_MonsterBase_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_UseCachedPose_4) == 0x001928, "Member 'UABP_MonsterBase_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_BlendListByBool) == 0x001950, "Member 'UABP_MonsterBase_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_UseCachedPose_3) == 0x001998, "Member 'UABP_MonsterBase_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_Slot) == 0x0019C0, "Member 'UABP_MonsterBase_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_UseCachedPose_2) == 0x001A08, "Member 'UABP_MonsterBase_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_LinkedAnimLayer_1) == 0x001A30, "Member 'UABP_MonsterBase_C::AnimGraphNode_LinkedAnimLayer_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_SaveCachedPose) == 0x001AF8, "Member 'UABP_MonsterBase_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_UseCachedPose_1) == 0x001C00, "Member 'UABP_MonsterBase_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_TwoWayBlend) == 0x001C28, "Member 'UABP_MonsterBase_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_UseCachedPose) == 0x001CF0, "Member 'UABP_MonsterBase_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AnimGraphNode_LinkedAnimLayer) == 0x001D18, "Member 'UABP_MonsterBase_C::AnimGraphNode_LinkedAnimLayer' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_17) == 0x001DE0, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_17' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_15) == 0x001DE8, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_15' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_14) == 0x001DF0, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_14' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_12) == 0x001DF8, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_12' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_10) == 0x001DFC, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_10' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_9) == 0x001E00, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_9' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_8) == 0x001E08, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_8' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_7) == 0x001E20, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_7' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_6) == 0x001E28, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_6' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_5) == 0x002080, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_5' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_3) == 0x002098, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_3' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_2) == 0x0020B0, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_2' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess_1) == 0x0020C8, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess_1' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, K2Node_PropertyAccess) == 0x0020C9, "Member 'UABP_MonsterBase_C::K2Node_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, __CustomProperty_AimRotator_D409488B47D1A68373AC2E9D883DDF47) == 0x0020D0, "Member 'UABP_MonsterBase_C::__CustomProperty_AimRotator_D409488B47D1A68373AC2E9D883DDF47' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, __CustomProperty_LookAtWorldLocation_FBA1F7A649A7D6231954198C8C515A62) == 0x0020E8, "Member 'UABP_MonsterBase_C::__CustomProperty_LookAtWorldLocation_FBA1F7A649A7D6231954198C8C515A62' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, IsAiming) == 0x002100, "Member 'UABP_MonsterBase_C::IsAiming' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, IsShooting) == 0x002101, "Member 'UABP_MonsterBase_C::IsShooting' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, WeaponAnimInfo) == 0x002108, "Member 'UABP_MonsterBase_C::WeaponAnimInfo' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, CameraVelocityXY) == 0x002360, "Member 'UABP_MonsterBase_C::CameraVelocityXY' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AimRotator) == 0x002370, "Member 'UABP_MonsterBase_C::AimRotator' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, IsLookatEnable) == 0x002388, "Member 'UABP_MonsterBase_C::IsLookatEnable' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, LookAtTarget) == 0x002390, "Member 'UABP_MonsterBase_C::LookAtTarget' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, LookatInTime) == 0x0023A8, "Member 'UABP_MonsterBase_C::LookatInTime' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, LookatOutTime) == 0x0023B0, "Member 'UABP_MonsterBase_C::LookatOutTime' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, IsJumpPreliminary) == 0x0023B8, "Member 'UABP_MonsterBase_C::IsJumpPreliminary' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, IsSkipJumpStart) == 0x0023B9, "Member 'UABP_MonsterBase_C::IsSkipJumpStart' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, AngleSpeed) == 0x0023C0, "Member 'UABP_MonsterBase_C::AngleSpeed' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, IsRiding) == 0x0023C8, "Member 'UABP_MonsterBase_C::IsRiding' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, IsFlying) == 0x0023C9, "Member 'UABP_MonsterBase_C::IsFlying' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, ShouldBeUseShooterComponent) == 0x0023CA, "Member 'UABP_MonsterBase_C::ShouldBeUseShooterComponent' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, ShouldBeUseRiderComponent) == 0x0023CB, "Member 'UABP_MonsterBase_C::ShouldBeUseRiderComponent' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, PrevMoveSpeed) == 0x0023D0, "Member 'UABP_MonsterBase_C::PrevMoveSpeed' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, FootStepEffectClass) == 0x0023D8, "Member 'UABP_MonsterBase_C::FootStepEffectClass' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, FootStepAttachPointName) == 0x0023E0, "Member 'UABP_MonsterBase_C::FootStepAttachPointName' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, FootStepEffect) == 0x0023E8, "Member 'UABP_MonsterBase_C::FootStepEffect' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, TSCached_OwnerPalCharacter) == 0x0023F0, "Member 'UABP_MonsterBase_C::TSCached_OwnerPalCharacter' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, TSCached_ShooterComponent) == 0x0023F8, "Member 'UABP_MonsterBase_C::TSCached_ShooterComponent' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, TSCached_LookAtComponent) == 0x002400, "Member 'UABP_MonsterBase_C::TSCached_LookAtComponent' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, TSCached_RideMarker) == 0x002408, "Member 'UABP_MonsterBase_C::TSCached_RideMarker' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, IsSpawnDashEffect) == 0x002410, "Member 'UABP_MonsterBase_C::IsSpawnDashEffect' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, DashEffectSpeed) == 0x002418, "Member 'UABP_MonsterBase_C::DashEffectSpeed' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, IsFloating) == 0x002420, "Member 'UABP_MonsterBase_C::IsFloating' has a wrong offset!");
static_assert(offsetof(UABP_MonsterBase_C, MovementScale) == 0x002428, "Member 'UABP_MonsterBase_C::MovementScale' has a wrong offset!");

}

