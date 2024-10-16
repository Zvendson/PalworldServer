#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_SphereFactory_Black_03.BP_BuildObject_SphereFactory_Black_03_C
// 0x0078 (0x06A0 - 0x0628)
class ABP_BuildObject_SphereFactory_Black_03_C final : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalWorkFacingComponent*                WorkFacing3;                                       // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BuildObjectFactoryConveyorComponent_C* FactoryConveyorComponent;                          // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                WorkFacing1;                                       // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                WorkFacing2;                                       // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                WorkFacing;                                        // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;                            // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BuildObject_SphereFactory_Black_03(int32 EntryPoint);
	void OnAvailable_BlueprintImpl();
	void OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_SphereFactory_Black_03_C">();
	}
	static class ABP_BuildObject_SphereFactory_Black_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_SphereFactory_Black_03_C>();
	}
};
static_assert(alignof(ABP_BuildObject_SphereFactory_Black_03_C) == 0x000008, "Wrong alignment on ABP_BuildObject_SphereFactory_Black_03_C");
static_assert(sizeof(ABP_BuildObject_SphereFactory_Black_03_C) == 0x0006A0, "Wrong size on ABP_BuildObject_SphereFactory_Black_03_C");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, UberGraphFrame) == 0x000628, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, WorkFacing3) == 0x000630, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::WorkFacing3' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, StaticMesh2) == 0x000638, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, CheckOverlapCollision) == 0x000640, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, BuildWorkableBounds) == 0x000648, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, BP_InteractableBox) == 0x000650, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, StaticMesh3) == 0x000658, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, StaticMesh1) == 0x000660, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, FactoryConveyorComponent) == 0x000668, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::FactoryConveyorComponent' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, WorkFacing1) == 0x000670, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::WorkFacing1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, WorkFacing2) == 0x000678, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::WorkFacing2' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, WorkFacing) == 0x000680, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::WorkFacing' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, StaticMesh) == 0x000688, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, ItemConverterParameter) == 0x000690, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::ItemConverterParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_03_C, Root) == 0x000698, "Member 'ABP_BuildObject_SphereFactory_Black_03_C::Root' has a wrong offset!");

}

