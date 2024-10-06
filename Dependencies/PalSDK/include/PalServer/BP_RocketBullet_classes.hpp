#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AttackBulletBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_RocketBullet.BP_RocketBullet_C
// 0x0028 (0x0398 - 0x0370)
class ABP_RocketBullet_C : public ABP_AttackBulletBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_RocketBullet_C;                  // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalHitFilter*                          HitFilter;                                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExploded;                                        // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_RocketBullet(int32 EntryPoint);
	void GetExplosionClass(class UClass** ExplosionClass);
	void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RocketBullet_C">();
	}
	static class ABP_RocketBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RocketBullet_C>();
	}
};
static_assert(alignof(ABP_RocketBullet_C) == 0x000008, "Wrong alignment on ABP_RocketBullet_C");
static_assert(sizeof(ABP_RocketBullet_C) == 0x000398, "Wrong size on ABP_RocketBullet_C");
static_assert(offsetof(ABP_RocketBullet_C, UberGraphFrame_BP_RocketBullet_C) == 0x000370, "Member 'ABP_RocketBullet_C::UberGraphFrame_BP_RocketBullet_C' has a wrong offset!");
static_assert(offsetof(ABP_RocketBullet_C, Niagara) == 0x000378, "Member 'ABP_RocketBullet_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_RocketBullet_C, StaticMesh) == 0x000380, "Member 'ABP_RocketBullet_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_RocketBullet_C, HitFilter) == 0x000388, "Member 'ABP_RocketBullet_C::HitFilter' has a wrong offset!");
static_assert(offsetof(ABP_RocketBullet_C, IsExploded) == 0x000390, "Member 'ABP_RocketBullet_C::IsExploded' has a wrong offset!");

}

