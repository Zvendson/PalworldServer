#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function WBP_Crime.WBP_Crime_C.CrimeBeFound
// 0x0010 (0x0010 - 0x0000)
struct WBP_Crime_C_CrimeBeFound final
{
public:
	TArray<class FName>                           CrimeIds;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Crime_C_CrimeBeFound) == 0x000008, "Wrong alignment on WBP_Crime_C_CrimeBeFound");
static_assert(sizeof(WBP_Crime_C_CrimeBeFound) == 0x000010, "Wrong size on WBP_Crime_C_CrimeBeFound");
static_assert(offsetof(WBP_Crime_C_CrimeBeFound, CrimeIds) == 0x000000, "Member 'WBP_Crime_C_CrimeBeFound::CrimeIds' has a wrong offset!");

// Function WBP_Crime.WBP_Crime_C.ExecuteUbergraph_WBP_Crime
// 0x0018 (0x0018 - 0x0000)
struct WBP_Crime_C_ExecuteUbergraph_WBP_Crime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Crime;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_CustomEvent_CrimeIds;                       // 0x0008(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(WBP_Crime_C_ExecuteUbergraph_WBP_Crime) == 0x000008, "Wrong alignment on WBP_Crime_C_ExecuteUbergraph_WBP_Crime");
static_assert(sizeof(WBP_Crime_C_ExecuteUbergraph_WBP_Crime) == 0x000018, "Wrong size on WBP_Crime_C_ExecuteUbergraph_WBP_Crime");
static_assert(offsetof(WBP_Crime_C_ExecuteUbergraph_WBP_Crime, EntryPoint) == 0x000000, "Member 'WBP_Crime_C_ExecuteUbergraph_WBP_Crime::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Crime_C_ExecuteUbergraph_WBP_Crime, K2Node_CustomEvent_Crime) == 0x000004, "Member 'WBP_Crime_C_ExecuteUbergraph_WBP_Crime::K2Node_CustomEvent_Crime' has a wrong offset!");
static_assert(offsetof(WBP_Crime_C_ExecuteUbergraph_WBP_Crime, K2Node_CustomEvent_CrimeIds) == 0x000008, "Member 'WBP_Crime_C_ExecuteUbergraph_WBP_Crime::K2Node_CustomEvent_CrimeIds' has a wrong offset!");

// Function WBP_Crime.WBP_Crime_C.SetCrime
// 0x0001 (0x0001 - 0x0000)
struct WBP_Crime_C_SetCrime final
{
public:
	bool                                          Crime;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Crime_C_SetCrime) == 0x000001, "Wrong alignment on WBP_Crime_C_SetCrime");
static_assert(sizeof(WBP_Crime_C_SetCrime) == 0x000001, "Wrong size on WBP_Crime_C_SetCrime");
static_assert(offsetof(WBP_Crime_C_SetCrime, Crime) == 0x000000, "Member 'WBP_Crime_C_SetCrime::Crime' has a wrong offset!");

}

