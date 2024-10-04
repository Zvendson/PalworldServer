#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "BP_RocketLauncher_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_SphereLauncher.BP_SphereLauncher_C
// 0x00A0 (0x0680 - 0x05E0)
class ABP_SphereLauncher_C final : public ABP_RocketLauncher_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_SphereLauncher_C;                // 0x05E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        ScatteredAngle;                                    // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ItemNameList;                                      // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         BulletClass;                                       // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrentBallIndex;                                  // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_614[0x4];                                      // 0x0614(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, EPalCaptureSphereLevelType> ItemName_LevelTypeMap;                             // 0x0618(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnLaunchPalSphere;                                 // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        Const_BulletSpeed;                                 // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeTransformForRocketReload(const struct FVector& Location, const struct FRotator& Rotation);
	void ChangeTransformForRocketWhenReloadIsDone(const struct FVector& Location, const struct FRotator& Lotation);
	void CustomEvent(int32 bulletsNum);
	void ExecuteUbergraph_BP_SphereLauncher(int32 EntryPoint);
	void GetAimingBlurAngle(double* Angle);
	void GetBlurAngle(double* Angle);
	void GetBulletClass(class UClass** NewParam);
	void GetMuzzleLocation(struct FVector* MuzzleLocation);
	void GetMuzzleRotator(struct FRotator* Rotator);
	void GetMuzzleTransform(struct FTransform* Transform);
	void GetShootInterval(double* Time);
	void GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<struct FTransform>* ShootTransformList);
	void OnLaunchPalSphere__DelegateSignature(class AActor* Bullet);
	void OnShoot();
	void ReceiveBeginPlay();
	void ShootBullet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SphereLauncher_C">();
	}
	static class ABP_SphereLauncher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SphereLauncher_C>();
	}
};
static_assert(alignof(ABP_SphereLauncher_C) == 0x000008, "Wrong alignment on ABP_SphereLauncher_C");
static_assert(sizeof(ABP_SphereLauncher_C) == 0x000680, "Wrong size on ABP_SphereLauncher_C");
static_assert(offsetof(ABP_SphereLauncher_C, UberGraphFrame_BP_SphereLauncher_C) == 0x0005E0, "Member 'ABP_SphereLauncher_C::UberGraphFrame_BP_SphereLauncher_C' has a wrong offset!");
static_assert(offsetof(ABP_SphereLauncher_C, ScatteredAngle) == 0x0005E8, "Member 'ABP_SphereLauncher_C::ScatteredAngle' has a wrong offset!");
static_assert(offsetof(ABP_SphereLauncher_C, ItemNameList) == 0x0005F0, "Member 'ABP_SphereLauncher_C::ItemNameList' has a wrong offset!");
static_assert(offsetof(ABP_SphereLauncher_C, BulletClass) == 0x000600, "Member 'ABP_SphereLauncher_C::BulletClass' has a wrong offset!");
static_assert(offsetof(ABP_SphereLauncher_C, CurrentBallIndex) == 0x000610, "Member 'ABP_SphereLauncher_C::CurrentBallIndex' has a wrong offset!");
static_assert(offsetof(ABP_SphereLauncher_C, ItemName_LevelTypeMap) == 0x000618, "Member 'ABP_SphereLauncher_C::ItemName_LevelTypeMap' has a wrong offset!");
static_assert(offsetof(ABP_SphereLauncher_C, OnLaunchPalSphere) == 0x000668, "Member 'ABP_SphereLauncher_C::OnLaunchPalSphere' has a wrong offset!");
static_assert(offsetof(ABP_SphereLauncher_C, Const_BulletSpeed) == 0x000678, "Member 'ABP_SphereLauncher_C::Const_BulletSpeed' has a wrong offset!");

}

