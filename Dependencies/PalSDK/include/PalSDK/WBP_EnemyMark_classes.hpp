#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_EnemyMark.WBP_EnemyMark_C
// 0x0028 (0x0430 - 0x0408)
class UWBP_EnemyMark_C final : public UPalUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0408(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_In;                                        // 0x0410(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_85;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C>> QuMarkList;                                        // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Construct();
	void ExecuteUbergraph_WBP_EnemyMark(int32 EntryPoint);
	void _________________________0(class APalCharacter* TargetCharacter);
	void _________________________1(class APalCharacter* TargetCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EnemyMark_C">();
	}
	static class UWBP_EnemyMark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EnemyMark_C>();
	}
};
static_assert(alignof(UWBP_EnemyMark_C) == 0x000008, "Wrong alignment on UWBP_EnemyMark_C");
static_assert(sizeof(UWBP_EnemyMark_C) == 0x000430, "Wrong size on UWBP_EnemyMark_C");
static_assert(offsetof(UWBP_EnemyMark_C, UberGraphFrame) == 0x000408, "Member 'UWBP_EnemyMark_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyMark_C, Default_In) == 0x000410, "Member 'UWBP_EnemyMark_C::Default_In' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyMark_C, CanvasPanel_85) == 0x000418, "Member 'UWBP_EnemyMark_C::CanvasPanel_85' has a wrong offset!");
static_assert(offsetof(UWBP_EnemyMark_C, QuMarkList) == 0x000420, "Member 'UWBP_EnemyMark_C::QuMarkList' has a wrong offset!");

}

