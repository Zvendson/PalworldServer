#include "PalSDK/Basic.hpp"

#include "PalSDK/BI_PalGrapplingAimInterface_classes.hpp"
#include "PalSDK/BI_PalGrapplingAimInterface_parameters.hpp"


namespace PalSDK
{

// Function BI_PalGrapplingAimInterface.BI_PalGrapplingAimInterface_C.IsShowReticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    IsShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_PalGrapplingAimInterface_C::IsShowReticle(bool* IsShow) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_PalGrapplingAimInterface_C", "IsShowReticle");

	Params::BI_PalGrapplingAimInterface_C_IsShowReticle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsShow != nullptr)
		*IsShow = Parms.IsShow;
}

}

