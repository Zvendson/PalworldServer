#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MapObject_PickupItem_Base.BP_MapObject_PickupItem_Base_C
// 0x0018 (0x0418 - 0x0400)
class ABP_MapObject_PickupItem_Base_C : public APalMapLevelObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MapObject_PickupItem_Base(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_PickupItem_Base_C">();
	}
	static class ABP_MapObject_PickupItem_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_PickupItem_Base_C>();
	}
};
static_assert(alignof(ABP_MapObject_PickupItem_Base_C) == 0x000008, "Wrong alignment on ABP_MapObject_PickupItem_Base_C");
static_assert(sizeof(ABP_MapObject_PickupItem_Base_C) == 0x000418, "Wrong size on ABP_MapObject_PickupItem_Base_C");
static_assert(offsetof(ABP_MapObject_PickupItem_Base_C, UberGraphFrame) == 0x000400, "Member 'ABP_MapObject_PickupItem_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_Base_C, BP_InteractableSphere) == 0x000408, "Member 'ABP_MapObject_PickupItem_Base_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_Base_C, Sphere) == 0x000410, "Member 'ABP_MapObject_PickupItem_Base_C::Sphere' has a wrong offset!");

}

