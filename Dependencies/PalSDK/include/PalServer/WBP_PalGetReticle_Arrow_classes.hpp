#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PalGetReticle_Arrow.WBP_PalGetReticle_Arrow_C
// 0x0020 (0x0298 - 0x0278)
class UWBP_PalGetReticle_Arrow_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Anm_Down;                                          // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_UP;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 PerArrow_0;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PerArrow_1;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalGetReticle_Arrow_C">();
	}
	static class UWBP_PalGetReticle_Arrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalGetReticle_Arrow_C>();
	}
};
static_assert(alignof(UWBP_PalGetReticle_Arrow_C) == 0x000008, "Wrong alignment on UWBP_PalGetReticle_Arrow_C");
static_assert(sizeof(UWBP_PalGetReticle_Arrow_C) == 0x000298, "Wrong size on UWBP_PalGetReticle_Arrow_C");
static_assert(offsetof(UWBP_PalGetReticle_Arrow_C, Anm_Down) == 0x000278, "Member 'UWBP_PalGetReticle_Arrow_C::Anm_Down' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_Arrow_C, Anm_UP) == 0x000280, "Member 'UWBP_PalGetReticle_Arrow_C::Anm_UP' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_Arrow_C, PerArrow_0) == 0x000288, "Member 'UWBP_PalGetReticle_Arrow_C::PerArrow_0' has a wrong offset!");
static_assert(offsetof(UWBP_PalGetReticle_Arrow_C, PerArrow_1) == 0x000290, "Member 'UWBP_PalGetReticle_Arrow_C::PerArrow_1' has a wrong offset!");

}

