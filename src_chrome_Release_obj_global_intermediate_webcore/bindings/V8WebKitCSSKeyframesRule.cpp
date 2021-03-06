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
#include "V8WebKitCSSKeyframesRule.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CSSRule.h"
#include "V8CSSRuleList.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8WebKitCSSKeyframeRule.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8WebKitCSSKeyframesRule::info = { V8WebKitCSSKeyframesRule::GetTemplate, V8WebKitCSSKeyframesRule::derefObject, 0, &V8CSSRule::info };

namespace WebKitCSSKeyframesRuleInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSKeyframesRule.name._get");
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(info.Holder());
    return v8StringOrNull(imp->name());
}

static void nameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSKeyframesRule.name._set");
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<WithNullCheck>, v, value);
    imp->setName(v);
    return;
}

static v8::Handle<v8::Value> cssRulesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.WebKitCSSKeyframesRule.cssRules._get");
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(info.Holder());
    RefPtr<CSSRuleList> result = imp->cssRules();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "cssRules", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> insertRuleCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSKeyframesRule.insertRule");
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, rule, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    imp->insertRule(rule);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> deleteRuleCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSKeyframesRule.deleteRule");
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, key, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    imp->deleteRule(key);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> findRuleCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitCSSKeyframesRule.findRule");
    WebKitCSSKeyframesRule* imp = V8WebKitCSSKeyframesRule::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, key, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return toV8(imp->findRule(key));
}

} // namespace WebKitCSSKeyframesRuleInternal

static const BatchedAttribute WebKitCSSKeyframesRuleAttrs[] = {
    // Attribute 'name' (Type: 'attribute' ExtAttr: 'ConvertNullToNullString ConvertNullStringTo')
    {"name", WebKitCSSKeyframesRuleInternal::nameAttrGetter, WebKitCSSKeyframesRuleInternal::nameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cssRules' (Type: 'readonly attribute' ExtAttr: '')
    {"cssRules", WebKitCSSKeyframesRuleInternal::cssRulesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback WebKitCSSKeyframesRuleCallbacks[] = {
    {"insertRule", WebKitCSSKeyframesRuleInternal::insertRuleCallback},
    {"deleteRule", WebKitCSSKeyframesRuleInternal::deleteRuleCallback},
    {"findRule", WebKitCSSKeyframesRuleInternal::findRuleCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8WebKitCSSKeyframesRuleTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "WebKitCSSKeyframesRule", V8CSSRule::GetTemplate(), V8WebKitCSSKeyframesRule::internalFieldCount,
        WebKitCSSKeyframesRuleAttrs, WTF_ARRAY_LENGTH(WebKitCSSKeyframesRuleAttrs),
        WebKitCSSKeyframesRuleCallbacks, WTF_ARRAY_LENGTH(WebKitCSSKeyframesRuleCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    setCollectionIndexedGetter<WebKitCSSKeyframesRule, WebKitCSSKeyframeRule>(desc);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WebKitCSSKeyframesRule::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8WebKitCSSKeyframesRule::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8WebKitCSSKeyframesRuleTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8WebKitCSSKeyframesRule::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8WebKitCSSKeyframesRule::wrapSlow(WebKitCSSKeyframesRule* impl)
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

void V8WebKitCSSKeyframesRule::derefObject(void* object)
{
    static_cast<WebKitCSSKeyframesRule*>(object)->deref();
}

} // namespace WebCore
