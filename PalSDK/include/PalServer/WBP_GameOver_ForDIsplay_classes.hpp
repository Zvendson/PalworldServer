#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// WidgetBlueprintGeneratedClass WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C
// 0x0020 (0x0450 - 0x0430)
class UWBP_GameOver_ForDIsplay_C final : public UPalUIGameOver
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_GameOver_Defeat_C*                 WBP_GameOver_Defeat;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           BlockRespawnTimerHandle;                           // 0x0440(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          CanRespawn;                                        // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_GameOver_ForDIsplay(int32 EntryPoint);
	void OnCancelAction();
	void OnClickedRespawnButton();
	void OnEndedRespawnBlockTime();
	void OnFinishedClose();
	void OnFinishedOpen();
	void OnInitialized();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameOver_ForDIsplay_C">();
	}
	static class UWBP_GameOver_ForDIsplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameOver_ForDIsplay_C>();
	}
};
static_assert(alignof(UWBP_GameOver_ForDIsplay_C) == 0x000008, "Wrong alignment on UWBP_GameOver_ForDIsplay_C");
static_assert(sizeof(UWBP_GameOver_ForDIsplay_C) == 0x000450, "Wrong size on UWBP_GameOver_ForDIsplay_C");
static_assert(offsetof(UWBP_GameOver_ForDIsplay_C, UberGraphFrame) == 0x000430, "Member 'UWBP_GameOver_ForDIsplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_ForDIsplay_C, WBP_GameOver_Defeat) == 0x000438, "Member 'UWBP_GameOver_ForDIsplay_C::WBP_GameOver_Defeat' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_ForDIsplay_C, BlockRespawnTimerHandle) == 0x000440, "Member 'UWBP_GameOver_ForDIsplay_C::BlockRespawnTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_GameOver_ForDIsplay_C, CanRespawn) == 0x000448, "Member 'UWBP_GameOver_ForDIsplay_C::CanRespawn' has a wrong offset!");

}

