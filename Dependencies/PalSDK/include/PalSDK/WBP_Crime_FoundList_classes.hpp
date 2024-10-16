#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Crime_FoundList.WBP_Crime_FoundList_C
// 0x0008 (0x0280 - 0x0278)
class UWBP_Crime_FoundList_C final : public UUserWidget
{
public:
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_CrimeName;                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetCrimeName(class FName CrimeId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Crime_FoundList_C">();
	}
	static class UWBP_Crime_FoundList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Crime_FoundList_C>();
	}
};
static_assert(alignof(UWBP_Crime_FoundList_C) == 0x000008, "Wrong alignment on UWBP_Crime_FoundList_C");
static_assert(sizeof(UWBP_Crime_FoundList_C) == 0x000280, "Wrong size on UWBP_Crime_FoundList_C");
static_assert(offsetof(UWBP_Crime_FoundList_C, BP_PalTextBlock_CrimeName) == 0x000278, "Member 'UWBP_Crime_FoundList_C::BP_PalTextBlock_CrimeName' has a wrong offset!");

}

