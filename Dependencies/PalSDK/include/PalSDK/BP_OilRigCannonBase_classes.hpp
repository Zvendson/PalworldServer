#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_OilRigCannonBase.BP_OilRigCannonBase_C
// 0x0020 (0x0330 - 0x0310)
class ABP_OilRigCannonBase_C : public APalOilRigCannonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EPalActionType                                ActionType;                                        // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCallDestroyed_Local;                             // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void Stop_Animation(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
	void Start_Animation(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnDestroyedWeapon_ForBP();
	void Interact_Completed(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
	void ExecuteUbergraph_BP_OilRigCannonBase(int32 EntryPoint);
	void ChangeDefaultVisual_BP();

	EPalInteractiveObjectIndicatorType GetIndicatorType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OilRigCannonBase_C">();
	}
	static class ABP_OilRigCannonBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OilRigCannonBase_C>();
	}
};
static_assert(alignof(ABP_OilRigCannonBase_C) == 0x000008, "Wrong alignment on ABP_OilRigCannonBase_C");
static_assert(sizeof(ABP_OilRigCannonBase_C) == 0x000330, "Wrong size on ABP_OilRigCannonBase_C");
static_assert(offsetof(ABP_OilRigCannonBase_C, UberGraphFrame) == 0x000310, "Member 'ABP_OilRigCannonBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannonBase_C, BP_InteractableSphere) == 0x000318, "Member 'ABP_OilRigCannonBase_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannonBase_C, DefaultSceneRoot) == 0x000320, "Member 'ABP_OilRigCannonBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannonBase_C, ActionType) == 0x000328, "Member 'ABP_OilRigCannonBase_C::ActionType' has a wrong offset!");
static_assert(offsetof(ABP_OilRigCannonBase_C, IsCallDestroyed_Local) == 0x000329, "Member 'ABP_OilRigCannonBase_C::IsCallDestroyed_Local' has a wrong offset!");

}

