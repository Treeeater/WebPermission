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
#include "V8ScriptProfileNode.h"

#if ENABLE(JAVASCRIPT_DEBUGGER)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8ScriptProfileNode::info = { V8ScriptProfileNode::GetTemplate, V8ScriptProfileNode::derefObject, 0, 0 };

namespace ScriptProfileNodeInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> functionNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfileNode.functionName._get");
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8String(imp->functionName());
}

static v8::Handle<v8::Value> urlAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfileNode.url._get");
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8String(imp->url());
}

static v8::Handle<v8::Value> lineNumberAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfileNode.lineNumber._get");
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->lineNumber());
}

static v8::Handle<v8::Value> totalTimeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfileNode.totalTime._get");
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8::Number::New(imp->totalTime());
}

static v8::Handle<v8::Value> selfTimeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfileNode.selfTime._get");
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8::Number::New(imp->selfTime());
}

static v8::Handle<v8::Value> numberOfCallsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfileNode.numberOfCalls._get");
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8::Integer::NewFromUnsigned(imp->numberOfCalls());
}

static v8::Handle<v8::Value> visibleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.ScriptProfileNode.visible._get");
    ScriptProfileNode* imp = V8ScriptProfileNode::toNative(info.Holder());
    return v8Boolean(imp->visible());
}

} // namespace ScriptProfileNodeInternal

static const BatchedAttribute ScriptProfileNodeAttrs[] = {
    // Attribute 'functionName' (Type: 'readonly attribute' ExtAttr: '')
    {"functionName", ScriptProfileNodeInternal::functionNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'url' (Type: 'readonly attribute' ExtAttr: '')
    {"url", ScriptProfileNodeInternal::urlAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'lineNumber' (Type: 'readonly attribute' ExtAttr: '')
    {"lineNumber", ScriptProfileNodeInternal::lineNumberAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'totalTime' (Type: 'readonly attribute' ExtAttr: '')
    {"totalTime", ScriptProfileNodeInternal::totalTimeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'selfTime' (Type: 'readonly attribute' ExtAttr: '')
    {"selfTime", ScriptProfileNodeInternal::selfTimeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'numberOfCalls' (Type: 'readonly attribute' ExtAttr: '')
    {"numberOfCalls", ScriptProfileNodeInternal::numberOfCallsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'children' (Type: 'readonly attribute' ExtAttr: 'CustomGetter')
    {"children", V8ScriptProfileNode::childrenAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'visible' (Type: 'readonly attribute' ExtAttr: '')
    {"visible", ScriptProfileNodeInternal::visibleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'callUID' (Type: 'readonly attribute' ExtAttr: 'CustomGetter')
    {"callUID", V8ScriptProfileNode::callUIDAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8ScriptProfileNodeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "ScriptProfileNode", v8::Persistent<v8::FunctionTemplate>(), V8ScriptProfileNode::internalFieldCount,
        ScriptProfileNodeAttrs, WTF_ARRAY_LENGTH(ScriptProfileNodeAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8ScriptProfileNode::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8ScriptProfileNode::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8ScriptProfileNodeTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8ScriptProfileNode::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8ScriptProfileNode::wrapSlow(ScriptProfileNode* impl)
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

void V8ScriptProfileNode::derefObject(void* object)
{
    static_cast<ScriptProfileNode*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(JAVASCRIPT_DEBUGGER)
