#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_BattleEntry_MemberList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Listup;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PlayerName;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_HostIcon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LvNum;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LvTitle;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_BattleEntry_MemberList(int32 EntryPoint);
	void SetPlayerInfo(const class FString& PlayerName, int32 PlayLv, bool IsHost);
	void SetValidation(bool IsValid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BattleEntry_MemberList_C">();
	}
	static class UWBP_BattleEntry_MemberList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BattleEntry_MemberList_C>();
	}
};
static_assert(alignof(UWBP_BattleEntry_MemberList_C) == 0x000008, "Wrong alignment on UWBP_BattleEntry_MemberList_C");
static_assert(sizeof(UWBP_BattleEntry_MemberList_C) == 0x0002A8, "Wrong size on UWBP_BattleEntry_MemberList_C");
static_assert(offsetof(UWBP_BattleEntry_MemberList_C, UberGraphFrame) == 0x000278, "Member 'UWBP_BattleEntry_MemberList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_MemberList_C, Listup) == 0x000280, "Member 'UWBP_BattleEntry_MemberList_C::Listup' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_MemberList_C, BP_PlayerName) == 0x000288, "Member 'UWBP_BattleEntry_MemberList_C::BP_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_MemberList_C, Image_HostIcon) == 0x000290, "Member 'UWBP_BattleEntry_MemberList_C::Image_HostIcon' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_MemberList_C, Text_LvNum) == 0x000298, "Member 'UWBP_BattleEntry_MemberList_C::Text_LvNum' has a wrong offset!");
static_assert(offsetof(UWBP_BattleEntry_MemberList_C, Text_LvTitle) == 0x0002A0, "Member 'UWBP_BattleEntry_MemberList_C::Text_LvTitle' has a wrong offset!");

}

