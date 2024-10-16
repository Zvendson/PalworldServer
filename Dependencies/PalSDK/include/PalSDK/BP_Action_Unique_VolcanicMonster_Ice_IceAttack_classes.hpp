#pragma once

#include "Basic.hpp"

#include "BP_Action_Unique_VolcanicMonster_MagmaAttack_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Action_Unique_VolcanicMonster_Ice_IceAttack.BP_Action_Unique_VolcanicMonster_Ice_IceAttack_C
// 0x0000 (0x0220 - 0x0220)
class UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C final : public UBP_Action_Unique_VolcanicMonster_MagmaAttack_C
{
public:
	void GetEffect(class UClass** NewParam);
	void GetMontage(class UAnimMontage** NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Unique_VolcanicMonster_Ice_IceAttack_C">();
	}
	static class UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C>();
	}
};
static_assert(alignof(UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C) == 0x000010, "Wrong alignment on UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C");
static_assert(sizeof(UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C) == 0x000220, "Wrong size on UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C");

}

