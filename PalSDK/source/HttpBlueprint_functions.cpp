#include "PalServer/Basic.hpp"

#include "PalServer/HttpBlueprint_classes.hpp"
#include "PalServer/HttpBlueprint_parameters.hpp"


namespace PalServer
{

// Function HttpBlueprint.HttpBlueprintFunctionLibrary.AddHeader
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHttpHeader                      HeaderObject                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           NewHeader                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           NewHeaderValue                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHttpBlueprintFunctionLibrary::AddHeader(struct FHttpHeader& HeaderObject, const class FString& NewHeader, const class FString& NewHeaderValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HttpBlueprintFunctionLibrary", "AddHeader");

	Params::HttpBlueprintFunctionLibrary_AddHeader Parms{};

	Parms.HeaderObject = std::move(HeaderObject);
	Parms.NewHeader = std::move(NewHeader);
	Parms.NewHeaderValue = std::move(NewHeaderValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	HeaderObject = std::move(Parms.HeaderObject);
}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetAllHeaders
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHttpHeader                      HeaderObject                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UHttpBlueprintFunctionLibrary::GetAllHeaders(const struct FHttpHeader& HeaderObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HttpBlueprintFunctionLibrary", "GetAllHeaders");

	Params::HttpBlueprintFunctionLibrary_GetAllHeaders Parms{};

	Parms.HeaderObject = std::move(HeaderObject);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetAllHeaders_Map
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHttpHeader                      HeaderObject                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<class FString, class FString>      ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> UHttpBlueprintFunctionLibrary::GetAllHeaders_Map(const struct FHttpHeader& HeaderObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HttpBlueprintFunctionLibrary", "GetAllHeaders_Map");

	Params::HttpBlueprintFunctionLibrary_GetAllHeaders_Map Parms{};

	Parms.HeaderObject = std::move(HeaderObject);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.GetHeaderValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHttpHeader                      HeaderObject                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           HeaderName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           OutHeaderValue                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHttpBlueprintFunctionLibrary::GetHeaderValue(const struct FHttpHeader& HeaderObject, const class FString& HeaderName, class FString* OutHeaderValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HttpBlueprintFunctionLibrary", "GetHeaderValue");

	Params::HttpBlueprintFunctionLibrary_GetHeaderValue Parms{};

	Parms.HeaderObject = std::move(HeaderObject);
	Parms.HeaderName = std::move(HeaderName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutHeaderValue != nullptr)
		*OutHeaderValue = std::move(Parms.OutHeaderValue);

	return Parms.ReturnValue;
}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.MakeRequestHeader
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<class FString, class FString>      Headers                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHttpHeader                      OutHeader                                              (Parm, OutParm, NativeAccessSpecifierPublic)

void UHttpBlueprintFunctionLibrary::MakeRequestHeader(const TMap<class FString, class FString>& Headers, struct FHttpHeader* OutHeader)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HttpBlueprintFunctionLibrary", "MakeRequestHeader");

	Params::HttpBlueprintFunctionLibrary_MakeRequestHeader Parms{};

	Parms.Headers = std::move(Headers);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutHeader != nullptr)
		*OutHeader = std::move(Parms.OutHeader);
}


// Function HttpBlueprint.HttpBlueprintFunctionLibrary.RemoveHeader
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHttpHeader                      HeaderObject                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           HeaderToRemove                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHttpBlueprintFunctionLibrary::RemoveHeader(struct FHttpHeader& HeaderObject, const class FString& HeaderToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HttpBlueprintFunctionLibrary", "RemoveHeader");

	Params::HttpBlueprintFunctionLibrary_RemoveHeader Parms{};

	Parms.HeaderObject = std::move(HeaderObject);
	Parms.HeaderToRemove = std::move(HeaderToRemove);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	HeaderObject = std::move(Parms.HeaderObject);

	return Parms.ReturnValue;
}

}

