#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_Reticle_Pal.WBP_Reticle_Pal_C
// 0x0098 (0x0310 - 0x0278)
class UWBP_Reticle_Pal_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Close;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Open;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anm_Loop;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Reticle_00;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Reticle_01;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Reticle_02;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ReticleCircle_03;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_AssignableDetail;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_AssignableTargetObjectName;                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_OtomoDead;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_122;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    AssignableMsgId;                                   // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    UnassignableMsgId;                                 // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    DeadPalThrowMsgID;                                 // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void AnmEvent_Close();
	void AnmEvent_Open();
	void ExecuteUbergraph_WBP_Reticle_Pal(int32 EntryPoint);
	void OnInitialized();
	void SetAssignableDetail(const struct FPalUIAimReticleMapObjectAssignableData& AssignableData);
	void SetOtomoDeadDetail(class UPalIndividualCharacterParameter* TargetIndividualParameter);
	void SetThrowableableDetail(const struct FPalUIAimReticleMapObjectThrowableData& ThrowableData);
	void SetVisibilityAssignableDetail(ESlateVisibility NewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Reticle_Pal_C">();
	}
	static class UWBP_Reticle_Pal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Reticle_Pal_C>();
	}
};
static_assert(alignof(UWBP_Reticle_Pal_C) == 0x000008, "Wrong alignment on UWBP_Reticle_Pal_C");
static_assert(sizeof(UWBP_Reticle_Pal_C) == 0x000310, "Wrong size on UWBP_Reticle_Pal_C");
static_assert(offsetof(UWBP_Reticle_Pal_C, UberGraphFrame) == 0x000278, "Member 'UWBP_Reticle_Pal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Anm_Close) == 0x000280, "Member 'UWBP_Reticle_Pal_C::Anm_Close' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Anm_Open) == 0x000288, "Member 'UWBP_Reticle_Pal_C::Anm_Open' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Anm_Loop) == 0x000290, "Member 'UWBP_Reticle_Pal_C::Anm_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Icon) == 0x000298, "Member 'UWBP_Reticle_Pal_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Reticle_00) == 0x0002A0, "Member 'UWBP_Reticle_Pal_C::Reticle_00' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Reticle_01) == 0x0002A8, "Member 'UWBP_Reticle_Pal_C::Reticle_01' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Reticle_02) == 0x0002B0, "Member 'UWBP_Reticle_Pal_C::Reticle_02' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, ReticleCircle_03) == 0x0002B8, "Member 'UWBP_Reticle_Pal_C::ReticleCircle_03' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Text_AssignableDetail) == 0x0002C0, "Member 'UWBP_Reticle_Pal_C::Text_AssignableDetail' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Text_AssignableTargetObjectName) == 0x0002C8, "Member 'UWBP_Reticle_Pal_C::Text_AssignableTargetObjectName' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, Text_OtomoDead) == 0x0002D0, "Member 'UWBP_Reticle_Pal_C::Text_OtomoDead' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, VerticalBox_122) == 0x0002D8, "Member 'UWBP_Reticle_Pal_C::VerticalBox_122' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, AssignableMsgId) == 0x0002E0, "Member 'UWBP_Reticle_Pal_C::AssignableMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, UnassignableMsgId) == 0x0002F0, "Member 'UWBP_Reticle_Pal_C::UnassignableMsgId' has a wrong offset!");
static_assert(offsetof(UWBP_Reticle_Pal_C, DeadPalThrowMsgID) == 0x000300, "Member 'UWBP_Reticle_Pal_C::DeadPalThrowMsgID' has a wrong offset!");

}

