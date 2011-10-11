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
#include "V8HTMLMeterElement.h"

#if ENABLE(METER_TAG)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8HTMLElement.h"
#include "V8HTMLFormElement.h"
#include "V8IsolatedContext.h"
#include "V8NodeList.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8HTMLMeterElement::info = { V8HTMLMeterElement::GetTemplate, V8HTMLMeterElement::derefObject, 0, &V8HTMLElement::info };

namespace HTMLMeterElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> valueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.value._get");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    return v8::Number::New(imp->value());
}

static void valueAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.value._set");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setValue(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> minAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.min._get");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    return v8::Number::New(imp->min());
}

static void minAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.min._set");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setMin(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> maxAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.max._get");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    return v8::Number::New(imp->max());
}

static void maxAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.max._set");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setMax(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> lowAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.low._get");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    return v8::Number::New(imp->low());
}

static void lowAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.low._set");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setLow(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> highAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.high._get");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    return v8::Number::New(imp->high());
}

static void highAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.high._set");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setHigh(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> optimumAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.optimum._get");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    return v8::Number::New(imp->optimum());
}

static void optimumAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.optimum._set");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    double v = static_cast<double>(value->NumberValue());
    ExceptionCode ec = 0;
    imp->setOptimum(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    return;
}

static v8::Handle<v8::Value> formAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.form._get");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    return toV8(imp->form());
}

static v8::Handle<v8::Value> labelsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.HTMLMeterElement.labels._get");
    HTMLMeterElement* imp = V8HTMLMeterElement::toNative(info.Holder());
    return toV8(imp->labels());
}

} // namespace HTMLMeterElementInternal

static const BatchedAttribute HTMLMeterElementAttrs[] = {
    // Attribute 'value' (Type: 'attribute' ExtAttr: '')
    {"value", HTMLMeterElementInternal::valueAttrGetter, HTMLMeterElementInternal::valueAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'min' (Type: 'attribute' ExtAttr: '')
    {"min", HTMLMeterElementInternal::minAttrGetter, HTMLMeterElementInternal::minAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'max' (Type: 'attribute' ExtAttr: '')
    {"max", HTMLMeterElementInternal::maxAttrGetter, HTMLMeterElementInternal::maxAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'low' (Type: 'attribute' ExtAttr: '')
    {"low", HTMLMeterElementInternal::lowAttrGetter, HTMLMeterElementInternal::lowAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'high' (Type: 'attribute' ExtAttr: '')
    {"high", HTMLMeterElementInternal::highAttrGetter, HTMLMeterElementInternal::highAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'optimum' (Type: 'attribute' ExtAttr: '')
    {"optimum", HTMLMeterElementInternal::optimumAttrGetter, HTMLMeterElementInternal::optimumAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'form' (Type: 'readonly attribute' ExtAttr: '')
    {"form", HTMLMeterElementInternal::formAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'labels' (Type: 'readonly attribute' ExtAttr: '')
    {"labels", HTMLMeterElementInternal::labelsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8HTMLMeterElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "HTMLMeterElement", V8HTMLElement::GetTemplate(), V8HTMLMeterElement::internalFieldCount,
        HTMLMeterElementAttrs, WTF_ARRAY_LENGTH(HTMLMeterElementAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8HTMLMeterElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8HTMLMeterElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8HTMLMeterElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8HTMLMeterElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8HTMLMeterElement::wrapSlow(HTMLMeterElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8HTMLMeterElement::wrap(impl);
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

void V8HTMLMeterElement::derefObject(void* object)
{
    static_cast<HTMLMeterElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(METER_TAG)
