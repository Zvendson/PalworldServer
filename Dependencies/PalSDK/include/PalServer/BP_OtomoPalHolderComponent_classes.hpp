#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_OtomoPalHolderComponent.BP_OtomoPalHolderComponent_C
// 0x0078 (0x0198 - 0x0120)
class UBP_OtomoPalHolderComponent_C : public UPalOtomoHolderComponentBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0120(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ActivatedOtomoSlotID;                              // 0x0128(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedOtomoSlotID;                               // 0x012C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangedSelectOtomoIndexEvent;                    // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnActivateOtomo;                                   // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUsedActiveSkill;                                 // 0x0150(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnInactiveOtomoEvent;                              // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPalIndividualCharacterHandle*          ActivatedHandle;                                   // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 AiClass;                                           // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                  ReservePalLocationList;                            // 0x0180(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          OtomoDespawnable;                                  // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ActivateCurrentOtomo(const struct FTransform& SpawnTransform);
	void ActivateCurrentOtomoFromBall(const struct FTransform& BallTransform, class AActor* BallHitActor);
	void ActivateCurrentOtomoFromBall_ToServer(const struct FTransform& BallTransform, class AActor* HitActor);
	bool ActivateCurrentOtomoNearThePlayer();
	void ActivateOtomo(int32 SlotID, const struct FTransform& StartTransform, bool* IsSuccess);
	void ActivatePalByHandle(class UPalIndividualCharacterHandle* Handle, struct FTransform& Transform, const struct FVector& Transform_Location, const struct FRotator& Transform_Rotation, const struct FVector& Transform_Scale, bool KeepActigvateOtomoId);
	void ActiveAndAttackCurrentPal(class AActor* Target);
	void Add_Otomo_Down_Log(const struct FPalDeadInfo& Actor);
	void CallCancelCommand();
	void CallOnActivateOtomo_ToALL();
	void CallOnInactivateOtomo_ToALL();
	void CoopCallCommand();
	void DecrementSelectOtomoID_Internal();
	void DelayAddOtomoForReserverList(class APalCharacter* Otomo, bool IsDelay);
	void Dummy_Despawn_Callback(const struct FPalInstanceID& ID);
	void ExecuteUbergraph_BP_OtomoPalHolderComponent(int32 EntryPoint);
	void FindNearstEnemy(const struct FVector& Location, class AActor** Actor);
	void FindSlotByIndividualID(const struct FPalInstanceID& ID, int32* SlotID);
	int32 GetNextOtomoSlotID();
	void GetNextValidSlotIndex();
	void GetOwnerCharacter(class APalCharacter** Character);
	int32 GetPreviousOtomoSlotID();
	void Inactivate_Otomo(bool* IsSuccess);
	void Inactivate_Otomo_By_Handle(class UPalIndividualCharacterHandle* IndividualHandle, bool IsDelayAddReserver, bool* IsSuccess);
	void InactivateAllOtomo();
	void InactivateCurrentOtomo();
	void InactiveActor(class APalCharacter* Actor, bool StayVisible, bool* IsSuccess);
	void IncrementActiveOtomoCount(class UPalPlayerRecordData* PlayerRecordData, class FName CharacterID);
	void IncrementSelectOtomoID_Internal();
	void InitializeSlot();
	bool IsActivatedSelectOtomo();
	bool IsRidingBySelectSlotID();
	bool IsRidingBySpawnSlotID();
	bool IsValidCurrentSelectPalActor();
	void OnActivateOtomo__DelegateSignature();
	void OnChangedSelectOtomoIndexEvent__DelegateSignature();
	void OnInactiveOtomoEvent__DelegateSignature();
	void OnOtomoDeath_ToAll(const struct FPalDeadInfo& DeadInfo);
	void OnUsedActiveSkill__DelegateSignature();
	void Otomo_DeathEvent(const struct FPalDeadInfo& DeadInfo);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void RemovePalFromParty(class UPalIndividualCharacterHandle* RemoveHandle);
	void SetActivateOtomoID_ToALL(int32 ID);
	void SetLocationOtomoForActive_ToAll(class AActor* Otomo, const struct FTransform& TF);
	void SetOtomoInvokerDisable(class AActor* Otomo, bool IsDisable);
	void SetSelectOtomoID_Internal(int32 Index_0);
	void SetTrainer(class APalCharacter* Character);
	void Setup();
	void Setup_ToServer();
	void Spawn_Character_Callback(const struct FPalInstanceID& ID);
	void SpawnOtomo(int32 SlotID);
	void SpawnOtomoByLoad(int32 SlotIndex);
	void Try_Get_Current_Active_Pal_Actor(class APalCharacter** Otomo);
	void TryFixAssignNearestWorkSelectedOtomo(const class AActor* HitActor);
	class APalCharacter* TryGetCurrentSelectPalActor();
	void Update_Otomo_Slot_in_Local(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
	void Update_Otomo_Slot_In_Server(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
	void Update_Reserve_Pal_Location(double DeltaTime);
	void UpdateSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
	void UpdateSlotInServer(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);

	int32 GetMaxOtomoNum() const;
	int32 GetSelectedOtomoID() const;
	int32 GetSpawnedOtomoID() const;
	void IsRidingByOtomoSlotID(int32 SlotID, bool* IsRiding) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OtomoPalHolderComponent_C">();
	}
	static class UBP_OtomoPalHolderComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_OtomoPalHolderComponent_C>();
	}
};
static_assert(alignof(UBP_OtomoPalHolderComponent_C) == 0x000008, "Wrong alignment on UBP_OtomoPalHolderComponent_C");
static_assert(sizeof(UBP_OtomoPalHolderComponent_C) == 0x000198, "Wrong size on UBP_OtomoPalHolderComponent_C");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, UberGraphFrame) == 0x000120, "Member 'UBP_OtomoPalHolderComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, ActivatedOtomoSlotID) == 0x000128, "Member 'UBP_OtomoPalHolderComponent_C::ActivatedOtomoSlotID' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, SelectedOtomoSlotID) == 0x00012C, "Member 'UBP_OtomoPalHolderComponent_C::SelectedOtomoSlotID' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, OnChangedSelectOtomoIndexEvent) == 0x000130, "Member 'UBP_OtomoPalHolderComponent_C::OnChangedSelectOtomoIndexEvent' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, OnActivateOtomo) == 0x000140, "Member 'UBP_OtomoPalHolderComponent_C::OnActivateOtomo' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, OnUsedActiveSkill) == 0x000150, "Member 'UBP_OtomoPalHolderComponent_C::OnUsedActiveSkill' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, OnInactiveOtomoEvent) == 0x000160, "Member 'UBP_OtomoPalHolderComponent_C::OnInactiveOtomoEvent' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, ActivatedHandle) == 0x000170, "Member 'UBP_OtomoPalHolderComponent_C::ActivatedHandle' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, AiClass) == 0x000178, "Member 'UBP_OtomoPalHolderComponent_C::AiClass' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, ReservePalLocationList) == 0x000180, "Member 'UBP_OtomoPalHolderComponent_C::ReservePalLocationList' has a wrong offset!");
static_assert(offsetof(UBP_OtomoPalHolderComponent_C, OtomoDespawnable) == 0x000190, "Member 'UBP_OtomoPalHolderComponent_C::OtomoDespawnable' has a wrong offset!");

}

