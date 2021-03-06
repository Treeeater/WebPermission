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
#include "V8Int16Array.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8ArrayBufferView.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8Int16Array::info = { V8Int16Array::GetTemplate, V8Int16Array::derefObject, 0, &V8ArrayBufferView::info };

namespace Int16ArrayInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> lengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Int16Array.length._get");
    Int16Array* imp = V8Int16Array::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->length());
}

static v8::Handle<v8::Value> subarrayCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Int16Array.subarray");
    Int16Array* imp = V8Int16Array::toNative(args.Holder());
    EXCEPTION_BLOCK(int, start, toInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    if (args.Length() <= 1) {
        return toV8(imp->subarray(start));
    }
    EXCEPTION_BLOCK(int, end, toInt32(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)));
    return toV8(imp->subarray(start, end));
}

} // namespace Int16ArrayInternal

static const BatchedAttribute Int16ArrayAttrs[] = {
    // Attribute 'length' (Type: 'readonly attribute' ExtAttr: '')
    {"length", Int16ArrayInternal::lengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback Int16ArrayCallbacks[] = {
    {"subarray", Int16ArrayInternal::subarrayCallback},
    {"set", V8Int16Array::setCallback},
};

static const BatchedConstant Int16ArrayConsts[] = {
    {"BYTES_PER_ELEMENT", static_cast<signed int>(2)},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8Int16ArrayTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Int16Array", V8ArrayBufferView::GetTemplate(), V8Int16Array::internalFieldCount,
        Int16ArrayAttrs, WTF_ARRAY_LENGTH(Int16ArrayAttrs),
        Int16ArrayCallbacks, WTF_ARRAY_LENGTH(Int16ArrayCallbacks));
    desc->SetCallHandler(V8Int16Array::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, Int16ArrayConsts, WTF_ARRAY_LENGTH(Int16ArrayConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Int16Array::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8Int16Array::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8Int16ArrayTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8Int16Array::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Int16Array::wrapSlow(Int16Array* impl)
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

void V8Int16Array::derefObject(void* object)
{
    static_cast<Int16Array*>(object)->deref();
}

} // namespace WebCore
