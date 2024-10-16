#pragma once

#include "Basic.hpp"

#include "BP_ActionUniqueAttackBase_classes.hpp"
#include "Engine_structs.hpp"
#include "EAction_ThunderSwordAttack_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack.BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C
// 0x0040 (0x0250 - 0x0210)
class UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C final : public UBP_ActionUniqueAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C; // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EAction_ThunderSwordAttack                    AttackState;                                       // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        JumpAmplitude;                                     // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_Unique_ThunderSword_C*  ThunderSword;                                      // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         OriginalGravity;                                   // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_234[0x4];                                      // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        JumpHeight;                                        // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GravityRatio;                                      // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        JumpAttenuation;                                   // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CalcCurrentLocation(double DeltaTime, struct FVector* Location);
	void EndAction();
	void ExecuteUbergraph_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack(int32 EntryPoint);
	void GetAjustedTargetLocation(struct FVector* Location);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void UpdateAttackState(class UAnimMontage* Montage, class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C">();
	}
	static class UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C>();
	}
};
static_assert(alignof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C) == 0x000010, "Wrong alignment on UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C");
static_assert(sizeof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C) == 0x000250, "Wrong size on UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C");
static_assert(offsetof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C, UberGraphFrame_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C) == 0x000210, "Member 'UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::UberGraphFrame_BP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C' has a wrong offset!");
static_assert(offsetof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C, AttackState) == 0x000218, "Member 'UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::AttackState' has a wrong offset!");
static_assert(offsetof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C, JumpAmplitude) == 0x000220, "Member 'UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::JumpAmplitude' has a wrong offset!");
static_assert(offsetof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C, ThunderSword) == 0x000228, "Member 'UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::ThunderSword' has a wrong offset!");
static_assert(offsetof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C, OriginalGravity) == 0x000230, "Member 'UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::OriginalGravity' has a wrong offset!");
static_assert(offsetof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C, JumpHeight) == 0x000238, "Member 'UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::JumpHeight' has a wrong offset!");
static_assert(offsetof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C, GravityRatio) == 0x000240, "Member 'UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::GravityRatio' has a wrong offset!");
static_assert(offsetof(UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C, JumpAttenuation) == 0x000248, "Member 'UBP_ActionUnique_ThunderDragonMan_ThunderSwordAttack_C::JumpAttenuation' has a wrong offset!");

}

