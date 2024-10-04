#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_BossEnemyHPGauge.WBP_BossEnemyHPGauge_C
// 0x0040 (0x0448 - 0x0408)
class UWBP_BossEnemyHPGauge_C final : public UPalUICharacterHPGaugeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Close;                                             // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameBossHP_C*                    WBP_IngameBossHP;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APalCharacter*                          TargetCharacter;                                   // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       TargetIndividualParameter;                         // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDead;                                            // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsAlreadyDead;                                     // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Close();
	void Destruct();
	void ExecuteUbergraph_WBP_BossEnemyHPGauge(int32 EntryPoint);
	void Finished_10F7592E48B01E3F065E49BC1224338C();
	void On_Update_Level(int32 AddLevel, int32 NowLevel);
	void OnDead__DelegateSignature(class APalCharacter* TargetCharacter_0);
	void OnRequestClose();
	void OnUpdateElement(EPalElementType Type1, EPalElementType Type2);
	void OnUpdateHp(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP);
	void SetTargetCharacter(class APalCharacter* TargetCharacter_0);
	void SetupEvents();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateText();
	void UpdateVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BossEnemyHPGauge_C">();
	}
	static class UWBP_BossEnemyHPGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BossEnemyHPGauge_C>();
	}
};
static_assert(alignof(UWBP_BossEnemyHPGauge_C) == 0x000008, "Wrong alignment on UWBP_BossEnemyHPGauge_C");
static_assert(sizeof(UWBP_BossEnemyHPGauge_C) == 0x000448, "Wrong size on UWBP_BossEnemyHPGauge_C");
static_assert(offsetof(UWBP_BossEnemyHPGauge_C, UberGraphFrame) == 0x000408, "Member 'UWBP_BossEnemyHPGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BossEnemyHPGauge_C, Close) == 0x000410, "Member 'UWBP_BossEnemyHPGauge_C::Close' has a wrong offset!");
static_assert(offsetof(UWBP_BossEnemyHPGauge_C, WBP_IngameBossHP) == 0x000418, "Member 'UWBP_BossEnemyHPGauge_C::WBP_IngameBossHP' has a wrong offset!");
static_assert(offsetof(UWBP_BossEnemyHPGauge_C, TargetCharacter) == 0x000420, "Member 'UWBP_BossEnemyHPGauge_C::TargetCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_BossEnemyHPGauge_C, TargetIndividualParameter) == 0x000428, "Member 'UWBP_BossEnemyHPGauge_C::TargetIndividualParameter' has a wrong offset!");
static_assert(offsetof(UWBP_BossEnemyHPGauge_C, OnDead) == 0x000430, "Member 'UWBP_BossEnemyHPGauge_C::OnDead' has a wrong offset!");
static_assert(offsetof(UWBP_BossEnemyHPGauge_C, IsAlreadyDead) == 0x000440, "Member 'UWBP_BossEnemyHPGauge_C::IsAlreadyDead' has a wrong offset!");

}

