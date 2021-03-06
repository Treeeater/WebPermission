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
#include "V8SVGSwitchElement.h"

#if ENABLE(SVG)

#include "CSSMutableStyleDeclaration.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGPropertyTearOff.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CSSStyleDeclaration.h"
#include "V8CSSValue.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGAnimatedBoolean.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGAnimatedTransformList.h"
#include "V8SVGElement.h"
#include "V8SVGMatrix.h"
#include "V8SVGRect.h"
#include "V8SVGStringList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGSwitchElement::info = { V8SVGSwitchElement::GetTemplate, V8SVGSwitchElement::derefObject, 0, &V8SVGElement::info };

namespace SVGSwitchElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> requiredFeaturesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.requiredFeatures._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return toV8(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredFeatures())));
}

static v8::Handle<v8::Value> requiredExtensionsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.requiredExtensions._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return toV8(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredExtensions())));
}

static v8::Handle<v8::Value> systemLanguageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.systemLanguage._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return toV8(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->systemLanguage())));
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.xmllang._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return v8String(imp->xmllang());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.xmllang._set");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<>, v, value);
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.xmlspace._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return v8String(imp->xmlspace());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.xmlspace._set");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<>, v, value);
    imp->setXmlspace(v);
    return;
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.externalResourcesRequired._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return toV8(imp->externalResourcesRequiredAnimated());
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.className._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return toV8(imp->classNameAnimated());
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.style._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> transformAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.transform._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return toV8(imp->transformAnimated());
}

static v8::Handle<v8::Value> nearestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.nearestViewportElement._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return toV8(imp->nearestViewportElement());
}

static v8::Handle<v8::Value> farthestViewportElementAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGSwitchElement.farthestViewportElement._get");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(info.Holder());
    return toV8(imp->farthestViewportElement());
}

static v8::Handle<v8::Value> hasExtensionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGSwitchElement.hasExtension");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, extension, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return v8Boolean(imp->hasExtension(extension));
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGSwitchElement.getPresentationAttribute");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return toV8(imp->getPresentationAttribute(name));
}

static v8::Handle<v8::Value> getBBoxCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGSwitchElement.getBBox");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(args.Holder());
    return toV8(WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(imp->getBBox())));
}

static v8::Handle<v8::Value> getCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGSwitchElement.getCTM");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(args.Holder());
    return toV8(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getCTM())));
}

static v8::Handle<v8::Value> getScreenCTMCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGSwitchElement.getScreenCTM");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(args.Holder());
    return toV8(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(imp->getScreenCTM())));
}

static v8::Handle<v8::Value> getTransformToElementCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGSwitchElement.getTransformToElement");
    SVGSwitchElement* imp = V8SVGSwitchElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(SVGElement*, element, V8SVGElement::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8SVGElement::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    SVGMatrix result = imp->getTransformToElement(element, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(WTF::getPtr(SVGPropertyTearOff<SVGMatrix>::create(result)));
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace SVGSwitchElementInternal

static const BatchedAttribute SVGSwitchElementAttrs[] = {
    // Attribute 'requiredFeatures' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredFeatures", SVGSwitchElementInternal::requiredFeaturesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredExtensions' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredExtensions", SVGSwitchElementInternal::requiredExtensionsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemLanguage' (Type: 'readonly attribute' ExtAttr: '')
    {"systemLanguage", SVGSwitchElementInternal::systemLanguageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGSwitchElementInternal::xmllangAttrGetter, SVGSwitchElementInternal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGSwitchElementInternal::xmlspaceAttrGetter, SVGSwitchElementInternal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGSwitchElementInternal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGSwitchElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGSwitchElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'transform' (Type: 'readonly attribute' ExtAttr: '')
    {"transform", SVGSwitchElementInternal::transformAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'nearestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"nearestViewportElement", SVGSwitchElementInternal::nearestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'farthestViewportElement' (Type: 'readonly attribute' ExtAttr: '')
    {"farthestViewportElement", SVGSwitchElementInternal::farthestViewportElementAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback SVGSwitchElementCallbacks[] = {
    {"hasExtension", SVGSwitchElementInternal::hasExtensionCallback},
    {"getPresentationAttribute", SVGSwitchElementInternal::getPresentationAttributeCallback},
    {"getBBox", SVGSwitchElementInternal::getBBoxCallback},
    {"getCTM", SVGSwitchElementInternal::getCTMCallback},
    {"getScreenCTM", SVGSwitchElementInternal::getScreenCTMCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGSwitchElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGSwitchElement", V8SVGElement::GetTemplate(), V8SVGSwitchElement::internalFieldCount,
        SVGSwitchElementAttrs, WTF_ARRAY_LENGTH(SVGSwitchElementAttrs),
        SVGSwitchElementCallbacks, WTF_ARRAY_LENGTH(SVGSwitchElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'getTransformToElement'
    const int getTransformToElementArgc = 1;
    v8::Handle<v8::FunctionTemplate> getTransformToElementArgv[getTransformToElementArgc] = { V8SVGElement::GetRawTemplate() };
    v8::Handle<v8::Signature> getTransformToElementSignature = v8::Signature::New(desc, getTransformToElementArgc, getTransformToElementArgv);
    proto->Set(v8::String::New("getTransformToElement"), v8::FunctionTemplate::New(SVGSwitchElementInternal::getTransformToElementCallback, v8::Handle<v8::Value>(), getTransformToElementSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGSwitchElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGSwitchElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGSwitchElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGSwitchElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGSwitchElement::wrapSlow(SVGSwitchElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8SVGSwitchElement::wrap(impl);
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

void V8SVGSwitchElement::derefObject(void* object)
{
    static_cast<SVGSwitchElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
