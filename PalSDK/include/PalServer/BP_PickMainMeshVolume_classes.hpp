#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PickMainMeshVolume.BP_PickMainMeshVolume_C
// 0x0020 (0x02B0 - 0x0290)
class ABP_PickMainMeshVolume_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CollectPalCharacterOnly;                           // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Applied_Make_Info(const class UPalSkeletalMeshComponent* SkeletalMeshComponent);
	void BeginOverlapMainMesh(class UMeshComponent* InMainMesh);
	void BeginOverlapPalLit(class UMaterialInstanceDynamic* Material, bool MaterialSrc);
	void BndEvt__BP_MaterialVolumeTest_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_PickMainMeshVolume_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void EndOverlapMainMesh(class UMeshComponent* OutMainMesh);
	void EndOverlapPalLit(class UMaterialInstanceDynamic* Material);
	void ExecuteUbergraph_BP_PickMainMeshVolume(int32 EntryPoint);
	void GetMeshFromActor(class AActor* Actor, TArray<class UMeshComponent*>* Mesh);
	void IsCelShader(class UMaterialInterface* Material, bool* IsCelShader_0);
	void IsPalLit(class UMaterialInterface* Material, bool* IsPalLit_0);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PickMainMeshVolume_C">();
	}
	static class ABP_PickMainMeshVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PickMainMeshVolume_C>();
	}
};
static_assert(alignof(ABP_PickMainMeshVolume_C) == 0x000008, "Wrong alignment on ABP_PickMainMeshVolume_C");
static_assert(sizeof(ABP_PickMainMeshVolume_C) == 0x0002B0, "Wrong size on ABP_PickMainMeshVolume_C");
static_assert(offsetof(ABP_PickMainMeshVolume_C, UberGraphFrame) == 0x000290, "Member 'ABP_PickMainMeshVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PickMainMeshVolume_C, Box) == 0x000298, "Member 'ABP_PickMainMeshVolume_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_PickMainMeshVolume_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_PickMainMeshVolume_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PickMainMeshVolume_C, CollectPalCharacterOnly) == 0x0002A8, "Member 'ABP_PickMainMeshVolume_C::CollectPalCharacterOnly' has a wrong offset!");

}

