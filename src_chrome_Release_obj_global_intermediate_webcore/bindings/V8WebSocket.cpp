/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#include "config.h"
#include "V8WebSocket.h"

#if ENABLE(WEB_SOCKETS)

#include "EventListener.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8WebSocket::info = { V8WebSocket::GetTemplate, V8WebSocket::derefObject, V8WebSocket::toActiveDOMObject, 0 };

namespace WebSocketInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> URLAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.URL._get");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    return v8String(imp->url());
}

static v8::Handle<v8::Value> readyStateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.readyState._get");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    return v8::Integer::New(imp->readyState());
}

static v8::Handle<v8::Value> bufferedAmountAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.bufferedAmount._get");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->bufferedAmount());
}

static v8::Handle<v8::Value> onopenAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.onopen._get");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    return imp->onopen() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onopen())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onopenAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.onopen._set");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onopen(), value, V8WebSocket::eventListenerCacheIndex);
    imp->setOnopen(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onmessageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.onmessage._get");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    return imp->onmessage() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onmessage())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onmessageAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.onmessage._set");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onmessage(), value, V8WebSocket::eventListenerCacheIndex);
    imp->setOnmessage(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> onerrorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.onerror._get");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    return imp->onerror() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onerror())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void onerrorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.onerror._set");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onerror(), value, V8WebSocket::eventListenerCacheIndex);
    imp->setOnerror(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> oncloseAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.onclose._get");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    return imp->onclose() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->onclose())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void oncloseAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.onclose._set");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->onclose(), value, V8WebSocket::eventListenerCacheIndex);
    imp->setOnclose(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> protocolAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.protocol._get");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    return v8StringOrUndefined(imp->protocol());
}

static v8::Handle<v8::Value> binaryTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.binaryType._get");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    return v8StringOrUndefined(imp->binaryType());
}

static void binaryTypeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebSocket.binaryType._set");
    WebSocket* imp = V8WebSocket::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<>, v, value);
    ExceptionCode ec = 0;
    imp->setBinaryType(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> addEventListenerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebSocket.addEventListener()");
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOrCreate);
    if (listener) {
        V8WebSocket::toNative(args.Holder())->addEventListener(v8ValueToAtomicWebCoreString(args[0]), listener, args[2]->BooleanValue());
        createHiddenDependency(args.Holder(), args[1], V8WebSocket::eventListenerCacheIndex);
    }
    return v8::Undefined();
}

static v8::Handle<v8::Value> removeEventListenerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebSocket.removeEventListener()");
    RefPtr<EventListener> listener = V8DOMWrapper::getEventListener(args[1], false, ListenerFindOnly);
    if (listener) {
        V8WebSocket::toNative(args.Holder())->removeEventListener(v8ValueToAtomicWebCoreString(args[0]), listener.get(), args[2]->BooleanValue());
        removeHiddenDependency(args.Holder(), args[1], V8WebSocket::eventListenerCacheIndex);
    }
    return v8::Undefined();
}

static v8::Handle<v8::Value> dispatchEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebSocket.dispatchEvent");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    WebSocket* imp = V8WebSocket::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Event*, evt, V8Event::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8Event::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    bool result = imp->dispatchEvent(evt, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8Boolean(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace WebSocketInternal

static const BatchedAttribute WebSocketAttrs[] = {
    // Attribute 'URL' (Type: 'readonly attribute' ExtAttr: '')
    {"URL", WebSocketInternal::URLAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'readyState' (Type: 'readonly attribute' ExtAttr: '')
    {"readyState", WebSocketInternal::readyStateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'bufferedAmount' (Type: 'readonly attribute' ExtAttr: '')
    {"bufferedAmount", WebSocketInternal::bufferedAmountAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onopen' (Type: 'attribute' ExtAttr: '')
    {"onopen", WebSocketInternal::onopenAttrGetter, WebSocketInternal::onopenAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onmessage' (Type: 'attribute' ExtAttr: '')
    {"onmessage", WebSocketInternal::onmessageAttrGetter, WebSocketInternal::onmessageAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onerror' (Type: 'attribute' ExtAttr: '')
    {"onerror", WebSocketInternal::onerrorAttrGetter, WebSocketInternal::onerrorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onclose' (Type: 'attribute' ExtAttr: '')
    {"onclose", WebSocketInternal::oncloseAttrGetter, WebSocketInternal::oncloseAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'protocol' (Type: 'readonly attribute' ExtAttr: 'ConvertNullStringTo')
    {"protocol", WebSocketInternal::protocolAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'binaryType' (Type: 'attribute' ExtAttr: 'ConvertNullStringTo')
    {"binaryType", WebSocketInternal::binaryTypeAttrGetter, WebSocketInternal::binaryTypeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback WebSocketCallbacks[] = {
    {"send", V8WebSocket::sendCallback},
    {"close", V8WebSocket::closeCallback},
    {"addEventListener", WebSocketInternal::addEventListenerCallback},
    {"removeEventListener", WebSocketInternal::removeEventListenerCallback},
};

static const BatchedConstant WebSocketConsts[] = {
    {"CONNECTING", static_cast<signed int>(0)},
    {"OPEN", static_cast<signed int>(1)},
    {"CLOSING", static_cast<signed int>(2)},
    {"CLOSED", static_cast<signed int>(3)},
};


COMPILE_ASSERT(0 == WebSocket::CONNECTING, WebSocketEnumCONNECTINGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == WebSocket::OPEN, WebSocketEnumOPENIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == WebSocket::CLOSING, WebSocketEnumCLOSINGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == WebSocket::CLOSED, WebSocketEnumCLOSEDIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8WebSocketTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "WebSocket", v8::Persistent<v8::FunctionTemplate>(), V8WebSocket::internalFieldCount,
        WebSocketAttrs, WTF_ARRAY_LENGTH(WebSocketAttrs),
        WebSocketCallbacks, WTF_ARRAY_LENGTH(WebSocketCallbacks));
    desc->SetCallHandler(V8WebSocket::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'dispatchEvent'
    const int dispatchEventArgc = 1;
    v8::Handle<v8::FunctionTemplate> dispatchEventArgv[dispatchEventArgc] = { V8Event::GetRawTemplate() };
    v8::Handle<v8::Signature> dispatchEventSignature = v8::Signature::New(desc, dispatchEventArgc, dispatchEventArgv);
    proto->Set(v8::String::New("dispatchEvent"), v8::FunctionTemplate::New(WebSocketInternal::dispatchEventCallback, v8::Handle<v8::Value>(), dispatchEventSignature));
    batchConfigureConstants(desc, proto, WebSocketConsts, WTF_ARRAY_LENGTH(WebSocketConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WebSocket::GetRawTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->rawTemplateMap().find(&info);
    if (result != data->rawTemplateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ = createRawTemplate();
    data->rawTemplateMap().add(&info, templ);
    return templ;
}

v8::Persistent<v8::FunctionTemplate> V8WebSocket::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8WebSocketTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8WebSocket::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}

ActiveDOMObject* V8WebSocket::toActiveDOMObject(v8::Handle<v8::Object> object)
{
    return toNative(object);
}      

v8::Handle<v8::Object> V8WebSocket::wrapSlow(WebSocket* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    v8::Persistent<v8::Object> wrapperHandle = v8::Persistent<v8::Object>::New(wrapper);

    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    getActiveDOMObjectMap().set(impl, wrapperHandle);
    return wrapper;
}

void V8WebSocket::derefObject(void* object)
{
    static_cast<WebSocket*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(WEB_SOCKETS)