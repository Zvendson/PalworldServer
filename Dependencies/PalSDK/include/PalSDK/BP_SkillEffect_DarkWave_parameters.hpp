#pragma once

#include "Basic.hpp"

#include "Niagara_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_DarkWave.BP_SkillEffect_DarkWave_C.ExecuteUbergraph_BP_SkillEffect_DarkWave
// 0x0050 (0x0050 - 0x0000)
struct BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBasicParticleData>             K2Node_Event_Data;                                 // 0x0018(0x0010)(ConstParm, ReferenceParm)
	class UNiagaraSystem*                         K2Node_Event_NiagaraSystem;                        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_SimulationPositionOffset;             // 0x0030(0x0018)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave) == 0x000008, "Wrong alignment on BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave");
static_assert(sizeof(BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave) == 0x000050, "Wrong size on BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave");
static_assert(offsetof(BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave, K2Node_Event_Data) == 0x000018, "Member 'BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave::K2Node_Event_Data' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave, K2Node_Event_NiagaraSystem) == 0x000028, "Member 'BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave::K2Node_Event_NiagaraSystem' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave, K2Node_Event_SimulationPositionOffset) == 0x000030, "Member 'BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave::K2Node_Event_SimulationPositionOffset' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'BP_SkillEffect_DarkWave_C_ExecuteUbergraph_BP_SkillEffect_DarkWave::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function BP_SkillEffect_DarkWave.BP_SkillEffect_DarkWave_C.ReceiveParticleData
// 0x0030 (0x0030 - 0x0000)
struct BP_SkillEffect_DarkWave_C_ReceiveParticleData final
{
public:
	TArray<struct FBasicParticleData>             Data;                                              // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UNiagaraSystem*                         NiagaraSystem;                                     // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SimulationPositionOffset;                          // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_DarkWave_C_ReceiveParticleData) == 0x000008, "Wrong alignment on BP_SkillEffect_DarkWave_C_ReceiveParticleData");
static_assert(sizeof(BP_SkillEffect_DarkWave_C_ReceiveParticleData) == 0x000030, "Wrong size on BP_SkillEffect_DarkWave_C_ReceiveParticleData");
static_assert(offsetof(BP_SkillEffect_DarkWave_C_ReceiveParticleData, Data) == 0x000000, "Member 'BP_SkillEffect_DarkWave_C_ReceiveParticleData::Data' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkWave_C_ReceiveParticleData, NiagaraSystem) == 0x000010, "Member 'BP_SkillEffect_DarkWave_C_ReceiveParticleData::NiagaraSystem' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_DarkWave_C_ReceiveParticleData, SimulationPositionOffset) == 0x000018, "Member 'BP_SkillEffect_DarkWave_C_ReceiveParticleData::SimulationPositionOffset' has a wrong offset!");

}

