#pragma once

#include "Basic.hpp"

#include "E_PalUIGuildHPGaugeDisplayType_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_GuildGauge.WBP_GuildGauge_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_GuildGauge_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 GaugeBase;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalProgressBar*                        PalProgressBar_Front_HP;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_HP_Back;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_GuildName;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LvNum;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PlayerName;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuildMemberGauge_C*                WBP_GuildMemberGauge;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_PalUIGuildHPGaugeDisplayType                CachedDisplayType;                                 // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUIDelayGaugeCalculator*             DelayGauge;                                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               FriendColorMat;                                    // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               EnemyColorMat;                                     // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_GuildGauge(int32 EntryPoint);
	void OnInitialized();
	void Set_Display_Type(E_PalUIGuildHPGaugeDisplayType NewDisplayType);
	void SetDying(class UBP_Status_Dying_C* DyingStatus, bool Enable);
	void SetGuildName(const class FString& GuildName);
	void SetHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& MaxHP);
	void SetLevel(int32 Level);
	void SetNickName(const class FString& NewNickName);
	void UpdateForTick(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GuildGauge_C">();
	}
	static class UWBP_GuildGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GuildGauge_C>();
	}
};
static_assert(alignof(UWBP_GuildGauge_C) == 0x000008, "Wrong alignment on UWBP_GuildGauge_C");
static_assert(sizeof(UWBP_GuildGauge_C) == 0x0002D8, "Wrong size on UWBP_GuildGauge_C");
static_assert(offsetof(UWBP_GuildGauge_C, UberGraphFrame) == 0x000278, "Member 'UWBP_GuildGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, GaugeBase) == 0x000280, "Member 'UWBP_GuildGauge_C::GaugeBase' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, PalProgressBar_Front_HP) == 0x000288, "Member 'UWBP_GuildGauge_C::PalProgressBar_Front_HP' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, ProgressBar_HP_Back) == 0x000290, "Member 'UWBP_GuildGauge_C::ProgressBar_HP_Back' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, Text_GuildName) == 0x000298, "Member 'UWBP_GuildGauge_C::Text_GuildName' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, Text_LvNum) == 0x0002A0, "Member 'UWBP_GuildGauge_C::Text_LvNum' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, Text_PlayerName) == 0x0002A8, "Member 'UWBP_GuildGauge_C::Text_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, WBP_GuildMemberGauge) == 0x0002B0, "Member 'UWBP_GuildGauge_C::WBP_GuildMemberGauge' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, CachedDisplayType) == 0x0002B8, "Member 'UWBP_GuildGauge_C::CachedDisplayType' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, DelayGauge) == 0x0002C0, "Member 'UWBP_GuildGauge_C::DelayGauge' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, FriendColorMat) == 0x0002C8, "Member 'UWBP_GuildGauge_C::FriendColorMat' has a wrong offset!");
static_assert(offsetof(UWBP_GuildGauge_C, EnemyColorMat) == 0x0002D0, "Member 'UWBP_GuildGauge_C::EnemyColorMat' has a wrong offset!");

}

