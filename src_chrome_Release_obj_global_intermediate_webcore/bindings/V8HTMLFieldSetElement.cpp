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
#include "V8HTMLFieldSetElement.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8HTMLFormElement.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8ValidityState.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8HTMLFieldSetElement::info = { V8HTMLFieldSetElement::GetTemplate, V8HTMLFieldSetElement::derefObject, 0, &V8HTMLElement::info };

namespace HTMLFieldSetElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> formAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLFieldSetElement.form._get");
    HTMLFieldSetElement* imp = V8HTMLFieldSetElement::toNative(info.Holder());
    return toV8(imp->form());
}

static v8::Handle<v8::Value> validityAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLFieldSetElement.validity._get");
    HTMLFieldSetElement* imp = V8HTMLFieldSetElement::toNative(info.Holder());
    return toV8(imp->validity());
}

static v8::Handle<v8::Value> willValidateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLFieldSetElement.willValidate._get");
    HTMLFieldSetElement* imp = V8HTMLFieldSetElement::toNative(info.Holder());
    return v8Boolean(imp->willValidate());
}

static v8::Handle<v8::Value> validationMessageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLFieldSetElement.validationMessage._get");
    HTMLFieldSetElement* imp = V8HTMLFieldSetElement::toNative(info.Holder());
    return v8String(imp->validationMessage());
}

static v8::Handle<v8::Value> checkValidityCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLFieldSetElement.checkValidity");
    HTMLFieldSetElement* imp = V8HTMLFieldSetElement::toNative(args.Holder());
    return v8Boolean(imp->checkValidity());
}

static v8::Handle<v8::Value> setCustomValidityCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.HTMLFieldSetElement.setCustomValidity");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    HTMLFieldSetElement* imp = V8HTMLFieldSetElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<WithUndefinedOrNullCheck>, error, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    imp->setCustomValidity(error);
    return v8::Handle<v8::Value>();
}

} // namespace HTMLFieldSetElementInternal

static const BatchedAttribute HTMLFieldSetElementAttrs[] = {
    // Attribute 'form' (Type: 'readonly attribute' ExtAttr: '')
    {"form", HTMLFieldSetElementInternal::formAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'validity' (Type: 'readonly attribute' ExtAttr: '')
    {"validity", HTMLFieldSetElementInternal::validityAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'willValidate' (Type: 'readonly attribute' ExtAttr: '')
    {"willValidate", HTMLFieldSetElementInternal::willValidateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'validationMessage' (Type: 'readonly attribute' ExtAttr: '')
    {"validationMessage", HTMLFieldSetElementInternal::validationMessageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback HTMLFieldSetElementCallbacks[] = {
    {"checkValidity", HTMLFieldSetElementInternal::checkValidityCallback},
    {"setCustomValidity", HTMLFieldSetElementInternal::setCustomValidityCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLFieldSetElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLFieldSetElement", V8HTMLElement::GetTemplate(), V8HTMLFieldSetElement::internalFieldCount,
        HTMLFieldSetElementAttrs, WTF_ARRAY_LENGTH(HTMLFieldSetElementAttrs),
        HTMLFieldSetElementCallbacks, WTF_ARRAY_LENGTH(HTMLFieldSetElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLFieldSetElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLFieldSetElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLFieldSetElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLFieldSetElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLFieldSetElement::wrapSlow(HTMLFieldSetElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8HTMLFieldSetElement::wrap(impl);
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

void V8HTMLFieldSetElement::derefObject(void* object)
{
    static_cast<HTMLFieldSetElement*>(object)->deref();
}

} // namespace WebCore