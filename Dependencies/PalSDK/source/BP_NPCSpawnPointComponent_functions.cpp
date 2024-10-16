#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_NPCSpawnPointComponent_classes.hpp"
#include "PalSDK/BP_NPCSpawnPointComponent_parameters.hpp"


namespace PalSDK
{

// Function BP_NPCSpawnPointComponent.BP_NPCSpawnPointComponent_C.ExecuteUbergraph_BP_NPCSpawnPointComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NPCSpawnPointComponent_C::ExecuteUbergraph_BP_NPCSpawnPointComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCSpawnPointComponent_C", "ExecuteUbergraph_BP_NPCSpawnPointComponent");

	Params::BP_NPCSpawnPointComponent_C_ExecuteUbergraph_BP_NPCSpawnPointComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NPCSpawnPointComponent.BP_NPCSpawnPointComponent_C.GetOneSpawnInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_NPCOnePointSpawnInfo          Info                                                   (Parm, OutParm, HasGetValueTypeHash)

void UBP_NPCSpawnPointComponent_C::GetOneSpawnInfo(struct FF_NPCOnePointSpawnInfo* Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCSpawnPointComponent_C", "GetOneSpawnInfo");

	Params::BP_NPCSpawnPointComponent_C_GetOneSpawnInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);
}


// Function BP_NPCSpawnPointComponent.BP_NPCSpawnPointComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_NPCSpawnPointComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCSpawnPointComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NPCSpawnPointComponent.BP_NPCSpawnPointComponent_C.Setup Walk Point Ref
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_NPCSpawnPointComponent_C::Setup_Walk_Point_Ref()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NPCSpawnPointComponent_C", "Setup Walk Point Ref");

	UObject::ProcessEvent(Func, nullptr);
}

}

