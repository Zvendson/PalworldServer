#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C
// 0x0038 (0x03F8 - 0x03C0)
class ABP_SkillEffect_WindCutterShot_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SkillEffect_WindCutterShot_C;    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_WindCutterShoot;                                // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ShootIntervalTime;                                 // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimeHandle;                                        // 0x03D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BulletClass;                                       // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSpawnBulletDelegate;                             // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BP_SkillEffect_WindCutterShot(int32 EntryPoint);
	void OnDestroyed______________0(class AActor* DestroyedActor);
	void OnSpawnBulletDelegate__DelegateSignature(class AActor* Bullet);
	void OnSystemFinished(class UNiagaraComponent* PSystem);
	void ReceiveBeginPlay();
	void SetTargetLocation(const struct FVector& TargetLocation);
	void Shoot();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_WindCutterShot_C">();
	}
	static class ABP_SkillEffect_WindCutterShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_WindCutterShot_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_WindCutterShot_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_WindCutterShot_C");
static_assert(sizeof(ABP_SkillEffect_WindCutterShot_C) == 0x0003F8, "Wrong size on ABP_SkillEffect_WindCutterShot_C");
static_assert(offsetof(ABP_SkillEffect_WindCutterShot_C, UberGraphFrame_BP_SkillEffect_WindCutterShot_C) == 0x0003C0, "Member 'ABP_SkillEffect_WindCutterShot_C::UberGraphFrame_BP_SkillEffect_WindCutterShot_C' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_WindCutterShot_C, NS_WindCutterShoot) == 0x0003C8, "Member 'ABP_SkillEffect_WindCutterShot_C::NS_WindCutterShoot' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_WindCutterShot_C, ShootIntervalTime) == 0x0003D0, "Member 'ABP_SkillEffect_WindCutterShot_C::ShootIntervalTime' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_WindCutterShot_C, TimeHandle) == 0x0003D8, "Member 'ABP_SkillEffect_WindCutterShot_C::TimeHandle' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_WindCutterShot_C, BulletClass) == 0x0003E0, "Member 'ABP_SkillEffect_WindCutterShot_C::BulletClass' has a wrong offset!");
static_assert(offsetof(ABP_SkillEffect_WindCutterShot_C, OnSpawnBulletDelegate) == 0x0003E8, "Member 'ABP_SkillEffect_WindCutterShot_C::OnSpawnBulletDelegate' has a wrong offset!");

}

