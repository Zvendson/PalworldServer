#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EPalTreasureBoxVisualType_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObject_TreasureBox_VisibleContent.BP_MapObject_TreasureBox_VisibleContent_C
// 0x0028 (0x0410 - 0x03E8)
class ABP_MapObject_TreasureBox_VisibleContent_C : public APalMapObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   VisualActor;                                       // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        IndicatorOrigin;                                   // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent(int32 EntryPoint);
	void LoadVisualActor(TSoftClassPtr<class UClass> BlueprintClassSoft);
	void OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B(TSubclassOf<class UObject> Loaded);
	void OnReadyItemContainerModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
	void SetupEventToItemContainer(class UPalItemContainer* ItemContainer);
	void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void TryGetStaticItemId(class UPalMapObjectPickupItemOnLevelModel* PickupItemModel, class FName* StaticItemId);

	bool IsShowOutlineInReticleTargetting() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_TreasureBox_VisibleContent_C">();
	}
	static class ABP_MapObject_TreasureBox_VisibleContent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_TreasureBox_VisibleContent_C>();
	}
};
static_assert(alignof(ABP_MapObject_TreasureBox_VisibleContent_C) == 0x000008, "Wrong alignment on ABP_MapObject_TreasureBox_VisibleContent_C");
static_assert(sizeof(ABP_MapObject_TreasureBox_VisibleContent_C) == 0x000410, "Wrong size on ABP_MapObject_TreasureBox_VisibleContent_C");
static_assert(offsetof(ABP_MapObject_TreasureBox_VisibleContent_C, UberGraphFrame) == 0x0003E8, "Member 'ABP_MapObject_TreasureBox_VisibleContent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_VisibleContent_C, BP_InteractableSphere) == 0x0003F0, "Member 'ABP_MapObject_TreasureBox_VisibleContent_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_VisibleContent_C, VisualActor) == 0x0003F8, "Member 'ABP_MapObject_TreasureBox_VisibleContent_C::VisualActor' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_VisibleContent_C, IndicatorOrigin) == 0x000400, "Member 'ABP_MapObject_TreasureBox_VisibleContent_C::IndicatorOrigin' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_VisibleContent_C, Sphere) == 0x000408, "Member 'ABP_MapObject_TreasureBox_VisibleContent_C::Sphere' has a wrong offset!");

}

