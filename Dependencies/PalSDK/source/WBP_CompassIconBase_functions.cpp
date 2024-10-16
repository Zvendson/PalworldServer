#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_CompassIconBase_classes.hpp"
#include "PalSDK/WBP_CompassIconBase_parameters.hpp"


namespace PalSDK
{

// Function WBP_CompassIconBase.WBP_CompassIconBase_C.ExecuteUbergraph_WBP_CompassIconBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIconBase_C::ExecuteUbergraph_WBP_CompassIconBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "ExecuteUbergraph_WBP_CompassIconBase");

	Params::WBP_CompassIconBase_C_ExecuteUbergraph_WBP_CompassIconBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.Get Offset Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  OffSetValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIconBase_C::Get_Offset_Value(double* OffSetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "Get Offset Value");

	Params::WBP_CompassIconBase_C_Get_Offset_Value Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OffSetValue != nullptr)
		*OffSetValue = Parms.OffSetValue;
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.PostSetup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CompassIconBase_C::PostSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "PostSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetDisplayDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIconBase_C::SetDisplayDistance(double Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "SetDisplayDistance");

	Params::WBP_CompassIconBase_C_SetDisplayDistance Parms{};

	Parms.Length = Length;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetDistanceText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIconBase_C::SetDistanceText(double Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "SetDistanceText");

	Params::WBP_CompassIconBase_C_SetDistanceText Parms{};

	Parms.Length = Length;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetLocationId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            LocationId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIconBase_C::SetLocationId(const struct FGuid& LocationId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "SetLocationId");

	Params::WBP_CompassIconBase_C_SetLocationId Parms{};

	Parms.LocationId = std::move(LocationId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIconBase_C::SetTargetLocation(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "SetTargetLocation");

	Params::WBP_CompassIconBase_C_SetTargetLocation Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.SetupTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_CompassIconBase_C::SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "SetupTexture");

	Params::WBP_CompassIconBase_C_SetupTexture Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIconBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "Tick");

	Params::WBP_CompassIconBase_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.UpdateDistance
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CompassIconBase_C::UpdateDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "UpdateDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CompassIconBase.WBP_CompassIconBase_C.UpdateVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDistance                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CompassIconBase_C::UpdateVisibility(bool* InDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CompassIconBase_C", "UpdateVisibility");

	Params::WBP_CompassIconBase_C_UpdateVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InDistance != nullptr)
		*InDistance = Parms.InDistance;
}

}

