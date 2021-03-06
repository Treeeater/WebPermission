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
#include "V8MediaError.h"

#if ENABLE(VIDEO)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8MediaError::info = { V8MediaError::GetTemplate, V8MediaError::derefObject, 0, 0 };

namespace MediaErrorInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> codeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MediaError.code._get");
    MediaError* imp = V8MediaError::toNative(info.Holder());
    return v8::Integer::New(imp->code());
}

} // namespace MediaErrorInternal

static const BatchedAttribute MediaErrorAttrs[] = {
    // Attribute 'code' (Type: 'readonly attribute' ExtAttr: '')
    {"code", MediaErrorInternal::codeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedConstant MediaErrorConsts[] = {
    {"MEDIA_ERR_ABORTED", static_cast<signed int>(1)},
    {"MEDIA_ERR_NETWORK", static_cast<signed int>(2)},
    {"MEDIA_ERR_DECODE", static_cast<signed int>(3)},
    {"MEDIA_ERR_SRC_NOT_SUPPORTED", static_cast<signed int>(4)},
};


COMPILE_ASSERT(1 == MediaError::MEDIA_ERR_ABORTED, MediaErrorEnumMEDIA_ERR_ABORTEDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == MediaError::MEDIA_ERR_NETWORK, MediaErrorEnumMEDIA_ERR_NETWORKIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == MediaError::MEDIA_ERR_DECODE, MediaErrorEnumMEDIA_ERR_DECODEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == MediaError::MEDIA_ERR_SRC_NOT_SUPPORTED, MediaErrorEnumMEDIA_ERR_SRC_NOT_SUPPORTEDIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8MediaErrorTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "MediaError", v8::Persistent<v8::FunctionTemplate>(), V8MediaError::internalFieldCount,
        MediaErrorAttrs, WTF_ARRAY_LENGTH(MediaErrorAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, MediaErrorConsts, WTF_ARRAY_LENGTH(MediaErrorConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8MediaError::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8MediaError::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8MediaErrorTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8MediaError::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8MediaError::wrapSlow(MediaError* impl)
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

void V8MediaError::derefObject(void* object)
{
    static_cast<MediaError*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(VIDEO)
