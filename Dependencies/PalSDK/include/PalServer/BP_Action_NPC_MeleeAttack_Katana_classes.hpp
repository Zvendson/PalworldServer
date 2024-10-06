#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_Action_NPC_MeleeAttack_Katana.BP_Action_NPC_MeleeAttack_Katana_C
// 0x0010 (0x0150 - 0x0140)
class UBP_Action_NPC_MeleeAttack_Katana_C final : public UPalActionBase
{
public:
	uint8                                         Pad_138[0x8];                                      // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           AttackAnime;                                       // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_NPC_MeleeAttack_Katana(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_1B2C74534DDC0999FABA0BAD78AFE4DB(class FName NotifyName);
	void OnCompleted_1B2C74534DDC0999FABA0BAD78AFE4DB(class FName NotifyName);
	void OnInterrupted_1B2C74534DDC0999FABA0BAD78AFE4DB(class FName NotifyName);
	void OnNotifyBegin_1B2C74534DDC0999FABA0BAD78AFE4DB(class FName NotifyName);
	void OnNotifyEnd_1B2C74534DDC0999FABA0BAD78AFE4DB(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_NPC_MeleeAttack_Katana_C">();
	}
	static class UBP_Action_NPC_MeleeAttack_Katana_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_NPC_MeleeAttack_Katana_C>();
	}
};
static_assert(alignof(UBP_Action_NPC_MeleeAttack_Katana_C) == 0x000010, "Wrong alignment on UBP_Action_NPC_MeleeAttack_Katana_C");
static_assert(sizeof(UBP_Action_NPC_MeleeAttack_Katana_C) == 0x000150, "Wrong size on UBP_Action_NPC_MeleeAttack_Katana_C");
static_assert(offsetof(UBP_Action_NPC_MeleeAttack_Katana_C, UberGraphFrame) == 0x000140, "Member 'UBP_Action_NPC_MeleeAttack_Katana_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_NPC_MeleeAttack_Katana_C, AttackAnime) == 0x000148, "Member 'UBP_Action_NPC_MeleeAttack_Katana_C::AttackAnime' has a wrong offset!");

}

