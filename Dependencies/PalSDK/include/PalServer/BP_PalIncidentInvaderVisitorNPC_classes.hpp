#pragma once

#include "Basic.hpp"

#include "BP_PalIncidentInvaderBase_classes.hpp"
#include "Pal_structs.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalIncidentInvaderVisitorNPC.BP_PalIncidentInvaderVisitorNPC_C
// 0x0000 (0x0290 - 0x0290)
class UBP_PalIncidentInvaderVisitorNPC_C final : public UBP_PalIncidentInvaderBase_C
{
public:
	void EndProc();
	void Get_Character_Location_Type(EPalCharacterLocationType* CharacterLocationType);
	void Get_Chosen_Row_Data(struct FPalVisitorNPCDatabaseRow* ChosenRowData);
	bool GetInvaderStartPoint(struct FVector* Result);
	void IsSquad(bool* Result);
	void OnAllCharacterSpawned(TArray<class APalAIController*>& MemberController_0);
	void StartProc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalIncidentInvaderVisitorNPC_C">();
	}
	static class UBP_PalIncidentInvaderVisitorNPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalIncidentInvaderVisitorNPC_C>();
	}
};
static_assert(alignof(UBP_PalIncidentInvaderVisitorNPC_C) == 0x000010, "Wrong alignment on UBP_PalIncidentInvaderVisitorNPC_C");
static_assert(sizeof(UBP_PalIncidentInvaderVisitorNPC_C) == 0x000290, "Wrong size on UBP_PalIncidentInvaderVisitorNPC_C");

}

