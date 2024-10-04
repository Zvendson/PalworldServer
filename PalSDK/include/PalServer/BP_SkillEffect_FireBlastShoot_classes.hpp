#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_FireBlastShoot.BP_SkillEffect_FireBlastShoot_C
// 0x0028 (0x03E8 - 0x03C0)
class ABP_SkillEffect_FireBlastShoot_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_FireBlastShoot_C;    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BulletClass;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ShootIntervalTime;                                 // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimeHandle;                                        // 0x03E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkillEffect_FireBlastShoot(int32 EntryPoint);
	void OnDestroyed______________0(class AActor* DestroyedActor);
	void OnSystemFinished______________0(class UParticleSystemComponent* PSystem);
	void ReceiveBeginPlay();
	void Shoot();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_FireBlastShoot_C">();
	}
	static class ABP_SkillEffect_FireBlastShoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_FireBlastShoot_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_FireBlastShoot_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_FireBlastShoot_C");
static_assert(sizeof(ABP_SkillEffect_FireBlastShoot_C) == 0x0003E8, "Wrong size on ABP_SkillEffect_FireBlastShoot_C");
static_assert(offsetof(ABP_SkillEffect_FireBlastShoot_C, UberGraphFrame_BP_SkillEffect_FireBlastShoot_C) == 0x0003C0, "Member 'ABP_SkillEffect_FireBlastShoot_C::UberGraphFrame_BP_SkillEffect_FireBlastShoot_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireBlastShoot_C, Niagara) == 0x0003C8, "Member 'ABP_SkillEffect_FireBlastShoot_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireBlastShoot_C, BulletClass) == 0x0003D0, "Member 'ABP_SkillEffect_FireBlastShoot_C::BulletClass' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireBlastShoot_C, ShootIntervalTime) == 0x0003D8, "Member 'ABP_SkillEffect_FireBlastShoot_C::ShootIntervalTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_FireBlastShoot_C, TimeHandle) == 0x0003E0, "Member 'ABP_SkillEffect_FireBlastShoot_C::TimeHandle' has a wrong offset!");

}

