#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C
// 0x0018 (0x02B0 - 0x0298)
class ABP_PalBiomeTriggerBox_C final : public APalBiomeAreaTriggerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalBiomeEffectController_C*         BP_PalBiomeEffectController;                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalBiomeTriggerBox(int32 EntryPoint);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBiomeTriggerBox_C">();
	}
	static class ABP_PalBiomeTriggerBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalBiomeTriggerBox_C>();
	}
};
static_assert(alignof(ABP_PalBiomeTriggerBox_C) == 0x000008, "Wrong alignment on ABP_PalBiomeTriggerBox_C");
static_assert(sizeof(ABP_PalBiomeTriggerBox_C) == 0x0002B0, "Wrong size on ABP_PalBiomeTriggerBox_C");
static_assert(offsetof(ABP_PalBiomeTriggerBox_C, UberGraphFrame) == 0x000298, "Member 'ABP_PalBiomeTriggerBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalBiomeTriggerBox_C, BP_PalBiomeEffectController) == 0x0002A0, "Member 'ABP_PalBiomeTriggerBox_C::BP_PalBiomeEffectController' has a wrong offset!");
static_assert(offsetof(ABP_PalBiomeTriggerBox_C, Box) == 0x0002A8, "Member 'ABP_PalBiomeTriggerBox_C::Box' has a wrong offset!");

}

