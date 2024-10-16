#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_IngameDamageVinette.WBP_IngameDamageVinette_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_IngameDamageVinette_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Loop;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 DamageVinette;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DamageVinette_1;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AnmEvent_End();
	void AnmEvent_Start();
	void ExecuteUbergraph_WBP_IngameDamageVinette(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_IngameDamageVinette_C">();
	}
	static class UWBP_IngameDamageVinette_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_IngameDamageVinette_C>();
	}
};
static_assert(alignof(UWBP_IngameDamageVinette_C) == 0x000008, "Wrong alignment on UWBP_IngameDamageVinette_C");
static_assert(sizeof(UWBP_IngameDamageVinette_C) == 0x0002A8, "Wrong size on UWBP_IngameDamageVinette_C");
static_assert(offsetof(UWBP_IngameDamageVinette_C, UberGraphFrame) == 0x000278, "Member 'UWBP_IngameDamageVinette_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_IngameDamageVinette_C, Anm_Loop) == 0x000280, "Member 'UWBP_IngameDamageVinette_C::Anm_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_IngameDamageVinette_C, Anm_Close) == 0x000288, "Member 'UWBP_IngameDamageVinette_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_IngameDamageVinette_C, Anm_Open) == 0x000290, "Member 'UWBP_IngameDamageVinette_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_IngameDamageVinette_C, DamageVinette) == 0x000298, "Member 'UWBP_IngameDamageVinette_C::DamageVinette' has a wrong offset!");
static_assert(offsetof(UWBP_IngameDamageVinette_C, DamageVinette_1) == 0x0002A0, "Member 'UWBP_IngameDamageVinette_C::DamageVinette_1' has a wrong offset!");

}

