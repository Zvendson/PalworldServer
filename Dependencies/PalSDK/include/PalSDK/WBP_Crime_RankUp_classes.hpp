#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Crime_RankUp.WBP_Crime_RankUp_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_Crime_RankUp_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_1;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_2;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Crime_RankUp_C">();
	}
	static class UWBP_Crime_RankUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Crime_RankUp_C>();
	}
};
static_assert(alignof(UWBP_Crime_RankUp_C) == 0x000008, "Wrong alignment on UWBP_Crime_RankUp_C");
static_assert(sizeof(UWBP_Crime_RankUp_C) == 0x000290, "Wrong size on UWBP_Crime_RankUp_C");
static_assert(offsetof(UWBP_Crime_RankUp_C, Anm_Open) == 0x000278, "Member 'UWBP_Crime_RankUp_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_RankUp_C, BP_PalTextBlock_1) == 0x000280, "Member 'UWBP_Crime_RankUp_C::BP_PalTextBlock_1' has a wrong offset!");
static_assert(offsetof(UWBP_Crime_RankUp_C, BP_PalTextBlock_2) == 0x000288, "Member 'UWBP_Crime_RankUp_C::BP_PalTextBlock_2' has a wrong offset!");

}

