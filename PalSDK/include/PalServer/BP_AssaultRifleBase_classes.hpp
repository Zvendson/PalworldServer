#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AssaultRifleBase.BP_AssaultRifleBase_C
// 0x0040 (0x05B8 - 0x0578)
class ABP_AssaultRifleBase_C : public APalWeaponBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ShootingHandle;                                    // 0x0588(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAccurate;                                        // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_591[0x7];                                      // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                TargetPosition;                                    // 0x0598(0x0018)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SendShootCompletedNotify;                          // 0x05B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	float CalcAccuracy();
	float CalcDPS();
	float CalcRange();
	void CanShoot(bool* Can);
	void ExecuteUbergraph_BP_AssaultRifleBase(int32 EntryPoint);
	void Get_Right_Hand_Location(struct FVector* RightHandLocation);
	void GetAimingBlurAngle(double* Angle);
	void GetAmmoClass(class UClass** AmmoClass);
	void GetBlurAngle(double* Angle);
	void GetBulletClass(class UClass** NewParam);
	class FName GetEquipSocketName();
	void GetInitializeInterval(double* Time);
	void GetMuzzleEffect(class UNiagaraSystem** NewParam);
	void GetMuzzleEffectParticle(class UParticleSystem** Particle_System);
	void GetMuzzleLocation(struct FVector* MuzzleLocation);
	void GetMuzzleRotator(struct FRotator* Rotator);
	void GetShootInterval(double* Time);
	void GetShotAnimation();
	void GetTargetPosition(struct FVector* TargetPosition_0);
	void GeyEjectionPortTransform(struct FTransform* Transform);
	void Is_UseEjectionPort(bool* IsUse);
	void OnAttachWeapon(class AActor* AttachActor);
	void OnDetachWeapon(class AActor* DetachActor);
	void OnEndAim();
	void OnPullTrigger();
	void OnReleaseTrigger();
	void OnReloadStart();
	void OnShoot();
	void OnStartAim();
	void PlayReloadAnimation();
	void ShootBullet();
	void StopReloadWhenRoll(const class UPalActionBase* Action);

	bool IsUseLeftHandAttach() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AssaultRifleBase_C">();
	}
	static class ABP_AssaultRifleBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AssaultRifleBase_C>();
	}
};
static_assert(alignof(ABP_AssaultRifleBase_C) == 0x000008, "Wrong alignment on ABP_AssaultRifleBase_C");
static_assert(sizeof(ABP_AssaultRifleBase_C) == 0x0005B8, "Wrong size on ABP_AssaultRifleBase_C");
static_assert(offsetof(ABP_AssaultRifleBase_C, UberGraphFrame) == 0x000578, "Member 'ABP_AssaultRifleBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AssaultRifleBase_C, DefaultSceneRoot) == 0x000580, "Member 'ABP_AssaultRifleBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AssaultRifleBase_C, ShootingHandle) == 0x000588, "Member 'ABP_AssaultRifleBase_C::ShootingHandle' has a wrong offset!");
static_assert(offsetof(ABP_AssaultRifleBase_C, IsAccurate) == 0x000590, "Member 'ABP_AssaultRifleBase_C::IsAccurate' has a wrong offset!");
static_assert(offsetof(ABP_AssaultRifleBase_C, TargetPosition) == 0x000598, "Member 'ABP_AssaultRifleBase_C::TargetPosition' has a wrong offset!");
static_assert(offsetof(ABP_AssaultRifleBase_C, SendShootCompletedNotify) == 0x0005B0, "Member 'ABP_AssaultRifleBase_C::SendShootCompletedNotify' has a wrong offset!");

}

