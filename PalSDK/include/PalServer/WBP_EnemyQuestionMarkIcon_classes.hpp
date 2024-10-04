#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_EnemyQuestionMarkIcon.WBP_EnemyQuestionMarkIcon_C
// 0x0040 (0x0448 - 0x0408)
class UWBP_EnemyQuestionMarkIcon_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_EnemyNotice_Q_C*                   WBP_EnemyNotice_Q;                                 // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APalCharacter*                          TargetCharacter;                                   // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                           ScaleCurve;                                        // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PosX;                                              // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DisplayTime;                                       // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckEnd(bool* IsEnd);
	void Construct();
	void ExecuteUbergraph_WBP_EnemyQuestionMarkIcon(int32 EntryPoint);
	void Finished_65824A4344E87236A81F99B8C42BE19D();
	void Finished_AAA80C6F4C0998EEE3398EA3A4904D66();
	void OnInitialized();
	void Setup(class APalCharacter* TargetPal);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EnemyQuestionMarkIcon_C">();
	}
	static class UWBP_EnemyQuestionMarkIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EnemyQuestionMarkIcon_C>();
	}
};
static_assert(alignof(UWBP_EnemyQuestionMarkIcon_C) == 0x000008, "Wrong alignment on UWBP_EnemyQuestionMarkIcon_C");
static_assert(sizeof(UWBP_EnemyQuestionMarkIcon_C) == 0x000448, "Wrong size on UWBP_EnemyQuestionMarkIcon_C");
static_assert(offsetof(UWBP_EnemyQuestionMarkIcon_C, UberGraphFrame) == 0x000408, "Member 'UWBP_EnemyQuestionMarkIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyQuestionMarkIcon_C, Default_In) == 0x000410, "Member 'UWBP_EnemyQuestionMarkIcon_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyQuestionMarkIcon_C, WBP_EnemyNotice_Q) == 0x000418, "Member 'UWBP_EnemyQuestionMarkIcon_C::WBP_EnemyNotice_Q' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyQuestionMarkIcon_C, TargetCharacter) == 0x000420, "Member 'UWBP_EnemyQuestionMarkIcon_C::TargetCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyQuestionMarkIcon_C, ScaleCurve) == 0x000428, "Member 'UWBP_EnemyQuestionMarkIcon_C::ScaleCurve' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyQuestionMarkIcon_C, Timer) == 0x000430, "Member 'UWBP_EnemyQuestionMarkIcon_C::Timer' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyQuestionMarkIcon_C, PosX) == 0x000438, "Member 'UWBP_EnemyQuestionMarkIcon_C::PosX' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyQuestionMarkIcon_C, DisplayTime) == 0x000440, "Member 'UWBP_EnemyQuestionMarkIcon_C::DisplayTime' has a wrong offset!");

}

