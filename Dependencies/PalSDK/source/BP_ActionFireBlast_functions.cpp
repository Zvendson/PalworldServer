#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionFireBlast_classes.hpp"
#include "PalServer/BP_ActionFireBlast_parameters.hpp"


namespace PalServer
{

// Function BP_ActionFireBlast.BP_ActionFireBlast_C.BulletHasShooted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFireBlast_C::BulletHasShooted(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBlast_C", "BulletHasShooted");

	Params::BP_ActionFireBlast_C_BulletHasShooted Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionFireBlast.BP_ActionFireBlast_C.CanNextActionCancel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_ActionFireBlast_C::CanNextActionCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBlast_C", "CanNextActionCancel");

	Params::BP_ActionFireBlast_C_CanNextActionCancel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ActionFireBlast.BP_ActionFireBlast_C.ExecuteUbergraph_BP_ActionFireBlast
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFireBlast_C::ExecuteUbergraph_BP_ActionFireBlast(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBlast_C", "ExecuteUbergraph_BP_ActionFireBlast");

	Params::BP_ActionFireBlast_C_ExecuteUbergraph_BP_ActionFireBlast Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionFireBlast.BP_ActionFireBlast_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionFireBlast_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBlast_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

