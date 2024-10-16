#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "BP_AIAction_NPC_RelaxBase_classes.hpp"
#include "AIModule_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C
// 0x0060 (0x0258 - 0x01F8)
class UBP_AIAction_NPC_Relax_Talk_C final : public UBP_AIAction_NPC_RelaxBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_NPC_Relax_Talk_C;       // 0x01F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalActionBase*                         TalkAction;                                        // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FPalInstanceID                         SelfID;                                            // 0x0208(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsTalkingMotion;                                   // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_239[0x3];                                      // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentTalkID;                                     // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        TalkTimer;                                         // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsListeningMotion;                                 // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TalkInterval;                                      // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk(int32 EntryPoint);
	void GetMemberID(TArray<struct FPalInstanceID>* OutList);
	void PlayDefaultAction();
	void StopAction();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_NPC_Relax_Talk_C">();
	}
	static class UBP_AIAction_NPC_Relax_Talk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_NPC_Relax_Talk_C>();
	}
};
static_assert(alignof(UBP_AIAction_NPC_Relax_Talk_C) == 0x000008, "Wrong alignment on UBP_AIAction_NPC_Relax_Talk_C");
static_assert(sizeof(UBP_AIAction_NPC_Relax_Talk_C) == 0x000258, "Wrong size on UBP_AIAction_NPC_Relax_Talk_C");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Talk_C, UberGraphFrame_BP_AIAction_NPC_Relax_Talk_C) == 0x0001F8, "Member 'UBP_AIAction_NPC_Relax_Talk_C::UberGraphFrame_BP_AIAction_NPC_Relax_Talk_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Talk_C, TalkAction) == 0x000200, "Member 'UBP_AIAction_NPC_Relax_Talk_C::TalkAction' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Talk_C, SelfID) == 0x000208, "Member 'UBP_AIAction_NPC_Relax_Talk_C::SelfID' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Talk_C, IsTalkingMotion) == 0x000238, "Member 'UBP_AIAction_NPC_Relax_Talk_C::IsTalkingMotion' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Talk_C, CurrentTalkID) == 0x00023C, "Member 'UBP_AIAction_NPC_Relax_Talk_C::CurrentTalkID' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Talk_C, TalkTimer) == 0x000240, "Member 'UBP_AIAction_NPC_Relax_Talk_C::TalkTimer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Talk_C, IsListeningMotion) == 0x000248, "Member 'UBP_AIAction_NPC_Relax_Talk_C::IsListeningMotion' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_NPC_Relax_Talk_C, TalkInterval) == 0x000250, "Member 'UBP_AIAction_NPC_Relax_Talk_C::TalkInterval' has a wrong offset!");

}

