#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameCompass_arrow_classes.hpp"
#include "PalServer/WBP_IngameCompass_arrow_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.ChangeBorderColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_arrow_C::ChangeBorderColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_arrow_C", "ChangeBorderColor");

	Params::WBP_IngameCompass_arrow_C_ChangeBorderColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.ChangeBorderDrawType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateBrushDrawType                     DrawType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_arrow_C::ChangeBorderDrawType(ESlateBrushDrawType DrawType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_arrow_C", "ChangeBorderDrawType");

	Params::WBP_IngameCompass_arrow_C_ChangeBorderDrawType Parms{};

	Parms.DrawType = DrawType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.SetDistanceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameCompass_arrow_C::SetDistanceText(double Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_arrow_C", "SetDistanceText");

	Params::WBP_IngameCompass_arrow_C_SetDistanceText Parms{};

	Parms.Length = Length;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameCompass_arrow.WBP_IngameCompass_arrow_C.SetupTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_IngameCompass_arrow_C::SetupTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameCompass_arrow_C", "SetupTexture");

	Params::WBP_IngameCompass_arrow_C_SetupTexture Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);
}

}

