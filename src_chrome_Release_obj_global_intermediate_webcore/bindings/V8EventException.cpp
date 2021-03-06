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
#include "V8EventException.h"

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8EventException::info = { V8EventException::GetTemplate, V8EventException::derefObject, 0, 0 };

namespace EventExceptionInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> codeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.EventException.code._get");
    EventException* imp = V8EventException::toNative(info.Holder());
    return v8::Integer::New(imp->code());
}

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.EventException.name._get");
    EventException* imp = V8EventException::toNative(info.Holder());
    return v8String(imp->name());
}

static v8::Handle<v8::Value> messageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.EventException.message._get");
    EventException* imp = V8EventException::toNative(info.Holder());
    return v8String(imp->message());
}

static v8::Handle<v8::Value> toStringCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.EventException.toString");
    EventException* imp = V8EventException::toNative(args.Holder());
    return v8String(imp->toString());
}

} // namespace EventExceptionInternal

static const BatchedAttribute EventExceptionAttrs[] = {
    // Attribute 'code' (Type: 'readonly attribute' ExtAttr: '')
    {"code", EventExceptionInternal::codeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", EventExceptionInternal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'message' (Type: 'readonly attribute' ExtAttr: '')
    {"message", EventExceptionInternal::messageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedConstant EventExceptionConsts[] = {
    {"UNSPECIFIED_EVENT_TYPE_ERR", static_cast<signed int>(0)},
    {"DISPATCH_REQUEST_ERR", static_cast<signed int>(1)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8EventExceptionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "EventException", v8::Persistent<v8::FunctionTemplate>(), V8EventException::internalFieldCount,
        EventExceptionAttrs, WTF_ARRAY_LENGTH(EventExceptionAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    proto->Set(v8::String::New("toString"), v8::FunctionTemplate::New(EventExceptionInternal::toStringCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    batchConfigureConstants(desc, proto, EventExceptionConsts, WTF_ARRAY_LENGTH(EventExceptionConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8EventException::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8EventException::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8EventExceptionTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8EventException::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8EventException::wrapSlow(EventException* impl)
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

void V8EventException::derefObject(void* object)
{
    static_cast<EventException*>(object)->deref();
}

} // namespace WebCore
