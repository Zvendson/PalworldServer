#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalRichTextDecorator_KeyGuideIcon_classes.hpp"
#include "PalServer/BP_PalRichTextDecorator_KeyGuideIcon_parameters.hpp"


namespace PalServer
{

// Function BP_PalRichTextDecorator_KeyGuideIcon.BP_PalRichTextDecorator_KeyGuideIcon_C.CreateWidget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             KeyGuideActionName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   IconScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OverrideType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UBP_PalRichTextDecorator_KeyGuideIcon_C::CreateWidget(class FName KeyGuideActionName, float IconScale, int32 OverrideType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalRichTextDecorator_KeyGuideIcon_C", "CreateWidget");

	Params::BP_PalRichTextDecorator_KeyGuideIcon_C_CreateWidget Parms{};

	Parms.KeyGuideActionName = KeyGuideActionName;
	Parms.IconScale = IconScale;
	Parms.OverrideType = OverrideType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

