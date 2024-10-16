#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_WaterfallTool_classes.hpp"
#include "PalSDK/BP_WaterfallTool_parameters.hpp"


namespace PalSDK
{

// Function BP_WaterfallTool.BP_WaterfallTool_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WaterfallTool_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particles
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WaterfallTool_C::Setup_Waterfall_Particles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Setup Waterfall Particles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Waterfall Particle Parameters
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_WaterfallTool_C::Setup_Waterfall_Particle_Parameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Setup Waterfall Particle Parameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Spline Mesh
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*                 Spline_Comp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterfallTool_C::Setup_Spline_Mesh(class USplineComponent* Spline_Comp, double Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Setup Spline Mesh");

	Params::BP_WaterfallTool_C_Setup_Spline_Mesh Parms{};

	Parms.Spline_Comp = Spline_Comp;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Material Parameters
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Current_Index                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineComponent*                 Spline                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_WaterfallTool_C::Setup_Material_Parameters(class UMaterialInstanceDynamic* Material, int32 Current_Index, class USplineComponent* Spline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Setup Material Parameters");

	Params::BP_WaterfallTool_C_Setup_Material_Parameters Parms{};

	Parms.Material = Material;
	Parms.Current_Index = Current_Index;
	Parms.Spline = Spline;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particles
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WaterfallTool_C::Setup_Adds_Waterfall_Particles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Setup Adds Waterfall Particles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Setup Adds Waterfall Particle Parameters
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WaterfallTool_C::Setup_Adds_Waterfall_Particle_Parameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Setup Adds Waterfall Particle Parameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Set Waterfall Particle Effect Location
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_WaterfallTool_C::Set_Waterfall_Particle_Effect_Location()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Set Waterfall Particle Effect Location");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Set Adds Waterfall Particle Effect Location
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAdditionalCascades>      Cascade_Splines_Data                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UParticleSystemComponent*> Cascade_Top_Splash                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> Cascade_Bottom_Splash                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UParticleSystemComponent*> Cascade_Mist                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class USplineComponent*>         Cascade_Spline_Comps                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_WaterfallTool_C::Set_Adds_Waterfall_Particle_Effect_Location(TArray<struct FAdditionalCascades>& Cascade_Splines_Data, TArray<class UParticleSystemComponent*>& Cascade_Top_Splash, TArray<class UParticleSystemComponent*>& Cascade_Bottom_Splash, TArray<class UParticleSystemComponent*>& Cascade_Mist, TArray<class USplineComponent*>& Cascade_Spline_Comps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Set Adds Waterfall Particle Effect Location");

	Params::BP_WaterfallTool_C_Set_Adds_Waterfall_Particle_Effect_Location Parms{};

	Parms.Cascade_Splines_Data = std::move(Cascade_Splines_Data);
	Parms.Cascade_Top_Splash = std::move(Cascade_Top_Splash);
	Parms.Cascade_Bottom_Splash = std::move(Cascade_Bottom_Splash);
	Parms.Cascade_Mist = std::move(Cascade_Mist);
	Parms.Cascade_Spline_Comps = std::move(Cascade_Spline_Comps);

	UObject::ProcessEvent(Func, &Parms);

	Cascade_Splines_Data = std::move(Parms.Cascade_Splines_Data);
	Cascade_Top_Splash = std::move(Parms.Cascade_Top_Splash);
	Cascade_Bottom_Splash = std::move(Parms.Cascade_Bottom_Splash);
	Cascade_Mist = std::move(Parms.Cascade_Mist);
	Cascade_Spline_Comps = std::move(Parms.Cascade_Spline_Comps);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterfallTool_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "ReceiveTick");

	Params::BP_WaterfallTool_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WaterfallTool_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.ExecuteUbergraph_BP_WaterfallTool
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterfallTool_C::ExecuteUbergraph_BP_WaterfallTool(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "ExecuteUbergraph_BP_WaterfallTool");

	Params::BP_WaterfallTool_C_ExecuteUbergraph_BP_WaterfallTool Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Do Waterfall Trace
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*                 Spline_Input                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                                  Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   Actors_to_Ignore_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WaterfallTool_C::Do_Waterfall_Trace(class USplineComponent* Spline_Input, double Scale, TArray<class AActor*>& Actors_to_Ignore_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Do Waterfall Trace");

	Params::BP_WaterfallTool_C_Do_Waterfall_Trace Parms{};

	Parms.Spline_Input = Spline_Input;
	Parms.Scale = Scale;
	Parms.Actors_to_Ignore_0 = std::move(Actors_to_Ignore_0);

	UObject::ProcessEvent(Func, &Parms);

	Actors_to_Ignore_0 = std::move(Parms.Actors_to_Ignore_0);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.CheckIntervalByDistance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterfallTool_C::CheckIntervalByDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "CheckIntervalByDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterfallTool.BP_WaterfallTool_C.Check Spline Input Keys
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAdditionalCascades>      Cascades_In                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Passed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterfallTool_C::Check_Spline_Input_Keys(TArray<struct FAdditionalCascades>& Cascades_In, bool* Passed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterfallTool_C", "Check Spline Input Keys");

	Params::BP_WaterfallTool_C_Check_Spline_Input_Keys Parms{};

	Parms.Cascades_In = std::move(Cascades_In);

	UObject::ProcessEvent(Func, &Parms);

	Cascades_In = std::move(Parms.Cascades_In);

	if (Passed != nullptr)
		*Passed = Parms.Passed;
}

}

