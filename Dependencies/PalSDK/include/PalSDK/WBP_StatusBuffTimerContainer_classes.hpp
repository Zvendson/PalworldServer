#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_StatusBuffTimerContainer.WBP_StatusBuffTimerContainer_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_StatusBuffTimerContainer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<EPalFoodStatusEffectType, int32>         Effects;                                           // 0x0288(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_StatusBuffTimerContainer(int32 EntryPoint);
	void UpdateCharacterBuff(class UPalIndividualCharacterParameter* IndividualParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StatusBuffTimerContainer_C">();
	}
	static class UWBP_StatusBuffTimerContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StatusBuffTimerContainer_C>();
	}
};
static_assert(alignof(UWBP_StatusBuffTimerContainer_C) == 0x000008, "Wrong alignment on UWBP_StatusBuffTimerContainer_C");
static_assert(sizeof(UWBP_StatusBuffTimerContainer_C) == 0x0002D8, "Wrong size on UWBP_StatusBuffTimerContainer_C");
static_assert(offsetof(UWBP_StatusBuffTimerContainer_C, UberGraphFrame) == 0x000278, "Member 'UWBP_StatusBuffTimerContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBuffTimerContainer_C, HorizontalBox) == 0x000280, "Member 'UWBP_StatusBuffTimerContainer_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_StatusBuffTimerContainer_C, Effects) == 0x000288, "Member 'UWBP_StatusBuffTimerContainer_C::Effects' has a wrong offset!");

}

