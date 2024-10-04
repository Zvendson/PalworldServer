#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionUniqueAttackBase.BP_ActionUniqueAttackBase_C
// 0x00C0 (0x0210 - 0x0150)
class UBP_ActionUniqueAttackBase_C : public UPalActionWazaBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0150(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        RotateSpeed;                                       // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CurrentMontage;                                    // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 UniqueActionTarget;                                // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        FindFrontTargetDegree;                             // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FindFrontTargetDistance;                           // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FindFrontTargetHeight;                             // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTargetInFrontCamera;                             // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class APalSkillEffectBase>> SpawnedEffects;                                    // 0x0198(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FSkillEffectSpawnParameter> SkillEffectSpawnParameters;                        // 0x01A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsHoldTarget;                                      // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 SkillModuleClass;                                  // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUseDummy;                                        // 0x0208(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AttachToOwner(class APalSkillEffectBase* Effect, const struct FVector& Offset, class FName SocketName);
	void CalculateTeleportDestination(bool IsCharacter, double SearchDegree, double TeleportCheckDistance, struct FVector* Destination);
	void CreateSkillActionModule(class UClass* UniqueSkillModuleClass, class UBP_UniqueSkillModule_Tackle_C** Module);
	void ExecuteUbergraph_BP_ActionUniqueAttackBase(int32 EntryPoint);
	void FindActionTarget();
	void FindEffectByClass(class UClass* EffectClass, class APalSkillEffectBase** Effect);
	void GetAttackTargetLocation(bool IsFrontLocation, double FrontDistance, struct FVector* Location);
	void GetCapsuleHalfHeight(double* HalfHeight);
	void GetCapsuleHalfRadius(double* HalfRadius);
	void GetCheckedTeleportDestination(int32 WarpCheckCount, double WarpFaceOriDegree, double WarpDestinationDistance, double WarpDestinationDistance_MapOb, bool AcceptSideBlockPos, bool IgnoreFloor, bool IsRiding, struct FVector* TargetLocation, bool* HasFloor);
	void GetFootLocation(struct FVector* Location);
	void GetHeightToFloor(double* Height);
	void GetPalAnimInstance(class UPalAnimInstance** AnimInstance);
	void GetRotation(double DeltaTime, bool NoInterp, struct FRotator* Rotation);
	void GetUniqueActionTarget(class AActor** TargetActor);
	void IsMontagePlaying(class UAnimMontage* Montage, bool* IsPlaying);
	void OnBeginAction();
	void OnEndAction();
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void SetMoveState_Common(bool IsDisable);
	void SetMoveState_Gravity(double GravityRate);
	void SetMoveState_Rotate(bool IsDisable);
	void SpawnEffect(class FName EffectKey);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionUniqueAttackBase_C">();
	}
	static class UBP_ActionUniqueAttackBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionUniqueAttackBase_C>();
	}
};
static_assert(alignof(UBP_ActionUniqueAttackBase_C) == 0x000010, "Wrong alignment on UBP_ActionUniqueAttackBase_C");
static_assert(sizeof(UBP_ActionUniqueAttackBase_C) == 0x000210, "Wrong size on UBP_ActionUniqueAttackBase_C");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, UberGraphFrame) == 0x000150, "Member 'UBP_ActionUniqueAttackBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, RotateSpeed) == 0x000158, "Member 'UBP_ActionUniqueAttackBase_C::RotateSpeed' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, CurrentMontage) == 0x000160, "Member 'UBP_ActionUniqueAttackBase_C::CurrentMontage' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, UniqueActionTarget) == 0x000168, "Member 'UBP_ActionUniqueAttackBase_C::UniqueActionTarget' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, FindFrontTargetDegree) == 0x000170, "Member 'UBP_ActionUniqueAttackBase_C::FindFrontTargetDegree' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, FindFrontTargetDistance) == 0x000178, "Member 'UBP_ActionUniqueAttackBase_C::FindFrontTargetDistance' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, FindFrontTargetHeight) == 0x000180, "Member 'UBP_ActionUniqueAttackBase_C::FindFrontTargetHeight' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, FlagName) == 0x000188, "Member 'UBP_ActionUniqueAttackBase_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, IsTargetInFrontCamera) == 0x000190, "Member 'UBP_ActionUniqueAttackBase_C::IsTargetInFrontCamera' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, SpawnedEffects) == 0x000198, "Member 'UBP_ActionUniqueAttackBase_C::SpawnedEffects' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, SkillEffectSpawnParameters) == 0x0001A8, "Member 'UBP_ActionUniqueAttackBase_C::SkillEffectSpawnParameters' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, IsHoldTarget) == 0x0001F8, "Member 'UBP_ActionUniqueAttackBase_C::IsHoldTarget' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, SkillModuleClass) == 0x000200, "Member 'UBP_ActionUniqueAttackBase_C::SkillModuleClass' has a wrong offset!");
static_assert(offsetof(UBP_ActionUniqueAttackBase_C, IsUseDummy) == 0x000208, "Member 'UBP_ActionUniqueAttackBase_C::IsUseDummy' has a wrong offset!");

}

