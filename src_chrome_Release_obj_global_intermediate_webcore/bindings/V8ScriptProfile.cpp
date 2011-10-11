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
#include "V8ScriptProfile.h"

#if ENABLE(JAVASCRIPT_DEBUGGER)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8ScriptProfileNode.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8ScriptProfile::info = { V8ScriptProfile::GetTemplate, V8ScriptProfile::derefObject, 0, 0 };

namespace ScriptProfileInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> titleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfile.title._get");
    ScriptProfile* imp = V8ScriptProfile::toNative(info.Holder());
    return v8String(imp->title());
}

static v8::Handle<v8::Value> uidAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfile.uid._get");
    ScriptProfile* imp = V8ScriptProfile::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->uid());
}

static v8::Handle<v8::Value> headAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfile.head._get");
    ScriptProfile* imp = V8ScriptProfile::toNative(info.Holder());
    RefPtr<ScriptProfileNode> result = imp->head();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "head", wrapper);
    }
    return wrapper;
}

} // namespace ScriptProfileInternal

static const BatchedAttribute ScriptProfileAttrs[] = {
    // Attribute 'title' (Type: 'readonly attribute' ExtAttr: '')
    {"title", ScriptProfileInternal::titleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'uid' (Type: 'readonly attribute' ExtAttr: '')
    {"uid", ScriptProfileInternal::uidAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'head' (Type: 'readonly attribute' ExtAttr: '')
    {"head", ScriptProfileInternal::headAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8ScriptProfileTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "ScriptProfile", v8::Persistent<v8::FunctionTemplate>(), V8ScriptProfile::internalFieldCount,
        ScriptProfileAttrs, WTF_ARRAY_LENGTH(ScriptProfileAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8ScriptProfile::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8ScriptProfile::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8ScriptProfileTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8ScriptProfile::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8ScriptProfile::wrapSlow(ScriptProfile* impl)
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

void V8ScriptProfile::derefObject(void* object)
{
    static_cast<ScriptProfile*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(JAVASCRIPT_DEBUGGER)