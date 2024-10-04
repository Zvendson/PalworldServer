#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_WarningUI.WBP_WarningUI_C
// 0x0010 (0x0418 - 0x0408)
class UWBP_WarningUI_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Warning_C*                         WBP_Warning;                                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Display_Supply(const struct FPalSupplyInfo& SupplyInfo);
	void DisplayServerNotice(const class FString& NoticeMessage);
	void DisplayWarning(class UPalBaseCampModel* TargetBaseCamp, const struct FPalInvaderDatabaseRow& ChosenInvaderData);
	void ExecuteUbergraph_WBP_WarningUI(int32 EntryPoint);
	void OnInitialized();
	void OnInvaderStart(const struct FPalIncidentBroadcastParameter& Parameter);
	void OnReceivedServerNotice(const class FString& NoticeMessage);
	void OnSupplyStart(const struct FPalSupplyInfo& SupplyInfo);
	void Play(const class FText& TitleText, const class FText& InfoText, double DisplayTime);
	void RegisterEvents();
	void WBP_WarningUI_AutoGenFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WarningUI_C">();
	}
	static class UWBP_WarningUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WarningUI_C>();
	}
};
static_assert(alignof(UWBP_WarningUI_C) == 0x000008, "Wrong alignment on UWBP_WarningUI_C");
static_assert(sizeof(UWBP_WarningUI_C) == 0x000418, "Wrong size on UWBP_WarningUI_C");
static_assert(offsetof(UWBP_WarningUI_C, UberGraphFrame) == 0x000408, "Member 'UWBP_WarningUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WarningUI_C, WBP_Warning) == 0x000410, "Member 'UWBP_WarningUI_C::WBP_Warning' has a wrong offset!");

}

