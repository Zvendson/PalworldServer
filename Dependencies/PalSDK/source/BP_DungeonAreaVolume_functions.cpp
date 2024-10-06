#include "PalServer/Basic.hpp"

#include "PalServer/BP_DungeonAreaVolume_classes.hpp"
#include "PalServer/BP_DungeonAreaVolume_parameters.hpp"


namespace PalServer
{

// Function BP_DungeonAreaVolume.BP_DungeonAreaVolume_C.BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_DungeonAreaVolume_C::BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DungeonAreaVolume_C", "BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_DungeonAreaVolume_C_BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DungeonAreaVolume.BP_DungeonAreaVolume_C.Develop_SetupSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Extent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DungeonAreaVolume_C::Develop_SetupSize(const struct FVector& Extent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DungeonAreaVolume_C", "Develop_SetupSize");

	Params::BP_DungeonAreaVolume_C_Develop_SetupSize Parms{};

	Parms.Extent = std::move(Extent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DungeonAreaVolume.BP_DungeonAreaVolume_C.ExecuteUbergraph_BP_DungeonAreaVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DungeonAreaVolume_C::ExecuteUbergraph_BP_DungeonAreaVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DungeonAreaVolume_C", "ExecuteUbergraph_BP_DungeonAreaVolume");

	Params::BP_DungeonAreaVolume_C_ExecuteUbergraph_BP_DungeonAreaVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DungeonAreaVolume.BP_DungeonAreaVolume_C.GetBoundingBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FBox                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FBox ABP_DungeonAreaVolume_C::GetBoundingBox() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DungeonAreaVolume_C", "GetBoundingBox");

	Params::BP_DungeonAreaVolume_C_GetBoundingBox Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

