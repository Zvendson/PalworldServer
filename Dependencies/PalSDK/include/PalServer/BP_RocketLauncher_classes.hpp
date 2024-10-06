#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AssaultRifleBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_RocketLauncher.BP_RocketLauncher_C
// 0x0028 (0x05E0 - 0x05B8)
class ABP_RocketLauncher_C : public ABP_AssaultRifleBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_RocketLauncher_C;                // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere;                                            // 0x05C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_Ammo_Rocket;                                    // 0x05C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x05D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RocketMask;                                        // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeTransformForRocketReload(const struct FVector& Location, const struct FRotator& Rotation);
	void ChangeTransformForRocketWhenReloadIsDone(const struct FVector& Location, const struct FRotator& Lotation);
	void ExecuteUbergraph_BP_RocketLauncher(int32 EntryPoint);
	void Get_Right_Hand_Location(struct FVector* RightHandLocation);
	void GetAimingBlurAngle(double* Angle);
	void GetBackFireLocation(struct FVector* Location, struct FRotator* Rotation);
	void GetBlurAngle(double* Angle);
	void GetBulletClass(class UClass** NewParam);
	void GetInitializeInterval(double* Time);
	void GetMuzzleEffect(class UNiagaraSystem** NewParam);
	void GetMuzzleLocation(struct FVector* MuzzleLocation);
	void GetMuzzleRotator(struct FRotator* Rotator);
	void IsUseRightHandAttach(bool* IsUse);
	void OnEndShootAnimation(class UAnimMontage* Montage);
	void OnReload(int32 bulletsNum);
	void PlayFireSound();
	void PlayReloadSound();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StopReloadSound();
	void GetShootInterval(double* Time);
	void OnAttachWeapon(class AActor* AttachActor);
	void OnDetachWeapon(class AActor* DetachActor);
	void OnPullTrigger();
	void OnReloadStart();
	void OnShoot();
	void ShootBullet();

	struct FTransform GetLeftHandTransform() const;
	bool IsUseLeftHandAttach() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RocketLauncher_C">();
	}
	static class ABP_RocketLauncher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RocketLauncher_C>();
	}
};
static_assert(alignof(ABP_RocketLauncher_C) == 0x000008, "Wrong alignment on ABP_RocketLauncher_C");
static_assert(sizeof(ABP_RocketLauncher_C) == 0x0005E0, "Wrong size on ABP_RocketLauncher_C");
static_assert(offsetof(ABP_RocketLauncher_C, UberGraphFrame_BP_RocketLauncher_C) == 0x0005B8, "Member 'ABP_RocketLauncher_C::UberGraphFrame_BP_RocketLauncher_C' has a wrong offset!");
static_assert(offsetof(ABP_RocketLauncher_C, Sphere) == 0x0005C0, "Member 'ABP_RocketLauncher_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_RocketLauncher_C, BP_Ammo_Rocket) == 0x0005C8, "Member 'ABP_RocketLauncher_C::BP_Ammo_Rocket' has a wrong offset!");
static_assert(offsetof(ABP_RocketLauncher_C, SkeletalMesh) == 0x0005D0, "Member 'ABP_RocketLauncher_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_RocketLauncher_C, RocketMask) == 0x0005D8, "Member 'ABP_RocketLauncher_C::RocketMask' has a wrong offset!");

}

