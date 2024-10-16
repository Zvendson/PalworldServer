#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "WBP_WorldMap_IconBase_NoDesign_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Map_IconPlayer.WBP_Map_IconPlayer_C
// 0x0098 (0x04F0 - 0x0458)
class UWBP_Map_IconPlayer_C final : public UWBP_WorldMap_IconBase_NoDesign_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_Map_IconPlayer_C;               // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Arrow;                                             // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_PlayerName;                                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonButton_C*                 WBP_PalCommonButton;                               // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_478[0x8];                                      // 0x0478(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalPlayerInfoForMap                   Cached_Map_Info;                                   // 0x0480(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Map_IconPlayer_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Map_IconPlayer(int32 EntryPoint);
	void GetLocationPosition(struct FVector* LocationPosition);
	void SetIsLocalPlayer(bool IsLocal);
	void SetPlayerStateMapInfo(const struct FPalPlayerInfoForMap& MapInfo);
	void UpdateMapInfo(const struct FPalPlayerInfoForMap& MapInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Map_IconPlayer_C">();
	}
	static class UWBP_Map_IconPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Map_IconPlayer_C>();
	}
};
static_assert(alignof(UWBP_Map_IconPlayer_C) == 0x000010, "Wrong alignment on UWBP_Map_IconPlayer_C");
static_assert(sizeof(UWBP_Map_IconPlayer_C) == 0x0004F0, "Wrong size on UWBP_Map_IconPlayer_C");
static_assert(offsetof(UWBP_Map_IconPlayer_C, UberGraphFrame_WBP_Map_IconPlayer_C) == 0x000458, "Member 'UWBP_Map_IconPlayer_C::UberGraphFrame_WBP_Map_IconPlayer_C' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconPlayer_C, Arrow) == 0x000460, "Member 'UWBP_Map_IconPlayer_C::Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconPlayer_C, Text_PlayerName) == 0x000468, "Member 'UWBP_Map_IconPlayer_C::Text_PlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconPlayer_C, WBP_PalCommonButton) == 0x000470, "Member 'UWBP_Map_IconPlayer_C::WBP_PalCommonButton' has a wrong offset!");
static_assert(offsetof(UWBP_Map_IconPlayer_C, Cached_Map_Info) == 0x000480, "Member 'UWBP_Map_IconPlayer_C::Cached_Map_Info' has a wrong offset!");

}

