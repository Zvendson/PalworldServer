#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C
// 0x0058 (0x0470 - 0x0418)
class ABP_MapObject_CommonDropItem3D_C final : public APalMapObjectDropItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        IndicatorOrigin;                                   // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ReleasePower;                                      // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ObtainDelayTime;                                   // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bObtainableByProgress;                             // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentLinearDamping;                              // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LinearDownSpeed;                                   // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultLinearDamping;                              // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 VisualActorClass;                                  // 0x0468(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void ExecuteUbergraph_BP_MapObject_CommonDropItem3D(int32 EntryPoint);
	void OnLoaded_857256B349A5E9E377896489F9AD883E(TSubclassOf<class UObject> Loaded);
	void OnRep_VisualActorClass();
	void OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReleaseObject(const struct FVector& Direction);
	void SetItemModelInServer(TSoftClassPtr<class UClass> VisualModel);
	void SetupStaticMesh(class UStaticMesh* InStaticMesh, const struct FVector& CenterOfMass, class UMaterialInterface* Material);
	void SetupVisualInServer(class UPalMapObjectConcreteModelBase* ConcreteModel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_CommonDropItem3D_C">();
	}
	static class ABP_MapObject_CommonDropItem3D_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_CommonDropItem3D_C>();
	}
};
static_assert(alignof(ABP_MapObject_CommonDropItem3D_C) == 0x000008, "Wrong alignment on ABP_MapObject_CommonDropItem3D_C");
static_assert(sizeof(ABP_MapObject_CommonDropItem3D_C) == 0x000470, "Wrong size on ABP_MapObject_CommonDropItem3D_C");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, UberGraphFrame) == 0x000418, "Member 'ABP_MapObject_CommonDropItem3D_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, IndicatorOrigin) == 0x000420, "Member 'ABP_MapObject_CommonDropItem3D_C::IndicatorOrigin' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, StaticMesh) == 0x000428, "Member 'ABP_MapObject_CommonDropItem3D_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, BP_InteractableSphere) == 0x000430, "Member 'ABP_MapObject_CommonDropItem3D_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, ReleasePower) == 0x000438, "Member 'ABP_MapObject_CommonDropItem3D_C::ReleasePower' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, ObtainDelayTime) == 0x000440, "Member 'ABP_MapObject_CommonDropItem3D_C::ObtainDelayTime' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, bObtainableByProgress) == 0x000448, "Member 'ABP_MapObject_CommonDropItem3D_C::bObtainableByProgress' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, CurrentLinearDamping) == 0x000450, "Member 'ABP_MapObject_CommonDropItem3D_C::CurrentLinearDamping' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, LinearDownSpeed) == 0x000458, "Member 'ABP_MapObject_CommonDropItem3D_C::LinearDownSpeed' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, DefaultLinearDamping) == 0x000460, "Member 'ABP_MapObject_CommonDropItem3D_C::DefaultLinearDamping' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_CommonDropItem3D_C, VisualActorClass) == 0x000468, "Member 'ABP_MapObject_CommonDropItem3D_C::VisualActorClass' has a wrong offset!");

}

