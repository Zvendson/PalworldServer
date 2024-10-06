#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_InGame_Match_Draw.WBP_InGame_Match_Draw_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_InGame_Match_Draw_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Draw;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_InGame_Match_Draw(int32 EntryPoint);
	void SequenceEvent();
	void SequenceEvent__ENTRYPOINTWBP_InGame_Match_Draw();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InGame_Match_Draw_C">();
	}
	static class UWBP_InGame_Match_Draw_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InGame_Match_Draw_C>();
	}
};
static_assert(alignof(UWBP_InGame_Match_Draw_C) == 0x000008, "Wrong alignment on UWBP_InGame_Match_Draw_C");
static_assert(sizeof(UWBP_InGame_Match_Draw_C) == 0x000288, "Wrong size on UWBP_InGame_Match_Draw_C");
static_assert(offsetof(UWBP_InGame_Match_Draw_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InGame_Match_Draw_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Match_Draw_C, Anm_Draw) == 0x000280, "Member 'UWBP_InGame_Match_Draw_C::Anm_Draw' has a wrong offset!");

}

