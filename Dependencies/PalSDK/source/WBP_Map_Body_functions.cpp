#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Map_Body_classes.hpp"
#include "PalSDK/WBP_Map_Body_parameters.hpp"


namespace PalSDK
{

// Function WBP_Map_Body.WBP_Map_Body_C.Add Icon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Added                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::Add_Icon(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget, bool* Added)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Add Icon");

	Params::WBP_Map_Body_C_Add_Icon Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (Added != nullptr)
		*Added = Parms.Added;
}


// Function WBP_Map_Body.WBP_Map_Body_C.Add Icon By Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          WorldLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreMask                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Added                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::Add_Icon_By_Location(class UWBP_WorldMap_IconBase_NoDesign_C* Widget, const struct FVector& WorldLocation, bool IgnoreMask, bool* Added)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Add Icon By Location");

	Params::WBP_Map_Body_C_Add_Icon_By_Location Parms{};

	Parms.Widget = Widget;
	Parms.WorldLocation = std::move(WorldLocation);
	Parms.IgnoreMask = IgnoreMask;

	UObject::ProcessEvent(Func, &Parms);

	if (Added != nullptr)
		*Added = Parms.Added;
}


// Function WBP_Map_Body.WBP_Map_Body_C.Adjust Scroll Local Player Position
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Body_C::Adjust_Scroll_Local_Player_Position()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Adjust Scroll Local Player Position");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.AdjustScrollForRespawn
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Body_C::AdjustScrollForRespawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "AdjustScrollForRespawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.CalcMapImagePosition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        AddOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::CalcMapImagePosition(const struct FVector2D& AddOffset, struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "CalcMapImagePosition");

	Params::WBP_Map_Body_C_CalcMapImagePosition Parms{};

	Parms.AddOffset = std::move(AddOffset);

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}


// Function WBP_Map_Body.WBP_Map_Body_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Map_Body_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Map_Body_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.ExecuteUbergraph_WBP_Map_Body
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::ExecuteUbergraph_WBP_Map_Body(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "ExecuteUbergraph_WBP_Map_Body");

	Params::WBP_Map_Body_C_ExecuteUbergraph_WBP_Map_Body Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.GetCursorScrollOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        Offset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::GetCursorScrollOffset(struct FVector2D* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "GetCursorScrollOffset");

	Params::WBP_Map_Body_C_GetCursorScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);
}


// Function WBP_Map_Body.WBP_Map_Body_C.LoadAndApplyDefaultMaskTexture
// (BlueprintCallable, BlueprintEvent)

