#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffectFireBall_Charge.BP_SkillEffectFireBall_Charge_C
// 0x0020 (0x03E0 - 0x03C0)
class ABP_SkillEffectFireBall_Charge_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffectFireBall_Charge_C;    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Charge;                                            // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ReadyTime;                                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffectFireBall_Charge(int32 EntryPoint);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffectFireBall_Charge_C">();
	}
	static class ABP_SkillEffectFireBall_Charge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffectFireBall_Charge_C>();
	}
};
static_assert(alignof(ABP_SkillEffectFireBall_Charge_C) == 0x000008, "Wrong alignment on ABP_SkillEffectFireBall_Charge_C");
static_assert(sizeof(ABP_SkillEffectFireBall_Charge_C) == 0x0003E0, "Wrong size on ABP_SkillEffectFireBall_Charge_C");
static_assert(offsetof(ABP_SkillEffectFireBall_Charge_C, UberGraphFrame_BP_SkillEffectFireBall_Charge_C) == 0x0003C0, "Member 'ABP_SkillEffectFireBall_Charge_C::UberGraphFrame_BP_SkillEffectFireBall_Charge_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_Charge_C, Charge) == 0x0003C8, "Member 'ABP_SkillEffectFireBall_Charge_C::Charge' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_Charge_C, ReadyTime) == 0x0003D0, "Member 'ABP_SkillEffectFireBall_Charge_C::ReadyTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffectFireBall_Charge_C, TargetActor) == 0x0003D8, "Member 'ABP_SkillEffectFireBall_Charge_C::TargetActor' has a wrong offset!");

}

