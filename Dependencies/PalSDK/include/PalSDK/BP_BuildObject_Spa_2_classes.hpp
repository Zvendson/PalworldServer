#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_Spa_2.BP_BuildObject_Spa_2_C
// 0x0050 (0x0678 - 0x0628)
class ABP_BuildObject_Spa_2_C final : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_PalSpaSteam;                                    // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        CharacterOffsetInUsing;                            // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectAmusementParameterComponent* AmusementParameter;                                // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableCapsule_C*              BP_InteractableCapsule;                            // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectAmusementModel*            AmusementModel;                                    // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void CustomEvent(class UPalMapObjectConcreteModelBase* Model);
	void ExecuteUbergraph_BP_BuildObject_Spa_2(int32 EntryPoint);
	void OnStartUsingInServer(class UPalMapObjectAmusementModel* Model, class APalCharacter* Character);
	void OnUpdateCharacter(class UPalMapObjectAmusementModel* Model);
	void ReceiveBeginPlay();
	void SetActive_Internal(bool bOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_Spa_2_C">();
	}
	static class ABP_BuildObject_Spa_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_Spa_2_C>();
	}
};
static_assert(alignof(ABP_BuildObject_Spa_2_C) == 0x000008, "Wrong alignment on ABP_BuildObject_Spa_2_C");
static_assert(sizeof(ABP_BuildObject_Spa_2_C) == 0x000678, "Wrong size on ABP_BuildObject_Spa_2_C");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, UberGraphFrame) == 0x000628, "Member 'ABP_BuildObject_Spa_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, NS_PalSpaSteam) == 0x000630, "Member 'ABP_BuildObject_Spa_2_C::NS_PalSpaSteam' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, CharacterOffsetInUsing) == 0x000638, "Member 'ABP_BuildObject_Spa_2_C::CharacterOffsetInUsing' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, AmusementParameter) == 0x000640, "Member 'ABP_BuildObject_Spa_2_C::AmusementParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, StaticMesh) == 0x000648, "Member 'ABP_BuildObject_Spa_2_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, BP_InteractableCapsule) == 0x000650, "Member 'ABP_BuildObject_Spa_2_C::BP_InteractableCapsule' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, BuildWorkableBounds) == 0x000658, "Member 'ABP_BuildObject_Spa_2_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, CheckOverlapCollision) == 0x000660, "Member 'ABP_BuildObject_Spa_2_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, Root) == 0x000668, "Member 'ABP_BuildObject_Spa_2_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Spa_2_C, AmusementModel) == 0x000670, "Member 'ABP_BuildObject_Spa_2_C::AmusementModel' has a wrong offset!");

}

