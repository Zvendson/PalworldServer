#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "BP_RocketLauncher_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_HomingSphereLauncher.BP_HomingSphereLauncher_C
// 0x0078 (0x0658 - 0x05E0)
class ABP_HomingSphereLauncher_C final : public ABP_RocketLauncher_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_HomingSphereLauncher_C;          // 0x05E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                         TargetList;                                        // 0x05E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class FName, EPalCaptureSphereLevelType> ItemName_LevelTypeMap;                             // 0x05F8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnLaunchPalSphere;                                 // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ChangeTransformForRocketReload(const struct FVector& Location, const struct FRotator& Rotation);
	void ChangeTransformForRocketWhenReloadIsDone(const struct FVector& Location, const struct FRotator& Lotation);
	void ClearAttackTarget();
	void CustomEvent(int32 bulletsNum);
	void ExecuteUbergraph_BP_HomingSphereLauncher(int32 EntryPoint);
	void GetAimingBlurAngle(double* Angle);
	void GetAttackTarget(class APalCharacter** Target);
	void GetBlurAngle(double* Angle);
	void GetBulletClass(class UClass** NewParam);
	void GetMuzzleLocation(struct FVector* MuzzleLocation);
	void GetMuzzleRotator(struct FRotator* Rotator);
	void GetMuzzleTransform(struct FTransform* Transform);
	void GetShootInterval(double* Time);
	void GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<struct FTransform>* ShootTransformList);
	void OnLaunchPalSphere__DelegateSignature(class AActor* Bullet);
	void OnReleaseTrigger();
	void OnShoot();
	void ReceiveBeginPlay();
	void ShootBullet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HomingSphereLauncher_C">();
	}
	static class ABP_HomingSphereLauncher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HomingSphereLauncher_C>();
	}
};
static_assert(alignof(ABP_HomingSphereLauncher_C) == 0x000008, "Wrong alignment on ABP_HomingSphereLauncher_C");
static_assert(sizeof(ABP_HomingSphereLauncher_C) == 0x000658, "Wrong size on ABP_HomingSphereLauncher_C");
static_assert(offsetof(ABP_HomingSphereLauncher_C, UberGraphFrame_BP_HomingSphereLauncher_C) == 0x0005E0, "Member 'ABP_HomingSphereLauncher_C::UberGraphFrame_BP_HomingSphereLauncher_C' has a wrong offset!");
static_assert(offsetof(ABP_HomingSphereLauncher_C, TargetList) == 0x0005E8, "Member 'ABP_HomingSphereLauncher_C::TargetList' has a wrong offset!");
static_assert(offsetof(ABP_HomingSphereLauncher_C, ItemName_LevelTypeMap) == 0x0005F8, "Member 'ABP_HomingSphereLauncher_C::ItemName_LevelTypeMap' has a wrong offset!");
static_assert(offsetof(ABP_HomingSphereLauncher_C, OnLaunchPalSphere) == 0x000648, "Member 'ABP_HomingSphereLauncher_C::OnLaunchPalSphere' has a wrong offset!");

}

