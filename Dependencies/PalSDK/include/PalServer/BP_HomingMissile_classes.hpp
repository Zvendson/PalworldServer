#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AttackBulletBase_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_HomingMissile.BP_HomingMissile_C
// 0x0038 (0x03A8 - 0x0370)
class ABP_HomingMissile_C : public ABP_AttackBulletBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_HomingMissile_C;                 // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_MissileExhaust;                                 // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Missile;                                        // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExprosed;                                        // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        HomingStartRandimTimeMin;                          // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HpmingAccele;                                      // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HomingMissile(int32 EntryPoint);
	void GetBulletAttackType(EPalAttackType* AttackType);
	void GetExplosionClass(class UClass** ExplosionClass);
	void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void SetAttackTarget(class APalCharacter* Target);
	void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HomingMissile_C">();
	}
	static class ABP_HomingMissile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HomingMissile_C>();
	}
};
static_assert(alignof(ABP_HomingMissile_C) == 0x000008, "Wrong alignment on ABP_HomingMissile_C");
static_assert(sizeof(ABP_HomingMissile_C) == 0x0003A8, "Wrong size on ABP_HomingMissile_C");
static_assert(offsetof(ABP_HomingMissile_C, UberGraphFrame_BP_HomingMissile_C) == 0x000370, "Member 'ABP_HomingMissile_C::UberGraphFrame_BP_HomingMissile_C' has a wrong offset!");
static_assert(offsetof(ABP_HomingMissile_C, Niagara) == 0x000378, "Member 'ABP_HomingMissile_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_HomingMissile_C, SM_MissileExhaust) == 0x000380, "Member 'ABP_HomingMissile_C::SM_MissileExhaust' has a wrong offset!");
static_assert(offsetof(ABP_HomingMissile_C, SM_Missile) == 0x000388, "Member 'ABP_HomingMissile_C::SM_Missile' has a wrong offset!");
static_assert(offsetof(ABP_HomingMissile_C, IsExprosed) == 0x000390, "Member 'ABP_HomingMissile_C::IsExprosed' has a wrong offset!");
static_assert(offsetof(ABP_HomingMissile_C, HomingStartRandimTimeMin) == 0x000398, "Member 'ABP_HomingMissile_C::HomingStartRandimTimeMin' has a wrong offset!");
static_assert(offsetof(ABP_HomingMissile_C, HpmingAccele) == 0x0003A0, "Member 'ABP_HomingMissile_C::HpmingAccele' has a wrong offset!");

}

