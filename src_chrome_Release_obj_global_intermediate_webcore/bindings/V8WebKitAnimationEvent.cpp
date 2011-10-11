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
#include "V8WebKitAnimationEvent.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8WebKitAnimationEvent::info = { V8WebKitAnimationEvent::GetTemplate, V8WebKitAnimationEvent::derefObject, 0, &V8Event::info };

namespace WebKitAnimationEventInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> animationNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitAnimationEvent.animationName._get");
    WebKitAnimationEvent* imp = V8WebKitAnimationEvent::toNative(info.Holder());
    return v8String(imp->animationName());
}

static v8::Handle<v8::Value> elapsedTimeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitAnimationEvent.elapsedTime._get");
    WebKitAnimationEvent* imp = V8WebKitAnimationEvent::toNative(info.Holder());
    return v8::Number::New(imp->elapsedTime());
}

static v8::Handle<v8::Value> initWebKitAnimationEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitAnimationEvent.initWebKitAnimationEvent");
    WebKitAnimationEvent* imp = V8WebKitAnimationEvent::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, typeArg, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    EXCEPTION_BLOCK(bool, canBubbleArg, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(bool, cancelableArg, MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->BooleanValue());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, animationNameArg, MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined));
    EXCEPTION_BLOCK(double, elapsedTimeArg, static_cast<double>(MAYBE_MISSING_PARAMETER(args, 4, MissingIsUndefined)->NumberValue()));
    imp->initWebKitAnimationEvent(typeArg, canBubbleArg, cancelableArg, animationNameArg, elapsedTimeArg);
    return v8::Handle<v8::Value>();
}

} // namespace WebKitAnimationEventInternal

static const BatchedAttribute WebKitAnimationEventAttrs[] = {
    // Attribute 'animationName' (Type: 'readonly attribute' ExtAttr: '')
    {"animationName", WebKitAnimationEventInternal::animationNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'elapsedTime' (Type: 'readonly attribute' ExtAttr: '')
    {"elapsedTime", WebKitAnimationEventInternal::elapsedTimeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback WebKitAnimationEventCallbacks[] = {
    {"initWebKitAnimationEvent", WebKitAnimationEventInternal::initWebKitAnimationEventCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8WebKitAnimationEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "WebKitAnimationEvent", V8Event::GetTemplate(), V8WebKitAnimationEvent::internalFieldCount,
        WebKitAnimationEventAttrs, WTF_ARRAY_LENGTH(WebKitAnimationEventAttrs),
        WebKitAnimationEventCallbacks, WTF_ARRAY_LENGTH(WebKitAnimationEventCallbacks));
    desc->SetCallHandler(V8WebKitAnimationEvent::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WebKitAnimationEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8WebKitAnimationEvent::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8WebKitAnimationEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8WebKitAnimationEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8WebKitAnimationEvent::wrapSlow(WebKitAnimationEvent* impl)
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

void V8WebKitAnimationEvent::derefObject(void* object)
{
    static_cast<WebKitAnimationEvent*>(object)->deref();
}

} // namespace WebCore
