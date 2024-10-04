#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C
// 0x0018 (0x0058 - 0x0040)
class UBP_ArenaSequence_PreBattle_C final : public UPalArenaSequenceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             ActivateReadyUI;                                   // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ActivatePals();
	void ActivateReadyUI__DelegateSignature();
	void ExecuteUbergraph_BP_ArenaSequence_PreBattle(int32 EntryPoint);
	void FadeOut();
	void OnBeginSequence();
	void OnCameraTarget(EPalArenaPlayerIndex PlayerIndex);
	void OnEndSequence();
	void OnFinishCutscene(bool bIsSkipped);
	void PlayCutscene();
	void RideLeaderPal();
	void SetDisableLookAtAllPal(bool IsDisable);
	void SetupFormation();
	void SetupLocalPlayerCamera();
	void SetupStatus();
	void ToggleMutePals(bool DisableCrying);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ArenaSequence_PreBattle_C">();
	}
	static class UBP_ArenaSequence_PreBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ArenaSequence_PreBattle_C>();
	}
};
static_assert(alignof(UBP_ArenaSequence_PreBattle_C) == 0x000008, "Wrong alignment on UBP_ArenaSequence_PreBattle_C");
static_assert(sizeof(UBP_ArenaSequence_PreBattle_C) == 0x000058, "Wrong size on UBP_ArenaSequence_PreBattle_C");
static_assert(offsetof(UBP_ArenaSequence_PreBattle_C, UberGraphFrame) == 0x000040, "Member 'UBP_ArenaSequence_PreBattle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_PreBattle_C, ActivateReadyUI) == 0x000048, "Member 'UBP_ArenaSequence_PreBattle_C::ActivateReadyUI' has a wrong offset!");

}

