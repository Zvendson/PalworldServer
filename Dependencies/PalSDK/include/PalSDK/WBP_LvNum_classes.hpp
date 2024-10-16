#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_LvNum.WBP_LvNum_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_LvNum_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Anm_shadow;                                        // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Normal;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_1;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        AlphaWhenTensPlaceIsZero;                          // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetLevel(int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LvNum_C">();
	}
	static class UWBP_LvNum_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LvNum_C>();
	}
};
static_assert(alignof(UWBP_LvNum_C) == 0x000008, "Wrong alignment on UWBP_LvNum_C");
static_assert(sizeof(UWBP_LvNum_C) == 0x0002A0, "Wrong size on UWBP_LvNum_C");
static_assert(offsetof(UWBP_LvNum_C, Anm_shadow) == 0x000278, "Member 'UWBP_LvNum_C::Anm_shadow' has a wrong offset!");
static_assert(offsetof(UWBP_LvNum_C, Anm_Normal) == 0x000280, "Member 'UWBP_LvNum_C::Anm_Normal' has a wrong offset!");
static_assert(offsetof(UWBP_LvNum_C, BP_PalTextBlock_C) == 0x000288, "Member 'UWBP_LvNum_C::BP_PalTextBlock_C' has a wrong offset!");
static_assert(offsetof(UWBP_LvNum_C, BP_PalTextBlock_C_1) == 0x000290, "Member 'UWBP_LvNum_C::BP_PalTextBlock_C_1' has a wrong offset!");
static_assert(offsetof(UWBP_LvNum_C, AlphaWhenTensPlaceIsZero) == 0x000298, "Member 'UWBP_LvNum_C::AlphaWhenTensPlaceIsZero' has a wrong offset!");

}

