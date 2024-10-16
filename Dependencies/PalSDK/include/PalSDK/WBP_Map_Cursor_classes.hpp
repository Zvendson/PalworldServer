#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Map_Cursor.WBP_Map_Cursor_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_Map_Cursor_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Focus;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Loop;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Focus();
	void AnmEvent_Loop();
	void AnmEvent_Reset();
	void AnmEvent_Unfocus();
	void Construct();
	void ExecuteUbergraph_WBP_Map_Cursor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_Cursor_C">();
	}
	static class UWBP_Map_Cursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_Cursor_C>();
	}
};
static_assert(alignof(UWBP_Map_Cursor_C) == 0x000008, "Wrong alignment on UWBP_Map_Cursor_C");
static_assert(sizeof(UWBP_Map_Cursor_C) == 0x000290, "Wrong size on UWBP_Map_Cursor_C");
static_assert(offsetof(UWBP_Map_Cursor_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Map_Cursor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Cursor_C, Anm_Focus) == 0x000280, "Member 'UWBP_Map_Cursor_C::Anm_Focus' has a wrong offset!");
static_assert(offsetof(UWBP_Map_Cursor_C, Anm_Loop) == 0x000288, "Member 'UWBP_Map_Cursor_C::Anm_Loop' has a wrong offset!");

}

