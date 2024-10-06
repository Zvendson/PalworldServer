#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalBossTower.BP_PalBossTower_C
// 0x00B8 (0x03B0 - 0x02F8)
class ABP_PalBossTower_C final : public APalBossTower
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          EntryWaitInfoTrigger;                              // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DeadItemDropPoint;                                 // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       EntryCancel_Trigger;                               // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TopWarpPoint;                                      // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        FrontWarpPoint;                                    // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       InsidePlayerCheck_Trigger;                         // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_TowerSphere_tower_sphere_geo;                   // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_TowerSphere_tower_sphereCube_geo;               // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Tower;                                          // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpen;                                            // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359[0x7];                                      // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    DialogMsgID;                                       // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TSoftObjectPtr<class APalPlayerCharacter>     CachedRequestStartBattlePlayer;                    // 0x0370(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGuid                                  DialogUId;                                         // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_10_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_PalBossTower_Box_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_PalBossTower_BP_InteractableBox_K2Node_ComponentBoundEvent_8_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_PalBossTower_InsideEntry_Trigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_Tower_InsidePlayerCheck_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_PalBossTower(int32 EntryPoint);
	void Force_Warp_Player();
	void Interact(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
	void OnChangeBossBattleStateBP(EPalBossBattleState NewState);
	void OnCloseStartBattleCheckDialog(bool bResult);
	void OpenStartBattleCheckDialog();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SwitchTrigger();
	void UpdateBossBattleState(EPalBossBattleState NewBossBattleState);

	struct FTransform GetDeadItemDropPoint() const;
	struct FTransform GetFrontWarpPoint() const;
	struct FTransform GetTopWarpPoint() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBossTower_C">();
	}
	static class ABP_PalBossTower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalBossTower_C>();
	}
};
static_assert(alignof(ABP_PalBossTower_C) == 0x000008, "Wrong alignment on ABP_PalBossTower_C");
static_assert(sizeof(ABP_PalBossTower_C) == 0x0003B0, "Wrong size on ABP_PalBossTower_C");
static_assert(offsetof(ABP_PalBossTower_C, UberGraphFrame) == 0x0002F8, "Member 'ABP_PalBossTower_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, EntryWaitInfoTrigger) == 0x000300, "Member 'ABP_PalBossTower_C::EntryWaitInfoTrigger' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, DeadItemDropPoint) == 0x000308, "Member 'ABP_PalBossTower_C::DeadItemDropPoint' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, BP_InteractableBox) == 0x000310, "Member 'ABP_PalBossTower_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, EntryCancel_Trigger) == 0x000318, "Member 'ABP_PalBossTower_C::EntryCancel_Trigger' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, TopWarpPoint) == 0x000320, "Member 'ABP_PalBossTower_C::TopWarpPoint' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, FrontWarpPoint) == 0x000328, "Member 'ABP_PalBossTower_C::FrontWarpPoint' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, InsidePlayerCheck_Trigger) == 0x000330, "Member 'ABP_PalBossTower_C::InsidePlayerCheck_Trigger' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, SM_TowerSphere_tower_sphere_geo) == 0x000338, "Member 'ABP_PalBossTower_C::SM_TowerSphere_tower_sphere_geo' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, SM_TowerSphere_tower_sphereCube_geo) == 0x000340, "Member 'ABP_PalBossTower_C::SM_TowerSphere_tower_sphereCube_geo' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, SM_Tower) == 0x000348, "Member 'ABP_PalBossTower_C::SM_Tower' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, DefaultSceneRoot) == 0x000350, "Member 'ABP_PalBossTower_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, IsOpen) == 0x000358, "Member 'ABP_PalBossTower_C::IsOpen' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, DialogMsgID) == 0x000360, "Member 'ABP_PalBossTower_C::DialogMsgID' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, CachedRequestStartBattlePlayer) == 0x000370, "Member 'ABP_PalBossTower_C::CachedRequestStartBattlePlayer' has a wrong offset!");
static_assert(offsetof(ABP_PalBossTower_C, DialogUId) == 0x0003A0, "Member 'ABP_PalBossTower_C::DialogUId' has a wrong offset!");

}

