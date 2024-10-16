#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_CharacterScrollListBlock.WBP_CharacterScrollListBlock_C
// 0x0008 (0x0410 - 0x0408)
class UWBP_CharacterScrollListBlock_C final : public UPalUserWidget
{
public:
	class UWrapBox*                               WrapBox_92;                                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharacterScrollListBlock_C">();
	}
	static class UWBP_CharacterScrollListBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharacterScrollListBlock_C>();
	}
};
static_assert(alignof(UWBP_CharacterScrollListBlock_C) == 0x000008, "Wrong alignment on UWBP_CharacterScrollListBlock_C");
static_assert(sizeof(UWBP_CharacterScrollListBlock_C) == 0x000410, "Wrong size on UWBP_CharacterScrollListBlock_C");
static_assert(offsetof(UWBP_CharacterScrollListBlock_C, WrapBox_92) == 0x000408, "Member 'UWBP_CharacterScrollListBlock_C::WrapBox_92' has a wrong offset!");

}

