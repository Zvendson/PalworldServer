#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Status_WithVisualEffect_classes.hpp"
#include "PalSDK/BP_Status_WithVisualEffect_parameters.hpp"


namespace PalSDK
{

// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.ExecuteUbergraph_BP_Status_WithVisualEffect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::ExecuteUbergraph_BP_Status_WithVisualEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "ExecuteUbergraph_BP_Status_WithVisualEffect");

	Params::BP_Status_WithVisualEffect_C_ExecuteUbergraph_BP_Status_WithVisualEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.HasSelfPalElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalElementType                         MyElement                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Has                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::HasSelfPalElement(EPalElementType MyElement, bool* Has)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "HasSelfPalElement");

	Params::BP_Status_WithVisualEffect_C_HasSelfPalElement Parms{};

	Parms.MyElement = MyElement;

	UObject::ProcessEvent(Func, &Parms);

	if (Has != nullptr)
		*Has = Parms.Has;
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.HideReAddEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Status_WithVisualEffect_C::HideReAddEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "HideReAddEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.HideReAddEffectWhenInActiveOtomo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Status_WithVisualEffect_C::HideReAddEffectWhenInActiveOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "HideReAddEffectWhenInActiveOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.IsIgnoreElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalAdditionalEffectType                AddEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ignore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::IsIgnoreElement(EPalAdditionalEffectType AddEffect, bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "IsIgnoreElement");

	Params::BP_Status_WithVisualEffect_C_IsIgnoreElement Parms{};

	Parms.AddEffect = AddEffect;

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_WithVisualEffect_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.OnEndStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_WithVisualEffect_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "OnEndStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.ResetDamageDown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Status_WithVisualEffect_C::ResetDamageDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "ResetDamageDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.ResetDamageUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Status_WithVisualEffect_C::ResetDamageUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "ResetDamageUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.SetDamageDown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Status_WithVisualEffect_C::SetDamageDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "SetDamageDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.SetDamageUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Status_WithVisualEffect_C::SetDamageUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "SetDamageUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "TickStatus");

	Params::BP_Status_WithVisualEffect_C_TickStatus Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.カスタムイベント_Dead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_Status_WithVisualEffect_C::_________________________Dead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "カスタムイベント_Dead");

	Params::BP_Status_WithVisualEffect_C__________________________Dead Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_WithVisualEffect.BP_Status_WithVisualEffect_C.カスタムイベント_OtherStatusAdd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalStatusComponent*              StatusComponent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalStatusID                            StatusId_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStatusBase*                   Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_WithVisualEffect_C::_________________________OtherStatusAdd(const class UPalStatusComponent* StatusComponent, EPalStatusID StatusId_0, class UPalStatusBase* Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_WithVisualEffect_C", "カスタムイベント_OtherStatusAdd");

	Params::BP_Status_WithVisualEffect_C__________________________OtherStatusAdd Parms{};

	Parms.StatusComponent = StatusComponent;
	Parms.StatusId_0 = StatusId_0;
	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}

}

