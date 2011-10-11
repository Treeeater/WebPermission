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
#include "V8HTMLBaseFontElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLBaseFontElement::info = { V8HTMLBaseFontElement::GetTemplate, V8HTMLBaseFontElement::derefObject, 0, &V8HTMLElement::info };

namespace HTMLBaseFontElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> colorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBaseFontElement.color._get");
    return getElementStringAttr(info, HTMLNames::colorAttr);
}

static void colorAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBaseFontElement.color._set");
    setElementStringAttr(info, HTMLNames::colorAttr, value);
}

static v8::Handle<v8::Value> faceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBaseFontElement.face._get");
    return getElementStringAttr(info, HTMLNames::faceAttr);
}

static void faceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBaseFontElement.face._set");
    setElementStringAttr(info, HTMLNames::faceAttr, value);
}

static v8::Handle<v8::Value> sizeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBaseFontElement.size._get");
    HTMLBaseFontElement* imp = V8HTMLBaseFontElement::toNative(info.Holder());
    return v8::Integer::New(imp->getIntegralAttribute(WebCore::HTMLNames::sizeAttr));
}

static void sizeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLBaseFontElement.size._set");
    HTMLBaseFontElement* imp = V8HTMLBaseFontElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setIntegralAttribute(WebCore::HTMLNames::sizeAttr, v);
    return;
}

} // namespace HTMLBaseFontElementInternal

static const BatchedAttribute HTMLBaseFontElementAttrs[] = {
    // Attribute 'color' (Type: 'attribute' ExtAttr: 'Reflect')
    {"color", HTMLBaseFontElementInternal::colorAttrGetter, HTMLBaseFontElementInternal::colorAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'face' (Type: 'attribute' ExtAttr: 'Reflect')
    {"face", HTMLBaseFontElementInternal::faceAttrGetter, HTMLBaseFontElementInternal::faceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'size' (Type: 'attribute' ExtAttr: 'Reflect')
    {"size", HTMLBaseFontElementInternal::sizeAttrGetter, HTMLBaseFontElementInternal::sizeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLBaseFontElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLBaseFontElement", V8HTMLElement::GetTemplate(), V8HTMLBaseFontElement::internalFieldCount,
        HTMLBaseFontElementAttrs, WTF_ARRAY_LENGTH(HTMLBaseFontElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLBaseFontElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLBaseFontElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLBaseFontElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLBaseFontElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLBaseFontElement::wrapSlow(HTMLBaseFontElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8HTMLBaseFontElement::wrap(impl);
            }
        }
    }


    v8::Handle<v8::Context> context;
    if (proxy)
        context = proxy->context();

    // Enter the node's context and create the wrapper in that context.
    if (!context.IsEmpty())
        context->Enter();
    wrapper = V8DOMWrapper::instantiateV8Object(proxy, &info, impl);
    // Exit the node's context if it was entered.
    if (!context.IsEmpty())
        context->Exit();
    if (wrapper.IsEmpty())
        return wrapper;

    impl->ref();
    v8::Persistent<v8::Object> wrapperHandle = v8::Persistent<v8::Object>::New(wrapper);

    if (!hasDependentLifetime)
        wrapperHandle.MarkIndependent();
    wrapperHandle.SetWrapperClassId(v8DOMSubtreeClassId);
    getDOMNodeMap().set(impl, wrapperHandle);
    return wrapper;
}

void V8HTMLBaseFontElement::derefObject(void* object)
{
    static_cast<HTMLBaseFontElement*>(object)->deref();
}

} // namespace WebCore