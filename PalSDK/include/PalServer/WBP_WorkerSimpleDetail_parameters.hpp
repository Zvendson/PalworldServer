#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function WBP_WorkerSimpleDetail.WBP_WorkerSimpleDetail_C.OpenSetup
// 0x0010 (0x0010 - 0x0000)
struct WBP_WorkerSimpleDetail_C_OpenSetup final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WorkerSimpleDetail_C_OpenSetup) == 0x000008, "Wrong alignment on WBP_WorkerSimpleDetail_C_OpenSetup");
static_assert(sizeof(WBP_WorkerSimpleDetail_C_OpenSetup) == 0x000010, "Wrong size on WBP_WorkerSimpleDetail_C_OpenSetup");
static_assert(offsetof(WBP_WorkerSimpleDetail_C_OpenSetup, TargetHandle) == 0x000000, "Member 'WBP_WorkerSimpleDetail_C_OpenSetup::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_WorkerSimpleDetail_C_OpenSetup, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_WorkerSimpleDetail_C_OpenSetup::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

