//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "spot_alljoyn_native.h"


static const CLR_RT_MethodHandler method_lookup[] =
{
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::GetUniqueName___STRING__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::Initialize___U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::SendNotification___VOID__STRING,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::SetBusLinkTimeout___MicrosoftSPOTAllJoynAJStatus__U4__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::NotifyLinkActive___VOID,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::BusLinkStateProc___MicrosoftSPOTAllJoynAJStatus__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::SetIdleTimeouts___MicrosoftSPOTAllJoynAJStatus__U4__U4__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::StartService___MicrosoftSPOTAllJoynAJStatus__U4__STRING__U4__I1__U2__STRING__U4__I4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::StartClientByName___MicrosoftSPOTAllJoynAJStatus__U4__STRING__U4__U1__STRING__U2__BYREF_U4__MicrosoftSPOTAllJoynAJSessionOpts__BYREF_STRING,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::AlwaysPrintf___VOID__STRING,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::AboutIconHandleGetContent___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__MicrosoftSPOTAllJoynAJMessage__SZARRAY_U1,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::BusHandleBusMessageInner___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::BusCancelSessionless___MicrosoftSPOTAllJoynAJStatus__U4__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalReplyMsg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__MicrosoftSPOTAllJoynAJMessage,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalSignal___MicrosoftSPOTAllJoynAJStatus__U4__MicrosoftSPOTAllJoynAJMessage__U4__U4__U4__U1__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalMethodCall___MicrosoftSPOTAllJoynAJStatus__U4__MicrosoftSPOTAllJoynAJMessage__U4__STRING__U4__U1__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::UnmarshalArg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::DeliverMsg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::BusSetPasswordCallback___VOID,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::UnmarshalMsg___MicrosoftSPOTAllJoynAJStatus__U4__MicrosoftSPOTAllJoynAJMessage__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::UnmarshalVariant___STRING__MicrosoftSPOTAllJoynAJMessage,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalVariant___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::UnmarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__U2__U4__STRING,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::UnmarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__BYREF_U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::UnmarshalArgs___STRING__MicrosoftSPOTAllJoynAJMessage__STRING,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::UnmarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__BYREF_U4__BYREF_U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::UnmarshalPropertyArgs___STRING__MicrosoftSPOTAllJoynAJMessage__BYREF_U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalArg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalArg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__STRING,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__STRING__STRING__STRING,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__STRING__STRING,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__STRING__SZARRAY_U1,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalContainer___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__U4__U1,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalCloseContainer___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::BusReplyAcceptSession___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::CloseMsg___VOID__MicrosoftSPOTAllJoynAJMessage,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::Disconnect___VOID__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::Sleep___VOID__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::CreateBus___VOID__BYREF_U4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalObjectDescriptions___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::MarshalDefaultProps___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::GetArgPtr___U4__I4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::GetArgString___STRING__I4,
    NULL,
    NULL,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::GetLocalGUID___STATIC__MicrosoftSPOTAllJoynAJStatus__SZARRAY_U1,
    NULL,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::RegisterObjects___STATIC__VOID__STRING__STRING__U1__I4__BOOLEAN__BOOLEAN,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::PrintXML___STATIC__VOID__STRING__STRING__U1__I4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::AppMessageId___STATIC__U4__U4__U4__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::BusMessageId___STATIC__U4__U4__U4__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::PrxMessageId___STATIC__U4__U4__U4__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::AppPropertyId___STATIC__U4__U4__U4__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::BusPropertyId___STATIC__U4__U4__U4__U4,
    Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ::PrxPropertyId___STATIC__U4__U4__U4__U4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Microsoft_SPOT_Alljoyn =
{
    "Microsoft.SPOT.Alljoyn", 
    0xB24A1746,
    method_lookup
};

