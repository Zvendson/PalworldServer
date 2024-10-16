#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CrimeList_list.WBP_CrimeList_list_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_CrimeList_list_C final : public UUserWidget
{
public:
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_Count;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_CrimeName;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetCrime(class FName CrimeId, int32 CrimeCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CrimeList_list_C">();
	}
	static class UWBP_CrimeList_list_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CrimeList_list_C>();
	}
};
static_assert(alignof(UWBP_CrimeList_list_C) == 0x000008, "Wrong alignment on UWBP_CrimeList_list_C");
static_assert(sizeof(UWBP_CrimeList_list_C) == 0x000288, "Wrong size on UWBP_CrimeList_list_C");
static_assert(offsetof(UWBP_CrimeList_list_C, BP_PalTextBlock_Count) == 0x000278, "Member 'UWBP_CrimeList_list_C::BP_PalTextBlock_Count' has a wrong offset!");
static_assert(offsetof(UWBP_CrimeList_list_C, BP_PalTextBlock_CrimeName) == 0x000280, "Member 'UWBP_CrimeList_list_C::BP_PalTextBlock_CrimeName' has a wrong offset!");

}

