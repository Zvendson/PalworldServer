#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C
// 0x0068 (0x00A8 - 0x0040)
class UBP_ArenaSequence_PartySelect_C final : public UPalArenaSequencePartySelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        PartySelectTime;                                   // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalArenaPlayerParty                   SelectParty;                                       // 0x0058(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          PlayerTeleported;                                  // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTimerUpdated;                                    // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPartySelectBreak;                                // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Breaked;                                           // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EndProcess();
	void ExecuteUbergraph_BP_ArenaSequence_PartySelect(int32 EntryPoint);
	void OnArenaBreak();
	void OnBeginSequence();
	void OnBreakSequence();
	void OnConfirmBreak(bool bResult);
	void OnEndSequence();
	void OnPartySelectBreak__DelegateSignature();
	void OnPlayerTeleported();
	void OnTimerUpdated__DelegateSignature(double Time);
	void OnTimeup();
	void PrintPartySelectLog();
	void SendParty();
	void SetParty(const struct FPalArenaPlayerParty& ArenaParty);
	void TickSequence(float DeltaTime);
	void UpdateTimer(double DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ArenaSequence_PartySelect_C">();
	}
	static class UBP_ArenaSequence_PartySelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ArenaSequence_PartySelect_C>();
	}
};
static_assert(alignof(UBP_ArenaSequence_PartySelect_C) == 0x000008, "Wrong alignment on UBP_ArenaSequence_PartySelect_C");
static_assert(sizeof(UBP_ArenaSequence_PartySelect_C) == 0x0000A8, "Wrong size on UBP_ArenaSequence_PartySelect_C");
static_assert(offsetof(UBP_ArenaSequence_PartySelect_C, UberGraphFrame) == 0x000040, "Member 'UBP_ArenaSequence_PartySelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_PartySelect_C, PartySelectTime) == 0x000048, "Member 'UBP_ArenaSequence_PartySelect_C::PartySelectTime' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_PartySelect_C, Timer) == 0x000050, "Member 'UBP_ArenaSequence_PartySelect_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_PartySelect_C, SelectParty) == 0x000058, "Member 'UBP_ArenaSequence_PartySelect_C::SelectParty' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_PartySelect_C, PlayerTeleported) == 0x000078, "Member 'UBP_ArenaSequence_PartySelect_C::PlayerTeleported' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_PartySelect_C, OnTimerUpdated) == 0x000080, "Member 'UBP_ArenaSequence_PartySelect_C::OnTimerUpdated' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_PartySelect_C, OnPartySelectBreak) == 0x000090, "Member 'UBP_ArenaSequence_PartySelect_C::OnPartySelectBreak' has a wrong offset!");
static_assert(offsetof(UBP_ArenaSequence_PartySelect_C, Breaked) == 0x0000A0, "Member 'UBP_ArenaSequence_PartySelect_C::Breaked' has a wrong offset!");

}

