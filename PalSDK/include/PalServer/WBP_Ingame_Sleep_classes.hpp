#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_Ingame_Sleep.WBP_Ingame_Sleep_C
// 0x0018 (0x0290 - 0x0278)
class UWBP_Ingame_Sleep_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_In;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Num;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void CloseMenu();
	void ExecuteUbergraph_WBP_Ingame_Sleep(int32 EntryPoint);
	void SetSleepCount(int32 Count);
	void SetupMenu();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_Sleep_C">();
	}
	static class UWBP_Ingame_Sleep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_Sleep_C>();
	}
};
static_assert(alignof(UWBP_Ingame_Sleep_C) == 0x000008, "Wrong alignment on UWBP_Ingame_Sleep_C");
static_assert(sizeof(UWBP_Ingame_Sleep_C) == 0x000290, "Wrong size on UWBP_Ingame_Sleep_C");
static_assert(offsetof(UWBP_Ingame_Sleep_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Ingame_Sleep_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Sleep_C, Anm_In) == 0x000280, "Member 'UWBP_Ingame_Sleep_C::Anm_In' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_Sleep_C, Text_Num) == 0x000288, "Member 'UWBP_Ingame_Sleep_C::Text_Num' has a wrong offset!");

}

