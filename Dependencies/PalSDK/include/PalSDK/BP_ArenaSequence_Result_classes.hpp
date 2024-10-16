#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "AkAudio_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ArenaSequence_Result.BP_ArenaSequence_Result_C
// 0x0058 (0x0098 - 0x0040)
class UBP_ArenaSequence_Result_C final : public UPalArenaSequenceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class APalCharacter*>                  MontagePlayCharacters;                             // 0x0048(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APalCharacter*>                  Inactivated_Characters;                            // 0x0058(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnDraw;                                            // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnWin;                                             // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCutsceneFinish;                                  // 0x0088(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void End_Process();
	void ExecuteUbergraph_BP_ArenaSequence_Result(int32 EntryPoint);
	void GetOffAllPlayer();
	void InactivateCharacter(class APalCharacter* Character);
	bool IsWinPlayerIndex(EPalArenaPlayerIndex PlayerIndex);
	void OnBeginSequence();
	void OnCutsceneFinish__DelegateSignature();
	void OnDraw__DelegateSignature();
	void OnFinishCutscene(bool bIsSkipped);
	void OnWin__DelegateSignature(const class FString& WinnerName);
	void PlayResultMontage(class APalCharacter* Character, class UAnimMontage* AnimMontage);
	void PlayResultSound();
	void Set_Disable_Movement(bool IsDisable);
	void SetDisableLookAtAllPal(bool IsDisable);
	void SetupFormation();
	void StopMontages();
	void ToggleLocalInput(bool IsDisable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ArenaSequence_Result_C">();
	}
	static class UBP_ArenaSequence_Result_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ArenaSequence_Result_C>();
	}
};
static_assert(alignof(UBP_ArenaSequence_Result_C) == 0x000008, "Wrong alignment on UBP_ArenaSequence_Result_C");
static_assert(sizeof(UBP_ArenaSequence_Result_C) == 0x000098, "Wrong size on UBP_ArenaSequence_Result_C");
static_assert(offsetof(UBP_ArenaSequence_Result_C, UberGraphFrame) == 0x000040, "Member 'UBP_ArenaSequence_Result_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_Result_C, MontagePlayCharacters) == 0x000048, "Member 'UBP_ArenaSequence_Result_C::MontagePlayCharacters' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_Result_C, Inactivated_Characters) == 0x000058, "Member 'UBP_ArenaSequence_Result_C::Inactivated_Characters' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_Result_C, OnDraw) == 0x000068, "Member 'UBP_ArenaSequence_Result_C::OnDraw' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_Result_C, OnWin) == 0x000078, "Member 'UBP_ArenaSequence_Result_C::OnWin' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_Result_C, OnCutsceneFinish) == 0x000088, "Member 'UBP_ArenaSequence_Result_C::OnCutsceneFinish' has a wrong offset!");

}

