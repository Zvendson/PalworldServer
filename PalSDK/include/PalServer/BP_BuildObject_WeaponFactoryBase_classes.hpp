#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BuildObject_WeaponFactoryBase.BP_BuildObject_WeaponFactoryBase_C
// 0x0050 (0x0678 - 0x0628)
class ABP_BuildObject_WeaponFactoryBase_C : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_WeaponFactoryMedieval;                          // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WorkVisualFX_C*                     BP_WorkVisualFX2;                                  // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                WorkFacing2;                                       // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        StaticMesh;                                        // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;                            // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase(int32 EntryPoint);
	void ReceiveBeginPlay();
	void WeaponLoop(class USceneComponent* Input);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_WeaponFactoryBase_C">();
	}
	static class ABP_BuildObject_WeaponFactoryBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_WeaponFactoryBase_C>();
	}
};
static_assert(alignof(ABP_BuildObject_WeaponFactoryBase_C) == 0x000008, "Wrong alignment on ABP_BuildObject_WeaponFactoryBase_C");
static_assert(sizeof(ABP_BuildObject_WeaponFactoryBase_C) == 0x000678, "Wrong size on ABP_BuildObject_WeaponFactoryBase_C");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, UberGraphFrame) == 0x000628, "Member 'ABP_BuildObject_WeaponFactoryBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, SM_WeaponFactoryMedieval) == 0x000630, "Member 'ABP_BuildObject_WeaponFactoryBase_C::SM_WeaponFactoryMedieval' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, BP_WorkVisualFX2) == 0x000638, "Member 'ABP_BuildObject_WeaponFactoryBase_C::BP_WorkVisualFX2' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, WorkFacing2) == 0x000640, "Member 'ABP_BuildObject_WeaponFactoryBase_C::WorkFacing2' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, StaticMesh) == 0x000648, "Member 'ABP_BuildObject_WeaponFactoryBase_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, BP_InteractableBox) == 0x000650, "Member 'ABP_BuildObject_WeaponFactoryBase_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, ItemConverterParameter) == 0x000658, "Member 'ABP_BuildObject_WeaponFactoryBase_C::ItemConverterParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, BuildWorkableBounds) == 0x000660, "Member 'ABP_BuildObject_WeaponFactoryBase_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, CheckOverlapCollision) == 0x000668, "Member 'ABP_BuildObject_WeaponFactoryBase_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_WeaponFactoryBase_C, Root) == 0x000670, "Member 'ABP_BuildObject_WeaponFactoryBase_C::Root' has a wrong offset!");

}

