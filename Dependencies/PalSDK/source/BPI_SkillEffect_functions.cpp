#include "PalSDK/Basic.hpp"

#include "PalSDK/BPI_SkillEffect_classes.hpp"
#include "PalSDK/BPI_SkillEffect_parameters.hpp"


namespace PalSDK
{

// Function BPI_SkillEffect.BPI_SkillEffect_C.CancelShoot
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SkillEffect_C::CancelShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SkillEffect_C", "CancelShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_SkillEffect.BPI_SkillEffect_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SkillEffect_C::ShootBullet(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SkillEffect_C", "ShootBullet");

	Params::BPI_SkillEffect_C_ShootBullet Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}

}

