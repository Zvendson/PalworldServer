#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Skill_RootAttack.BP_Skill_RootAttack_C
// 0x0080 (0x0440 - 0x03C0)
class ABP_Skill_RootAttack_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Skill_RootAttack_C;              // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      RootAttack;                                        // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        UnlockDistance;                                    // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HomingStrength;                                    // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                InitVector;                                        // 0x03E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Distance;                                          // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RoadInterval;                                      // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           RoadSpawnTimer;                                    // 0x0408(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           AttackTimer;                                       // 0x0410(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CloseAttackTimer;                                  // 0x0418(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AddVector;                                         // 0x0420(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 RideTarget;                                        // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Attack();
	void ExecuteUbergraph_BP_Skill_RootAttack(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetInitVector(const struct FVector& Vector);
	void SetUseRideTarget(class AActor* RideTarget_0);
	void SpawnRoad();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Skill_RootAttack_C">();
	}
	static class ABP_Skill_RootAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Skill_RootAttack_C>();
	}
};
static_assert(alignof(ABP_Skill_RootAttack_C) == 0x000008, "Wrong alignment on ABP_Skill_RootAttack_C");
static_assert(sizeof(ABP_Skill_RootAttack_C) == 0x000440, "Wrong size on ABP_Skill_RootAttack_C");
static_assert(offsetof(ABP_Skill_RootAttack_C, UberGraphFrame_BP_Skill_RootAttack_C) == 0x0003C0, "Member 'ABP_Skill_RootAttack_C::UberGraphFrame_BP_Skill_RootAttack_C' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, RootAttack) == 0x0003C8, "Member 'ABP_Skill_RootAttack_C::RootAttack' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, UnlockDistance) == 0x0003D0, "Member 'ABP_Skill_RootAttack_C::UnlockDistance' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, HomingStrength) == 0x0003D8, "Member 'ABP_Skill_RootAttack_C::HomingStrength' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, InitVector) == 0x0003E0, "Member 'ABP_Skill_RootAttack_C::InitVector' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, Distance) == 0x0003F8, "Member 'ABP_Skill_RootAttack_C::Distance' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, Duration) == 0x000400, "Member 'ABP_Skill_RootAttack_C::Duration' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, RoadInterval) == 0x000404, "Member 'ABP_Skill_RootAttack_C::RoadInterval' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, RoadSpawnTimer) == 0x000408, "Member 'ABP_Skill_RootAttack_C::RoadSpawnTimer' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, AttackTimer) == 0x000410, "Member 'ABP_Skill_RootAttack_C::AttackTimer' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, CloseAttackTimer) == 0x000418, "Member 'ABP_Skill_RootAttack_C::CloseAttackTimer' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, AddVector) == 0x000420, "Member 'ABP_Skill_RootAttack_C::AddVector' has a wrong offset!");
static_assert(offsetof(ABP_Skill_RootAttack_C, RideTarget) == 0x000438, "Member 'ABP_Skill_RootAttack_C::RideTarget' has a wrong offset!");

}

