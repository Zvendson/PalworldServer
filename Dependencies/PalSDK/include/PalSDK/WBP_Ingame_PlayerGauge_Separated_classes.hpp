#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C
// 0x0280 (0x04F8 - 0x0278)
class UWBP_Ingame_PlayerGauge_Separated_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_HP_Gauge_Default;                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_HP_Gauge_Low;                                  // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Weapon_Broken;                                 // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Weapon_Default;                                // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_ShowHideRight;                                 // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_ShowHideLeft;                                  // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_UseBullet;                                     // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Damage;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_HPGaugeFlare_Yellow;                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_HPGaugeFlare_Blue;                             // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_ShieldGaugeFlare_Color_Yellow;                 // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_ShieldGaugeFlare_Color_Blue;                   // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Shield;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_WeaponInfo;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_GrapplingGun_Cool;                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_BallChangeKeyGuide;                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_BallChangeKeyGuide_1;                // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_SphereNum;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Weapon;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Infinity;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Sphere;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_CoolProgress;                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HPGauge_Back;                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_ShieldGauge;                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_ShieldGauge_Back;                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_CoolTimerNum;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_MaxBulletNum;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_MaxHP;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NowBulletNum;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_NowHP;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SphereName;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SphereNum_1;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SphereNum_10;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SphereNum_100;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_SphereNum_Plus;                               // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_WeaponName;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_BulletNum;                             // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PalHPGauge_C*               WBP_Ingame_PalHPGauge;                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PlayerGauge_KeyGuide_C*     WBP_Ingame_PlayerGauge_KeyGuide_PalInstruct;       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PlayerGauge_KeyGuide_C*     WBP_Ingame_PlayerGauge_KeyGuide_SummonPal;         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PlayerGauge_KeyGuide_C*     WBP_Ingame_PlayerGauge_KeyGuide_ThrowSphere;       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_PlayerGauge_ThworObjectNone_C* WBP_Ingame_PlayerGauge_PalSphereNone;              // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_Thermometer_C*              WBP_Ingame_Thermometer;                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Ingame_TimeZone_C*                 WBP_Ingame_TimeZone;                               // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameHungerGauge_C*               WBP_IngameHungerGauge;                             // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameStatusPoint_C*               WBP_IngameStatusPoint;                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon_ChangeBallAiming;      // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1;    // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon_ChangeBallStatic;      // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StatusBuffTimerContainer_C*        WBP_StatusBuffTimerContainer;                      // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             HpDelayGauge;                                      // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalUIDelayGaugeCalculator*             ShieldDelayGauge;                                  // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class APalWeaponBase>          NowHasWeapon;                                      // 0x0428(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         LasMaxBulletNum;                                   // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastNowBulletNum;                                  // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SavedMagazineSize;                                 // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               bulletGaugeMaterial;                               // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          LastShield;                                        // 0x0470(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsRiding;                                          // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_479[0x3];                                      // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CachedLastEquipBallID;                             // 0x047C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_484[0x4];                                      // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FPalDataTableRowName_ItemData, TSoftObjectPtr<class UTexture2D>> BallIconMap;                                       // 0x0488(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           HideBallnameTimerHandle;                           // 0x04D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOverBallNameHideTimer;                           // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAiming;                                          // 0x04E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasSpecialWeapon;                                  // 0x04E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNothingBall;                                     // 0x04E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFirstUpdateHP;                                   // 0x04E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E5[0x3];                                      // 0x04E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CurrentGrenadeSlot;                                // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        NoPalSphereNoticeDIsplayTime;                      // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_ShowHideLeft(bool Hide);
	void AnmEvent_ShowHideRight(bool Hide);
	void AnmEvent_TriggerDamage();
	void AnmEvent_UseBullet();
	void BindWeaponEvent(class APalWeaponBase* WeaponBase);
	void CalcMaxBulletNum(int32* MaxBulletNum);
	void Change_Infinity_Weapon_Detail(class APalWeaponBase* WeaponBase);
	void Change_Normal_Weapon_Detail(bool IsGrenade);
	void ChangeNoRideMode();
	void ChangePalThrowDetail();
	void ChangeRideMode(class AActor* Actor);
	void CREATEDELEGATE_PROXYFUNCTION_0(float RemainingTime, float CoolDownTime);
	void CREATEDELEGATE_PROXYFUNCTION_1(float RemainingTime, float CoolDownTime);
	void ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated(int32 EntryPoint);
	void HideAllWeaponInfo();
	void HideBallName();
	void HideBulletInfo();
	void Is_Require_Bullet(class APalWeaponBase* WeaponActor, bool* IsRequire);
	void IsDummyWeapon(class APalWeaponBase* WeaponBase, bool* IsDummy);
	void IsInfinityWeapon(class FName WeaponName, bool* IsInfinity);
	void IsPalThrowWeapon(class APalWeaponBase* WeaponBase, bool* IsPalThrowWeapon_0);
	void IsRideCharacterSPFull();
	void IsSpecialWeapon(class APalWeaponBase* WeaponBase, bool* IsSpecial);
	void OnEndHPGaugeDelay();
	void OnEndShieldGaugeDelay();
	void OnGrapplingGunCoolStateUpdate(bool StartCool);
	void OnGrapplingGunCoolTimerUpdate(double Timer, double CoolTime);
	void OnInitialized();
	void OnReloadWeapon(int32 bulletsNum);
	void OnStartHPGaugeDelay();
	void OnStartShieldGaugeDelay();
	void OnUpdateBallLoadoutSlot(class UPalItemSlot* Slot_0);
	void OnUpdateGrenadeLoadoutSlot(class UPalItemSlot* Slot_0);
	void RegisterBallLoadoutEvent(class UPalItemSlot* ItemSlot);
	void Set_Player_Hunger(double HungerRate);
	void SetBallDetail(class FName BallItemID, int32 DisplayNum);
	void SetBallNum(int32 Num);
	void SetEnableFirstSummonPalGuide(bool IsEnableFlag);
	void Setup_Bullet_Info(class APalWeaponBase* WeaponBase);
	void Setup_Delay_Gauge();
	void SetupBulletGauge(int32 MagazineSize);
	void SetUsableHandFlag(bool IsLeftHandUsable, bool IsRightHandUsable);
	void SetVisibilityShield(bool IsVisible_0);
	void SetWeaponNameText(class APalWeaponBase* WeaponBase);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TryUpdateMaxBullet();
	void Unbind_Last_Equiped_Weapon_Event();
	void Update_HP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& MaxHP);
	void Update_Now_Bullet_Num(int32 NowBulletNum);
	void Update_Weapon(class APalWeaponBase* WeaponBase);
	void Update_Weapon_Icon(class APalWeaponBase* WeaponBase);
	void UpdateMaxBulletNum(int32 MaxBulletNum);
	void UpdatePalInfo(class UPalIndividualCharacterSlot* TargetSlot);
	void UpdateShield(const struct FFixedPoint64& MaxShield, const struct FFixedPoint64& NowShield);
	void UpdateSP(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& MaxSP, bool IsOverHeated);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_PlayerGauge_Separated_C">();
	}
	static class UWBP_Ingame_PlayerGauge_Separated_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_PlayerGauge_Separated_C>();
	}
};
static_assert(alignof(UWBP_Ingame_PlayerGauge_Separated_C) == 0x000008, "Wrong alignment on UWBP_Ingame_PlayerGauge_Separated_C");
static_assert(sizeof(UWBP_Ingame_PlayerGauge_Separated_C) == 0x0004F8, "Wrong size on UWBP_Ingame_PlayerGauge_Separated_C");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_HP_Gauge_Default) == 0x000280, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_HP_Gauge_Default' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_HP_Gauge_Low) == 0x000288, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_HP_Gauge_Low' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_Weapon_Broken) == 0x000290, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_Weapon_Broken' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_Weapon_Default) == 0x000298, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_Weapon_Default' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_ShowHideRight) == 0x0002A0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_ShowHideRight' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_ShowHideLeft) == 0x0002A8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_ShowHideLeft' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_UseBullet) == 0x0002B0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_UseBullet' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_Damage) == 0x0002B8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_Damage' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_HPGaugeFlare_Yellow) == 0x0002C0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_HPGaugeFlare_Yellow' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_HPGaugeFlare_Blue) == 0x0002C8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_HPGaugeFlare_Blue' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_ShieldGaugeFlare_Color_Yellow) == 0x0002D0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_ShieldGaugeFlare_Color_Yellow' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Anm_ShieldGaugeFlare_Color_Blue) == 0x0002D8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Anm_ShieldGaugeFlare_Color_Blue' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Canvas_Shield) == 0x0002E0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Canvas_Shield' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Canvas_WeaponInfo) == 0x0002E8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Canvas_WeaponInfo' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, CanvasPanel_GrapplingGun_Cool) == 0x0002F0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::CanvasPanel_GrapplingGun_Cool' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, HorizontalBox_BallChangeKeyGuide) == 0x0002F8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::HorizontalBox_BallChangeKeyGuide' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, HorizontalBox_BallChangeKeyGuide_1) == 0x000300, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::HorizontalBox_BallChangeKeyGuide_1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, HorizontalBox_SphereNum) == 0x000308, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::HorizontalBox_SphereNum' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Icon_Weapon) == 0x000310, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Icon_Weapon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Image_Infinity) == 0x000318, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Image_Infinity' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Image_Sphere) == 0x000320, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Image_Sphere' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, ProgressBar_CoolProgress) == 0x000328, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::ProgressBar_CoolProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, ProgressBar_HPGauge) == 0x000330, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::ProgressBar_HPGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, ProgressBar_HPGauge_Back) == 0x000338, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::ProgressBar_HPGauge_Back' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, ProgressBar_ShieldGauge) == 0x000340, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::ProgressBar_ShieldGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, ProgressBar_ShieldGauge_Back) == 0x000348, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::ProgressBar_ShieldGauge_Back' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_CoolTimerNum) == 0x000350, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_CoolTimerNum' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_MaxBulletNum) == 0x000358, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_MaxBulletNum' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_MaxHP) == 0x000360, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_MaxHP' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_NowBulletNum) == 0x000368, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_NowBulletNum' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_NowHP) == 0x000370, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_NowHP' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_SphereName) == 0x000378, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_SphereName' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_SphereNum_1) == 0x000380, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_SphereNum_1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_SphereNum_10) == 0x000388, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_SphereNum_10' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_SphereNum_100) == 0x000390, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_SphereNum_100' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_SphereNum_Plus) == 0x000398, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_SphereNum_Plus' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, Text_WeaponName) == 0x0003A0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::Text_WeaponName' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, VerticalBox_BulletNum) == 0x0003A8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::VerticalBox_BulletNum' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_Ingame_PalHPGauge) == 0x0003B0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_Ingame_PalHPGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_Ingame_PlayerGauge_KeyGuide_PalInstruct) == 0x0003B8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_Ingame_PlayerGauge_KeyGuide_PalInstruct' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_Ingame_PlayerGauge_KeyGuide_SummonPal) == 0x0003C0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_Ingame_PlayerGauge_KeyGuide_SummonPal' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_Ingame_PlayerGauge_KeyGuide_ThrowSphere) == 0x0003C8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_Ingame_PlayerGauge_KeyGuide_ThrowSphere' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_Ingame_PlayerGauge_PalSphereNone) == 0x0003D0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_Ingame_PlayerGauge_PalSphereNone' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_Ingame_Thermometer) == 0x0003D8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_Ingame_Thermometer' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_Ingame_TimeZone) == 0x0003E0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_Ingame_TimeZone' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_IngameHungerGauge) == 0x0003E8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_IngameHungerGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_IngameStatusPoint) == 0x0003F0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_IngameStatusPoint' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_PlayerInputKeyGuideIcon_ChangeBallAiming) == 0x0003F8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_PlayerInputKeyGuideIcon_ChangeBallAiming' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1) == 0x000400, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_PlayerInputKeyGuideIcon_ChangeBallStatic) == 0x000408, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_PlayerInputKeyGuideIcon_ChangeBallStatic' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, WBP_StatusBuffTimerContainer) == 0x000410, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::WBP_StatusBuffTimerContainer' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, HpDelayGauge) == 0x000418, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::HpDelayGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, ShieldDelayGauge) == 0x000420, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::ShieldDelayGauge' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, NowHasWeapon) == 0x000428, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::NowHasWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, LasMaxBulletNum) == 0x000458, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::LasMaxBulletNum' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, LastNowBulletNum) == 0x00045C, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::LastNowBulletNum' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, SavedMagazineSize) == 0x000460, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::SavedMagazineSize' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, bulletGaugeMaterial) == 0x000468, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::bulletGaugeMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, LastShield) == 0x000470, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::LastShield' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, IsRiding) == 0x000478, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::IsRiding' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, CachedLastEquipBallID) == 0x00047C, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::CachedLastEquipBallID' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, BallIconMap) == 0x000488, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::BallIconMap' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, HideBallnameTimerHandle) == 0x0004D8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::HideBallnameTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, IsOverBallNameHideTimer) == 0x0004E0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::IsOverBallNameHideTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, IsAiming) == 0x0004E1, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::IsAiming' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, HasSpecialWeapon) == 0x0004E2, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::HasSpecialWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, IsNothingBall) == 0x0004E3, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::IsNothingBall' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, IsFirstUpdateHP) == 0x0004E4, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::IsFirstUpdateHP' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, CurrentGrenadeSlot) == 0x0004E8, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::CurrentGrenadeSlot' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_Separated_C, NoPalSphereNoticeDIsplayTime) == 0x0004F0, "Member 'UWBP_Ingame_PlayerGauge_Separated_C::NoPalSphereNoticeDIsplayTime' has a wrong offset!");

}

