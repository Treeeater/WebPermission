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
#include "V8TouchEvent.h"

#if ENABLE(TOUCH_EVENTS)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWindow.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8TouchList.h"
#include "V8UIEvent.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8TouchEvent::info = { V8TouchEvent::GetTemplate, V8TouchEvent::derefObject, 0, &V8UIEvent::info };

namespace TouchEventInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> touchesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.TouchEvent.touches._get");
    TouchEvent* imp = V8TouchEvent::toNative(info.Holder());
    RefPtr<TouchList> result = imp->touches();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "touches", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> targetTouchesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.TouchEvent.targetTouches._get");
    TouchEvent* imp = V8TouchEvent::toNative(info.Holder());
    RefPtr<TouchList> result = imp->targetTouches();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "targetTouches", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> changedTouchesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.TouchEvent.changedTouches._get");
    TouchEvent* imp = V8TouchEvent::toNative(info.Holder());
    RefPtr<TouchList> result = imp->changedTouches();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "changedTouches", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> ctrlKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.TouchEvent.ctrlKey._get");
    TouchEvent* imp = V8TouchEvent::toNative(info.Holder());
    return v8Boolean(imp->ctrlKey());
}

static v8::Handle<v8::Value> shiftKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.TouchEvent.shiftKey._get");
    TouchEvent* imp = V8TouchEvent::toNative(info.Holder());
    return v8Boolean(imp->shiftKey());
}

static v8::Handle<v8::Value> altKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.TouchEvent.altKey._get");
    TouchEvent* imp = V8TouchEvent::toNative(info.Holder());
    return v8Boolean(imp->altKey());
}

static v8::Handle<v8::Value> metaKeyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.TouchEvent.metaKey._get");
    TouchEvent* imp = V8TouchEvent::toNative(info.Holder());
    return v8Boolean(imp->metaKey());
}

static v8::Handle<v8::Value> initTouchEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.TouchEvent.initTouchEvent");
    TouchEvent* imp = V8TouchEvent::toNative(args.Holder());
    EXCEPTION_BLOCK(TouchList*, touches, V8TouchList::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8TouchList::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    EXCEPTION_BLOCK(TouchList*, targetTouches, V8TouchList::HasInstance(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)) ? V8TouchList::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined))) : 0);
    EXCEPTION_BLOCK(TouchList*, changedTouches, V8TouchList::HasInstance(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)) ? V8TouchList::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined))) : 0);
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, type, MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined));
    EXCEPTION_BLOCK(DOMWindow*, view, V8DOMWindow::HasInstance(MAYBE_MISSING_PARAMETER(args, 4, MissingIsUndefined)) ? V8DOMWindow::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 4, MissingIsUndefined))) : 0);
    EXCEPTION_BLOCK(int, screenX, toInt32(MAYBE_MISSING_PARAMETER(args, 5, MissingIsUndefined)));
    EXCEPTION_BLOCK(int, screenY, toInt32(MAYBE_MISSING_PARAMETER(args, 6, MissingIsUndefined)));
    EXCEPTION_BLOCK(int, clientX, toInt32(MAYBE_MISSING_PARAMETER(args, 7, MissingIsUndefined)));
    EXCEPTION_BLOCK(int, clientY, toInt32(MAYBE_MISSING_PARAMETER(args, 8, MissingIsUndefined)));
    EXCEPTION_BLOCK(bool, ctrlKey, MAYBE_MISSING_PARAMETER(args, 9, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(bool, altKey, MAYBE_MISSING_PARAMETER(args, 10, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(bool, shiftKey, MAYBE_MISSING_PARAMETER(args, 11, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(bool, metaKey, MAYBE_MISSING_PARAMETER(args, 12, MissingIsUndefined)->BooleanValue());
    imp->initTouchEvent(touches, targetTouches, changedTouches, type, view, screenX, screenY, clientX, clientY, ctrlKey, altKey, shiftKey, metaKey);
    return v8::Handle<v8::Value>();
}

} // namespace TouchEventInternal

static const BatchedAttribute TouchEventAttrs[] = {
    // Attribute 'touches' (Type: 'readonly attribute' ExtAttr: '')
    {"touches", TouchEventInternal::touchesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'targetTouches' (Type: 'readonly attribute' ExtAttr: '')
    {"targetTouches", TouchEventInternal::targetTouchesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'changedTouches' (Type: 'readonly attribute' ExtAttr: '')
    {"changedTouches", TouchEventInternal::changedTouchesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'ctrlKey' (Type: 'readonly attribute' ExtAttr: '')
    {"ctrlKey", TouchEventInternal::ctrlKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'shiftKey' (Type: 'readonly attribute' ExtAttr: '')
    {"shiftKey", TouchEventInternal::shiftKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'altKey' (Type: 'readonly attribute' ExtAttr: '')
    {"altKey", TouchEventInternal::altKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'metaKey' (Type: 'readonly attribute' ExtAttr: '')
    {"metaKey", TouchEventInternal::metaKeyAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8TouchEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "TouchEvent", V8UIEvent::GetTemplate(), V8TouchEvent::internalFieldCount,
        TouchEventAttrs, WTF_ARRAY_LENGTH(TouchEventAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'initTouchEvent'
    const int initTouchEventArgc = 13;
    v8::Handle<v8::FunctionTemplate> initTouchEventArgv[initTouchEventArgc] = { V8TouchList::GetRawTemplate(), V8TouchList::GetRawTemplate(), V8TouchList::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>(), V8DOMWindow::GetRawTemplate(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>(), v8::Handle<v8::FunctionTemplate>() };
    v8::Handle<v8::Signature> initTouchEventSignature = v8::Signature::New(desc, initTouchEventArgc, initTouchEventArgv);
    proto->Set(v8::String::New("initTouchEvent"), v8::FunctionTemplate::New(TouchEventInternal::initTouchEventCallback, v8::Handle<v8::Value>(), initTouchEventSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8TouchEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8TouchEvent::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8TouchEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8TouchEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8TouchEvent::wrapSlow(TouchEvent* impl)
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

void V8TouchEvent::derefObject(void* object)
{
    static_cast<TouchEvent*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(TOUCH_EVENTS)