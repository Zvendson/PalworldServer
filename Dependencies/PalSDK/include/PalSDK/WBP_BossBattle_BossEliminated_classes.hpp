#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace PalSDK
{

// WidgetBlueprintGeneratedClass WBP_BossBattle_BossEliminated.WBP_BossBattle_BossEliminated_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_BossBattle_BossEliminated_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_OpenClose;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_BossBattle_BossEliminated(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BossBattle_BossEliminated_C">();
	}
	static class UWBP_BossBattle_BossEliminated_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BossBattle_BossEliminated_C>();
	}
};
static_assert(alignof(UWBP_BossBattle_BossEliminated_C) == 0x000008, "Wrong alignment on UWBP_BossBattle_BossEliminated_C");
static_assert(sizeof(UWBP_BossBattle_BossEliminated_C) == 0x000288, "Wrong size on UWBP_BossBattle_BossEliminated_C");
static_assert(offsetof(UWBP_BossBattle_BossEliminated_C, UberGraphFrame) == 0x000278, "Member 'UWBP_BossBattle_BossEliminated_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BossBattle_BossEliminated_C, Anm_OpenClose) == 0x000280, "Member 'UWBP_BossBattle_BossEliminated_C::Anm_OpenClose' has a wrong offset!");

}

