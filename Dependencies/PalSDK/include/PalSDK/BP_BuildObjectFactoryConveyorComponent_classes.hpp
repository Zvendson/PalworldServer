#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C
// 0x0020 (0x0680 - 0x0660)
class UBP_BuildObjectFactoryConveyorComponent_C final : public UPalItemFlowSplineComponent
{
public:
	class UMaterialInstanceDynamic*               ConveyerDynamicMaterialInstance;                   // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ConveyorSpeed;                                     // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ScrollMaterialParametername;                       // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnReadyOwnerEnergyModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
	void OnUpdateCurrentEnergyState(class UPalMapObjectEnergyModule* Module);
	void OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model);
	void SetRunningConveyor(bool bOn);
	void SetupByOwner(class UPalMapObjectConcreteModelBase* ConcreteModel, class UMaterialInstanceDynamic* ConveyorMaterialInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObjectFactoryConveyorComponent_C">();
	}
	static class UBP_BuildObjectFactoryConveyorComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BuildObjectFactoryConveyorComponent_C>();
	}
};
static_assert(alignof(UBP_BuildObjectFactoryConveyorComponent_C) == 0x000010, "Wrong alignment on UBP_BuildObjectFactoryConveyorComponent_C");
static_assert(sizeof(UBP_BuildObjectFactoryConveyorComponent_C) == 0x000680, "Wrong size on UBP_BuildObjectFactoryConveyorComponent_C");
static_assert(offsetof(UBP_BuildObjectFactoryConveyorComponent_C, ConveyerDynamicMaterialInstance) == 0x000660, "Member 'UBP_BuildObjectFactoryConveyorComponent_C::ConveyerDynamicMaterialInstance' has a wrong offset!");
static_assert(offsetof(UBP_BuildObjectFactoryConveyorComponent_C, ConveyorSpeed) == 0x000668, "Member 'UBP_BuildObjectFactoryConveyorComponent_C::ConveyorSpeed' has a wrong offset!");
static_assert(offsetof(UBP_BuildObjectFactoryConveyorComponent_C, ScrollMaterialParametername) == 0x000670, "Member 'UBP_BuildObjectFactoryConveyorComponent_C::ScrollMaterialParametername' has a wrong offset!");

}

