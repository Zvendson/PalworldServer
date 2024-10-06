#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalCharacterMaterialVolume_classes.hpp"
#include "PalServer/BP_PalCharacterMaterialVolume_parameters.hpp"


namespace PalServer
{

// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ExecuteUbergraph_BP_PalCharacterMaterialVolume
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCharacterMaterialVolume_C::ExecuteUbergraph_BP_PalCharacterMaterialVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "ExecuteUbergraph_BP_PalCharacterMaterialVolume");

	Params::BP_PalCharacterMaterialVolume_C_ExecuteUbergraph_BP_PalCharacterMaterialVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.Force Init
// (BlueprintCallable, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::Force_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "Force Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.Force Off
// (BlueprintCallable, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::Force_Off()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "Force Off");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.Force On
// (BlueprintCallable, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::Force_On()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "Force On");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.Force Update
// (BlueprintCallable, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::Force_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "Force Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ForceInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::ForceInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "ForceInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ForceOff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::ForceOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "ForceOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ForceOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::ForceOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "ForceOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ForceUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::ForceUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "ForceUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.SetParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Light_Affect_Emissive_Intensity_0                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Light_Affect_Emissive_Min_0                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Light_Affect_Emissive_Max_0                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Base_Emissive_Intensity_0                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Base_Color_Intensity_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCharacterMaterialVolume_C::SetParameters(class UMaterialInstanceDynamic* Material, double Light_Affect_Emissive_Intensity_0, double Light_Affect_Emissive_Min_0, double Light_Affect_Emissive_Max_0, double Base_Emissive_Intensity_0, double Base_Color_Intensity_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "SetParameters");

	Params::BP_PalCharacterMaterialVolume_C_SetParameters Parms{};

	Parms.Material = Material;
	Parms.Light_Affect_Emissive_Intensity_0 = Light_Affect_Emissive_Intensity_0;
	Parms.Light_Affect_Emissive_Min_0 = Light_Affect_Emissive_Min_0;
	Parms.Light_Affect_Emissive_Max_0 = Light_Affect_Emissive_Max_0;
	Parms.Base_Emissive_Intensity_0 = Base_Emissive_Intensity_0;
	Parms.Base_Color_Intensity_0 = Base_Color_Intensity_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.UpdateParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::UpdateParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "UpdateParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.BeginOverlapPalLit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    MaterialSrc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCharacterMaterialVolume_C::BeginOverlapPalLit(class UMaterialInstanceDynamic* Material, bool MaterialSrc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "BeginOverlapPalLit");

	Params::BP_PalCharacterMaterialVolume_C_BeginOverlapPalLit Parms{};

	Parms.Material = Material;
	Parms.MaterialSrc = MaterialSrc;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.EndOverlapPalLit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalCharacterMaterialVolume_C::EndOverlapPalLit(class UMaterialInstanceDynamic* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "EndOverlapPalLit");

	Params::BP_PalCharacterMaterialVolume_C_EndOverlapPalLit Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalCharacterMaterialVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCharacterMaterialVolume.BP_PalCharacterMaterialVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCharacterMaterialVolume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCharacterMaterialVolume_C", "ReceiveTick");

	Params::BP_PalCharacterMaterialVolume_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

