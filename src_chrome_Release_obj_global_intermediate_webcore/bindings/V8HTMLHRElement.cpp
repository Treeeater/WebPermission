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
#include "V8HTMLHRElement.h"

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

WrapperTypeInfo V8HTMLHRElement::info = { V8HTMLHRElement::GetTemplate, V8HTMLHRElement::derefObject, 0, &V8HTMLElement::info };

namespace HTMLHRElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> alignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLHRElement.align._get");
    return getElementStringAttr(info, HTMLNames::alignAttr);
}

static void alignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLHRElement.align._set");
    setElementStringAttr(info, HTMLNames::alignAttr, value);
}

static v8::Handle<v8::Value> noShadeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLHRElement.noShade._get");
    HTMLHRElement* imp = V8HTMLHRElement::toNative(info.Holder());
    return v8Boolean(imp->hasAttribute(WebCore::HTMLNames::noshadeAttr));
}

static void noShadeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLHRElement.noShade._set");
    HTMLHRElement* imp = V8HTMLHRElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::noshadeAttr, v);
    return;
}

static v8::Handle<v8::Value> sizeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLHRElement.size._get");
    return getElementStringAttr(info, HTMLNames::sizeAttr);
}

static void sizeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLHRElement.size._set");
    setElementStringAttr(info, HTMLNames::sizeAttr, value);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLHRElement.width._get");
    return getElementStringAttr(info, HTMLNames::widthAttr);
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLHRElement.width._set");
    setElementStringAttr(info, HTMLNames::widthAttr, value);
}

} // namespace HTMLHRElementInternal

static const BatchedAttribute HTMLHRElementAttrs[] = {
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLHRElementInternal::alignAttrGetter, HTMLHRElementInternal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'noShade' (Type: 'attribute' ExtAttr: 'Reflect')
    {"noShade", HTMLHRElementInternal::noShadeAttrGetter, HTMLHRElementInternal::noShadeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'size' (Type: 'attribute' ExtAttr: 'Reflect')
    {"size", HTMLHRElementInternal::sizeAttrGetter, HTMLHRElementInternal::sizeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLHRElementInternal::widthAttrGetter, HTMLHRElementInternal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLHRElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLHRElement", V8HTMLElement::GetTemplate(), V8HTMLHRElement::internalFieldCount,
        HTMLHRElementAttrs, WTF_ARRAY_LENGTH(HTMLHRElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLHRElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLHRElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLHRElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLHRElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLHRElement::wrapSlow(HTMLHRElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8HTMLHRElement::wrap(impl);
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

void V8HTMLHRElement::derefObject(void* object)
{
    static_cast<HTMLHRElement*>(object)->deref();
}

} // namespace WebCore
