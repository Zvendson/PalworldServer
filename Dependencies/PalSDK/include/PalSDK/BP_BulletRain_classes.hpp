#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_SkillEffectBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BulletRain.BP_BulletRain_C
// 0x0050 (0x0410 - 0x03C0)
class ABP_BulletRain_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BulletRain_C;                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 BulletClass;                                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        ShootTimeInterval;                                 // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShootDistanceInterval;                             // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShootNum;                                          // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SplitNum;                                          // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShootTimer;                                        // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShootCounter;                                      // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RotatorLookingAtTarget;                            // 0x03F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_BulletRain(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SpawnBullet(int32 Count);
	void UpdateThunderSpawn(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BulletRain_C">();
	}
	static class ABP_BulletRain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BulletRain_C>();
	}
};
static_assert(alignof(ABP_BulletRain_C) == 0x000008, "Wrong alignment on ABP_BulletRain_C");
static_assert(sizeof(ABP_BulletRain_C) == 0x000410, "Wrong size on ABP_BulletRain_C");
static_assert(offsetof(ABP_BulletRain_C, UberGraphFrame_BP_BulletRain_C) == 0x0003C0, "Member 'ABP_BulletRain_C::UberGraphFrame_BP_BulletRain_C' has a wrong offset!");
static_assert(offsetof(ABP_BulletRain_C, BulletClass) == 0x0003C8, "Member 'ABP_BulletRain_C::BulletClass' has a wrong offset!");
static_assert(offsetof(ABP_BulletRain_C, ShootTimeInterval) == 0x0003D0, "Member 'ABP_BulletRain_C::ShootTimeInterval' has a wrong offset!");
static_assert(offsetof(ABP_BulletRain_C, ShootDistanceInterval) == 0x0003D8, "Member 'ABP_BulletRain_C::ShootDistanceInterval' has a wrong offset!");
static_assert(offsetof(ABP_BulletRain_C, ShootNum) == 0x0003E0, "Member 'ABP_BulletRain_C::ShootNum' has a wrong offset!");
static_assert(offsetof(ABP_BulletRain_C, SplitNum) == 0x0003E4, "Member 'ABP_BulletRain_C::SplitNum' has a wrong offset!");
static_assert(offsetof(ABP_BulletRain_C, ShootTimer) == 0x0003E8, "Member 'ABP_BulletRain_C::ShootTimer' has a wrong offset!");
static_assert(offsetof(ABP_BulletRain_C, ShootCounter) == 0x0003F0, "Member 'ABP_BulletRain_C::ShootCounter' has a wrong offset!");
static_assert(offsetof(ABP_BulletRain_C, RotatorLookingAtTarget) == 0x0003F8, "Member 'ABP_BulletRain_C::RotatorLookingAtTarget' has a wrong offset!");

}

