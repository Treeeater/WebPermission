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
#include "V8HTMLAppletElement.h"

#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLAppletElement::info = { V8HTMLAppletElement::GetTemplate, V8HTMLAppletElement::derefObject, 0, &V8HTMLElement::info };

namespace HTMLAppletElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> alignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.align._get");
    return getElementStringAttr(info, HTMLNames::alignAttr);
}

static void alignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.align._set");
    setElementStringAttr(info, HTMLNames::alignAttr, value);
}

static v8::Handle<v8::Value> altAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.alt._get");
    return getElementStringAttr(info, HTMLNames::altAttr);
}

static void altAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.alt._set");
    setElementStringAttr(info, HTMLNames::altAttr, value);
}

static v8::Handle<v8::Value> archiveAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.archive._get");
    return getElementStringAttr(info, HTMLNames::archiveAttr);
}

static void archiveAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.archive._set");
    setElementStringAttr(info, HTMLNames::archiveAttr, value);
}

static v8::Handle<v8::Value> codeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.code._get");
    return getElementStringAttr(info, HTMLNames::codeAttr);
}

static void codeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.code._set");
    setElementStringAttr(info, HTMLNames::codeAttr, value);
}

static v8::Handle<v8::Value> codeBaseAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.codeBase._get");
    return getElementStringAttr(info, HTMLNames::codebaseAttr);
}

static void codeBaseAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.codeBase._set");
    setElementStringAttr(info, HTMLNames::codebaseAttr, value);
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.height._get");
    return getElementStringAttr(info, HTMLNames::heightAttr);
}

static void heightAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.height._set");
    setElementStringAttr(info, HTMLNames::heightAttr, value);
}

static v8::Handle<v8::Value> hspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.hspace._get");
    return getElementStringAttr(info, HTMLNames::hspaceAttr);
}

static void hspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.hspace._set");
    setElementStringAttr(info, HTMLNames::hspaceAttr, value);
}

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.name._get");
    return getElementStringAttr(info, HTMLNames::nameAttr);
}

static void nameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.name._set");
    setElementStringAttr(info, HTMLNames::nameAttr, value);
}

static v8::Handle<v8::Value> objectAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.object._get");
    return getElementStringAttr(info, HTMLNames::objectAttr);
}

static void objectAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.object._set");
    setElementStringAttr(info, HTMLNames::objectAttr, value);
}

static v8::Handle<v8::Value> vspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.vspace._get");
    return getElementStringAttr(info, HTMLNames::vspaceAttr);
}

static void vspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.vspace._set");
    setElementStringAttr(info, HTMLNames::vspaceAttr, value);
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.width._get");
    return getElementStringAttr(info, HTMLNames::widthAttr);
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLAppletElement.width._set");
    setElementStringAttr(info, HTMLNames::widthAttr, value);
}

} // namespace HTMLAppletElementInternal

static const BatchedAttribute HTMLAppletElementAttrs[] = {
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLAppletElementInternal::alignAttrGetter, HTMLAppletElementInternal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'alt' (Type: 'attribute' ExtAttr: 'Reflect')
    {"alt", HTMLAppletElementInternal::altAttrGetter, HTMLAppletElementInternal::altAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'archive' (Type: 'attribute' ExtAttr: 'Reflect')
    {"archive", HTMLAppletElementInternal::archiveAttrGetter, HTMLAppletElementInternal::archiveAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'code' (Type: 'attribute' ExtAttr: 'Reflect')
    {"code", HTMLAppletElementInternal::codeAttrGetter, HTMLAppletElementInternal::codeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'codeBase' (Type: 'attribute' ExtAttr: 'Reflect')
    {"codeBase", HTMLAppletElementInternal::codeBaseAttrGetter, HTMLAppletElementInternal::codeBaseAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'attribute' ExtAttr: 'Reflect')
    {"height", HTMLAppletElementInternal::heightAttrGetter, HTMLAppletElementInternal::heightAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hspace' (Type: 'attribute' ExtAttr: 'Reflect')
    {"hspace", HTMLAppletElementInternal::hspaceAttrGetter, HTMLAppletElementInternal::hspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'attribute' ExtAttr: 'Reflect')
    {"name", HTMLAppletElementInternal::nameAttrGetter, HTMLAppletElementInternal::nameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'object' (Type: 'attribute' ExtAttr: 'Reflect')
    {"object", HTMLAppletElementInternal::objectAttrGetter, HTMLAppletElementInternal::objectAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vspace' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vspace", HTMLAppletElementInternal::vspaceAttrGetter, HTMLAppletElementInternal::vspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLAppletElementInternal::widthAttrGetter, HTMLAppletElementInternal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLAppletElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLAppletElement", V8HTMLElement::GetTemplate(), V8HTMLAppletElement::internalFieldCount,
        HTMLAppletElementAttrs, WTF_ARRAY_LENGTH(HTMLAppletElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    
    desc->InstanceTemplate()->SetIndexedPropertyHandler(V8HTMLAppletElement::indexedPropertyGetter, V8HTMLAppletElement::indexedPropertySetter, 0, 0);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8HTMLAppletElement::namedPropertyGetter, V8HTMLAppletElement::namedPropertySetter, 0, 0, 0);
    desc->InstanceTemplate()->SetCallAsFunctionHandler(V8HTMLAppletElement::callAsFunctionCallback);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLAppletElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLAppletElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLAppletElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLAppletElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLAppletElement::wrapSlow(HTMLAppletElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8HTMLAppletElement::wrap(impl);
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

void V8HTMLAppletElement::derefObject(void* object)
{
    static_cast<HTMLAppletElement*>(object)->deref();
}

} // namespace WebCore
