#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C
// 0x0030 (0x0438 - 0x0408)
class UWBP_LoadingScreen_Transition_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_In;                                        // 0x0420(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoadingScreen_C*                   WBP_LoadingScreen;                                 // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_LoadingScreen_Transition(int32 EntryPoint);
	void Finished_65AD92BC4646C00F05936392250F90EA();
	void Finished_D300E47D4C210C5B9AC12E8500F6AC11();
	void SetBgColor(const struct FLinearColor& Color);
	void StartFadeIn();
	void StartFadeOut();
	void ToggleVisibility(bool Visiable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoadingScreen_Transition_C">();
	}
	static class UWBP_LoadingScreen_Transition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoadingScreen_Transition_C>();
	}
};
static_assert(alignof(UWBP_LoadingScreen_Transition_C) == 0x000008, "Wrong alignment on UWBP_LoadingScreen_Transition_C");
static_assert(sizeof(UWBP_LoadingScreen_Transition_C) == 0x000438, "Wrong size on UWBP_LoadingScreen_Transition_C");
static_assert(offsetof(UWBP_LoadingScreen_Transition_C, UberGraphFrame) == 0x000408, "Member 'UWBP_LoadingScreen_Transition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingScreen_Transition_C, FadeOut) == 0x000410, "Member 'UWBP_LoadingScreen_Transition_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingScreen_Transition_C, FadeIn) == 0x000418, "Member 'UWBP_LoadingScreen_Transition_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingScreen_Transition_C, Default_In) == 0x000420, "Member 'UWBP_LoadingScreen_Transition_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingScreen_Transition_C, CanvasPanel_0) == 0x000428, "Member 'UWBP_LoadingScreen_Transition_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingScreen_Transition_C, WBP_LoadingScreen) == 0x000430, "Member 'UWBP_LoadingScreen_Transition_C::WBP_LoadingScreen' has a wrong offset!");

}

