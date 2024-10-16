#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_Glass_Wall.BP_BuildObject_Glass_Wall_C
// 0x0028 (0x0650 - 0x0628)
class ABP_BuildObject_Glass_Wall_C final : public APalBuildObjectBasicBase
{
public:
	class UBoxComponent*                          AffectNavigationBox;                               // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wall_Wood;                                      // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>* OutComponents) const;
	void GetStaticMeshInfos(TArray<struct FPalStaticMeshImposterStaticMeshInfo>* OutStaticMeshInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_Glass_Wall_C">();
	}
	static class ABP_BuildObject_Glass_Wall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_Glass_Wall_C>();
	}
};
static_assert(alignof(ABP_BuildObject_Glass_Wall_C) == 0x000008, "Wrong alignment on ABP_BuildObject_Glass_Wall_C");
static_assert(sizeof(ABP_BuildObject_Glass_Wall_C) == 0x000650, "Wrong size on ABP_BuildObject_Glass_Wall_C");
static_assert(offsetof(ABP_BuildObject_Glass_Wall_C, AffectNavigationBox) == 0x000628, "Member 'ABP_BuildObject_Glass_Wall_C::AffectNavigationBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_Wall_C, BuildWorkableBounds) == 0x000630, "Member 'ABP_BuildObject_Glass_Wall_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_Wall_C, SM_Wall_Wood) == 0x000638, "Member 'ABP_BuildObject_Glass_Wall_C::SM_Wall_Wood' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_Wall_C, Root) == 0x000640, "Member 'ABP_BuildObject_Glass_Wall_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_Wall_C, CheckOverlapCollision) == 0x000648, "Member 'ABP_BuildObject_Glass_Wall_C::CheckOverlapCollision' has a wrong offset!");

}

