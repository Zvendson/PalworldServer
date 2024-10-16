#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalGameInstance.BP_PalGameInstance_C
// 0x00B0 (0x0880 - 0x07D0)
class UBP_PalGameInstance_C final : public UPalGameInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULoadingProcessTask*                    CurrentLoadingTask;                                // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_FadeWidget*    LoadingFadeParameter;                              // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                  LoadWorld;                                         // 0x07E8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	bool                                          ShowedCharaMake;                                   // 0x0818(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_819[0x7];                                      // 0x0819(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   OpeningActor;                                      // 0x0820(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   CutsceneName;                                      // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCutsceneActor*                      OpeningCutscene;                                   // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   FlagName;                                          // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayingID;                                         // 0x0868(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86C[0x4];                                      // 0x086C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CreateSessionErrorMsgId;                           // 0x0870(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void BP_PalGameInstance_AutoGenFunc(bool bResult);
	void Completed_32AFD11A49E65B7255FF4BA375D305CC(bool IsSuccess, const class FString& ErrorStr);
	void ExecuteUbergraph_BP_PalGameInstance(int32 EntryPoint);
	void LoadingFinished();
	void LoadLevel(const TSoftObjectPtr<class UWorld> Level, const class FString& Options, bool AutoClose);
	void OnCloseMap(class UPalHUDDispatchParameterBase* Param);
	void OnCompleteSetup();
	void OnFinishCutscene(bool IsSkipped);
	void OnShowSelectRespawnMap();
	void OverrideLoadMap(const TSoftObjectPtr<class UWorld>& World);
	void SetActivePlayerActor(bool Active);
	void SetPlayerSelectMap(bool IsSelecting);
	void SetupGameInit();
	void ShowCharacterMakeScreen();
	void StartGame(bool bNewGame, bool bListenServer);
	void StartLoading(const class UWBP_LoadingScreen_Transition_C*& CurrentLoadingWidget);
	void StartOpening();
	void ________________________(bool bResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalGameInstance_C">();
	}
	static class UBP_PalGameInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalGameInstance_C>();
	}
};
static_assert(alignof(UBP_PalGameInstance_C) == 0x000008, "Wrong alignment on UBP_PalGameInstance_C");
static_assert(sizeof(UBP_PalGameInstance_C) == 0x000880, "Wrong size on UBP_PalGameInstance_C");
static_assert(offsetof(UBP_PalGameInstance_C, UberGraphFrame) == 0x0007D0, "Member 'UBP_PalGameInstance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, CurrentLoadingTask) == 0x0007D8, "Member 'UBP_PalGameInstance_C::CurrentLoadingTask' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, LoadingFadeParameter) == 0x0007E0, "Member 'UBP_PalGameInstance_C::LoadingFadeParameter' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, LoadWorld) == 0x0007E8, "Member 'UBP_PalGameInstance_C::LoadWorld' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, ShowedCharaMake) == 0x000818, "Member 'UBP_PalGameInstance_C::ShowedCharaMake' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, OpeningActor) == 0x000820, "Member 'UBP_PalGameInstance_C::OpeningActor' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, CutsceneName) == 0x000850, "Member 'UBP_PalGameInstance_C::CutsceneName' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, OpeningCutscene) == 0x000858, "Member 'UBP_PalGameInstance_C::OpeningCutscene' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, FlagName) == 0x000860, "Member 'UBP_PalGameInstance_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, PlayingID) == 0x000868, "Member 'UBP_PalGameInstance_C::PlayingID' has a wrong offset!");
static_assert(offsetof(UBP_PalGameInstance_C, CreateSessionErrorMsgId) == 0x000870, "Member 'UBP_PalGameInstance_C::CreateSessionErrorMsgId' has a wrong offset!");

}

