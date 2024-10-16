#pragma once

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_PalOilrigController.BP_PalOilrigController_C.ExecuteUbergraph_BP_PalOilrigController
// 0x0038 (0x0038 - 0x0000)
struct BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController) == 0x000008, "Wrong alignment on BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController");
static_assert(sizeof(BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController) == 0x000038, "Wrong size on BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController");
static_assert(offsetof(BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController, EntryPoint) == 0x000000, "Member 'BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController, Temp_delegate_Variable) == 0x000004, "Member 'BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController, CallFunc_PostEvent_ReturnValue) == 0x000034, "Member 'BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

// Function BP_PalOilrigController.BP_PalOilrigController_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PalOilrigController_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalOilrigController_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PalOilrigController_C_ReceiveTick");
static_assert(sizeof(BP_PalOilrigController_C_ReceiveTick) == 0x000004, "Wrong size on BP_PalOilrigController_C_ReceiveTick");
static_assert(offsetof(BP_PalOilrigController_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PalOilrigController_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

