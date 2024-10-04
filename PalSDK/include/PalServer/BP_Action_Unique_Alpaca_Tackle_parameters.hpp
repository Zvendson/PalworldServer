#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle
// 0x0060 (0x0060 - 0x0000)
struct BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_UniqueSkillModule_Tackle_C*         CallFunc_CreateSkillActionModule_Module;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetUniqueActionTarget_TargetActor;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetUniqueActionTarget_TargetActor_1;      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAnimMontage* Montage, class FName NotifyName)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_CustomEvent_Montage;                        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle) == 0x000008, "Wrong alignment on BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle");
static_assert(sizeof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle) == 0x000060, "Wrong size on BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, EntryPoint) == 0x000000, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, K2Node_Event_DeltaTime) == 0x000004, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, CallFunc_CreateSkillActionModule_Module) == 0x000018, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::CallFunc_CreateSkillActionModule_Module' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, CallFunc_GetUniqueActionTarget_TargetActor) == 0x000020, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::CallFunc_GetUniqueActionTarget_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, CallFunc_GetUniqueActionTarget_TargetActor_1) == 0x000028, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::CallFunc_GetUniqueActionTarget_TargetActor_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, K2Node_CreateDelegate_OutputDelegate_2) == 0x000040, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, K2Node_CustomEvent_Montage) == 0x000050, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::K2Node_CustomEvent_Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle, K2Node_CustomEvent_NotifyName) == 0x000058, "Member 'BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle::K2Node_CustomEvent_NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.OnMontageNotify
// 0x0010 (0x0010 - 0x0000)
struct BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   NotifyName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify) == 0x000008, "Wrong alignment on BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify");
static_assert(sizeof(BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify) == 0x000010, "Wrong size on BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify, Montage) == 0x000000, "Member 'BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify::Montage' has a wrong offset!");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify, NotifyName) == 0x000008, "Member 'BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify::NotifyName' has a wrong offset!");

// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_Unique_Alpaca_Tackle_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_Unique_Alpaca_Tackle_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_Unique_Alpaca_Tackle_C_TickAction");
static_assert(sizeof(BP_Action_Unique_Alpaca_Tackle_C_TickAction) == 0x000004, "Wrong size on BP_Action_Unique_Alpaca_Tackle_C_TickAction");
static_assert(offsetof(BP_Action_Unique_Alpaca_Tackle_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_Unique_Alpaca_Tackle_C_TickAction::DeltaTime' has a wrong offset!");

}

