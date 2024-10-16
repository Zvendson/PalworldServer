#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AkAudio_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalOilrigController.BP_PalOilrigController_C
// 0x0020 (0x0310 - 0x02F0)
class ABP_PalOilrigController_C : public APalOilrigController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Debug_Mesh;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_OilrigMachineSpawnerComponent_C*    BP_OilrigMachineSpawnerComponent;                  // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PalOilrigController(int32 EntryPoint);
	void OnStartCombatToAll_BP();
	void ReceiveTick(float DeltaSeconds);
	void SoundStop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalOilrigController_C">();
	}
	static class ABP_PalOilrigController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalOilrigController_C>();
	}
};
static_assert(alignof(ABP_PalOilrigController_C) == 0x000008, "Wrong alignment on ABP_PalOilrigController_C");
static_assert(sizeof(ABP_PalOilrigController_C) == 0x000310, "Wrong size on ABP_PalOilrigController_C");
static_assert(offsetof(ABP_PalOilrigController_C, UberGraphFrame) == 0x0002F0, "Member 'ABP_PalOilrigController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalOilrigController_C, Debug_Mesh) == 0x0002F8, "Member 'ABP_PalOilrigController_C::Debug_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_PalOilrigController_C, BP_OilrigMachineSpawnerComponent) == 0x000300, "Member 'ABP_PalOilrigController_C::BP_OilrigMachineSpawnerComponent' has a wrong offset!");
static_assert(offsetof(ABP_PalOilrigController_C, DefaultSceneRoot) == 0x000308, "Member 'ABP_PalOilrigController_C::DefaultSceneRoot' has a wrong offset!");

}

