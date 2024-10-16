#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Ammo_Rocket.BP_Ammo_Rocket_C
// 0x0080 (0x0310 - 0x0290)
class ABP_Ammo_Rocket_C final : public AActor
{
public:
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A8[0x8];                                      // 0x02A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Ammo_Reloading_Transform;                          // 0x02B0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetTranformForReload(struct FTransform* AmmoReloadingTransform);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Ammo_Rocket_C">();
	}
	static class ABP_Ammo_Rocket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Ammo_Rocket_C>();
	}
};
static_assert(alignof(ABP_Ammo_Rocket_C) == 0x000010, "Wrong alignment on ABP_Ammo_Rocket_C");
static_assert(sizeof(ABP_Ammo_Rocket_C) == 0x000310, "Wrong size on ABP_Ammo_Rocket_C");
static_assert(offsetof(ABP_Ammo_Rocket_C, SkeletalMesh) == 0x000290, "Member 'ABP_Ammo_Rocket_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_Ammo_Rocket_C, StaticMesh) == 0x000298, "Member 'ABP_Ammo_Rocket_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Ammo_Rocket_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_Ammo_Rocket_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Ammo_Rocket_C, Ammo_Reloading_Transform) == 0x0002B0, "Member 'ABP_Ammo_Rocket_C::Ammo_Reloading_Transform' has a wrong offset!");

}

