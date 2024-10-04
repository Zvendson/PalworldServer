#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_IngameFlyEff.WBP_IngameFlyEff_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_IngameFlyEff_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Fade;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_38;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Enabled;                                           // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          Character;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           UpdateEffTimer;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CachedVelocity;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EnableEff(bool IsEnable, class APalCharacter* Character_0);
	void ExecuteUbergraph_WBP_IngameFlyEff(int32 EntryPoint);
	void UpdateEff();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameFlyEff_C">();
	}
	static class UWBP_IngameFlyEff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameFlyEff_C>();
	}
};
static_assert(alignof(UWBP_IngameFlyEff_C) == 0x000008, "Wrong alignment on UWBP_IngameFlyEff_C");
static_assert(sizeof(UWBP_IngameFlyEff_C) == 0x0002C0, "Wrong size on UWBP_IngameFlyEff_C");
static_assert(offsetof(UWBP_IngameFlyEff_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameFlyEff_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameFlyEff_C, Anm_Fade) == 0x000280, "Member 'UWBP_IngameFlyEff_C::Anm_Fade' has a wrong offset!");
static_assert(offsetof(UWBP_IngameFlyEff_C, Image) == 0x000288, "Member 'UWBP_IngameFlyEff_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_IngameFlyEff_C, Image_38) == 0x000290, "Member 'UWBP_IngameFlyEff_C::Image_38' has a wrong offset!");
static_assert(offsetof(UWBP_IngameFlyEff_C, Enabled) == 0x000298, "Member 'UWBP_IngameFlyEff_C::Enabled' has a wrong offset!");
static_assert(offsetof(UWBP_IngameFlyEff_C, Character) == 0x0002A0, "Member 'UWBP_IngameFlyEff_C::Character' has a wrong offset!");
static_assert(offsetof(UWBP_IngameFlyEff_C, UpdateEffTimer) == 0x0002A8, "Member 'UWBP_IngameFlyEff_C::UpdateEffTimer' has a wrong offset!");
static_assert(offsetof(UWBP_IngameFlyEff_C, Visible) == 0x0002B0, "Member 'UWBP_IngameFlyEff_C::Visible' has a wrong offset!");
static_assert(offsetof(UWBP_IngameFlyEff_C, CachedVelocity) == 0x0002B8, "Member 'UWBP_IngameFlyEff_C::CachedVelocity' has a wrong offset!");

}

