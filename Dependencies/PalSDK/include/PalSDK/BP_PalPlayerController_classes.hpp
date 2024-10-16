#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalPlayerController.BP_PalPlayerController_C
// 0x00E0 (0x0E58 - 0x0D78)
class ABP_PalPlayerController_C final : public APalPlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalItemSelectorComponent*              LoadoutItemSelector;                               // 0x0D80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          BP_OtomoPalHolderComponent;                        // 0x0D88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AIADamageReaction_C*                BP_AIADamageReaction;                              // 0x0D90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Original_Player;                                   // 0x0D98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class UPalIndividualCharacterHandle*, int32> HoldOtomoIndividualHandle;                         // 0x0DA0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           DebugHoldOtomoName;                                // 0x0DF0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           RegeneTimerHandle;                                 // 0x0E00(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          SupportPalHandle;                                  // 0x0E08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UNiagaraSystem>>  AsyncLoadAsset;                                    // 0x0E10(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnIncrementedOtomo;                                // 0x0E20(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDecrementedOtomo;                                // 0x0E30(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        SpectatorSpeedRate;                                // 0x0E40(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                        MaxSpectatorSpeedRate;                             // 0x0E48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetWatchPlayer_Index;                           // 0x0E50(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSpectatorTracking;                                // 0x0E54(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateCurrentOtomoNearThePlayer();
	void ActivateCurrentOtomoNearThePlayer_ToServer();
	void BndEvt__BP_PalPlayerController_BP_OtomoPalHolderComponent_K2Node_ComponentBoundEvent_0_OnCreatedCharacterContainer__DelegateSignature();
	void CanRideSupportPal(bool* CanRide);
	void ChangeMoveRate(double Rate);
	void ChangeMoveSpeed();
	void ChangeTargetPlayer(int32 AddPlayerIndex);
	void CreatedOtomoIndividualHandleCallback(const struct FPalInstanceID& ID);
	void CreateOtomo(bool IsClientPlayer);
	void CreateOtomoByNameList(TArray<struct FPalDebugOtomoPalInfo>& OtomoInfo);
	void CreateOtomoByNameListToServer(const TArray<struct FPalDebugOtomoPalInfo>& OtomoInfo);
	void CreateOtomoToServer(bool IsClientServer);
	void DecrementSelectOtomo_Internal();
	void DoStep(EPalStepAxisType Axis, const struct FVector2D& StepDirection);
	void EndCoopRequestToServer();
	void ExecuteUbergraph_BP_PalPlayerController(int32 EntryPoint);
	void GetOffSupportPal();
	void GetSpectator(bool* bSpectatorMode);
	TSubclassOf<class UPalUserWidgetTimerGaugeBase> GetTimerGaugeWidgetClass();
	void InactiveOtomo();
	void InactiveOtomoToServer();
	void IncrementSelectOtomo_Internal();
	void InpActEvt_End_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_PageDown_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_PageUp_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_RightControl_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_RightShift_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void LoadAndSpawnEffect(TSoftObjectPtr<class UNiagaraSystem> EffectPath, const struct FTransform& SpawnTransform);
	void NotifyChangeTargetPlayerForClient(const class FString& TargetPlayerName, int32 MaxPlayer, int32 SelectPlayer);
	void NotifyTracking();
	void OnCompleteSpawnSupportPal(const struct FPalInstanceID& ID);
	void OnDamagePlayerToPlayer(const struct FPalDamageResult& DamageResult);
	void OnDecrementedOtomo__DelegateSignature();
	void OnEndCoopRequest();
	void OnFlyRideTakeOff();
	void OnGetOffAndDespawnSupportPal();
	void OnIncrementedOtomo__DelegateSignature();
	void OnInitializeLocalPlayer_BP();
	void OnLoaded_A1A0202B475755BD73ED5998057E907E(class UObject* Loaded);
	void OnLoaded_A49E2184416F26810394CD8D2FEDE763(class UObject* Loaded);
	void OnOtomoChangeDecrement();
	void OnOtomoChangeDecrementToServer();
	void OnOtomoChangeIncrement();
	void OnOtomoChangeIncrementToServer();
	void OnRep_SpectatorSpeedRate();
	void OnSpawnAndRideSupportPal();
	void OnStartCoopRequest();
	void OnSwitchOtomoSpawn();
	void OnSwitchOtomoSpawnToServer();
	void PlayStepAction(EPalStepAxisType Axis, const struct FVector2D& Direction);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveTick(float DeltaSeconds);
	void Regene_CustomEvent();
	void RequestCaptureCagePal_ToServer(class ABP_PalCapturedCage_C* Cage);
	void ResetMoveRate();
	void RideSupportPal();
	void SetOtomoSlot(int32 SlotID);
	void SetSlotID_ToServer(int32 ID);
	void SetupDamageReaction(class APawn* Pawn_0);
	void SetupSupportPal(class APawn* PossessPawn);
	void SpawnSupportPal();
	void StartCoopRequestToServer();
	void SwitchTracking();
	void Warp_Spectator(const struct FVector& Move);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalPlayerController_C">();
	}
	static class ABP_PalPlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalPlayerController_C>();
	}
};
static_assert(alignof(ABP_PalPlayerController_C) == 0x000008, "Wrong alignment on ABP_PalPlayerController_C");
static_assert(sizeof(ABP_PalPlayerController_C) == 0x000E58, "Wrong size on ABP_PalPlayerController_C");
static_assert(offsetof(ABP_PalPlayerController_C, UberGraphFrame) == 0x000D78, "Member 'ABP_PalPlayerController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, LoadoutItemSelector) == 0x000D80, "Member 'ABP_PalPlayerController_C::LoadoutItemSelector' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, BP_OtomoPalHolderComponent) == 0x000D88, "Member 'ABP_PalPlayerController_C::BP_OtomoPalHolderComponent' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, BP_AIADamageReaction) == 0x000D90, "Member 'ABP_PalPlayerController_C::BP_AIADamageReaction' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, Original_Player) == 0x000D98, "Member 'ABP_PalPlayerController_C::Original_Player' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, HoldOtomoIndividualHandle) == 0x000DA0, "Member 'ABP_PalPlayerController_C::HoldOtomoIndividualHandle' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, DebugHoldOtomoName) == 0x000DF0, "Member 'ABP_PalPlayerController_C::DebugHoldOtomoName' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, RegeneTimerHandle) == 0x000E00, "Member 'ABP_PalPlayerController_C::RegeneTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, SupportPalHandle) == 0x000E08, "Member 'ABP_PalPlayerController_C::SupportPalHandle' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, AsyncLoadAsset) == 0x000E10, "Member 'ABP_PalPlayerController_C::AsyncLoadAsset' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, OnIncrementedOtomo) == 0x000E20, "Member 'ABP_PalPlayerController_C::OnIncrementedOtomo' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, OnDecrementedOtomo) == 0x000E30, "Member 'ABP_PalPlayerController_C::OnDecrementedOtomo' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, SpectatorSpeedRate) == 0x000E40, "Member 'ABP_PalPlayerController_C::SpectatorSpeedRate' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, MaxSpectatorSpeedRate) == 0x000E48, "Member 'ABP_PalPlayerController_C::MaxSpectatorSpeedRate' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, TargetWatchPlayer_Index) == 0x000E50, "Member 'ABP_PalPlayerController_C::TargetWatchPlayer_Index' has a wrong offset!");
static_assert(offsetof(ABP_PalPlayerController_C, bSpectatorTracking) == 0x000E54, "Member 'ABP_PalPlayerController_C::bSpectatorTracking' has a wrong offset!");

}

