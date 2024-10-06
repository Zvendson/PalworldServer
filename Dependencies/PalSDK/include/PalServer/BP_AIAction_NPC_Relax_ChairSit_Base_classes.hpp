#pragma once

#include "Basic.hpp"

#include "BP_AIAction_NPC_RelaxBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIAction_NPC_Relax_ChairSit_Base.BP_AIAction_NPC_Relax_ChairSit_Base_C
// 0x0000 (0x01F8 - 0x01F8)
class UBP_AIAction_NPC_Relax_ChairSit_Base_C : public UBP_AIAction_NPC_RelaxBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_NPC_Relax_ChairSit_Base_C">();
	}
	static class UBP_AIAction_NPC_Relax_ChairSit_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_NPC_Relax_ChairSit_Base_C>();
	}
};
static_assert(alignof(UBP_AIAction_NPC_Relax_ChairSit_Base_C) == 0x000008, "Wrong alignment on UBP_AIAction_NPC_Relax_ChairSit_Base_C");
static_assert(sizeof(UBP_AIAction_NPC_Relax_ChairSit_Base_C) == 0x0001F8, "Wrong size on UBP_AIAction_NPC_Relax_ChairSit_Base_C");

}

