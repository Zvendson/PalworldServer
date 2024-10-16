#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BlizzardLanceBase.BP_BlizzardLanceBase_C
// 0x0070 (0x0430 - 0x03C0)
class ABP_BlizzardLanceBase_C final : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BlizzardLanceBase_C;             // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      BlockingCapsule;                                   // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_SkillSign04;                                    // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      MainEffect;                                        // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      OmenEffect;                                        // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      AttackCapsule;                                     // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         ThunderEffect;                                     // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ShootInterval;                                     // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CollisitionEnableTime;                             // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Decal_Material;                                    // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DecalLocationOffset;                               // 0x0410(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCameraShakeBase>           CameraShakeClass;                                  // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
	void ChangeCollisionProfile();
	void ExecuteUbergraph_BP_BlizzardLanceBase(int32 EntryPoint);
	void OnHitDelegate_01(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void ReceiveBeginPlay();
	void ShootThunder();
	void _________________________0();
	void _________________________1();
	void _________________________2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BlizzardLanceBase_C">();
	}
	static class ABP_BlizzardLanceBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BlizzardLanceBase_C>();
	}
};
static_assert(alignof(ABP_BlizzardLanceBase_C) == 0x000008, "Wrong alignment on ABP_BlizzardLanceBase_C");
static_assert(sizeof(ABP_BlizzardLanceBase_C) == 0x000430, "Wrong size on ABP_BlizzardLanceBase_C");
static_assert(offsetof(ABP_BlizzardLanceBase_C, UberGraphFrame_BP_BlizzardLanceBase_C) == 0x0003C0, "Member 'ABP_BlizzardLanceBase_C::UberGraphFrame_BP_BlizzardLanceBase_C' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, BlockingCapsule) == 0x0003C8, "Member 'ABP_BlizzardLanceBase_C::BlockingCapsule' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, NS_SkillSign04) == 0x0003D0, "Member 'ABP_BlizzardLanceBase_C::NS_SkillSign04' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, MainEffect) == 0x0003D8, "Member 'ABP_BlizzardLanceBase_C::MainEffect' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, OmenEffect) == 0x0003E0, "Member 'ABP_BlizzardLanceBase_C::OmenEffect' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, AttackCapsule) == 0x0003E8, "Member 'ABP_BlizzardLanceBase_C::AttackCapsule' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, ThunderEffect) == 0x0003F0, "Member 'ABP_BlizzardLanceBase_C::ThunderEffect' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, ShootInterval) == 0x0003F8, "Member 'ABP_BlizzardLanceBase_C::ShootInterval' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, CollisitionEnableTime) == 0x000400, "Member 'ABP_BlizzardLanceBase_C::CollisitionEnableTime' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, Decal_Material) == 0x000408, "Member 'ABP_BlizzardLanceBase_C::Decal_Material' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, DecalLocationOffset) == 0x000410, "Member 'ABP_BlizzardLanceBase_C::DecalLocationOffset' has a wrong offset!");
static_assert(offsetof(ABP_BlizzardLanceBase_C, CameraShakeClass) == 0x000428, "Member 'ABP_BlizzardLanceBase_C::CameraShakeClass' has a wrong offset!");

}

