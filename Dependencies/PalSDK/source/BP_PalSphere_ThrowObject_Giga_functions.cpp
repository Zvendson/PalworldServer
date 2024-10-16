#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalSphere_ThrowObject_Giga_classes.hpp"
#include "PalSDK/BP_PalSphere_ThrowObject_Giga_parameters.hpp"


namespace PalSDK
{

// Function BP_PalSphere_ThrowObject_Giga.BP_PalSphere_ThrowObject_Giga_C.GetBodyClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           bodyClass                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_Giga_C::GetBodyClass(class UClass** bodyClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_Giga_C", "GetBodyClass");

	Params::BP_PalSphere_ThrowObject_Giga_C_GetBodyClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bodyClass != nullptr)
		*bodyClass = Parms.bodyClass;
}

}

