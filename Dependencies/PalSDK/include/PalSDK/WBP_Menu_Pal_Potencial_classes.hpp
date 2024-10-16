#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Menu_Pal_Potencial.WBP_Menu_Pal_Potencial_C
// 0x0058 (0x02D0 - 0x0278)
class UWBP_Menu_Pal_Potencial_C final : public UUserWidget
{
public:
	class UBP_PalTextBlock_C*                     BPPalTextBlock_HP_1;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_14;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_15;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_16;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_47;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_96;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_145;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Frame;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_ATK;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_DEF;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_HP;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void GetRankText(int32 TalentValue, class FText* RankText);
	void SetupByNum(int32 Talent_HP, int32 Talent_Attack, int32 Talent_Defense);
	void SetupByParameter(class UPalIndividualCharacterParameter* TargetParameter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Menu_Pal_Potencial_C">();
	}
	static class UWBP_Menu_Pal_Potencial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Menu_Pal_Potencial_C>();
	}
};
static_assert(alignof(UWBP_Menu_Pal_Potencial_C) == 0x000008, "Wrong alignment on UWBP_Menu_Pal_Potencial_C");
static_assert(sizeof(UWBP_Menu_Pal_Potencial_C) == 0x0002D0, "Wrong size on UWBP_Menu_Pal_Potencial_C");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, BPPalTextBlock_HP_1) == 0x000278, "Member 'UWBP_Menu_Pal_Potencial_C::BPPalTextBlock_HP_1' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Image_14) == 0x000280, "Member 'UWBP_Menu_Pal_Potencial_C::Image_14' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Image_15) == 0x000288, "Member 'UWBP_Menu_Pal_Potencial_C::Image_15' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Image_16) == 0x000290, "Member 'UWBP_Menu_Pal_Potencial_C::Image_16' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Image_47) == 0x000298, "Member 'UWBP_Menu_Pal_Potencial_C::Image_47' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Image_96) == 0x0002A0, "Member 'UWBP_Menu_Pal_Potencial_C::Image_96' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Image_145) == 0x0002A8, "Member 'UWBP_Menu_Pal_Potencial_C::Image_145' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Image_Frame) == 0x0002B0, "Member 'UWBP_Menu_Pal_Potencial_C::Image_Frame' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Text_ATK) == 0x0002B8, "Member 'UWBP_Menu_Pal_Potencial_C::Text_ATK' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Text_DEF) == 0x0002C0, "Member 'UWBP_Menu_Pal_Potencial_C::Text_DEF' has a wrong offset!");
static_assert(offsetof(UWBP_Menu_Pal_Potencial_C, Text_HP) == 0x0002C8, "Member 'UWBP_Menu_Pal_Potencial_C::Text_HP' has a wrong offset!");

}

