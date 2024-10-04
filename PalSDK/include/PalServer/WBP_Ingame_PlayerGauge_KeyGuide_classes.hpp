#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Ingame_PlayerGauge_KeyGuide.WBP_Ingame_PlayerGauge_KeyGuide_C
// 0x0078 (0x02F0 - 0x0278)
class UWBP_Ingame_PlayerGauge_KeyGuide_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_KeyGuide;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1;    // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   bindActionName;                                    // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FDataTableRowHandle> MsgIDMap;                                          // 0x02A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide(int32 EntryPoint);
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_PlayerGauge_KeyGuide_C">();
	}
	static class UWBP_Ingame_PlayerGauge_KeyGuide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_PlayerGauge_KeyGuide_C>();
	}
};
static_assert(alignof(UWBP_Ingame_PlayerGauge_KeyGuide_C) == 0x000008, "Wrong alignment on UWBP_Ingame_PlayerGauge_KeyGuide_C");
static_assert(sizeof(UWBP_Ingame_PlayerGauge_KeyGuide_C) == 0x0002F0, "Wrong size on UWBP_Ingame_PlayerGauge_KeyGuide_C");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_KeyGuide_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Ingame_PlayerGauge_KeyGuide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_KeyGuide_C, Base) == 0x000280, "Member 'UWBP_Ingame_PlayerGauge_KeyGuide_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_KeyGuide_C, Text_KeyGuide) == 0x000288, "Member 'UWBP_Ingame_PlayerGauge_KeyGuide_C::Text_KeyGuide' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_KeyGuide_C, WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1) == 0x000290, "Member 'UWBP_Ingame_PlayerGauge_KeyGuide_C::WBP_PlayerInputKeyGuideIcon_ChangeBallAiming_1' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_KeyGuide_C, bindActionName) == 0x000298, "Member 'UWBP_Ingame_PlayerGauge_KeyGuide_C::bindActionName' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_KeyGuide_C, MsgIDMap) == 0x0002A0, "Member 'UWBP_Ingame_PlayerGauge_KeyGuide_C::MsgIDMap' has a wrong offset!");

}

