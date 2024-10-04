#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_NewDot.WBP_MainMenu_NewDot_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_MainMenu_NewDot_C final : public UUserWidget
{
public:
	class UImage*                                 Dot;                                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flare_1;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_NewDot_C">();
	}
	static class UWBP_MainMenu_NewDot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_NewDot_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_NewDot_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_NewDot_C");
static_assert(sizeof(UWBP_MainMenu_NewDot_C) == 0x000288, "Wrong size on UWBP_MainMenu_NewDot_C");
static_assert(offsetof(UWBP_MainMenu_NewDot_C, Dot) == 0x000278, "Member 'UWBP_MainMenu_NewDot_C::Dot' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_NewDot_C, Flare_1) == 0x000280, "Member 'UWBP_MainMenu_NewDot_C::Flare_1' has a wrong offset!");

}

