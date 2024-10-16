#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_InGame_Arena.WBP_InGame_Arena_C
// 0x0038 (0x02B0 - 0x0278)
class UWBP_InGame_Arena_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InGame_Match_Draw_C*               WBP_InGame_Match_Draw;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Match_HP_C*                 WBP_InGame_Match_HP;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Match_SignalFinish_C*       WBP_InGame_Match_SignalFinish;                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InGame_Match_SignalStart_C*        WBP_InGame_Match_SignalStart;                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPalArenaSequencer*                     CurrentArenaSequence;                              // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_InGame_Match_Win_C*                CurrentWinUI;                                      // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void DrawUI();
	void ExecuteUbergraph_WBP_InGame_Arena(int32 EntryPoint);
	void Finished_768F02F4466EDA7C23960580EBC813FD();
	void Finished_7F5F79824D29F484AC06A58453CB091A();
	void Finished_C631FD5D4353912F9F507C91C9B4CBB7();
	void Finished_F607615543D9F7F46B1668A5448DE853();
	void OnArenaSequenceStart(class UPalArenaSequencer* ArenaSequence);
	void OnExitArena();
	void OnSequenceStageChanged(int32 CurrentIndex);
	void ReadyUI();
	void WinUI(const class FString& WinnerName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InGame_Arena_C">();
	}
	static class UWBP_InGame_Arena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InGame_Arena_C>();
	}
};
static_assert(alignof(UWBP_InGame_Arena_C) == 0x000008, "Wrong alignment on UWBP_InGame_Arena_C");
static_assert(sizeof(UWBP_InGame_Arena_C) == 0x0002B0, "Wrong size on UWBP_InGame_Arena_C");
static_assert(offsetof(UWBP_InGame_Arena_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InGame_Arena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Arena_C, WBP_InGame_Match_Draw) == 0x000280, "Member 'UWBP_InGame_Arena_C::WBP_InGame_Match_Draw' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Arena_C, WBP_InGame_Match_HP) == 0x000288, "Member 'UWBP_InGame_Arena_C::WBP_InGame_Match_HP' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Arena_C, WBP_InGame_Match_SignalFinish) == 0x000290, "Member 'UWBP_InGame_Arena_C::WBP_InGame_Match_SignalFinish' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Arena_C, WBP_InGame_Match_SignalStart) == 0x000298, "Member 'UWBP_InGame_Arena_C::WBP_InGame_Match_SignalStart' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Arena_C, CurrentArenaSequence) == 0x0002A0, "Member 'UWBP_InGame_Arena_C::CurrentArenaSequence' has a wrong offset!");
static_assert(offsetof(UWBP_InGame_Arena_C, CurrentWinUI) == 0x0002A8, "Member 'UWBP_InGame_Arena_C::CurrentWinUI' has a wrong offset!");

}

