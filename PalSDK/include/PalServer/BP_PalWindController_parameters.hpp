#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_PalWindController.BP_PalWindController_C.ExecuteUbergraph_BP_PalWindController
// 0x0028 (0x0028 - 0x0000)
struct BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalWindInfo                           K2Node_Event_WindInfo;                             // 0x0008(0x0020)(ConstParm, NoDestructor)
};
static_assert(alignof(BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController) == 0x000008, "Wrong alignment on BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController");
static_assert(sizeof(BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController) == 0x000028, "Wrong size on BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController");
static_assert(offsetof(BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController, EntryPoint) == 0x000000, "Member 'BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController, K2Node_Event_WindInfo) == 0x000008, "Member 'BP_PalWindController_C_ExecuteUbergraph_BP_PalWindController::K2Node_Event_WindInfo' has a wrong offset!");

// Function BP_PalWindController.BP_PalWindController_C.UpdateNiagaraParameterCollection
// 0x0020 (0x0020 - 0x0000)
struct BP_PalWindController_C_UpdateNiagaraParameterCollection final
{
public:
	struct FPalWindInfo                           WindInfo;                                          // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_PalWindController_C_UpdateNiagaraParameterCollection) == 0x000008, "Wrong alignment on BP_PalWindController_C_UpdateNiagaraParameterCollection");
static_assert(sizeof(BP_PalWindController_C_UpdateNiagaraParameterCollection) == 0x000020, "Wrong size on BP_PalWindController_C_UpdateNiagaraParameterCollection");
static_assert(offsetof(BP_PalWindController_C_UpdateNiagaraParameterCollection, WindInfo) == 0x000000, "Member 'BP_PalWindController_C_UpdateNiagaraParameterCollection::WindInfo' has a wrong offset!");

// Function BP_PalWindController.BP_PalWindController_C.UpdateNPC
// 0x0028 (0x0028 - 0x0000)
struct BP_PalWindController_C_UpdateNPC final
{
public:
	struct FPalWindInfo                           WindInfo;                                          // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class UNiagaraParameterCollectionInstance*    CallFunc_GetNiagaraParameterCollection_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalWindController_C_UpdateNPC) == 0x000008, "Wrong alignment on BP_PalWindController_C_UpdateNPC");
static_assert(sizeof(BP_PalWindController_C_UpdateNPC) == 0x000028, "Wrong size on BP_PalWindController_C_UpdateNPC");
static_assert(offsetof(BP_PalWindController_C_UpdateNPC, WindInfo) == 0x000000, "Member 'BP_PalWindController_C_UpdateNPC::WindInfo' has a wrong offset!");
static_assert(offsetof(BP_PalWindController_C_UpdateNPC, CallFunc_GetNiagaraParameterCollection_ReturnValue) == 0x000020, "Member 'BP_PalWindController_C_UpdateNPC::CallFunc_GetNiagaraParameterCollection_ReturnValue' has a wrong offset!");

}

