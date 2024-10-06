#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PlayerInventoryWeightInfo_classes.hpp"
#include "PalServer/WBP_PlayerInventoryWeightInfo_parameters.hpp"


namespace PalServer
{

// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.AnmEvent_ForceFull
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInventoryWeightInfo_C::AnmEvent_ForceFull()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "AnmEvent_ForceFull");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.AnmEvent_ForceNormal
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInventoryWeightInfo_C::AnmEvent_ForceNormal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "AnmEvent_ForceNormal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.AnmEvent_FullToNormal
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInventoryWeightInfo_C::AnmEvent_FullToNormal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "AnmEvent_FullToNormal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.AnmEvent_NormalToFull
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInventoryWeightInfo_C::AnmEvent_NormalToFull()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "AnmEvent_NormalToFull");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerInventoryWeightInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ChangedWeight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::CREATEDELEGATE_PROXYFUNCTION_0(float ChangedWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::WBP_PlayerInventoryWeightInfo_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.ChangedWeight = ChangedWeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerInventoryWeightInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.ExecuteUbergraph_WBP_PlayerInventoryWeightInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::ExecuteUbergraph_WBP_PlayerInventoryWeightInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "ExecuteUbergraph_WBP_PlayerInventoryWeightInfo");

	Params::WBP_PlayerInventoryWeightInfo_C_ExecuteUbergraph_WBP_PlayerInventoryWeightInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateCurrentWeightBuff
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  ChangedCurrentWeight                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::OnUpdateCurrentWeightBuff(double ChangedCurrentWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "OnUpdateCurrentWeightBuff");

	Params::WBP_PlayerInventoryWeightInfo_C_OnUpdateCurrentWeightBuff Parms{};

	Parms.ChangedCurrentWeight = ChangedCurrentWeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateMaxWeight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MaxWeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::OnUpdateMaxWeight(float MaxWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "OnUpdateMaxWeight");

	Params::WBP_PlayerInventoryWeightInfo_C_OnUpdateMaxWeight Parms{};

	Parms.MaxWeight = MaxWeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateMaxWeightBuff
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInventoryWeightInfo_C::OnUpdateMaxWeightBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "OnUpdateMaxWeightBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.OnUpdateWeight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NowWeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::OnUpdateWeight(float NowWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "OnUpdateWeight");

	Params::WBP_PlayerInventoryWeightInfo_C_OnUpdateWeight Parms{};

	Parms.NowWeight = NowWeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerInventoryWeightInfo.WBP_PlayerInventoryWeightInfo_C.UpdateWeight_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowWeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxWeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForceSkipAnim                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInventoryWeightInfo_C::UpdateWeight_Internal(double NowWeight, double MaxWeight, bool ForceSkipAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInventoryWeightInfo_C", "UpdateWeight_Internal");

	Params::WBP_PlayerInventoryWeightInfo_C_UpdateWeight_Internal Parms{};

	Parms.NowWeight = NowWeight;
	Parms.MaxWeight = MaxWeight;
	Parms.ForceSkipAnim = ForceSkipAnim;

	UObject::ProcessEvent(Func, &Parms);
}

}

