#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ThunderStrikeBase.BP_ThunderStrikeBase_C
// 0x0070 (0x0430 - 0x03C0)
class ABP_ThunderStrikeBase_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_ThunderStrikeBase_C;             // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Main;                                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Omen;                                              // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ShootInterval;                                     // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CollisitionEnableTime;                             // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Decal_Material;                                    // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DecalLocationOffset;                               // 0x0400(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ThunderScale;                                      // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCameraShakeBase>           CameraShakeClass;                                  // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         ThunderStrikeDelay;                                // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateOmen();
	void ActivateThunder();
	void BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
	void DisableCollision();
	void ExecuteUbergraph_BP_ThunderStrikeBase(int32 EntryPoint);
	void OnHitDelegate_01(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, const struct FVector& HitLocation, int32 HitCount);
	void ReceiveBeginPlay();
	void SetThuderSize();
	void ShootThunder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ThunderStrikeBase_C">();
	}
	static class ABP_ThunderStrikeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ThunderStrikeBase_C>();
	}
};
static_assert(alignof(ABP_ThunderStrikeBase_C) == 0x000008, "Wrong alignment on ABP_ThunderStrikeBase_C");
static_assert(sizeof(ABP_ThunderStrikeBase_C) == 0x000430, "Wrong size on ABP_ThunderStrikeBase_C");
static_assert(offsetof(ABP_ThunderStrikeBase_C, UberGraphFrame_BP_ThunderStrikeBase_C) == 0x0003C0, "Member 'ABP_ThunderStrikeBase_C::UberGraphFrame_BP_ThunderStrikeBase_C' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, Sphere) == 0x0003C8, "Member 'ABP_ThunderStrikeBase_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, Main) == 0x0003D0, "Member 'ABP_ThunderStrikeBase_C::Main' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, Omen) == 0x0003D8, "Member 'ABP_ThunderStrikeBase_C::Omen' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, Capsule) == 0x0003E0, "Member 'ABP_ThunderStrikeBase_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, ShootInterval) == 0x0003E8, "Member 'ABP_ThunderStrikeBase_C::ShootInterval' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, CollisitionEnableTime) == 0x0003F0, "Member 'ABP_ThunderStrikeBase_C::CollisitionEnableTime' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, Decal_Material) == 0x0003F8, "Member 'ABP_ThunderStrikeBase_C::Decal_Material' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, DecalLocationOffset) == 0x000400, "Member 'ABP_ThunderStrikeBase_C::DecalLocationOffset' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, ThunderScale) == 0x000418, "Member 'ABP_ThunderStrikeBase_C::ThunderScale' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, CameraShakeClass) == 0x000420, "Member 'ABP_ThunderStrikeBase_C::CameraShakeClass' has a wrong offset!");
static_assert(offsetof(ABP_ThunderStrikeBase_C, ThunderStrikeDelay) == 0x000428, "Member 'ABP_ThunderStrikeBase_C::ThunderStrikeDelay' has a wrong offset!");

}

