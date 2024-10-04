#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_GrapplingGun_Bullet.BP_GrapplingGun_Bullet_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_GrapplingGun_Bullet_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Anchor;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        Cable;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_GrapplingGun_Bullet(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UpdateCable(const struct FVector& Start, const struct FVector& End, bool IsHit, bool IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GrapplingGun_Bullet_C">();
	}
	static class ABP_GrapplingGun_Bullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_GrapplingGun_Bullet_C>();
	}
};
static_assert(alignof(ABP_GrapplingGun_Bullet_C) == 0x000008, "Wrong alignment on ABP_GrapplingGun_Bullet_C");
static_assert(sizeof(ABP_GrapplingGun_Bullet_C) == 0x0002B0, "Wrong size on ABP_GrapplingGun_Bullet_C");
static_assert(offsetof(ABP_GrapplingGun_Bullet_C, UberGraphFrame) == 0x000290, "Member 'ABP_GrapplingGun_Bullet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_Bullet_C, Anchor) == 0x000298, "Member 'ABP_GrapplingGun_Bullet_C::Anchor' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_Bullet_C, Cable) == 0x0002A0, "Member 'ABP_GrapplingGun_Bullet_C::Cable' has a wrong offset!");
static_assert(offsetof(ABP_GrapplingGun_Bullet_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_GrapplingGun_Bullet_C::DefaultSceneRoot' has a wrong offset!");

}

