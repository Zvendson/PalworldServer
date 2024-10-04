#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_LevelObject_Relic.BP_LevelObject_Relic_C
// 0x0040 (0x0348 - 0x0308)
class ABP_LevelObject_Relic_C final : public APalLevelObjectRelic
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialBillboardComponent*            MaterialBillboard;                                 // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ObtainFXOrigin;                                    // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Base;                                   // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      AuraEffect;                                        // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Gem;                                    // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LevelObject_Relic(int32 EntryPoint);
	void OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject);
	void ReceiveBeginPlay();
	void SetActiveSelf(class APalLevelObjectObtainable* LevelObject);

	struct FVector GetObtainFXLocation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelObject_Relic_C">();
	}
	static class ABP_LevelObject_Relic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelObject_Relic_C>();
	}
};
static_assert(alignof(ABP_LevelObject_Relic_C) == 0x000008, "Wrong alignment on ABP_LevelObject_Relic_C");
static_assert(sizeof(ABP_LevelObject_Relic_C) == 0x000348, "Wrong size on ABP_LevelObject_Relic_C");
static_assert(offsetof(ABP_LevelObject_Relic_C, UberGraphFrame) == 0x000308, "Member 'ABP_LevelObject_Relic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Relic_C, MaterialBillboard) == 0x000310, "Member 'ABP_LevelObject_Relic_C::MaterialBillboard' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Relic_C, ObtainFXOrigin) == 0x000318, "Member 'ABP_LevelObject_Relic_C::ObtainFXOrigin' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Relic_C, StaticMesh_Base) == 0x000320, "Member 'ABP_LevelObject_Relic_C::StaticMesh_Base' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Relic_C, AuraEffect) == 0x000328, "Member 'ABP_LevelObject_Relic_C::AuraEffect' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Relic_C, BP_InteractableSphere) == 0x000330, "Member 'ABP_LevelObject_Relic_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Relic_C, StaticMesh_Gem) == 0x000338, "Member 'ABP_LevelObject_Relic_C::StaticMesh_Gem' has a wrong offset!");
static_assert(offsetof(ABP_LevelObject_Relic_C, DefaultSceneRoot) == 0x000340, "Member 'ABP_LevelObject_Relic_C::DefaultSceneRoot' has a wrong offset!");

}

