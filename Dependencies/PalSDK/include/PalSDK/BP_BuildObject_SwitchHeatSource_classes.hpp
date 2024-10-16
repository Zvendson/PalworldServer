#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C
// 0x0018 (0x0640 - 0x0628)
class ABP_BuildObject_SwitchHeatSource_C : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_HeatSourceSphereComponent_C*        BP_HeatSourceComponent;                            // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void ExecuteUbergraph_BP_BuildObject_SwitchHeatSource(int32 EntryPoint);
	void OnAvailableConcreteModel(class UPalMapObjectConcreteModelBase* Model);
	void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
	void OnUpdateSwitch(class UPalMapObjectSwitchModule* Module);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_SwitchHeatSource_C">();
	}
	static class ABP_BuildObject_SwitchHeatSource_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_SwitchHeatSource_C>();
	}
};
static_assert(alignof(ABP_BuildObject_SwitchHeatSource_C) == 0x000008, "Wrong alignment on ABP_BuildObject_SwitchHeatSource_C");
static_assert(sizeof(ABP_BuildObject_SwitchHeatSource_C) == 0x000640, "Wrong size on ABP_BuildObject_SwitchHeatSource_C");
static_assert(offsetof(ABP_BuildObject_SwitchHeatSource_C, UberGraphFrame) == 0x000628, "Member 'ABP_BuildObject_SwitchHeatSource_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SwitchHeatSource_C, BP_HeatSourceComponent) == 0x000630, "Member 'ABP_BuildObject_SwitchHeatSource_C::BP_HeatSourceComponent' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SwitchHeatSource_C, DefaultSceneRoot) == 0x000638, "Member 'ABP_BuildObject_SwitchHeatSource_C::DefaultSceneRoot' has a wrong offset!");

}

