#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_Rug02_Stone.BP_BuildObject_Rug02_Stone_C
// 0x0028 (0x0650 - 0x0628)
class ABP_BuildObject_Rug02_Stone_C final : public APalBuildObject
{
public:
	class UStaticMeshComponent*                   SM_carpeSM_living_room;                            // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_Rug02_Stone_C">();
	}
	static class ABP_BuildObject_Rug02_Stone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_Rug02_Stone_C>();
	}
};
static_assert(alignof(ABP_BuildObject_Rug02_Stone_C) == 0x000008, "Wrong alignment on ABP_BuildObject_Rug02_Stone_C");
static_assert(sizeof(ABP_BuildObject_Rug02_Stone_C) == 0x000650, "Wrong size on ABP_BuildObject_Rug02_Stone_C");
static_assert(offsetof(ABP_BuildObject_Rug02_Stone_C, SM_carpeSM_living_room) == 0x000628, "Member 'ABP_BuildObject_Rug02_Stone_C::SM_carpeSM_living_room' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Rug02_Stone_C, BP_InteractableBox) == 0x000630, "Member 'ABP_BuildObject_Rug02_Stone_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Rug02_Stone_C, BuildWorkableBounds) == 0x000638, "Member 'ABP_BuildObject_Rug02_Stone_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Rug02_Stone_C, CheckOverlapCollision) == 0x000640, "Member 'ABP_BuildObject_Rug02_Stone_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Rug02_Stone_C, DefaultSceneRoot) == 0x000648, "Member 'ABP_BuildObject_Rug02_Stone_C::DefaultSceneRoot' has a wrong offset!");

}

