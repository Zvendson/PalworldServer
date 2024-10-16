#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_ActionUniqueAttackBase_classes.hpp"
#include "EAction_GrassPanda_MusclePunch_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_Unique_GrassPanda_MusclePunch.BP_Action_Unique_GrassPanda_MusclePunch_C
// 0x0080 (0x0290 - 0x0210)
class UBP_Action_Unique_GrassPanda_MusclePunch_C final : public UBP_ActionUniqueAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Unique_GrassPanda_MusclePunch_C; // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        AttackTime;                                        // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveSpeed;                                         // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAction_GrassPanda_MusclePunch                State;                                             // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HomingOffTrigger;                                  // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHomingTarget;                                    // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RotateSpeed_0;                                     // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HomingOffDistance;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveFowardImpulseWhenPunch;                        // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Last_Collision_Profile;                            // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SkillEffect;                                       // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class APalSkillEffectBase>> SpawnedEffects_0;                                  // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APalSkillEffectBase*                    LoopEffect;                                        // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MoveGravity;                                       // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EndAttack();
	void ExecuteUbergraph_BP_Action_Unique_GrassPanda_MusclePunch(int32 EntryPoint);
	void Get_Target_Rotation(struct FRotator* TargetRotation);
	void GetEffect(class UClass** NewParam);
	void GetHeadCollisionProfile(class FName* LastCollisionProfile);
	void GetMontageEnd(class UAnimMontage** NewParam);
	void GetMontageLoop(class UAnimMontage** NewParam);
	void GetMontageStart(class UAnimMontage** NewParam);
	void MoveStart();
	void MoveStop();
	void OnBeginAction();
	void OnBlendOut_10A7C1724455A4049513A19389414F12(class FName NotifyName);
	void OnBlendOut_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName);
	void OnBlendOut_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName);
	void OnCompleted_10A7C1724455A4049513A19389414F12(class FName NotifyName);
	void OnCompleted_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName);
	void OnCompleted_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_10A7C1724455A4049513A19389414F12(class FName NotifyName);
	void OnInterrupted_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName);
	void OnInterrupted_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName);
	void OnLoaded_0E9A405A4328B5C7419FF5B7C6198299(class UObject* Loaded);
	void OnMontageNotify_End(class FName NotifyName);
	void OnMontageNotify_Loop(class FName NotifyName);
	void OnMontageNotify_Start(class FName NotifyName);
	void OnNotifyBegin_10A7C1724455A4049513A19389414F12(class FName NotifyName);
	void OnNotifyBegin_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName);
	void OnNotifyBegin_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName);
	void OnNotifyEnd_10A7C1724455A4049513A19389414F12(class FName NotifyName);
	void OnNotifyEnd_6AA8BA2B484720BAF1D727AC203160F4(class FName NotifyName);
	void OnNotifyEnd_D731A4E4432F7D2DB75E0DB1E9FB5D3B(class FName NotifyName);
	void RotateToTarget();
	void SetHeadCollisionProfile(class FName NewCollisionProfile);
	void SetHeadCollisionResponseToPawns(ECollisionResponse NewResponseToPlayerPawn, ECollisionResponse NewResponseToPawn);
	void SpawnSkillEffect(const struct FTransform& SpawnTransform, class FName SocketName, class APalSkillEffectBase** SpawnedEffect);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_GrassPanda_MusclePunch_C">();
	}
	static class UBP_Action_Unique_GrassPanda_MusclePunch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_GrassPanda_MusclePunch_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_GrassPanda_MusclePunch_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_GrassPanda_MusclePunch_C");
static_assert(sizeof(UBP_Action_Unique_GrassPanda_MusclePunch_C) == 0x000290, "Wrong size on UBP_Action_Unique_GrassPanda_MusclePunch_C");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, UberGraphFrame_BP_Action_Unique_GrassPanda_MusclePunch_C) == 0x000210, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::UberGraphFrame_BP_Action_Unique_GrassPanda_MusclePunch_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, AttackTime) == 0x000218, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::AttackTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, MoveSpeed) == 0x000220, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::MoveSpeed' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, State) == 0x000228, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::State' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, HomingOffTrigger) == 0x000230, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::HomingOffTrigger' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, IsHomingTarget) == 0x000238, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::IsHomingTarget' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, RotateSpeed_0) == 0x000240, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::RotateSpeed_0' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, HomingOffDistance) == 0x000248, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::HomingOffDistance' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, MoveFowardImpulseWhenPunch) == 0x000250, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::MoveFowardImpulseWhenPunch' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, Last_Collision_Profile) == 0x000258, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::Last_Collision_Profile' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, SkillEffect) == 0x000260, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::SkillEffect' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, SpawnedEffects_0) == 0x000268, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::SpawnedEffects_0' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, LoopEffect) == 0x000278, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::LoopEffect' has a wrong offset!");
static_assert(offsetof(UBP_Action_Unique_GrassPanda_MusclePunch_C, MoveGravity) == 0x000280, "Member 'UBP_Action_Unique_GrassPanda_MusclePunch_C::MoveGravity' has a wrong offset!");

}

