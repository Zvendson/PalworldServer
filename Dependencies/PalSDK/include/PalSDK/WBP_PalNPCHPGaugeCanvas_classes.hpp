#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_PalNPCHPGaugeCanvas.WBP_PalNPCHPGaugeCanvas_C
// 0x0168 (0x0570 - 0x0408)
class UWBP_PalNPCHPGaugeCanvas_C final : public UPalUINPCHPGaugeCanvasBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Root;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_60;                                    // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class APalCharacter*, class UWBP_PalNPCHPGauge_C*> DisplayedPalGaugeMap;                              // 0x0428(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class APalCharacter*, class UPalUICharacterHPGaugeBase*> DisplayedBossUGaugeMap;                            // 0x0478(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class APalCharacter*, class UWBP_PlayerHPGauge_C*> DisplayedPlayerGaugeMap;                           // 0x04C8(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	double                                        DisplayGaugeDistance;                              // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HideTimer;                                         // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HideTime;                                          // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DisplayGaugeRange_Sight;                           // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOverHideTime;                                    // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsConflicted;                                      // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53A[0x6];                                      // 0x053A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_UIIndividualParameterInitializeWaiter_C*> InitializeWaiters;                                 // 0x0540(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           UpdateTimerHandle;                                 // 0x0550(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        DelayCloseGauges;                                  // 0x0558(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         DisplayGaugeDistance_SameGuildPlayer;              // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CachedEnableTalentCheck;                           // 0x056C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Boss_Gauge(class APalCharacter* TargetCharacter);
	void Add_New_Gauge_UI(class APalCharacter* TargetCharacter);
	void Add_Player_Gauge(class APalCharacter* TargetCharacter);
	void AddNormalPalGauge(class APalCharacter* TargetCharacter);
	void CloseDelayGauges(class UWidget* Widget);
	void CREATEDELEGATE_PROXYFUNCTION_0(const struct FPalDamageInfo& DamageInfo, class AActor* Defender);
	void Destruct();
	void ExecuteUbergraph_WBP_PalNPCHPGaugeCanvas(int32 EntryPoint);
	void GetCameraLocationAndForwardVector(struct FVector* Location, struct FVector* ForwardVector);
	double GetDistanceByPlayer(class AActor* TargetActor);
	void Is_Sight_Display(class APalCharacter* Actor, bool* Return);
	void IsAiming(bool* IsAiming_0);
	void IsConflict(bool* IsConflict_0);
	void IsDisplayDistance(double Distance, bool IsSameGuild, bool* IsDisplay);
	void IsDisplayGaugeByPlayerRotation(class APalCharacter* TargetCharacter, bool* IsDisplay);
	void IsMimicry(class APalCharacter* Character, bool* IsMimicryMode);
	void On_Begin_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBossDead(class APalCharacter* TargetCharacter);
	void OnChangedEquipment(class UPalItemSlot* ItemSlot, EPalPlayerEquipItemSlotType SlotType);
	void OnDamagePopup(const struct FPalDamageInfo& DamageInfo, class AActor* Actor);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnEndPlayBossPal(class AActor* Actor, EEndPlayReason EndPlayReason);
	void OnEndPlayer(class AActor* Actor, EEndPlayReason EndPlayReason);
	void OnEndPlayNormalPal(class AActor* Actor, EEndPlayReason EndPlayReason);
	void OnInitializedCharacter(class APalCharacter* TargetCharacter, class UBP_UIIndividualParameterInitializeWaiter_C* SelfObject);
	void Remove_Children();
	void SetGaugeVisibility(class UWidget* Widget, class AActor* TargetActor, bool DelayClose, bool Close);
	void Setup();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Try_Process_DIsplay_Gauge(class APalCharacter* TargetCharacter);
	void Update_Children_Timer();
	void Update_Visibility_Pal_HPGauges();
	void Update_Visibility_Player_Gauges();
	void UpdateChildren_ForTick(double DeltaTime);
	void UpdateVisibility_BossGauge();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalNPCHPGaugeCanvas_C">();
	}
	static class UWBP_PalNPCHPGaugeCanvas_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalNPCHPGaugeCanvas_C>();
	}
};
static_assert(alignof(UWBP_PalNPCHPGaugeCanvas_C) == 0x000008, "Wrong alignment on UWBP_PalNPCHPGaugeCanvas_C");
static_assert(sizeof(UWBP_PalNPCHPGaugeCanvas_C) == 0x000570, "Wrong size on UWBP_PalNPCHPGaugeCanvas_C");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PalNPCHPGaugeCanvas_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, Default_In) == 0x000410, "Member 'UWBP_PalNPCHPGaugeCanvas_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, Canvas_Root) == 0x000418, "Member 'UWBP_PalNPCHPGaugeCanvas_C::Canvas_Root' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, VerticalBox_60) == 0x000420, "Member 'UWBP_PalNPCHPGaugeCanvas_C::VerticalBox_60' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, DisplayedPalGaugeMap) == 0x000428, "Member 'UWBP_PalNPCHPGaugeCanvas_C::DisplayedPalGaugeMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, DisplayedBossUGaugeMap) == 0x000478, "Member 'UWBP_PalNPCHPGaugeCanvas_C::DisplayedBossUGaugeMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, DisplayedPlayerGaugeMap) == 0x0004C8, "Member 'UWBP_PalNPCHPGaugeCanvas_C::DisplayedPlayerGaugeMap' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, DisplayGaugeDistance) == 0x000518, "Member 'UWBP_PalNPCHPGaugeCanvas_C::DisplayGaugeDistance' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, HideTimer) == 0x000520, "Member 'UWBP_PalNPCHPGaugeCanvas_C::HideTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, HideTime) == 0x000528, "Member 'UWBP_PalNPCHPGaugeCanvas_C::HideTime' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, DisplayGaugeRange_Sight) == 0x000530, "Member 'UWBP_PalNPCHPGaugeCanvas_C::DisplayGaugeRange_Sight' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, IsOverHideTime) == 0x000538, "Member 'UWBP_PalNPCHPGaugeCanvas_C::IsOverHideTime' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, IsConflicted) == 0x000539, "Member 'UWBP_PalNPCHPGaugeCanvas_C::IsConflicted' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, InitializeWaiters) == 0x000540, "Member 'UWBP_PalNPCHPGaugeCanvas_C::InitializeWaiters' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, UpdateTimerHandle) == 0x000550, "Member 'UWBP_PalNPCHPGaugeCanvas_C::UpdateTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, DelayCloseGauges) == 0x000558, "Member 'UWBP_PalNPCHPGaugeCanvas_C::DelayCloseGauges' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, DisplayGaugeDistance_SameGuildPlayer) == 0x000568, "Member 'UWBP_PalNPCHPGaugeCanvas_C::DisplayGaugeDistance_SameGuildPlayer' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGaugeCanvas_C, CachedEnableTalentCheck) == 0x00056C, "Member 'UWBP_PalNPCHPGaugeCanvas_C::CachedEnableTalentCheck' has a wrong offset!");

}

