#pragma once

#include "Basic.hpp"

#include "E_PalUIGuildHPGaugeDisplayType_structs.hpp"
#include "Engine_structs.hpp"
#include "WBP_IndividualParameterBindWidget_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_PlayerHPGauge.WBP_PlayerHPGauge_C
// 0x0050 (0x0608 - 0x05B8)
class UWBP_PlayerHPGauge_C final : public UWBP_IndividualParameterBindWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PlayerHPGauge_C;                // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_GuildGauge_C*                      WBP_GuildGauge;                                    // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         ImportedSphereRadius;                              // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC[0x4];                                      // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              DrawOffset;                                        // 0x05D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckActorTimerHandle;                             // 0x05E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckDisplayTypeTimerHandle;                       // 0x05E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_Status_Dying_C*                     CachedDyingStatus;                                 // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDelayClose;                                      // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle);
	void DelayClose();
	void Destruct();
	void ExecuteUbergraph_WBP_PlayerHPGauge(int32 EntryPoint);
	void On_Timer_Event_Check_Guild();
	void OnDelayClose__DelegateSignature(class UWidget* Widget);
	void OnDyingEnd();
	void OnInitialized();
	void OnTimerEvent_CheckActor();
	void OnUpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void OnUpdateLevel_binded(int32 NewLevel);
	void OnUpdateNickName_Binded(const class FString& NewNickName);
	void SetupByActor();
	void SetupDying();
	void UpdateForTick(double DeltaTime);
	void UpdateWidgetPosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerHPGauge_C">();
	}
	static class UWBP_PlayerHPGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerHPGauge_C>();
	}
};
static_assert(alignof(UWBP_PlayerHPGauge_C) == 0x000008, "Wrong alignment on UWBP_PlayerHPGauge_C");
static_assert(sizeof(UWBP_PlayerHPGauge_C) == 0x000608, "Wrong size on UWBP_PlayerHPGauge_C");
static_assert(offsetof(UWBP_PlayerHPGauge_C, UberGraphFrame_WBP_PlayerHPGauge_C) == 0x0005B8, "Member 'UWBP_PlayerHPGauge_C::UberGraphFrame_WBP_PlayerHPGauge_C' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerHPGauge_C, WBP_GuildGauge) == 0x0005C0, "Member 'UWBP_PlayerHPGauge_C::WBP_GuildGauge' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerHPGauge_C, ImportedSphereRadius) == 0x0005C8, "Member 'UWBP_PlayerHPGauge_C::ImportedSphereRadius' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerHPGauge_C, DrawOffset) == 0x0005D0, "Member 'UWBP_PlayerHPGauge_C::DrawOffset' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerHPGauge_C, CheckActorTimerHandle) == 0x0005E0, "Member 'UWBP_PlayerHPGauge_C::CheckActorTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerHPGauge_C, CheckDisplayTypeTimerHandle) == 0x0005E8, "Member 'UWBP_PlayerHPGauge_C::CheckDisplayTypeTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerHPGauge_C, CachedDyingStatus) == 0x0005F0, "Member 'UWBP_PlayerHPGauge_C::CachedDyingStatus' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerHPGauge_C, OnDelayClose) == 0x0005F8, "Member 'UWBP_PlayerHPGauge_C::OnDelayClose' has a wrong offset!");

}

