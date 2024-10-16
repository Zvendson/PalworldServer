#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EPalTreasureBoxVisualType_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MapObject_TreasureBox.BP_MapObject_TreasureBox_C
// 0x0078 (0x04B0 - 0x0438)
class ABP_MapObject_TreasureBox_C : public APalMapObjectTreasureBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalPickingGameDataComponent*           PalPickingGameData;                                // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   VisualActor;                                       // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        IndicatorOrigin;                                   // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<EPalMapObjectTreasureGradeType, class UClass*> VisualMap;                                         // 0x0460(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void ExecuteUbergraph_BP_MapObject_TreasureBox(int32 EntryPoint);
	void OnFinishOpenVisual();
	void OnNotifiedStartOpen();
	void ReceiveBeginPlay();
	void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void TriggerOpen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_TreasureBox_C">();
	}
	static class ABP_MapObject_TreasureBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_TreasureBox_C>();
	}
};
static_assert(alignof(ABP_MapObject_TreasureBox_C) == 0x000008, "Wrong alignment on ABP_MapObject_TreasureBox_C");
static_assert(sizeof(ABP_MapObject_TreasureBox_C) == 0x0004B0, "Wrong size on ABP_MapObject_TreasureBox_C");
static_assert(offsetof(ABP_MapObject_TreasureBox_C, UberGraphFrame) == 0x000438, "Member 'ABP_MapObject_TreasureBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_C, PalPickingGameData) == 0x000440, "Member 'ABP_MapObject_TreasureBox_C::PalPickingGameData' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_C, VisualActor) == 0x000448, "Member 'ABP_MapObject_TreasureBox_C::VisualActor' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_C, BP_InteractableSphere) == 0x000450, "Member 'ABP_MapObject_TreasureBox_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_C, IndicatorOrigin) == 0x000458, "Member 'ABP_MapObject_TreasureBox_C::IndicatorOrigin' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_TreasureBox_C, VisualMap) == 0x000460, "Member 'ABP_MapObject_TreasureBox_C::VisualMap' has a wrong offset!");

}

