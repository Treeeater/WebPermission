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
#include "V8OperationNotAllowedException.h"

#if ENABLE(BLOB) || ENABLE(FILE_SYSTEM)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8OperationNotAllowedException::info = { V8OperationNotAllowedException::GetTemplate, V8OperationNotAllowedException::derefObject, 0, 0 };

namespace OperationNotAllowedExceptionInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> codeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.OperationNotAllowedException.code._get");
    OperationNotAllowedException* imp = V8OperationNotAllowedException::toNative(info.Holder());
    return v8::Integer::New(imp->code());
}

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.OperationNotAllowedException.name._get");
    OperationNotAllowedException* imp = V8OperationNotAllowedException::toNative(info.Holder());
    return v8String(imp->name());
}

static v8::Handle<v8::Value> messageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.OperationNotAllowedException.message._get");
    OperationNotAllowedException* imp = V8OperationNotAllowedException::toNative(info.Holder());
    return v8String(imp->message());
}

static v8::Handle<v8::Value> toStringCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.OperationNotAllowedException.toString");
    OperationNotAllowedException* imp = V8OperationNotAllowedException::toNative(args.Holder());
    return v8String(imp->toString());
}

} // namespace OperationNotAllowedExceptionInternal

static const BatchedAttribute OperationNotAllowedExceptionAttrs[] = {
    // Attribute 'code' (Type: 'readonly attribute' ExtAttr: '')
    {"code", OperationNotAllowedExceptionInternal::codeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: '')
    {"name", OperationNotAllowedExceptionInternal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'message' (Type: 'readonly attribute' ExtAttr: '')
    {"message", OperationNotAllowedExceptionInternal::messageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedConstant OperationNotAllowedExceptionConsts[] = {
    {"NOT_ALLOWED_ERR", static_cast<signed int>(1)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8OperationNotAllowedExceptionTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "OperationNotAllowedException", v8::Persistent<v8::FunctionTemplate>(), V8OperationNotAllowedException::internalFieldCount,
        OperationNotAllowedExceptionAttrs, WTF_ARRAY_LENGTH(OperationNotAllowedExceptionAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    proto->Set(v8::String::New("toString"), v8::FunctionTemplate::New(OperationNotAllowedExceptionInternal::toStringCallback, v8::Handle<v8::Value>(), defaultSignature), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));
    batchConfigureConstants(desc, proto, OperationNotAllowedExceptionConsts, WTF_ARRAY_LENGTH(OperationNotAllowedExceptionConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8OperationNotAllowedException::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8OperationNotAllowedException::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8OperationNotAllowedExceptionTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8OperationNotAllowedException::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8OperationNotAllowedException::wrapSlow(OperationNotAllowedException* impl)
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

void V8OperationNotAllowedException::derefObject(void* object)
{
    static_cast<OperationNotAllowedException*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(BLOB) || ENABLE(FILE_SYSTEM)
