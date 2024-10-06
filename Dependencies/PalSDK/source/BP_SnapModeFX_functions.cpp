#include "PalServer/Basic.hpp"

#include "PalServer/BP_SnapModeFX_classes.hpp"
#include "PalServer/BP_SnapModeFX_parameters.hpp"


namespace PalServer
{

// Function BP_SnapModeFX.BP_SnapModeFX_C.ExecuteUbergraph_BP_SnapModeFX
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SnapModeFX_C::ExecuteUbergraph_BP_SnapModeFX(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SnapModeFX_C", "ExecuteUbergraph_BP_SnapModeFX");

	Params::BP_SnapModeFX_C_ExecuteUbergraph_BP_SnapModeFX Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SnapModeFX.BP_SnapModeFX_C.Hide
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SnapModeFX_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SnapModeFX_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SnapModeFX.BP_SnapModeFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SnapModeFX_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SnapModeFX_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SnapModeFX.BP_SnapModeFX_C.ShowCenterSnap
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          BoxExtent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SnapStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SnapEnd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAttachWall                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SnapModeFX_C::ShowCenterSnap(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& BoxExtent, const struct FVector& SnapStart, const struct FVector& SnapEnd, bool IsAttachWall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SnapModeFX_C", "ShowCenterSnap");

	Params::BP_SnapModeFX_C_ShowCenterSnap Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.BoxExtent = std::move(BoxExtent);
	Parms.SnapStart = std::move(SnapStart);
	Parms.SnapEnd = std::move(SnapEnd);
	Parms.IsAttachWall = IsAttachWall;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SnapModeFX.BP_SnapModeFX_C.ShowSnap
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          BoxExtent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SnapModeFX_C::ShowSnap(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& BoxExtent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SnapModeFX_C", "ShowSnap");

	Params::BP_SnapModeFX_C_ShowSnap Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.BoxExtent = std::move(BoxExtent);

	UObject::ProcessEvent(Func, &Parms);
}

}

