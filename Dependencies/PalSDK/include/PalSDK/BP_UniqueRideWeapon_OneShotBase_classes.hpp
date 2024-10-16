#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_UniqueRideWeapon_OneShotBase.BP_UniqueRideWeapon_OneShotBase_C
// 0x0018 (0x05B0 - 0x0598)
class ABP_UniqueRideWeapon_OneShotBase_C : public APalUniqueRideWeaponBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          ShootAble;                                         // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ShootBulletBP();
	void OnPullTrigger();
	void GetShootInterval(double* Time);
	void ExecuteUbergraph_BP_UniqueRideWeapon_OneShotBase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UniqueRideWeapon_OneShotBase_C">();
	}
	static class ABP_UniqueRideWeapon_OneShotBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_UniqueRideWeapon_OneShotBase_C>();
	}
};
static_assert(alignof(ABP_UniqueRideWeapon_OneShotBase_C) == 0x000008, "Wrong alignment on ABP_UniqueRideWeapon_OneShotBase_C");
static_assert(sizeof(ABP_UniqueRideWeapon_OneShotBase_C) == 0x0005B0, "Wrong size on ABP_UniqueRideWeapon_OneShotBase_C");
static_assert(offsetof(ABP_UniqueRideWeapon_OneShotBase_C, UberGraphFrame) == 0x000598, "Member 'ABP_UniqueRideWeapon_OneShotBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_UniqueRideWeapon_OneShotBase_C, DefaultSceneRoot) == 0x0005A0, "Member 'ABP_UniqueRideWeapon_OneShotBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_UniqueRideWeapon_OneShotBase_C, ShootAble) == 0x0005A8, "Member 'ABP_UniqueRideWeapon_OneShotBase_C::ShootAble' has a wrong offset!");

}

