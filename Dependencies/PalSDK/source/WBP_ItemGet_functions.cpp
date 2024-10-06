#include "PalServer/Basic.hpp"

#include "PalServer/WBP_ItemGet_classes.hpp"
#include "PalServer/WBP_ItemGet_parameters.hpp"


namespace PalServer
{

// Function WBP_ItemGet.WBP_ItemGet_C.AnmEvent_Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemGet_C::AnmEvent_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "AnmEvent_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemGet.WBP_ItemGet_C.AnmEvent_Open
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemGet_C::AnmEvent_Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "AnmEvent_Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemGet.WBP_ItemGet_C.ChangeBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemGet_C::ChangeBgColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "ChangeBgColor");

	Params::WBP_ItemGet_C_ChangeBgColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemGet.WBP_ItemGet_C.ExecuteUbergraph_WBP_ItemGet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemGet_C::ExecuteUbergraph_WBP_ItemGet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "ExecuteUbergraph_WBP_ItemGet");

	Params::WBP_ItemGet_C_ExecuteUbergraph_WBP_ItemGet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemGet.WBP_ItemGet_C.Finished_1F002FD94DF611BBD1EF47BE09B9889B
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemGet_C::Finished_1F002FD94DF611BBD1EF47BE09B9889B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "Finished_1F002FD94DF611BBD1EF47BE09B9889B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemGet.WBP_ItemGet_C.Finished_841401E94A6018595306E0AC3B421AB7
// (BlueprintCallable, BlueprintEvent)

void UWBP_ItemGet_C::Finished_841401E94A6018595306E0AC3B421AB7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "Finished_841401E94A6018595306E0AC3B421AB7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemGet.WBP_ItemGet_C.HideIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ItemGet_C::HideIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "HideIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemGet.WBP_ItemGet_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ItemGet_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemGet.WBP_ItemGet_C.OnOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ItemGet_C::OnOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "OnOpened__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ItemGet.WBP_ItemGet_C.SetDefaultFontStyleName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             StyleName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemGet_C::SetDefaultFontStyleName(class FName StyleName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "SetDefaultFontStyleName");

	Params::WBP_ItemGet_C_SetDefaultFontStyleName Parms{};

	Parms.StyleName = StyleName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemGet.WBP_ItemGet_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemGet_C::SetIconTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "SetIconTexture");

	Params::WBP_ItemGet_C_SetIconTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemGet.WBP_ItemGet_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ItemGet_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemGet_C", "SetText");

	Params::WBP_ItemGet_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

