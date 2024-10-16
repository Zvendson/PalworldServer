#pragma once

#include "Basic.hpp"

#include "EPalCaptureReticleSeqence_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "EPalSphereCaptureFailedReason_structs.hpp"
#include "Engine_structs.hpp"
#include "E_PalCaptureSphereBouncedReason_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CaptureReticle.WBP_CaptureReticle_C
// 0x01B0 (0x05B8 - 0x0408)
class UWBP_CaptureReticle_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_Root;                                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalGetReticle_C*                   WBP_PalGetReticle;                                 // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Reticle_Cancel_C*                  WBP_Reticle_Cancel;                                // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APalPlayerController*                   LocalController;                                   // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      TraceObjectTypeQueryArray;                         // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EPalCaptureReticleSeqence                     ReticleSeqence;                                    // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class APalMonsterCharacter>    NowTargetMonster;                                  // 0x0448(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UPalLoadoutSelectorComponent*           LoadoutSelector;                                   // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCaptureItemEquiped;                              // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_481[0x7];                                      // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class APalWeaponBase>          LastEquipedWeapon;                                 // 0x0488(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<TSoftObjectPtr<class ABP_PalCaptureBodyBase_C>, class UWBP_PalGetReticle_C*> SecondStepWidgetMap;                               // 0x04B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsBonusEnabledWhenLastCheck;                       // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStopReticleUpdate;                               // 0x0509(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50A[0x6];                                      // 0x050A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ReticleStopTimer;                                  // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TSoftObjectPtr<class APalCharacter>, class UWBP_CaptureFailedPercent_C*> FailedCaptureRateWidgetMap;                        // 0x0518(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<E_PalCaptureSphereBouncedReason, EPalLogType> BouncedBallLogTypeMap;                             // 0x0568(0x0050)(Edit, BlueprintVisible)

public:
	void CalcCaptureSuccessRate(TArray<double>& RateArray, double* SuccessRate);
	void ChangeSeqence(EPalCaptureReticleSeqence NewSeqence);
	void DisplayCaptureFailedLog(class UPalIndividualCharacterHandle* TargetHandle);
	void ExecuteUbergraph_WBP_CaptureReticle(int32 EntryPoint);
	void FindTargetCharacter(class APalMonsterCharacter** TargetMonster);
	void Get_Display_Rate(class APalWeaponBase* CaptureItemActor, class APalMonsterCharacter* TargetMonster, double* Rate, bool* IsSneakBonus);
	void IsBonusEnabled(const struct FVector& baseLocation, class APalMonsterCharacter* TargeActor, bool* Enabled);
	void On_Change_Weapon(class APalWeaponBase* Weapon);
	void On_Shake_Ball(class ABP_PalCaptureBodyBase_C* ShakedBody);
	void OnBouncedBall(E_PalCaptureSphereBouncedReason ReasonType, class UPalIndividualCharacterHandle* TargetHandle);
	void OnFailedCapture(class UPalIndividualCharacterHandle* TargetHandle, EPalSphereCaptureFailedReason FailedReason);
	void OnFailedPercentWidgetClear(class UWBP_CaptureFailedPercent_C* SelfWidget);
	void OnInitialized();
	void OnPassingJudge(int32 PhaseCount, class UPalIndividualCharacterHandle* TargetHandle);
	void OnSetup_AfterCreatedPlayer();
	void OnStartedCapture(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TargetHandle, bool IsBonus);
	void OnSuccessedCapture(class UPalIndividualCharacterHandle* TargetHandle);
	void OnThrowCaptureWeapon(class AActor* Bullet);
	void RegisterWeaponEvent(class APalWeaponBase* NewWeapon);
	void Set_Display_Capture_Rate(class APalMonsterCharacter* TargetMonster, class APalWeaponBase* WeaponBase);
	void SetupAfterPlayerSpawned();
	void ShouldReticleDIsplay(bool* ShouldDisplay);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Unregister_Weapon_Event();
	void UpdateFailedWidgets(double DeltaTime);
	void UpdateSecondStepWidgetPosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CaptureReticle_C">();
	}
	static class UWBP_CaptureReticle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CaptureReticle_C>();
	}
};
static_assert(alignof(UWBP_CaptureReticle_C) == 0x000008, "Wrong alignment on UWBP_CaptureReticle_C");
static_assert(sizeof(UWBP_CaptureReticle_C) == 0x0005B8, "Wrong size on UWBP_CaptureReticle_C");
static_assert(offsetof(UWBP_CaptureReticle_C, UberGraphFrame) == 0x000408, "Member 'UWBP_CaptureReticle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, Canvas_Root) == 0x000410, "Member 'UWBP_CaptureReticle_C::Canvas_Root' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, WBP_PalGetReticle) == 0x000418, "Member 'UWBP_CaptureReticle_C::WBP_PalGetReticle' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, WBP_Reticle_Cancel) == 0x000420, "Member 'UWBP_CaptureReticle_C::WBP_Reticle_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, LocalController) == 0x000428, "Member 'UWBP_CaptureReticle_C::LocalController' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, TraceObjectTypeQueryArray) == 0x000430, "Member 'UWBP_CaptureReticle_C::TraceObjectTypeQueryArray' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, ReticleSeqence) == 0x000440, "Member 'UWBP_CaptureReticle_C::ReticleSeqence' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, NowTargetMonster) == 0x000448, "Member 'UWBP_CaptureReticle_C::NowTargetMonster' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, LoadoutSelector) == 0x000478, "Member 'UWBP_CaptureReticle_C::LoadoutSelector' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, IsCaptureItemEquiped) == 0x000480, "Member 'UWBP_CaptureReticle_C::IsCaptureItemEquiped' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, LastEquipedWeapon) == 0x000488, "Member 'UWBP_CaptureReticle_C::LastEquipedWeapon' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, SecondStepWidgetMap) == 0x0004B8, "Member 'UWBP_CaptureReticle_C::SecondStepWidgetMap' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, IsBonusEnabledWhenLastCheck) == 0x000508, "Member 'UWBP_CaptureReticle_C::IsBonusEnabledWhenLastCheck' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, IsStopReticleUpdate) == 0x000509, "Member 'UWBP_CaptureReticle_C::IsStopReticleUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, ReticleStopTimer) == 0x000510, "Member 'UWBP_CaptureReticle_C::ReticleStopTimer' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, FailedCaptureRateWidgetMap) == 0x000518, "Member 'UWBP_CaptureReticle_C::FailedCaptureRateWidgetMap' has a wrong offset!");
static_assert(offsetof(UWBP_CaptureReticle_C, BouncedBallLogTypeMap) == 0x000568, "Member 'UWBP_CaptureReticle_C::BouncedBallLogTypeMap' has a wrong offset!");

}

