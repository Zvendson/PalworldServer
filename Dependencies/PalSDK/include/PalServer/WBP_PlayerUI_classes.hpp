#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PlayerUI.WBP_PlayerUI_C
// 0x01E8 (0x05F0 - 0x0408)
class UWBP_PlayerUI_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Highlight_ConstructionMenu_Loop;                   // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Highlight_ConstructionMenu_InOut;                  // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Show_ConstructionMenu;                             // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hide_ConstructionMenu;                             // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HideShow_Aim;                                      // 0x0430(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_BattleEntry_Info_C*                WBP_BattleEntry_Info;                              // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossBattle_BattleInfo_C*           WBP_BossBattle_BattleInfo;                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Crime_C*                           WBP_Crime;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Arena_C*                    WBP_InGame_Arena;                                  // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_Compass_C*                  WBP_Ingame_Compass;                                // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PlayerStamina_Circle_C*     WBP_Ingame_PlayerStamina_Circle;                   // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_Sleep_C*                    WBP_Ingame_Sleep;                                  // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameDamageVinette_C*             WBP_IngameDamageVinette;                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameFlyEff_C*                    WBP_IngameFlyEff;                                  // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngamePlaceName_C*                 WBP_IngamePlaceName;                               // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameSmesTop_C*                   WBP_IngameSmesTop;                                 // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameThermometerEff_C*            WBP_IngameThermometerEff;                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OtomoLoupe_C*                      WBP_OtomoLoupe_77;                                 // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalAim_C*                          WBP_PalAim;                                        // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInfo_C*                         WBP_PalInfo;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLogWidget_C*                    WBP_PalLogWidget;                                  // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalLvExp_List_C*                   WBP_PalLvExp_List;                                 // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalNPCHPGaugeCanvas_C*             WBP_PalNPCHPGaugeCanvas;                           // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalPlayerDebuffNoticeBox_C*        WBP_PalPlayerDebuffNoticeBox;                      // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalSkill_KeyGuide_C*               WBP_PalSkill_KeyGuide;                             // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartnerSkillInfo_C*                WBP_PartnerSkillInfo;                              // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerSideInfo_Separated_C*        WBP_PlayerSideInfo_Separated;                      // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PLLvExp_C*                         WBP_PLLvExp;                                       // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QuestAndBaseCampInfoCanvas_C*      WBP_QuestAndBaseCampInfoCanvas;                    // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Reticle_Cancel_C*                  WBP_Reticle_Cancel;                                // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TutorialMessage_Temp_C*            WBP_TutorialMessage_Temp;                          // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WarningUI_C*                       WBP_WarningUI;                                     // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeightNotice_C*                    WBP_WeightNotice;                                  // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        HideUITimer;                                       // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HideWeaponInfoTimer;                               // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HideUITime;                                        // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWaitUIHide;                                      // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsConflictOld;                                     // 0x0531(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOverHideTimer;                                   // 0x0532(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHidePlayerGauge;                                 // 0x0533(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHideWeaponInfo;                                  // 0x0534(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAiming;                                          // 0x0535(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_536[0x2];                                      // 0x0536(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LowHealthPercent;                                  // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastHpPercent;                                     // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       Player_Individual_Parameter;                       // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayerHPMax;                                     // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayerSPMax;                                     // 0x0551(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayerShieldMax;                                 // 0x0552(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitialized;                                     // 0x0553(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MapMaskPaintSize;                                  // 0x0554(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UPalIndividualCharacterHandle> LastActivatedOtomoHandle;                          // 0x0558(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsSuspendEffectiveAttackLog;                       // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589[0x7];                                      // 0x0589(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ResumeEffectiveAttackLogTimer;                     // 0x0590(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              StaminaGauge_MinPosRate;                           // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              StaminaGauge_MaxPosRate;                           // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsRadialMenuOpened;                               // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRiding;                                          // 0x05B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRideCharacterSPMax;                              // 0x05BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalBodyTemperatureState                      CachedTemperatureBodyState;                        // 0x05BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BC[0x4];                                      // 0x05BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StaminaGaugeRightOffset;                           // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBuilding;                                        // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldHightConstruction;                           // 0x05C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CA[0x2];                                      // 0x05CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CachedLastSphereLoadoutIndex;                      // 0x05CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CachedPlayerHunger;                                // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D4[0x4];                                      // 0x05D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CheckOtomoHungerTimerHandle;                       // 0x05D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckEquipmentDurabilityTimerHandle;               // 0x05E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CurrentLiftingCampPalCharacter;                    // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Anm_Hide_Loadout();
	void Anm_Hide_PlayerGauge();
	void Anm_Show_Loadout();
	void Anm_Show_PlayerGauge();
	void Anm_Toggle_Highlight_Construction();
	void CalcCompassRotation();
	void CheckArmorDurability();
	void CheckAutoUIHide(double DeltaTime);
	void CheckWeaponDurability();
	void Destruct();
	void ExecuteUbergraph_WBP_PlayerUI(int32 EntryPoint);
	void Finished_EE570CBA4C1A6B90D4B5E88E8D12910C();
	void InitializeWorldMapTexture();
	void Is_Player_Gauge_Should_Show(bool* IsShow);
	void IsPalGaugeShouldShow(bool* IsShow);
	void IsPlayerWeaponInfoShouldShow(bool* IsShow);
	void On_Change_Loadout(EPalPlayerInventoryType InventoryType, int32 Index_0);
	void On_Update_Player_SP(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated);
	void On_Update_Ride_Character_SP(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated);
	void On_Update_Shield_Max_HP(const struct FFixedPoint64& NowShieldMaxHP);
	void OnActivatedOtomo();
	void OnArenaSequenceStageChanged(int32 Index_0);
	void OnArenaSequnceStart(class UPalArenaSequencer* ArenaSequencer);
	void OnCapturedPal(const struct FPalUIPalCaptureInfo& CaptureInfo);
	void OnChangedRegion(const class FName& RegionNameID);
	void OnChangedTemperanture(int32 NextTemperature);
	void OnChangedTemperatureBodyState(EPalBodyTemperatureState BodyState);
	void OnChangedWeapon(class APalWeaponBase* Weapon);
	void OnChangeOtomo();
	void OnDamagedShield(int32 Damage, bool IsShieldBroken);
	void OnDeactivatedOtomo();
	void OnEndAim();
	void OnEndBuilding(class UPalBuilderComponent* BuilderComponent);
	void OnEndCrime(const struct FGuid& CrimeInstance);
	void OnEndLiftCampPal();
	void OnEndWanted(class UPalIndividualCharacterHandle* CriminalHandle);
	void OnExitArena();
	void OnGetoffOtomo(class AActor* RideActor);
	void OnInitialized();
	void OnLiftCampPal(class APalCharacter* TargetCharacter);
	void OnOtomoInflictDamage(const struct FPalDamageResult& DamageResult);
	void OnPlayerDamage(const struct FPalDamageResult& DamageResult);
	void OnRadialMenuClosed();
	void OnRadialMenuOpened();
	void OnReportCrime(class UPalIndividualCharacterHandle* CriminalHandle, const TArray<class FName>& CrimeIds);
	void OnResumeEffectiveLog();
	void OnRideOtomo(class AActor* RideActor);
	void OnSetup();
	void OnSetup_AfterCreatedPlayer();
	void OnStartAim();
	void OnStartBuilding(class UPalBuilderComponent* BuilderComponent);
	void OnStartCrime(const struct FGuid& CrimeInstance);
	void OnTimer_CheckEquipmentDurability();
	void OnTimer_CheckOtomoHunger();
	void OnToggleGrapplingCancel(bool CancelEnable);
	void OnToggleSleepPlayerBed(bool IsSleep);
	void OnUnlockedMap(const class FName& UnlockedRegionId, const int32 PlayerId);
	void OnUpdateInventoryMaxWeight(float MaxWeight);
	void OnUpdateInventoryWeight(float NowWeight);
	void OnUpdateLoadout(EPalPlayerInventoryType NewParam2, int32 NewParam);
	void OnUpdateOtomoInfo();
	void OnUpdateOtomoSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle);
	void OnUpdatePlayerHp(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void OnUpdatePlayerHP_LowHealthEffect(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void OnUpdatePlayerHunger(float Current, float Last);
	void OnUpdateShieldHP(const struct FFixedPoint64& NowShieldMaxHP, const struct FFixedPoint64& NowShieldHP);
	void OnWeaponTrigger();
	void PaintWorldMap();
	void ResetHideUITimer();
	void ResetStartCrime();
	void SetIsHideWeaponInfo(bool bHide);
	void Setup_After_CreatePlayerIndividualParameter();
	void Should_Check_UIAuto_Hide(bool* ShouldCheck);
	void Show_UI();
	void Start_Hide_UITimer();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateAimVisibility();
	void UpdateStaminaGaugePosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerUI_C">();
	}
	static class UWBP_PlayerUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerUI_C>();
	}
};
static_assert(alignof(UWBP_PlayerUI_C) == 0x000008, "Wrong alignment on UWBP_PlayerUI_C");
static_assert(sizeof(UWBP_PlayerUI_C) == 0x0005F0, "Wrong size on UWBP_PlayerUI_C");
static_assert(offsetof(UWBP_PlayerUI_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PlayerUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, Highlight_ConstructionMenu_Loop) == 0x000410, "Member 'UWBP_PlayerUI_C::Highlight_ConstructionMenu_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, Highlight_ConstructionMenu_InOut) == 0x000418, "Member 'UWBP_PlayerUI_C::Highlight_ConstructionMenu_InOut' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, Show_ConstructionMenu) == 0x000420, "Member 'UWBP_PlayerUI_C::Show_ConstructionMenu' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, Hide_ConstructionMenu) == 0x000428, "Member 'UWBP_PlayerUI_C::Hide_ConstructionMenu' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, HideShow_Aim) == 0x000430, "Member 'UWBP_PlayerUI_C::HideShow_Aim' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_BattleEntry_Info) == 0x000438, "Member 'UWBP_PlayerUI_C::WBP_BattleEntry_Info' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_BossBattle_BattleInfo) == 0x000440, "Member 'UWBP_PlayerUI_C::WBP_BossBattle_BattleInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_Crime) == 0x000448, "Member 'UWBP_PlayerUI_C::WBP_Crime' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_InGame_Arena) == 0x000450, "Member 'UWBP_PlayerUI_C::WBP_InGame_Arena' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_Ingame_Compass) == 0x000458, "Member 'UWBP_PlayerUI_C::WBP_Ingame_Compass' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_Ingame_PlayerStamina_Circle) == 0x000460, "Member 'UWBP_PlayerUI_C::WBP_Ingame_PlayerStamina_Circle' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_Ingame_Sleep) == 0x000468, "Member 'UWBP_PlayerUI_C::WBP_Ingame_Sleep' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_IngameDamageVinette) == 0x000470, "Member 'UWBP_PlayerUI_C::WBP_IngameDamageVinette' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_IngameFlyEff) == 0x000478, "Member 'UWBP_PlayerUI_C::WBP_IngameFlyEff' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_IngamePlaceName) == 0x000480, "Member 'UWBP_PlayerUI_C::WBP_IngamePlaceName' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_IngameSmesTop) == 0x000488, "Member 'UWBP_PlayerUI_C::WBP_IngameSmesTop' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_IngameThermometerEff) == 0x000490, "Member 'UWBP_PlayerUI_C::WBP_IngameThermometerEff' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_OtomoLoupe_77) == 0x000498, "Member 'UWBP_PlayerUI_C::WBP_OtomoLoupe_77' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PalAim) == 0x0004A0, "Member 'UWBP_PlayerUI_C::WBP_PalAim' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PalInfo) == 0x0004A8, "Member 'UWBP_PlayerUI_C::WBP_PalInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PalLogWidget) == 0x0004B0, "Member 'UWBP_PlayerUI_C::WBP_PalLogWidget' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PalLvExp_List) == 0x0004B8, "Member 'UWBP_PlayerUI_C::WBP_PalLvExp_List' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PalNPCHPGaugeCanvas) == 0x0004C0, "Member 'UWBP_PlayerUI_C::WBP_PalNPCHPGaugeCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PalPlayerDebuffNoticeBox) == 0x0004C8, "Member 'UWBP_PlayerUI_C::WBP_PalPlayerDebuffNoticeBox' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PalSkill_KeyGuide) == 0x0004D0, "Member 'UWBP_PlayerUI_C::WBP_PalSkill_KeyGuide' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PartnerSkillInfo) == 0x0004D8, "Member 'UWBP_PlayerUI_C::WBP_PartnerSkillInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PlayerSideInfo_Separated) == 0x0004E0, "Member 'UWBP_PlayerUI_C::WBP_PlayerSideInfo_Separated' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_PLLvExp) == 0x0004E8, "Member 'UWBP_PlayerUI_C::WBP_PLLvExp' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_QuestAndBaseCampInfoCanvas) == 0x0004F0, "Member 'UWBP_PlayerUI_C::WBP_QuestAndBaseCampInfoCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_Reticle_Cancel) == 0x0004F8, "Member 'UWBP_PlayerUI_C::WBP_Reticle_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_TutorialMessage_Temp) == 0x000500, "Member 'UWBP_PlayerUI_C::WBP_TutorialMessage_Temp' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_WarningUI) == 0x000508, "Member 'UWBP_PlayerUI_C::WBP_WarningUI' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, WBP_WeightNotice) == 0x000510, "Member 'UWBP_PlayerUI_C::WBP_WeightNotice' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, HideUITimer) == 0x000518, "Member 'UWBP_PlayerUI_C::HideUITimer' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, HideWeaponInfoTimer) == 0x000520, "Member 'UWBP_PlayerUI_C::HideWeaponInfoTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, HideUITime) == 0x000528, "Member 'UWBP_PlayerUI_C::HideUITime' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsWaitUIHide) == 0x000530, "Member 'UWBP_PlayerUI_C::IsWaitUIHide' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsConflictOld) == 0x000531, "Member 'UWBP_PlayerUI_C::IsConflictOld' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsOverHideTimer) == 0x000532, "Member 'UWBP_PlayerUI_C::IsOverHideTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsHidePlayerGauge) == 0x000533, "Member 'UWBP_PlayerUI_C::IsHidePlayerGauge' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsHideWeaponInfo) == 0x000534, "Member 'UWBP_PlayerUI_C::IsHideWeaponInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsAiming) == 0x000535, "Member 'UWBP_PlayerUI_C::IsAiming' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, LowHealthPercent) == 0x000538, "Member 'UWBP_PlayerUI_C::LowHealthPercent' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, LastHpPercent) == 0x000540, "Member 'UWBP_PlayerUI_C::LastHpPercent' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, Player_Individual_Parameter) == 0x000548, "Member 'UWBP_PlayerUI_C::Player_Individual_Parameter' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsPlayerHPMax) == 0x000550, "Member 'UWBP_PlayerUI_C::IsPlayerHPMax' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsPlayerSPMax) == 0x000551, "Member 'UWBP_PlayerUI_C::IsPlayerSPMax' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsPlayerShieldMax) == 0x000552, "Member 'UWBP_PlayerUI_C::IsPlayerShieldMax' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsInitialized) == 0x000553, "Member 'UWBP_PlayerUI_C::IsInitialized' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, MapMaskPaintSize) == 0x000554, "Member 'UWBP_PlayerUI_C::MapMaskPaintSize' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, LastActivatedOtomoHandle) == 0x000558, "Member 'UWBP_PlayerUI_C::LastActivatedOtomoHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsSuspendEffectiveAttackLog) == 0x000588, "Member 'UWBP_PlayerUI_C::IsSuspendEffectiveAttackLog' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, ResumeEffectiveAttackLogTimer) == 0x000590, "Member 'UWBP_PlayerUI_C::ResumeEffectiveAttackLogTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, StaminaGauge_MinPosRate) == 0x000598, "Member 'UWBP_PlayerUI_C::StaminaGauge_MinPosRate' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, StaminaGauge_MaxPosRate) == 0x0005A8, "Member 'UWBP_PlayerUI_C::StaminaGauge_MaxPosRate' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, bIsRadialMenuOpened) == 0x0005B8, "Member 'UWBP_PlayerUI_C::bIsRadialMenuOpened' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsRiding) == 0x0005B9, "Member 'UWBP_PlayerUI_C::IsRiding' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsRideCharacterSPMax) == 0x0005BA, "Member 'UWBP_PlayerUI_C::IsRideCharacterSPMax' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, CachedTemperatureBodyState) == 0x0005BB, "Member 'UWBP_PlayerUI_C::CachedTemperatureBodyState' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, StaminaGaugeRightOffset) == 0x0005C0, "Member 'UWBP_PlayerUI_C::StaminaGaugeRightOffset' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, IsBuilding) == 0x0005C8, "Member 'UWBP_PlayerUI_C::IsBuilding' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, ShouldHightConstruction) == 0x0005C9, "Member 'UWBP_PlayerUI_C::ShouldHightConstruction' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, CachedLastSphereLoadoutIndex) == 0x0005CC, "Member 'UWBP_PlayerUI_C::CachedLastSphereLoadoutIndex' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, CachedPlayerHunger) == 0x0005D0, "Member 'UWBP_PlayerUI_C::CachedPlayerHunger' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, CheckOtomoHungerTimerHandle) == 0x0005D8, "Member 'UWBP_PlayerUI_C::CheckOtomoHungerTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, CheckEquipmentDurabilityTimerHandle) == 0x0005E0, "Member 'UWBP_PlayerUI_C::CheckEquipmentDurabilityTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerUI_C, CurrentLiftingCampPalCharacter) == 0x0005E8, "Member 'UWBP_PlayerUI_C::CurrentLiftingCampPalCharacter' has a wrong offset!");

}

