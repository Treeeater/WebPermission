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
#include "V8CSSStyleRule.h"

#include "CSSMutableStyleDeclaration.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CSSRule.h"
#include "V8CSSStyleDeclaration.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8CSSStyleRule::info = { V8CSSStyleRule::GetTemplate, V8CSSStyleRule::derefObject, 0, &V8CSSRule::info };

namespace CSSStyleRuleInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> selectorTextAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSStyleRule.selectorText._get");
    CSSStyleRule* imp = V8CSSStyleRule::toNative(info.Holder());
    return v8StringOrNull(imp->selectorText());
}

static void selectorTextAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSStyleRule.selectorText._set");
    CSSStyleRule* imp = V8CSSStyleRule::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<WithNullCheck>, v, value);
    imp->setSelectorText(v);
    return;
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSStyleRule.style._get");
    CSSStyleRule* imp = V8CSSStyleRule::toNative(info.Holder());
    RefPtr<CSSStyleDeclaration> result = imp->style();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "style", wrapper);
    }
    return wrapper;
}

} // namespace CSSStyleRuleInternal

static const BatchedAttribute CSSStyleRuleAttrs[] = {
    // Attribute 'selectorText' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString ConvertNullStringTo')
    {"selectorText", CSSStyleRuleInternal::selectorTextAttrGetter, CSSStyleRuleInternal::selectorTextAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", CSSStyleRuleInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8CSSStyleRuleTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "CSSStyleRule", V8CSSRule::GetTemplate(), V8CSSStyleRule::internalFieldCount,
        CSSStyleRuleAttrs, WTF_ARRAY_LENGTH(CSSStyleRuleAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CSSStyleRule::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8CSSStyleRule::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8CSSStyleRuleTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8CSSStyleRule::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CSSStyleRule::wrapSlow(CSSStyleRule* impl)
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

void V8CSSStyleRule::derefObject(void* object)
{
    static_cast<CSSStyleRule*>(object)->deref();
}

} // namespace WebCore