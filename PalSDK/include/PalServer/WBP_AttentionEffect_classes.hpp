#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_AttentionEffect.WBP_AttentionEffect_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_AttentionEffect_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Anm_Attention_RightToLeft_1;                       // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Attention_RightToLeft;                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_52;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AttentionEffect_C">();
	}
	static class UWBP_AttentionEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AttentionEffect_C>();
	}
};
static_assert(alignof(UWBP_AttentionEffect_C) == 0x000008, "Wrong alignment on UWBP_AttentionEffect_C");
static_assert(sizeof(UWBP_AttentionEffect_C) == 0x0002A0, "Wrong size on UWBP_AttentionEffect_C");
static_assert(offsetof(UWBP_AttentionEffect_C, Anm_Attention_RightToLeft_1) == 0x000278, "Member 'UWBP_AttentionEffect_C::Anm_Attention_RightToLeft_1' has a wrong offset!");
static_assert(offsetof(UWBP_AttentionEffect_C, Anm_Attention_RightToLeft) == 0x000280, "Member 'UWBP_AttentionEffect_C::Anm_Attention_RightToLeft' has a wrong offset!");
static_assert(offsetof(UWBP_AttentionEffect_C, Image) == 0x000288, "Member 'UWBP_AttentionEffect_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_AttentionEffect_C, Image_1) == 0x000290, "Member 'UWBP_AttentionEffect_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_AttentionEffect_C, Image_52) == 0x000298, "Member 'UWBP_AttentionEffect_C::Image_52' has a wrong offset!");

}

