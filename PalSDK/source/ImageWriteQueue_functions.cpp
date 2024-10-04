#include "PalServer/Basic.hpp"

#include "PalServer/ImageWriteQueue_classes.hpp"
#include "PalServer/ImageWriteQueue_parameters.hpp"


namespace PalServer
{

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture*                         Texture                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Filename                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageWriteOptions               Options                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const class FString& Filename, const struct FImageWriteOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ImageWriteBlueprintLibrary", "ExportToDisk");

	Params::ImageWriteBlueprintLibrary_ExportToDisk Parms{};

	Parms.Texture = Texture;
	Parms.Filename = std::move(Filename);
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

