#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C
// 0x0068 (0x0620 - 0x05B8)
class UWBP_PalNPCHPGauge_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalNPCHPGauge_C;                // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Innner;                                     // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EnemyGauge_C*                      WBP_EnemyGauge;                                    // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           CheckFriendTimerHandle;                            // 0x05D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckActorTimerHandle;                             // 0x05E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ImportedSphereRadius;                              // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EC[0x4];                                      // 0x05EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              DrawOffset;                                        // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChachedFriendFlag;                                 // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OldFriendFlag;                                     // 0x0601(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChachedIsDead;                                     // 0x0602(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CachedBattleMode;                                  // 0x0603(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CachedRarePalFlag;                                 // 0x0604(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_605[0x3];                                      // 0x0605(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalFlyMeshHeightCtrlComponent*         FlyComponent;                                      // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDelayClose;                                      // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle);
	void Construct();
	void DelayClose();
	void Destruct();
	void ExecuteUbergraph_WBP_PalNPCHPGauge(int32 EntryPoint);
	void InitializeDetail();
	void IsDead(bool* IsDead_0);
	void IsFriend(bool* IsFriend_0);
	void IsOtomo(bool* IsOtomo_0);
	void On_Update_Level_Binded(int32 NewLevel);
	void On_Update_Sanity_Binded(double NowSanity, double NowMaxSanity);
	void OnBattleModeChanged(bool bIsBattleMode);
	void OnDead(const struct FPalDeadInfo& DeadInfo);
	void OnDelayClose__DelegateSignature(class UWidget* Widget);
	void OnInitialized();
	void OnTakeDamage(const struct FPalDamageResult& DamageResult);
	void OnTimer_CheckActor();
	void OnUpdateCondition_Binded();
	void OnUpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void OnUpdateNickName_Binded(const class FString& NewNickName);
	void OnUpdateTalent_Binded();
	void SetupByActor();
	void TimerEvent_UpdateDetail();
	void Update_Gauge_Type();
	void UpdateForTick(double DeltaTime);
	void UpdateWidgetPosition();
	void Set_Work_Suitability(const TMap<EPalWorkSuitability, int32>& WorkSuitabilities);
	void SetElementType(EPalElementType Type1, EPalElementType Type2);
	void SetGender(EPalGenderType GenderType);
	void SetRank(int32 Rank);
	void Unbind();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalNPCHPGauge_C">();
	}
	static class UWBP_PalNPCHPGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalNPCHPGauge_C>();
	}
};
static_assert(alignof(UWBP_PalNPCHPGauge_C) == 0x000008, "Wrong alignment on UWBP_PalNPCHPGauge_C");
static_assert(sizeof(UWBP_PalNPCHPGauge_C) == 0x000620, "Wrong size on UWBP_PalNPCHPGauge_C");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, UberGraphFrame_WBP_PalNPCHPGauge_C) == 0x0005B8, "Member 'UWBP_PalNPCHPGauge_C::UberGraphFrame_WBP_PalNPCHPGauge_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, Default_In) == 0x0005C0, "Member 'UWBP_PalNPCHPGauge_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, Canvas_Innner) == 0x0005C8, "Member 'UWBP_PalNPCHPGauge_C::Canvas_Innner' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, WBP_EnemyGauge) == 0x0005D0, "Member 'UWBP_PalNPCHPGauge_C::WBP_EnemyGauge' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, CheckFriendTimerHandle) == 0x0005D8, "Member 'UWBP_PalNPCHPGauge_C::CheckFriendTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, CheckActorTimerHandle) == 0x0005E0, "Member 'UWBP_PalNPCHPGauge_C::CheckActorTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, ImportedSphereRadius) == 0x0005E8, "Member 'UWBP_PalNPCHPGauge_C::ImportedSphereRadius' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, DrawOffset) == 0x0005F0, "Member 'UWBP_PalNPCHPGauge_C::DrawOffset' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, ChachedFriendFlag) == 0x000600, "Member 'UWBP_PalNPCHPGauge_C::ChachedFriendFlag' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, OldFriendFlag) == 0x000601, "Member 'UWBP_PalNPCHPGauge_C::OldFriendFlag' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, ChachedIsDead) == 0x000602, "Member 'UWBP_PalNPCHPGauge_C::ChachedIsDead' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, CachedBattleMode) == 0x000603, "Member 'UWBP_PalNPCHPGauge_C::CachedBattleMode' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, CachedRarePalFlag) == 0x000604, "Member 'UWBP_PalNPCHPGauge_C::CachedRarePalFlag' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, FlyComponent) == 0x000608, "Member 'UWBP_PalNPCHPGauge_C::FlyComponent' has a wrong offset!");
static_assert(offsetof(UWBP_PalNPCHPGauge_C, OnDelayClose) == 0x000610, "Member 'UWBP_PalNPCHPGauge_C::OnDelayClose' has a wrong offset!");

}

