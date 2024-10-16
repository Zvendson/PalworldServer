#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_ActionUniqueAttackBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_UniqueSkill_Ronin_Iai.BP_Action_UniqueSkill_Ronin_Iai_C
// 0x0050 (0x0260 - 0x0210)
class UBP_Action_UniqueSkill_Ronin_Iai_C final : public UBP_ActionUniqueAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_UniqueSkill_Ronin_Iai_C;  // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           TimeHandle;                                        // 0x0218(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasStartedAttack;                                  // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AttackMoveRate;                                    // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DistanceFromTeleportEndToTarget;                   // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TeleportEndDegreeFromCameraView;                   // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PreTargetLocation;                                 // 0x0240(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Attack();
	void ExecuteUbergraph_BP_Action_UniqueSkill_Ronin_Iai(int32 EntryPoint);
	void GetUniqueActionTarget(class AActor** TargetActor);
	void OnBeginAction();
	void OnBlendOut_732CA01643E23EB854BEF392184417D7(class FName NotifyName);
	void OnBlendOut_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName);
	void OnCompleted_732CA01643E23EB854BEF392184417D7(class FName NotifyName);
	void OnCompleted_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_732CA01643E23EB854BEF392184417D7(class FName NotifyName);
	void OnInterrupted_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName);
	void OnNotifyBegin_732CA01643E23EB854BEF392184417D7(class FName NotifyName);
	void OnNotifyBegin_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName);
	void OnNotifyEnd_732CA01643E23EB854BEF392184417D7(class FName NotifyName);
	void OnNotifyEnd_DC63DA2F428FC4018668BB9B92E626E6(class FName NotifyName);
	void SetPalMoveState(bool IsDisable);
	void TickAction(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_UniqueSkill_Ronin_Iai_C">();
	}
	static class UBP_Action_UniqueSkill_Ronin_Iai_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_UniqueSkill_Ronin_Iai_C>();
	}
};
static_assert(alignof(UBP_Action_UniqueSkill_Ronin_Iai_C) == 0x000010, "Wrong alignment on UBP_Action_UniqueSkill_Ronin_Iai_C");
static_assert(sizeof(UBP_Action_UniqueSkill_Ronin_Iai_C) == 0x000260, "Wrong size on UBP_Action_UniqueSkill_Ronin_Iai_C");
static_assert(offsetof(UBP_Action_UniqueSkill_Ronin_Iai_C, UberGraphFrame_BP_Action_UniqueSkill_Ronin_Iai_C) == 0x000210, "Member 'UBP_Action_UniqueSkill_Ronin_Iai_C::UberGraphFrame_BP_Action_UniqueSkill_Ronin_Iai_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_UniqueSkill_Ronin_Iai_C, TimeHandle) == 0x000218, "Member 'UBP_Action_UniqueSkill_Ronin_Iai_C::TimeHandle' has a wrong offset!");
static_assert(offsetof(UBP_Action_UniqueSkill_Ronin_Iai_C, HasStartedAttack) == 0x000220, "Member 'UBP_Action_UniqueSkill_Ronin_Iai_C::HasStartedAttack' has a wrong offset!");
static_assert(offsetof(UBP_Action_UniqueSkill_Ronin_Iai_C, AttackMoveRate) == 0x000228, "Member 'UBP_Action_UniqueSkill_Ronin_Iai_C::AttackMoveRate' has a wrong offset!");
static_assert(offsetof(UBP_Action_UniqueSkill_Ronin_Iai_C, DistanceFromTeleportEndToTarget) == 0x000230, "Member 'UBP_Action_UniqueSkill_Ronin_Iai_C::DistanceFromTeleportEndToTarget' has a wrong offset!");
static_assert(offsetof(UBP_Action_UniqueSkill_Ronin_Iai_C, TeleportEndDegreeFromCameraView) == 0x000238, "Member 'UBP_Action_UniqueSkill_Ronin_Iai_C::TeleportEndDegreeFromCameraView' has a wrong offset!");
static_assert(offsetof(UBP_Action_UniqueSkill_Ronin_Iai_C, PreTargetLocation) == 0x000240, "Member 'UBP_Action_UniqueSkill_Ronin_Iai_C::PreTargetLocation' has a wrong offset!");

}

