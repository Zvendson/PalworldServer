#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C
// 0x0080 (0x06A8 - 0x0628)
class ABP_BuildObject_HatchingPalEgg_C final : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_HatchingEggFinishGlow;                          // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectHatchingEggParameterComponent* PalMapObjectHatchingEggParameter;                  // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TemperatureComponent_C*             BP_TemperatureComponent;                           // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   PalEggChildActor;                                  // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_EggHatchingMachine;                             // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectHatchingEggModel*          HatchingEggModel;                                  // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PalGetEffect;                                      // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PalGetEffectOffset;                                // 0x0688(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 EggActorClass;                                     // 0x06A0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BuildObject_HatchingPalEgg(int32 EntryPoint);
	void GetCurrentTemperature(int32* CurrentTemperature);
	void GetHatchingTemperature(int32* Temperature);
	void GetTemperatureDiff(int32* Diff);
	void LoadEggMeshModel(TSoftClassPtr<class UClass> EggActorClass_0);
	void On_Change_Temperature(int32 NextTemperature);
	void OnAvailable_BlueprintImpl();
	void OnEndTriggerInteract(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
	void OnHatchedCharacter(class UPalMapObjectHatchingEggModel* Model);
	void OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE(TSubclassOf<class UObject> Loaded);
	void OnRep_EggActorClass();
	void OnSetConcreteModelAvailable(class UPalMapObjectConcreteModelBase* Model);
	void OnSetConcreteModelAvailableInternal(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void OnStartTriggerInteract(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
	void OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Model);
	void OnUpdateItemContainer(class UPalItemContainer* Container);
	void OnUpdateWorkable(bool Workable);
	void ResetHatchingSpeed();
	void SetEggAnimPlayState(bool IsPlay);
	void SetupItemForeach(class UPalItemSlot* Slot, int32 Index_0);
	void SpawnGetPalEffect();
	void UpdateHatchingSpeed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_HatchingPalEgg_C">();
	}
	static class ABP_BuildObject_HatchingPalEgg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_HatchingPalEgg_C>();
	}
};
static_assert(alignof(ABP_BuildObject_HatchingPalEgg_C) == 0x000008, "Wrong alignment on ABP_BuildObject_HatchingPalEgg_C");
static_assert(sizeof(ABP_BuildObject_HatchingPalEgg_C) == 0x0006A8, "Wrong size on ABP_BuildObject_HatchingPalEgg_C");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, UberGraphFrame) == 0x000628, "Member 'ABP_BuildObject_HatchingPalEgg_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, NS_HatchingEggFinishGlow) == 0x000630, "Member 'ABP_BuildObject_HatchingPalEgg_C::NS_HatchingEggFinishGlow' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, PalMapObjectHatchingEggParameter) == 0x000638, "Member 'ABP_BuildObject_HatchingPalEgg_C::PalMapObjectHatchingEggParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, BP_TemperatureComponent) == 0x000640, "Member 'ABP_BuildObject_HatchingPalEgg_C::BP_TemperatureComponent' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, PalEggChildActor) == 0x000648, "Member 'ABP_BuildObject_HatchingPalEgg_C::PalEggChildActor' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, SM_EggHatchingMachine) == 0x000650, "Member 'ABP_BuildObject_HatchingPalEgg_C::SM_EggHatchingMachine' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, BP_InteractableBox) == 0x000658, "Member 'ABP_BuildObject_HatchingPalEgg_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, BuildWorkableBounds) == 0x000660, "Member 'ABP_BuildObject_HatchingPalEgg_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, CheckOverlapCollision) == 0x000668, "Member 'ABP_BuildObject_HatchingPalEgg_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, Root) == 0x000670, "Member 'ABP_BuildObject_HatchingPalEgg_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, HatchingEggModel) == 0x000678, "Member 'ABP_BuildObject_HatchingPalEgg_C::HatchingEggModel' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, PalGetEffect) == 0x000680, "Member 'ABP_BuildObject_HatchingPalEgg_C::PalGetEffect' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, PalGetEffectOffset) == 0x000688, "Member 'ABP_BuildObject_HatchingPalEgg_C::PalGetEffectOffset' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HatchingPalEgg_C, EggActorClass) == 0x0006A0, "Member 'ABP_BuildObject_HatchingPalEgg_C::EggActorClass' has a wrong offset!");

}

