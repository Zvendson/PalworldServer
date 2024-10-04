#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C
// 0x0080 (0x0488 - 0x0408)
class UWBP_PartnerSkillInfo_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_HideShow;                                      // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Ingame_PalSkillGauge_C*            WBP_Ingame_PalSkillGauge;                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*     CurrentPartnerSkillParameter;                      // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowCoolDown;                                    // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CheckPartnerSkillUnlockedTimer;                    // 0x0430(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHiding;                                          // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOverride;                                        // 0x0439(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43A[0x6];                                      // 0x043A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    RideMsgID;                                         // 0x0440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    GetoffMsgID;                                       // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          NowRiding;                                         // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NowCooping;                                        // 0x0461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentExcuting;                                   // 0x0462(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_463[0x5];                                      // 0x0463(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           AnmEndTimer;                                       // 0x0468(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         CacheRatio;                                        // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_474[0x4];                                      // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CancelMSGID;                                       // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnmEvent_HideShow(bool Hide_0, bool Override);
	void CanRideCharacter(bool* CanRide);
	void Change_Ride_Key_Guide(bool Ride);
	void Check_Partner_Skill_Unlocked_Timer();
	void Destruct();
	void EndExecuteAnmTimer();
	void ExecuteUbergraph_WBP_PartnerSkillInfo(int32 EntryPoint);
	void Get_Partner_Skill_Name_Text(class FText* SkillNameText);
	void GetOtomoPalHolder(class UBP_OtomoPalHolderComponent_C** OtomoPalHolder);
	void GetPartnerSkillParameter(class UPalPartnerSkillParameterComponent** PartnerSkillParameter);
	void Hide();
	void OnActivateOtomo();
	void OnInactiveOtomo();
	void OnStartCoop();
	void OnStopCoop();
	void ReleaseInput();
	void Setup();
	void SetupDisplay();
	void Should_Show_UI(bool* ShouldShow);
	void Show_Effect_Time();
	void ShowCoolDownTime();
	void ShowSkillExecuteAnm(bool IsExcuting);
	void ToggleCoopText(bool ShowOriginal);
	void TriggerInput();
	void Update_Cool_Down_Time(const struct FFixedPoint& Now, const struct FFixedPoint& Max);
	void Update_Effect_Time(const struct FFixedPoint& Now, const struct FFixedPoint& Max);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PartnerSkillInfo_C">();
	}
	static class UWBP_PartnerSkillInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PartnerSkillInfo_C>();
	}
};
static_assert(alignof(UWBP_PartnerSkillInfo_C) == 0x000008, "Wrong alignment on UWBP_PartnerSkillInfo_C");
static_assert(sizeof(UWBP_PartnerSkillInfo_C) == 0x000488, "Wrong size on UWBP_PartnerSkillInfo_C");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, UberGraphFrame) == 0x000408, "Member 'UWBP_PartnerSkillInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, Anm_HideShow) == 0x000410, "Member 'UWBP_PartnerSkillInfo_C::Anm_HideShow' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, WBP_Ingame_PalSkillGauge) == 0x000418, "Member 'UWBP_PartnerSkillInfo_C::WBP_Ingame_PalSkillGauge' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, CurrentPartnerSkillParameter) == 0x000420, "Member 'UWBP_PartnerSkillInfo_C::CurrentPartnerSkillParameter' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, IsShowCoolDown) == 0x000428, "Member 'UWBP_PartnerSkillInfo_C::IsShowCoolDown' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, CheckPartnerSkillUnlockedTimer) == 0x000430, "Member 'UWBP_PartnerSkillInfo_C::CheckPartnerSkillUnlockedTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, IsHiding) == 0x000438, "Member 'UWBP_PartnerSkillInfo_C::IsHiding' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, IsOverride) == 0x000439, "Member 'UWBP_PartnerSkillInfo_C::IsOverride' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, RideMsgID) == 0x000440, "Member 'UWBP_PartnerSkillInfo_C::RideMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, GetoffMsgID) == 0x000450, "Member 'UWBP_PartnerSkillInfo_C::GetoffMsgID' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, NowRiding) == 0x000460, "Member 'UWBP_PartnerSkillInfo_C::NowRiding' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, NowCooping) == 0x000461, "Member 'UWBP_PartnerSkillInfo_C::NowCooping' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, CurrentExcuting) == 0x000462, "Member 'UWBP_PartnerSkillInfo_C::CurrentExcuting' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, AnmEndTimer) == 0x000468, "Member 'UWBP_PartnerSkillInfo_C::AnmEndTimer' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, CacheRatio) == 0x000470, "Member 'UWBP_PartnerSkillInfo_C::CacheRatio' has a wrong offset!");
static_assert(offsetof(UWBP_PartnerSkillInfo_C, CancelMSGID) == 0x000478, "Member 'UWBP_PartnerSkillInfo_C::CancelMSGID' has a wrong offset!");

}

