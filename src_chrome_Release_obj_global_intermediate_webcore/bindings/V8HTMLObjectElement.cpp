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
#include "V8HTMLObjectElement.h"

#include "ExceptionCode.h"
#include "HTMLNames.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Collection.h"
#include "V8DOMWrapper.h"
#include "V8Document.h"
#include "V8HTMLElement.h"
#include "V8HTMLFormElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGDocument.h"
#include "V8ValidityState.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8HTMLObjectElement::info = { V8HTMLObjectElement::GetTemplate, V8HTMLObjectElement::derefObject, 0, &V8HTMLElement::info };

namespace HTMLObjectElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> formAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.form._get");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    return toV8(imp->form());
}

static v8::Handle<v8::Value> codeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.code._get");
    return getElementStringAttr(info, HTMLNames::codeAttr);
}

static void codeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.code._set");
    setElementStringAttr(info, HTMLNames::codeAttr, value);
}

static v8::Handle<v8::Value> alignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.align._get");
    return getElementStringAttr(info, HTMLNames::alignAttr);
}

static void alignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.align._set");
    setElementStringAttr(info, HTMLNames::alignAttr, value);
}

static v8::Handle<v8::Value> archiveAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.archive._get");
    return getElementStringAttr(info, HTMLNames::archiveAttr);
}

static void archiveAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.archive._set");
    setElementStringAttr(info, HTMLNames::archiveAttr, value);
}

static v8::Handle<v8::Value> borderAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.border._get");
    return getElementStringAttr(info, HTMLNames::borderAttr);
}

static void borderAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.border._set");
    setElementStringAttr(info, HTMLNames::borderAttr, value);
}

static v8::Handle<v8::Value> codeBaseAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.codeBase._get");
    return getElementStringAttr(info, HTMLNames::codebaseAttr);
}

static void codeBaseAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.codeBase._set");
    setElementStringAttr(info, HTMLNames::codebaseAttr, value);
}

static v8::Handle<v8::Value> codeTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.codeType._get");
    return getElementStringAttr(info, HTMLNames::codetypeAttr);
}

static void codeTypeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.codeType._set");
    setElementStringAttr(info, HTMLNames::codetypeAttr, value);
}

static v8::Handle<v8::Value> dataAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.data._get");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    return v8String(imp->getURLAttribute(WebCore::HTMLNames::dataAttr));
}

static void dataAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.data._set");
    setElementStringAttr(info, HTMLNames::dataAttr, value);
}

static v8::Handle<v8::Value> declareAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.declare._get");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    return v8Boolean(imp->hasAttribute(WebCore::HTMLNames::declareAttr));
}

static void declareAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.declare._set");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setBooleanAttribute(WebCore::HTMLNames::declareAttr, v);
    return;
}

static v8::Handle<v8::Value> heightAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.height._get");
    return getElementStringAttr(info, HTMLNames::heightAttr);
}

static void heightAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.height._set");
    setElementStringAttr(info, HTMLNames::heightAttr, value);
}

static v8::Handle<v8::Value> hspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.hspace._get");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    return v8::Integer::New(imp->getIntegralAttribute(WebCore::HTMLNames::hspaceAttr));
}

static void hspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.hspace._set");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setIntegralAttribute(WebCore::HTMLNames::hspaceAttr, v);
    return;
}

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.name._get");
    return getElementStringAttr(info, HTMLNames::nameAttr);
}

static void nameAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.name._set");
    setElementStringAttr(info, HTMLNames::nameAttr, value);
}

static v8::Handle<v8::Value> standbyAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.standby._get");
    return getElementStringAttr(info, HTMLNames::standbyAttr);
}

static void standbyAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.standby._set");
    setElementStringAttr(info, HTMLNames::standbyAttr, value);
}

static v8::Handle<v8::Value> typeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.type._get");
    return getElementStringAttr(info, HTMLNames::typeAttr);
}

static void typeAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.type._set");
    setElementStringAttr(info, HTMLNames::typeAttr, value);
}

static v8::Handle<v8::Value> useMapAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.useMap._get");
    return getElementStringAttr(info, HTMLNames::usemapAttr);
}

static void useMapAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.useMap._set");
    setElementStringAttr(info, HTMLNames::usemapAttr, value);
}

static v8::Handle<v8::Value> vspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.vspace._get");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    return v8::Integer::New(imp->getIntegralAttribute(WebCore::HTMLNames::vspaceAttr));
}

static void vspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.vspace._set");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    int v = toInt32(value);
    imp->setIntegralAttribute(WebCore::HTMLNames::vspaceAttr, v);
    return;
}

static v8::Handle<v8::Value> widthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.width._get");
    return getElementStringAttr(info, HTMLNames::widthAttr);
}

static void widthAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.width._set");
    setElementStringAttr(info, HTMLNames::widthAttr, value);
}

static v8::Handle<v8::Value> willValidateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.willValidate._get");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    return v8Boolean(imp->willValidate());
}

static v8::Handle<v8::Value> validityAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.validity._get");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    return toV8(imp->validity());
}

static v8::Handle<v8::Value> validationMessageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.validationMessage._get");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    return v8String(imp->validationMessage());
}

static v8::Handle<v8::Value> contentDocumentAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLObjectElement.contentDocument._get");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(info.Holder());
    if (!V8BindingSecurity::checkNodeSecurity(V8BindingState::Only(), imp->contentDocument()))
    return v8::Handle<v8::Value>();

    return toV8(imp->contentDocument());
}

static v8::Handle<v8::Value> checkValidityCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLObjectElement.checkValidity");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(args.Holder());
    return v8Boolean(imp->checkValidity());
}

