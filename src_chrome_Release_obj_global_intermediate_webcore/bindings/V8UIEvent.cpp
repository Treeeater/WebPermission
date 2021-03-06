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
#include "V8UIEvent.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWindow.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8UIEvent::info = { V8UIEvent::GetTemplate, V8UIEvent::derefObject, 0, &V8Event::info };

namespace UIEventInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> viewAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.UIEvent.view._get");
    UIEvent* imp = V8UIEvent::toNative(info.Holder());
    return toV8(imp->view());
}

static v8::Handle<v8::Value> detailAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.UIEvent.detail._get");
    UIEvent* imp = V8UIEvent::toNative(info.Holder());
    return v8::Integer::New(imp->detail());
}

static v8::Handle<v8::Value> keyCodeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.UIEvent.keyCode._get");
    UIEvent* imp = V8UIEvent::toNative(info.Holder());
    return v8::Integer::New(imp->keyCode());
}

static v8::Handle<v8::Value> charCodeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.UIEvent.charCode._get");
    UIEvent* imp = V8UIEvent::toNative(info.Holder());
    return v8::Integer::New(imp->charCode());
}

static v8::Handle<v8::Value> layerXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.UIEvent.layerX._get");
    UIEvent* imp = V8UIEvent::toNative(info.Holder());
    return v8::Integer::New(imp->layerX());
}

static v8::Handle<v8::Value> layerYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.UIEvent.layerY._get");
    UIEvent* imp = V8UIEvent::toNative(info.Holder());
    return v8::Integer::New(imp->layerY());
}

static v8::Handle<v8::Value> pageXAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.UIEvent.pageX._get");
    UIEvent* imp = V8UIEvent::toNative(info.Holder());
    return v8::Integer::New(imp->pageX());
}

static v8::Handle<v8::Value> pageYAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.UIEvent.pageY._get");
    UIEvent* imp = V8UIEvent::toNative(info.Holder());
    return v8::Integer::New(imp->pageY());
}

static v8::Handle<v8::Value> whichAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.UIEvent.which._get");
    UIEvent* imp = V8UIEvent::toNative(info.Holder());
    return v8::Integer::New(imp->which());
}

static v8::Handle<v8::Value> initUIEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.UIEvent.initUIEvent");
    UIEvent* imp = V8UIEvent::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, type, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    EXCEPTION_BLOCK(bool, canBubble, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(bool, cancelable, MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(DOMWindow*, view, V8DOMWindow::HasInstance(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined)) ? V8DOMWindow::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined))) : 0);
    EXCEPTION_BLOCK(int, detail, toInt32(MAYBE_MISSING_PARAMETER(args, 4, MissingIsUndefined)));
    imp->initUIEvent(type, canBubble, cancelable, view, detail);
    return v8::Handle<v8::Value>();
}

} // namespace UIEventInternal

static const BatchedAttribute UIEventAttrs[] = {
    // Attribute 'view' (Type: 'readonly attribute' ExtAttr: '')
    {"view", UIEventInternal::viewAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'detail' (Type: 'readonly attribute' ExtAttr: '')
    {"detail", UIEventInternal::detailAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'keyCode' (Type: 'readonly attribute' ExtAttr: '')
    {"keyCode", UIEventInternal::keyCodeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'charCode' (Type: 'readonly attribute' ExtAttr: '')
    {"charCode", UIEventInternal::charCodeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'layerX' (Type: 'readonly attribute' ExtAttr: '')
    {"layerX", UIEventInternal::layerXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'layerY' (Type: 'readonly attribute' ExtAttr: '')
    {"layerY", UIEventInternal::layerYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pageX' (Type: 'readonly attribute' ExtAttr: '')
    {"pageX", UIEventInternal::pageXAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'pageY' (Type: 'readonly attribute' ExtAttr: '')
    {"pageY", UIEventInternal::pageYAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'which' (Type: 'readonly attribute' ExtAttr: '')
    {"which", UIEventInternal::whichAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8UIEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "UIEvent", V8Event::GetTemplate(), V8UIEvent::internalFieldCount,
        UIEventAttrs, WTF_ARRAY_LENGTH(UIEventAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'initUIEvent'
    const int initUIEventArgc = 5;
    v8::Handle<v8::FunctionTemplate> initUIEventArgv[initUIEventArgc] = { v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), V8DOMWindow::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> initUIEventSignature = v8::Signature::New(desc, initUIEventArgc, initUIEventArgv);
    proto->Set(v8::String::New("initUIEvent"), v8::FunctionTemplate::New(UIEventInternal::initUIEventCallback, v8::Handle<v8::Value>(), initUIEventSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8UIEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8UIEvent::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8UIEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8UIEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8UIEvent::wrapSlow(UIEvent* impl)
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
    getDOMObjectMap().set(impl, wrapperHandle);
    return wrapper;
}

void V8UIEvent::derefObject(void* object)
{
    static_cast<UIEvent*>(object)->deref();
}

} // namespace WebCore
