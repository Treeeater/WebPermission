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
#include "V8HashChangeEvent.h"

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

WrapperTypeInfo V8HashChangeEvent::info = { V8HashChangeEvent::GetTemplate, V8HashChangeEvent::derefObject, 0, &V8Event::info };

namespace HashChangeEventInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> oldURLAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HashChangeEvent.oldURL._get");
    HashChangeEvent* imp = V8HashChangeEvent::toNative(info.Holder());
    return v8String(imp->oldURL());
}

static v8::Handle<v8::Value> newURLAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HashChangeEvent.newURL._get");
    HashChangeEvent* imp = V8HashChangeEvent::toNative(info.Holder());
    return v8String(imp->newURL());
}

static v8::Handle<v8::Value> initHashChangeEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HashChangeEvent.initHashChangeEvent");
    HashChangeEvent* imp = V8HashChangeEvent::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, type, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    EXCEPTION_BLOCK(bool, canBubble, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(bool, cancelable, MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->BooleanValue());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, oldURL, MAYBE_MISSING_PARAMETER(args, 3, MissingIsUndefined));
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, newURL, MAYBE_MISSING_PARAMETER(args, 4, MissingIsUndefined));
    imp->initHashChangeEvent(type, canBubble, cancelable, oldURL, newURL);
    return v8::Handle<v8::Value>();
}

} // namespace HashChangeEventInternal

static const BatchedAttribute HashChangeEventAttrs[] = {
    // Attribute 'oldURL' (Type: 'readonly attribute' ExtAttr: '')
    {"oldURL", HashChangeEventInternal::oldURLAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'newURL' (Type: 'readonly attribute' ExtAttr: '')
    {"newURL", HashChangeEventInternal::newURLAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback HashChangeEventCallbacks[] = {
    {"initHashChangeEvent", HashChangeEventInternal::initHashChangeEventCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HashChangeEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HashChangeEvent", V8Event::GetTemplate(), V8HashChangeEvent::internalFieldCount,
        HashChangeEventAttrs, WTF_ARRAY_LENGTH(HashChangeEventAttrs),
        HashChangeEventCallbacks, WTF_ARRAY_LENGTH(HashChangeEventCallbacks));
    desc->SetCallHandler(V8HashChangeEvent::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HashChangeEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HashChangeEvent::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HashChangeEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HashChangeEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HashChangeEvent::wrapSlow(HashChangeEvent* impl)
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

void V8HashChangeEvent::derefObject(void* object)
{
    static_cast<HashChangeEvent*>(object)->deref();
}

} // namespace WebCore