static v8::Handle<v8::Value> setCustomValidityCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLObjectElement.setCustomValidity");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<WithUndefinedOrNullCheck>, error, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    imp->setCustomValidity(error);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getSVGDocumentCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLObjectElement.getSVGDocument");
    HTMLObjectElement* imp = V8HTMLObjectElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (!V8BindingSecurity::checkNodeSecurity(V8BindingState::Only(), imp->getSVGDocument(ec)))
        return v8::Handle<v8::Value>();
    RefPtr<SVGDocument> result = imp->getSVGDocument(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace HTMLObjectElementInternal

static const BatchedAttribute HTMLObjectElementAttrs[] = {
    // Attribute 'form' (Type: 'readonly attribute' ExtAttr: '')
    {"form", HTMLObjectElementInternal::formAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'code' (Type: 'attribute' ExtAttr: 'Reflect')
    {"code", HTMLObjectElementInternal::codeAttrGetter, HTMLObjectElementInternal::codeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'Reflect')
    {"align", HTMLObjectElementInternal::alignAttrGetter, HTMLObjectElementInternal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'archive' (Type: 'attribute' ExtAttr: 'Reflect')
    {"archive", HTMLObjectElementInternal::archiveAttrGetter, HTMLObjectElementInternal::archiveAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'border' (Type: 'attribute' ExtAttr: 'Reflect')
    {"border", HTMLObjectElementInternal::borderAttrGetter, HTMLObjectElementInternal::borderAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'codeBase' (Type: 'attribute' ExtAttr: 'Reflect')
    {"codeBase", HTMLObjectElementInternal::codeBaseAttrGetter, HTMLObjectElementInternal::codeBaseAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'codeType' (Type: 'attribute' ExtAttr: 'Reflect')
    {"codeType", HTMLObjectElementInternal::codeTypeAttrGetter, HTMLObjectElementInternal::codeTypeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'data' (Type: 'attribute' ExtAttr: 'URL Reflect')
    {"data", HTMLObjectElementInternal::dataAttrGetter, HTMLObjectElementInternal::dataAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'declare' (Type: 'attribute' ExtAttr: 'Reflect')
    {"declare", HTMLObjectElementInternal::declareAttrGetter, HTMLObjectElementInternal::declareAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'height' (Type: 'attribute' ExtAttr: 'Reflect')
    {"height", HTMLObjectElementInternal::heightAttrGetter, HTMLObjectElementInternal::heightAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'hspace' (Type: 'attribute' ExtAttr: 'Reflect')
    {"hspace", HTMLObjectElementInternal::hspaceAttrGetter, HTMLObjectElementInternal::hspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'name' (Type: 'attribute' ExtAttr: 'Reflect')
    {"name", HTMLObjectElementInternal::nameAttrGetter, HTMLObjectElementInternal::nameAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'standby' (Type: 'attribute' ExtAttr: 'Reflect')
    {"standby", HTMLObjectElementInternal::standbyAttrGetter, HTMLObjectElementInternal::standbyAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'type' (Type: 'attribute' ExtAttr: 'Reflect')
    {"type", HTMLObjectElementInternal::typeAttrGetter, HTMLObjectElementInternal::typeAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'useMap' (Type: 'attribute' ExtAttr: 'Reflect')
    {"useMap", HTMLObjectElementInternal::useMapAttrGetter, HTMLObjectElementInternal::useMapAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vspace' (Type: 'attribute' ExtAttr: 'Reflect')
    {"vspace", HTMLObjectElementInternal::vspaceAttrGetter, HTMLObjectElementInternal::vspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'width' (Type: 'attribute' ExtAttr: 'Reflect')
    {"width", HTMLObjectElementInternal::widthAttrGetter, HTMLObjectElementInternal::widthAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'willValidate' (Type: 'readonly attribute' ExtAttr: '')
    {"willValidate", HTMLObjectElementInternal::willValidateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'validity' (Type: 'readonly attribute' ExtAttr: '')
    {"validity", HTMLObjectElementInternal::validityAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'validationMessage' (Type: 'readonly attribute' ExtAttr: '')
    {"validationMessage", HTMLObjectElementInternal::validationMessageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'contentDocument' (Type: 'readonly attribute' ExtAttr: 'CheckFrameSecurity')
    {"contentDocument", HTMLObjectElementInternal::contentDocumentAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback HTMLObjectElementCallbacks[] = {
    {"checkValidity", HTMLObjectElementInternal::checkValidityCallback},
    {"setCustomValidity", HTMLObjectElementInternal::setCustomValidityCallback},
    {"getSVGDocument", HTMLObjectElementInternal::getSVGDocumentCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLObjectElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLObjectElement", V8HTMLElement::GetTemplate(), V8HTMLObjectElement::internalFieldCount,
        HTMLObjectElementAttrs, WTF_ARRAY_LENGTH(HTMLObjectElementAttrs),
        HTMLObjectElementCallbacks, WTF_ARRAY_LENGTH(HTMLObjectElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    desc->InstanceTemplate()->SetIndexedPropertyHandler(V8HTMLObjectElement::indexedPropertyGetter, V8HTMLObjectElement::indexedPropertySetter, 0, 0);
    desc->InstanceTemplate()->SetNamedPropertyHandler(V8HTMLObjectElement::namedPropertyGetter, V8HTMLObjectElement::namedPropertySetter, 0, 0, 0);
    desc->InstanceTemplate()->SetCallAsFunctionHandler(V8HTMLObjectElement::callAsFunctionCallback);

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLObjectElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLObjectElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLObjectElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLObjectElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLObjectElement::wrapSlow(HTMLObjectElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8HTMLObjectElement::wrap(impl);
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

void V8HTMLObjectElement::derefObject(void* object)
{
    static_cast<HTMLObjectElement*>(object)->deref();
}

} // namespace WebCore