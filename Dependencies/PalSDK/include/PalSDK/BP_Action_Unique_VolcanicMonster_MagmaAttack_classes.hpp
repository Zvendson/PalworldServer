#pragma once

#include "Basic.hpp"

#include "BP_ActionUniqueAttackBase_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_Unique_VolcanicMonster_MagmaAttack.BP_Action_Unique_VolcanicMonster_MagmaAttack_C
// 0x0010 (0x0220 - 0x0210)
class UBP_Action_Unique_VolcanicMonster_MagmaAttack_C : public UBP_ActionUniqueAttackBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Unique_VolcanicMonster_MagmaAttack_C; // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack(int32 EntryPoint);
	void FindSpawnLocation(struct FVector* Location);
	void GetEffect(class UClass** NewParam);
	void GetMontage(class UAnimMontage** NewParam);
	void OnBeginAction();
	void OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName);
	void OnCompleted_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName);
	void OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName);
	void OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_VolcanicMonster_MagmaAttack_C">();
	}
	static class UBP_Action_Unique_VolcanicMonster_MagmaAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_VolcanicMonster_MagmaAttack_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_VolcanicMonster_MagmaAttack_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_VolcanicMonster_MagmaAttack_C");
static_assert(sizeof(UBP_Action_Unique_VolcanicMonster_MagmaAttack_C) == 0x000220, "Wrong size on UBP_Action_Unique_VolcanicMonster_MagmaAttack_C");
static_assert(offsetof(UBP_Action_Unique_VolcanicMonster_MagmaAttack_C, UberGraphFrame_BP_Action_Unique_VolcanicMonster_MagmaAttack_C) == 0x000210, "Member 'UBP_Action_Unique_VolcanicMonster_MagmaAttack_C::UberGraphFrame_BP_Action_Unique_VolcanicMonster_MagmaAttack_C' has a wrong offset!");

}

