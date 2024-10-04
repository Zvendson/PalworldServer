#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MeleeWeaponBase.BP_MeleeWeaponBase_C
// 0x0010 (0x0588 - 0x0578)
class ABP_MeleeWeaponBase_C : public APalWeaponBase
{
public:
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class FName GetEquipSocketName();

	struct FTransform GetLeftHandTransform() const;
	bool IsUseLeftHandAttach() const;
	bool SeekLeftHandOpen() const;
	bool SeekRightHandOpen() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MeleeWeaponBase_C">();
	}
	static class ABP_MeleeWeaponBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MeleeWeaponBase_C>();
	}
};
static_assert(alignof(ABP_MeleeWeaponBase_C) == 0x000008, "Wrong alignment on ABP_MeleeWeaponBase_C");
static_assert(sizeof(ABP_MeleeWeaponBase_C) == 0x000588, "Wrong size on ABP_MeleeWeaponBase_C");
static_assert(offsetof(ABP_MeleeWeaponBase_C, SkeletalMesh) == 0x000578, "Member 'ABP_MeleeWeaponBase_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_MeleeWeaponBase_C, DefaultSceneRoot) == 0x000580, "Member 'ABP_MeleeWeaponBase_C::DefaultSceneRoot' has a wrong offset!");

}

