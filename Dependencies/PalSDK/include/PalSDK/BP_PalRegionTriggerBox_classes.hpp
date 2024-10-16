#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalRegionTriggerBox.BP_PalRegionTriggerBox_C
// 0x0018 (0x02B0 - 0x0298)
class ABP_PalRegionTriggerBox_C final : public APalRegionAreaTriggerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalRegionTriggerBox(int32 EntryPoint);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRegionTriggerBox_C">();
	}
	static class ABP_PalRegionTriggerBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalRegionTriggerBox_C>();
	}
};
static_assert(alignof(ABP_PalRegionTriggerBox_C) == 0x000008, "Wrong alignment on ABP_PalRegionTriggerBox_C");
static_assert(sizeof(ABP_PalRegionTriggerBox_C) == 0x0002B0, "Wrong size on ABP_PalRegionTriggerBox_C");
static_assert(offsetof(ABP_PalRegionTriggerBox_C, UberGraphFrame) == 0x000298, "Member 'ABP_PalRegionTriggerBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalRegionTriggerBox_C, Box) == 0x0002A0, "Member 'ABP_PalRegionTriggerBox_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_PalRegionTriggerBox_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_PalRegionTriggerBox_C::DefaultSceneRoot' has a wrong offset!");

}

