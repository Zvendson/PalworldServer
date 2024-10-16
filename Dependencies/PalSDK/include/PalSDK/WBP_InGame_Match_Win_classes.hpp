#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_InGame_Match_Win.WBP_InGame_Match_Win_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_InGame_Match_Win_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Win;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Win_Name;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_InGame_Match_Win(int32 EntryPoint);
	void SetWinner(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InGame_Match_Win_C">();
	}
	static class UWBP_InGame_Match_Win_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InGame_Match_Win_C>();
	}
};
static_assert(alignof(UWBP_InGame_Match_Win_C) == 0x000008, "Wrong alignment on UWBP_InGame_Match_Win_C");
static_assert(sizeof(UWBP_InGame_Match_Win_C) == 0x000290, "Wrong size on UWBP_InGame_Match_Win_C");
static_assert(offsetof(UWBP_InGame_Match_Win_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InGame_Match_Win_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_Win_C, Anm_Win) == 0x000280, "Member 'UWBP_InGame_Match_Win_C::Anm_Win' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_Win_C, Text_Win_Name) == 0x000288, "Member 'UWBP_InGame_Match_Win_C::Text_Win_Name' has a wrong offset!");

}

