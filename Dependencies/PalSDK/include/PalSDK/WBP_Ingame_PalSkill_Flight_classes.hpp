#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Ingame_PalSkill_Flight.WBP_Ingame_PalSkill_Flight_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_Ingame_PalSkill_Flight_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_InputHold;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_KeyGuide;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInputKeyGuideIcon_C*         WBP_PlayerInputKeyGuideIcon;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsUp;                                              // 0x0298(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    UpMsgId;                                           // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    DownMsgId;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnmEvent_EndInteract();
	void AnmEvent_StartInteract();
	void Construct();
	void ExecuteUbergraph_WBP_Ingame_PalSkill_Flight(int32 EntryPoint);
	void OnDownInputMethodChanged(ECommonInputType bNewInputType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Ingame_PalSkill_Flight_C">();
	}
	static class UWBP_Ingame_PalSkill_Flight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Ingame_PalSkill_Flight_C>();
	}
};
static_assert(alignof(UWBP_Ingame_PalSkill_Flight_C) == 0x000008, "Wrong alignment on UWBP_Ingame_PalSkill_Flight_C");
static_assert(sizeof(UWBP_Ingame_PalSkill_Flight_C) == 0x0002C0, "Wrong size on UWBP_Ingame_PalSkill_Flight_C");
static_assert(offsetof(UWBP_Ingame_PalSkill_Flight_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Ingame_PalSkill_Flight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkill_Flight_C, Anm_InputHold) == 0x000280, "Member 'UWBP_Ingame_PalSkill_Flight_C::Anm_InputHold' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkill_Flight_C, Text_KeyGuide) == 0x000288, "Member 'UWBP_Ingame_PalSkill_Flight_C::Text_KeyGuide' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkill_Flight_C, WBP_PlayerInputKeyGuideIcon) == 0x000290, "Member 'UWBP_Ingame_PalSkill_Flight_C::WBP_PlayerInputKeyGuideIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkill_Flight_C, IsUp) == 0x000298, "Member 'UWBP_Ingame_PalSkill_Flight_C::IsUp' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkill_Flight_C, UpMsgId) == 0x0002A0, "Member 'UWBP_Ingame_PalSkill_Flight_C::UpMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_Ingame_PalSkill_Flight_C, DownMsgId) == 0x0002B0, "Member 'UWBP_Ingame_PalSkill_Flight_C::DownMsgId' has a wrong offset!");

}

