#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Notice_Deathlog.WBP_Notice_Deathlog_C
// 0x0080 (0x02F8 - 0x0278)
class UWBP_Notice_Deathlog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_In_Kill;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_out;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_In;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_AttackerIcon;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_DefenderIcon;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 RichTextBlock_Attacker;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 RichTextBlock_Defender;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalRichTextBlock_C*                 RichTextBlock_Reason;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_AttackerIcon;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_DefenderIcon;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Is_Short;                                          // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NowDisplayed;                                      // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShortDisplayEnd;                                   // 0x02DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LongDisplayEnd;                                    // 0x02DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC[0x4];                                      // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDeathLogEnd;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsKillLog;                                         // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckDisplay_Long();
	void CheckDisplay_Short();
	void ExecuteUbergraph_WBP_Notice_Deathlog(int32 EntryPoint);
	void Finished_594550FE491318B188D5B8A2D194C1DB();
	void GetDeathResonText(EPalKillLogDisplayType KillLogType, class FText* ReasonText);
	void MakeDeathLogText(const struct FPalKillLogDisplayData& DisplayData, class FText* AttackerName, class FText* DefenderName, class FText* Reason);
	void MakeKillLogText(const struct FPalKillLogDisplayData& DisplayData, class FText* AttackerName, class FText* DefenderName, class FText* Reason);
	void OnDeathLogEnd__DelegateSignature(class UWBP_Notice_Deathlog_C* EndedLog);
	void SetDisplayTime(double ShortDisplayTime, double LongDisplayTime);
	void SetDisplayTimeType(bool IsShort);
	void SetupAsDeathLog(const struct FPalKillLogDisplayData& DeathLogDisplayData);
	void SetupAsKillLog(const struct FPalKillLogDisplayData& KillLogDIsplayData);
	void SetupIcon(const struct FPalKillLogDisplayData& DisplayData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Notice_Deathlog_C">();
	}
	static class UWBP_Notice_Deathlog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Notice_Deathlog_C>();
	}
};
static_assert(alignof(UWBP_Notice_Deathlog_C) == 0x000008, "Wrong alignment on UWBP_Notice_Deathlog_C");
static_assert(sizeof(UWBP_Notice_Deathlog_C) == 0x0002F8, "Wrong size on UWBP_Notice_Deathlog_C");
static_assert(offsetof(UWBP_Notice_Deathlog_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Notice_Deathlog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Anm_In_Kill) == 0x000280, "Member 'UWBP_Notice_Deathlog_C::Anm_In_Kill' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Anm_out) == 0x000288, "Member 'UWBP_Notice_Deathlog_C::Anm_out' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Anm_In) == 0x000290, "Member 'UWBP_Notice_Deathlog_C::Anm_In' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Image_Arrow) == 0x000298, "Member 'UWBP_Notice_Deathlog_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Image_AttackerIcon) == 0x0002A0, "Member 'UWBP_Notice_Deathlog_C::Image_AttackerIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Image_DefenderIcon) == 0x0002A8, "Member 'UWBP_Notice_Deathlog_C::Image_DefenderIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, RichTextBlock_Attacker) == 0x0002B0, "Member 'UWBP_Notice_Deathlog_C::RichTextBlock_Attacker' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, RichTextBlock_Defender) == 0x0002B8, "Member 'UWBP_Notice_Deathlog_C::RichTextBlock_Defender' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, RichTextBlock_Reason) == 0x0002C0, "Member 'UWBP_Notice_Deathlog_C::RichTextBlock_Reason' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, SizeBox_AttackerIcon) == 0x0002C8, "Member 'UWBP_Notice_Deathlog_C::SizeBox_AttackerIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, SizeBox_DefenderIcon) == 0x0002D0, "Member 'UWBP_Notice_Deathlog_C::SizeBox_DefenderIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, Is_Short) == 0x0002D8, "Member 'UWBP_Notice_Deathlog_C::Is_Short' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, NowDisplayed) == 0x0002D9, "Member 'UWBP_Notice_Deathlog_C::NowDisplayed' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, ShortDisplayEnd) == 0x0002DA, "Member 'UWBP_Notice_Deathlog_C::ShortDisplayEnd' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, LongDisplayEnd) == 0x0002DB, "Member 'UWBP_Notice_Deathlog_C::LongDisplayEnd' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, OnDeathLogEnd) == 0x0002E0, "Member 'UWBP_Notice_Deathlog_C::OnDeathLogEnd' has a wrong offset!");
static_assert(offsetof(UWBP_Notice_Deathlog_C, IsKillLog) == 0x0002F0, "Member 'UWBP_Notice_Deathlog_C::IsKillLog' has a wrong offset!");

}

