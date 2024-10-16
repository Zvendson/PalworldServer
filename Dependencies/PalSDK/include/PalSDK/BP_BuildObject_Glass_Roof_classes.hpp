#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_Glass_Roof.BP_BuildObject_Glass_Roof_C
// 0x0018 (0x0640 - 0x0628)
class ABP_BuildObject_Glass_Roof_C final : public APalBuildObjectBasicBase
{
public:
	class UStaticMeshComponent*                   SM_Roof_Wood;                                      // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GetStaticMeshComponents(TArray<class UStaticMeshComponent*>* OutComponents) const;
	void GetStaticMeshInfos(TArray<struct FPalStaticMeshImposterStaticMeshInfo>* OutStaticMeshInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_Glass_Roof_C">();
	}
	static class ABP_BuildObject_Glass_Roof_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_Glass_Roof_C>();
	}
};
static_assert(alignof(ABP_BuildObject_Glass_Roof_C) == 0x000008, "Wrong alignment on ABP_BuildObject_Glass_Roof_C");
static_assert(sizeof(ABP_BuildObject_Glass_Roof_C) == 0x000640, "Wrong size on ABP_BuildObject_Glass_Roof_C");
static_assert(offsetof(ABP_BuildObject_Glass_Roof_C, SM_Roof_Wood) == 0x000628, "Member 'ABP_BuildObject_Glass_Roof_C::SM_Roof_Wood' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_Roof_C, CheckOverlapCollision) == 0x000630, "Member 'ABP_BuildObject_Glass_Roof_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Glass_Roof_C, Root) == 0x000638, "Member 'ABP_BuildObject_Glass_Roof_C::Root' has a wrong offset!");

}

