#include "PalServer/Basic.hpp"

#include "PalServer/BP_GrapplingGun_Bullet_classes.hpp"
#include "PalServer/BP_GrapplingGun_Bullet_parameters.hpp"


namespace PalServer
{

// Function BP_GrapplingGun_Bullet.BP_GrapplingGun_Bullet_C.ExecuteUbergraph_BP_GrapplingGun_Bullet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_Bullet_C::ExecuteUbergraph_BP_GrapplingGun_Bullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_Bullet_C", "ExecuteUbergraph_BP_GrapplingGun_Bullet");

	Params::BP_GrapplingGun_Bullet_C_ExecuteUbergraph_BP_GrapplingGun_Bullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun_Bullet.BP_GrapplingGun_Bullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GrapplingGun_Bullet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_Bullet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrapplingGun_Bullet.BP_GrapplingGun_Bullet_C.UpdateCable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          End                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_Bullet_C::UpdateCable(const struct FVector& Start, const struct FVector& End, bool IsHit, bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_Bullet_C", "UpdateCable");

	Params::BP_GrapplingGun_Bullet_C_UpdateCable Parms{};

	Parms.Start = std::move(Start);
	Parms.End = std::move(End);
	Parms.IsHit = IsHit;
	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

