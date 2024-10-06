#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalGenderIcon.WBP_PalGenderIcon_C
// 0x0008 (0x0280 - 0x0278)
class UWBP_PalGenderIcon_C final : public UUserWidget
{
public:
	class UImage*                                 Image_Gender;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Setup(EPalGenderType GenderType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalGenderIcon_C">();
	}
	static class UWBP_PalGenderIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalGenderIcon_C>();
	}
};
static_assert(alignof(UWBP_PalGenderIcon_C) == 0x000008, "Wrong alignment on UWBP_PalGenderIcon_C");
static_assert(sizeof(UWBP_PalGenderIcon_C) == 0x000280, "Wrong size on UWBP_PalGenderIcon_C");
static_assert(offsetof(UWBP_PalGenderIcon_C, Image_Gender) == 0x000278, "Member 'UWBP_PalGenderIcon_C::Image_Gender' has a wrong offset!");

}

