#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "Pal_structs.hpp"
#include "BP_ThrowCaptureObjectBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalSphere_ThrowObject.BP_PalSphere_ThrowObject_C
// 0x0080 (0x0430 - 0x03B0)
class ABP_PalSphere_ThrowObject_C : public ABP_ThrowCaptureObjectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PalSphere_ThrowObject_C;         // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Trail;                                             // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Weapon_PalSphere_001;                           // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          TargetPal;                                         // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PreLocation;                                       // 0x03D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBounce;                                          // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1[0x7];                                      // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ThrowRotator;                                      // 0x03F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UNiagaraSystem*                         SneakEffect;                                       // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          TempCaptureAble;                                   // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x3];                                      // 0x0419(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalDataTableRowName_SoundID           SoundId_Bounce;                                    // 0x041C(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_SoundID           SoundId_HitPal;                                    // 0x0424(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLocalControlled;                                 // 0x042C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInServer;                                        // 0x042D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSneakHit;                                        // 0x042E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void Capture_Start_Process_After_Delay(class ABP_PalCaptureBodyBase_C* Body, class APalCharacter* TargetActor, bool SneakAttack);
	void CaptureStartProcess();
	void DelayCaptureBodyStart(class ABP_PalCaptureBodyBase_C* BodyActor, class APalCharacter* Target, double Delay, bool SneakAttack);
	void ExecuteUbergraph_BP_PalSphere_ThrowObject(int32 EntryPoint);
	void GetBodyClass(class UClass** bodyClass);
	void GetMaxBoundCount(int32* Count);
	void IsCaptureablePal(class AActor* TargetActor, bool* Captureable, class APalCharacter** TargetPalCharacter);
	void IsCountDestroy(bool* Param_IsDestroy_0);
	void OnSpawnJudgeBall(const struct FGuid& SpawnGUID, class AActor* SpawnActor);
	void Play_Sound_Bounce(const struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetProjectileMovement(class AActor* HitActor);
	void UpdateRotator(double DeltaTime);
	void UserConstructionScript();

	void GetOwnerCharacterOrRidingCharacter(class AActor** RidingCharacter) const;
	void IsOwnerLocalControlActor(bool* IsLocalControlActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSphere_ThrowObject_C">();
	}
	static class ABP_PalSphere_ThrowObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalSphere_ThrowObject_C>();
	}
};
static_assert(alignof(ABP_PalSphere_ThrowObject_C) == 0x000008, "Wrong alignment on ABP_PalSphere_ThrowObject_C");
static_assert(sizeof(ABP_PalSphere_ThrowObject_C) == 0x000430, "Wrong size on ABP_PalSphere_ThrowObject_C");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, UberGraphFrame_BP_PalSphere_ThrowObject_C) == 0x0003B0, "Member 'ABP_PalSphere_ThrowObject_C::UberGraphFrame_BP_PalSphere_ThrowObject_C' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, Trail) == 0x0003B8, "Member 'ABP_PalSphere_ThrowObject_C::Trail' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, SK_Weapon_PalSphere_001) == 0x0003C0, "Member 'ABP_PalSphere_ThrowObject_C::SK_Weapon_PalSphere_001' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, Sphere) == 0x0003C8, "Member 'ABP_PalSphere_ThrowObject_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, TargetPal) == 0x0003D0, "Member 'ABP_PalSphere_ThrowObject_C::TargetPal' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, PreLocation) == 0x0003D8, "Member 'ABP_PalSphere_ThrowObject_C::PreLocation' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, IsBounce) == 0x0003F0, "Member 'ABP_PalSphere_ThrowObject_C::IsBounce' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, ThrowRotator) == 0x0003F8, "Member 'ABP_PalSphere_ThrowObject_C::ThrowRotator' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, SneakEffect) == 0x000410, "Member 'ABP_PalSphere_ThrowObject_C::SneakEffect' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, TempCaptureAble) == 0x000418, "Member 'ABP_PalSphere_ThrowObject_C::TempCaptureAble' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, SoundId_Bounce) == 0x00041C, "Member 'ABP_PalSphere_ThrowObject_C::SoundId_Bounce' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, SoundId_HitPal) == 0x000424, "Member 'ABP_PalSphere_ThrowObject_C::SoundId_HitPal' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, IsLocalControlled) == 0x00042C, "Member 'ABP_PalSphere_ThrowObject_C::IsLocalControlled' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, IsInServer) == 0x00042D, "Member 'ABP_PalSphere_ThrowObject_C::IsInServer' has a wrong offset!");
static_assert(offsetof(ABP_PalSphere_ThrowObject_C, IsSneakHit) == 0x00042E, "Member 'ABP_PalSphere_ThrowObject_C::IsSneakHit' has a wrong offset!");

}

