#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "E_PalUIThrowObjectNoneMessageType_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C
// 0x0068 (0x02E0 - 0x0278)
class UWBP_Ingame_PlayerGauge_ThworObjectNone_C final : public UUserWidget
{
public:
	class UImage*                                 Base;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Main;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<E_PalUIThrowObjectNoneMessageType, struct FDataTableRowHandle> MsgIDMap;                                          // 0x0288(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           HideTimerHandle;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Display(double DisplayTime);
	void Hide();
	void OnTimer_Hide();
	void SetDisplayMode(E_PalUIThrowObjectNoneMessageType DisplayType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_PlayerGauge_ThworObjectNone_C">();
	}
	static class UWBP_Ingame_PlayerGauge_ThworObjectNone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_PlayerGauge_ThworObjectNone_C>();
	}
};
static_assert(alignof(UWBP_Ingame_PlayerGauge_ThworObjectNone_C) == 0x000008, "Wrong alignment on UWBP_Ingame_PlayerGauge_ThworObjectNone_C");
static_assert(sizeof(UWBP_Ingame_PlayerGauge_ThworObjectNone_C) == 0x0002E0, "Wrong size on UWBP_Ingame_PlayerGauge_ThworObjectNone_C");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_ThworObjectNone_C, Base) == 0x000278, "Member 'UWBP_Ingame_PlayerGauge_ThworObjectNone_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_ThworObjectNone_C, Text_Main) == 0x000280, "Member 'UWBP_Ingame_PlayerGauge_ThworObjectNone_C::Text_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_ThworObjectNone_C, MsgIDMap) == 0x000288, "Member 'UWBP_Ingame_PlayerGauge_ThworObjectNone_C::MsgIDMap' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PlayerGauge_ThworObjectNone_C, HideTimerHandle) == 0x0002D8, "Member 'UWBP_Ingame_PlayerGauge_ThworObjectNone_C::HideTimerHandle' has a wrong offset!");

}

