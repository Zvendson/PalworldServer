#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_OilRigCannonBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_OilRigCannon_LaserTower.BP_OilRigCannon_LaserTower_C
// 0x0048 (0x0378 - 0x0330)
class ABP_OilRigCannon_LaserTower_C final : public ABP_OilRigCannonBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_OilRigCannon_LaserTower_C;       // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_CommonSkill_HyperBeam;                          // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_CommonSkill_HyperBeam_charge;                   // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh_AATowerHead;                                  // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh_AATowerBody;                                  // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle_LayCast;                               // 0x0368(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         Const_LaserRadius;                                 // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDebugView;                                       // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetActiveHeadMesh(bool IsActive);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void PullTrigger_BP();
	void OnDestroyedWeapon_ForBP();
	void ExecuteUbergraph_BP_OilRigCannon_LaserTower(int32 EntryPoint);
	void Damage_Ray_Cast();
	void ChangeDefaultVisual_BP();
	void ChangeDefaultMesh();
	void BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_OilRigCannon_AATower_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

	class USceneComponent* GetYawMesh() const;
	class USceneComponent* GetPitchMesh() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OilRigCannon_LaserTower_C">();
	}
	static class ABP_OilRigCannon_LaserTower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OilRigCannon_LaserTower_C>();
	}
};
static_assert(alignof(ABP_OilRigCannon_LaserTower_C) == 0x000008, "Wrong alignment on ABP_OilRigCannon_LaserTower_C");
static_assert(sizeof(ABP_OilRigCannon_LaserTower_C) == 0x000378, "Wrong size on ABP_OilRigCannon_LaserTower_C");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, UberGraphFrame_BP_OilRigCannon_LaserTower_C) == 0x000330, "Member 'ABP_OilRigCannon_LaserTower_C::UberGraphFrame_BP_OilRigCannon_LaserTower_C' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, NS_CommonSkill_HyperBeam) == 0x000338, "Member 'ABP_OilRigCannon_LaserTower_C::NS_CommonSkill_HyperBeam' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, NS_CommonSkill_HyperBeam_charge) == 0x000340, "Member 'ABP_OilRigCannon_LaserTower_C::NS_CommonSkill_HyperBeam_charge' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, Cube) == 0x000348, "Member 'ABP_OilRigCannon_LaserTower_C::Cube' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, Sphere) == 0x000350, "Member 'ABP_OilRigCannon_LaserTower_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, Mesh_AATowerHead) == 0x000358, "Member 'ABP_OilRigCannon_LaserTower_C::Mesh_AATowerHead' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, Mesh_AATowerBody) == 0x000360, "Member 'ABP_OilRigCannon_LaserTower_C::Mesh_AATowerBody' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, TimerHandle_LayCast) == 0x000368, "Member 'ABP_OilRigCannon_LaserTower_C::TimerHandle_LayCast' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, Const_LaserRadius) == 0x000370, "Member 'ABP_OilRigCannon_LaserTower_C::Const_LaserRadius' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannon_LaserTower_C, IsDebugView) == 0x000374, "Member 'ABP_OilRigCannon_LaserTower_C::IsDebugView' has a wrong offset!");

}

