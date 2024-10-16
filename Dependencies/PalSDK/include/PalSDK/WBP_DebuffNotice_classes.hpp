#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_PalUIPlayerDebuffNoticeType_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_DebuffNotice.WBP_DebuffNotice_C
// 0x0078 (0x02F0 - 0x0278)
class UWBP_DebuffNotice_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Flash;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Base;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_DebuffName;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<E_PalUIPlayerDebuffNoticeType, struct FDataTableRowHandle> MsgIDMap;                                          // 0x02A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AnmEvent_Flash();
	void ExecuteUbergraph_WBP_DebuffNotice(int32 EntryPoint);
	void Setup(E_PalUIPlayerDebuffNoticeType DebuffType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DebuffNotice_C">();
	}
	static class UWBP_DebuffNotice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DebuffNotice_C>();
	}
};
static_assert(alignof(UWBP_DebuffNotice_C) == 0x000008, "Wrong alignment on UWBP_DebuffNotice_C");
static_assert(sizeof(UWBP_DebuffNotice_C) == 0x0002F0, "Wrong size on UWBP_DebuffNotice_C");
static_assert(offsetof(UWBP_DebuffNotice_C, UberGraphFrame) == 0x000278, "Member 'UWBP_DebuffNotice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DebuffNotice_C, Anm_Flash) == 0x000280, "Member 'UWBP_DebuffNotice_C::Anm_Flash' has a wrong offset!");
static_assert(offsetof(UWBP_DebuffNotice_C, Base) == 0x000288, "Member 'UWBP_DebuffNotice_C::Base' has a wrong offset!");
static_assert(offsetof(UWBP_DebuffNotice_C, Frame) == 0x000290, "Member 'UWBP_DebuffNotice_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_DebuffNotice_C, Text_DebuffName) == 0x000298, "Member 'UWBP_DebuffNotice_C::Text_DebuffName' has a wrong offset!");
static_assert(offsetof(UWBP_DebuffNotice_C, MsgIDMap) == 0x0002A0, "Member 'UWBP_DebuffNotice_C::MsgIDMap' has a wrong offset!");

}