void UWBP_Map_Body_C::LoadAndApplyDefaultMaskTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "LoadAndApplyDefaultMaskTexture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.On Hovered Any Icon Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::On_Hovered_Any_Icon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "On Hovered Any Icon Internal");

	Params::WBP_Map_Body_C_On_Hovered_Any_Icon_Internal Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent                InAnalogInputEvent                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Body_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnAnalogValueChanged");

	Params::WBP_Map_Body_C_OnAnalogValueChanged Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InAnalogInputEvent = std::move(InAnalogInputEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnClickedAnyIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::OnClickedAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnClickedAnyIcon__DelegateSignature");

	Params::WBP_Map_Body_C_OnClickedAnyIcon__DelegateSignature Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnClickedAnyIcon_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::OnClickedAnyIcon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnClickedAnyIcon_Internal");

	Params::WBP_Map_Body_C_OnClickedAnyIcon_Internal Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnHoveredAnyIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::OnHoveredAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnHoveredAnyIcon__DelegateSignature");

	Params::WBP_Map_Body_C_OnHoveredAnyIcon__DelegateSignature Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Map_Body_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnInputMethodChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnInputMethodChanged");

	Params::WBP_Map_Body_C_OnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Body_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnKeyUp");

	Params::WBP_Map_Body_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnLoaded_D35D903A4572C11561B776A766C7733D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::OnLoaded_D35D903A4572C11561B776A766C7733D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnLoaded_D35D903A4572C11561B776A766C7733D");

	Params::WBP_Map_Body_C_OnLoaded_D35D903A4572C11561B776A766C7733D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Body_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnMouseButtonDown");

	Params::WBP_Map_Body_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Body_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnMouseButtonUp");

	Params::WBP_Map_Body_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Map_Body_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnMouseEnter");

	Params::WBP_Map_Body_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Map_Body_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnMouseLeave");

	Params::WBP_Map_Body_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Body_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnMouseMove");

	Params::WBP_Map_Body_C_OnMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Body_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnMouseWheel");

	Params::WBP_Map_Body_C_OnMouseWheel Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Map_Body_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnPreviewKeyDown");

	Params::WBP_Map_Body_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnUnhoveredAnyIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::OnUnhoveredAnyIcon__DelegateSignature(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnUnhoveredAnyIcon__DelegateSignature");

	Params::WBP_Map_Body_C_OnUnhoveredAnyIcon__DelegateSignature Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.OnUnhoveredAnyIcon_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*IconWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::OnUnhoveredAnyIcon_Internal(class UWBP_WorldMap_IconBase_NoDesign_C* IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "OnUnhoveredAnyIcon_Internal");

	Params::WBP_Map_Body_C_OnUnhoveredAnyIcon_Internal Parms{};

	Parms.IconWidget = IconWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.RequestDismantal
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Body_C::RequestDismantal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "RequestDismantal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.ScrollMapImage_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        ScrollOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::ScrollMapImage_Internal(const struct FVector2D& ScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "ScrollMapImage_Internal");

	Params::WBP_Map_Body_C_ScrollMapImage_Internal Parms{};

	Parms.ScrollOffset = std::move(ScrollOffset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          MinLandScapePosition_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          MaxLandScapePosition_0                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::Setup(const struct FVector& MinLandScapePosition_0, const struct FVector& MaxLandScapePosition_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Setup");

	Params::WBP_Map_Body_C_Setup Parms{};

	Parms.MinLandScapePosition_0 = std::move(MinLandScapePosition_0);
	Parms.MaxLandScapePosition_0 = std::move(MaxLandScapePosition_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.Setup Player Icon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_Map_IconPlayer_C*>    PlayerIcons                                            (Parm, OutParm, ContainsInstancedReference)

void UWBP_Map_Body_C::Setup_Player_Icon(TArray<class UWBP_Map_IconPlayer_C*>* PlayerIcons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Setup Player Icon");

	Params::WBP_Map_Body_C_Setup_Player_Icon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerIcons != nullptr)
		*PlayerIcons = std::move(Parms.PlayerIcons);
}


// Function WBP_Map_Body.WBP_Map_Body_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Tick");

	Params::WBP_Map_Body_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.Update Icon Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_WorldMap_IconBase_NoDesign_C*Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::Update_Icon_Visibility(class UWBP_WorldMap_IconBase_NoDesign_C* Icon, bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Update Icon Visibility");

	Params::WBP_Map_Body_C_Update_Icon_Visibility Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function WBP_Map_Body.WBP_Map_Body_C.Update Map Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::Update_Map_Icon(class UWidget* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Update Map Icon");

	Params::WBP_Map_Body_C_Update_Map_Icon Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.Update Map Zoom
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  AddZoomValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUpdated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::Update_Map_Zoom(double AddZoomValue, double DeltaTime, bool* IsUpdated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Update Map Zoom");

	Params::WBP_Map_Body_C_Update_Map_Zoom Parms{};

	Parms.AddZoomValue = AddZoomValue;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUpdated != nullptr)
		*IsUpdated = Parms.IsUpdated;
}


// Function WBP_Map_Body.WBP_Map_Body_C.Update Player Icon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Body_C::Update_Player_Icon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "Update Player Icon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.UpdateCursorTransform
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Body_C::UpdateCursorTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "UpdateCursorTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.UpdateMapIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Map_Body_C::UpdateMapIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "UpdateMapIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Map_Body.WBP_Map_Body_C.UpdateMapTransform
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::UpdateMapTransform(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "UpdateMapTransform");

	Params::WBP_Map_Body_C_UpdateMapTransform Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Map_Body.WBP_Map_Body_C.UpdateScrollOffset
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUpdated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_Body_C::UpdateScrollOffset(bool* IsUpdated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Map_Body_C", "UpdateScrollOffset");

	Params::WBP_Map_Body_C_UpdateScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsUpdated != nullptr)
		*IsUpdated = Parms.IsUpdated;
}

}

