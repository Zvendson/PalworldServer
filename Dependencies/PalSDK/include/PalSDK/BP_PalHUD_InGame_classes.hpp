#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalHUD_InGame.BP_PalHUD_InGame_C
// 0x00D0 (0x06D8 - 0x0608)
class ABP_PalHUD_InGame_C final : public APalHUDInGame
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0608(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0610(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalLiftItem_C*                     UMG_LiftItem;                                      // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, EPalHUDWidgetPriority>    PriorityMap;                                       // 0x0620(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, class UPalUserWidget*>    CreatedWidgetMap;                                  // 0x0670(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGuid                                  NewVar;                                            // 0x06C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameOverUIBinded;                                  // 0x06D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AsyncLoadAndCreateWidget(TSoftClassPtr<class UClass> WidgetClass);
	void AsyncSetupHUDEvent();
	void BindGameOverUI();
	void CREATEDELEGATE_PROXYFUNCTION_0(class APalPlayerCharacter* PlayerCharacter, const struct FPalDyingEndInfo& DyingEndInfo);
	void DisplayHUD_Respawn();
	void ExecuteUbergraph_BP_PalHUD_InGame(int32 EntryPoint);
	void HideHUD_ForDeath();
	void HideLiftItemDisplay();
	void Initialize();
	void OnDyingEnd(class APalPlayerCharacter* PlayerCharacter, const struct FPalDyingEndInfo& DyingEndInfo);
	void OnLoaded_01D7FBF3483366434C8293A197BFD965(TSubclassOf<class UObject> Loaded);
	void OnLoaded_39EEADC54AE57646EA72A79D911211B6(TSubclassOf<class UObject> Loaded);
	void OnLoaded_EF35A3894C280426B58FA0A0D5280930(TSubclassOf<class UObject> Loaded);
	void OnRespawnPlayer(class APalPlayerCharacter* Player);
	void OnUpdateLiftSlot();
	void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void Setup_Lift_Item_Event();
	void SetupHUD_Internal();
	void ShowLiftItemDisplay();
	void UpdateWorldHUDs();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalHUD_InGame_C">();
	}
	static class ABP_PalHUD_InGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalHUD_InGame_C>();
	}
};
static_assert(alignof(ABP_PalHUD_InGame_C) == 0x000008, "Wrong alignment on ABP_PalHUD_InGame_C");
static_assert(sizeof(ABP_PalHUD_InGame_C) == 0x0006D8, "Wrong size on ABP_PalHUD_InGame_C");
static_assert(offsetof(ABP_PalHUD_InGame_C, UberGraphFrame) == 0x000608, "Member 'ABP_PalHUD_InGame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalHUD_InGame_C, DefaultSceneRoot) == 0x000610, "Member 'ABP_PalHUD_InGame_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalHUD_InGame_C, UMG_LiftItem) == 0x000618, "Member 'ABP_PalHUD_InGame_C::UMG_LiftItem' has a wrong offset!");
static_assert(offsetof(ABP_PalHUD_InGame_C, PriorityMap) == 0x000620, "Member 'ABP_PalHUD_InGame_C::PriorityMap' has a wrong offset!");
static_assert(offsetof(ABP_PalHUD_InGame_C, CreatedWidgetMap) == 0x000670, "Member 'ABP_PalHUD_InGame_C::CreatedWidgetMap' has a wrong offset!");
static_assert(offsetof(ABP_PalHUD_InGame_C, NewVar) == 0x0006C0, "Member 'ABP_PalHUD_InGame_C::NewVar' has a wrong offset!");
static_assert(offsetof(ABP_PalHUD_InGame_C, GameOverUIBinded) == 0x0006D0, "Member 'ABP_PalHUD_InGame_C::GameOverUIBinded' has a wrong offset!");

}

