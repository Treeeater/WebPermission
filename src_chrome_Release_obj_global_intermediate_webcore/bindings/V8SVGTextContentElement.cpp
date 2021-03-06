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
#include "V8SVGTextContentElement.h"

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
#include "V8SVGAnimatedEnumeration.h"
#include "V8SVGAnimatedLength.h"
#include "V8SVGAnimatedString.h"
#include "V8SVGElement.h"
#include "V8SVGPoint.h"
#include "V8SVGRect.h"
#include "V8SVGStringList.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8SVGTextContentElement::info = { V8SVGTextContentElement::GetTemplate, V8SVGTextContentElement::derefObject, 0, &V8SVGElement::info };

namespace SVGTextContentElementInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> textLengthAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.textLength._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return toV8(imp->textLengthAnimated());
}

static v8::Handle<v8::Value> lengthAdjustAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.lengthAdjust._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return toV8(static_pointer_cast<SVGAnimatedEnumeration>(imp->lengthAdjustAnimated()));
}

static v8::Handle<v8::Value> requiredFeaturesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.requiredFeatures._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return toV8(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredFeatures())));
}

static v8::Handle<v8::Value> requiredExtensionsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.requiredExtensions._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return toV8(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->requiredExtensions())));
}

static v8::Handle<v8::Value> systemLanguageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.systemLanguage._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return toV8(WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(imp, imp->systemLanguage())));
}

static v8::Handle<v8::Value> xmllangAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.xmllang._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return v8String(imp->xmllang());
}

static void xmllangAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.xmllang._set");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<>, v, value);
    imp->setXmllang(v);
    return;
}

static v8::Handle<v8::Value> xmlspaceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.xmlspace._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return v8String(imp->xmlspace());
}

static void xmlspaceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.xmlspace._set");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK_VOID(V8Parameter<>, v, value);
    imp->setXmlspace(v);
    return;
}

static v8::Handle<v8::Value> externalResourcesRequiredAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.externalResourcesRequired._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return toV8(imp->externalResourcesRequiredAnimated());
}

static v8::Handle<v8::Value> classNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.className._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return toV8(imp->classNameAnimated());
}

static v8::Handle<v8::Value> styleAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGTextContentElement.style._get");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(info.Holder());
    return toV8(imp->style());
}

static v8::Handle<v8::Value> getNumberOfCharsCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.getNumberOfChars");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    return v8::Integer::New(imp->getNumberOfChars());
}

static v8::Handle<v8::Value> getComputedTextLengthCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.getComputedTextLength");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    return v8::Number::New(imp->getComputedTextLength());
}

static v8::Handle<v8::Value> getSubStringLengthCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.getSubStringLength");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, offset, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    if (UNLIKELY(offset < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    EXCEPTION_BLOCK(int, length, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)));
    if (UNLIKELY(length < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    float result = imp->getSubStringLength(offset, length, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Number::New(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getStartPositionOfCharCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.getStartPositionOfChar");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, offset, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    if (UNLIKELY(offset < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    FloatPoint result = imp->getStartPositionOfChar(offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(result)));
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getEndPositionOfCharCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.getEndPositionOfChar");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, offset, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    if (UNLIKELY(offset < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    FloatPoint result = imp->getEndPositionOfChar(offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(WTF::getPtr(SVGPropertyTearOff<FloatPoint>::create(result)));
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getExtentOfCharCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.getExtentOfChar");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, offset, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    if (UNLIKELY(offset < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    FloatRect result = imp->getExtentOfChar(offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(WTF::getPtr(SVGPropertyTearOff<FloatRect>::create(result)));
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getRotationOfCharCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.getRotationOfChar");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, offset, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    if (UNLIKELY(offset < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    float result = imp->getRotationOfChar(offset, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Number::New(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getCharNumAtPositionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.getCharNumAtPosition");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    EXCEPTION_BLOCK(RefPtr<SVGPropertyTearOff<FloatPoint> >, point, V8SVGPoint::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8SVGPoint::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    if (!point) {
        V8Proxy::setDOMException(WebCore::TYPE_MISMATCH_ERR);
        return v8::Handle<v8::Value>();
    }
    return v8::Integer::New(imp->getCharNumAtPosition(point->propertyReference()));
}

static v8::Handle<v8::Value> selectSubStringCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.selectSubString");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, offset, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    if (UNLIKELY(offset < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    EXCEPTION_BLOCK(int, length, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)));
    if (UNLIKELY(length < 0)) {
        ec = INDEX_SIZE_ERR;
        goto fail;
    }
    imp->selectSubString(offset, length, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> hasExtensionCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.hasExtension");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, extension, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return v8Boolean(imp->hasExtension(extension));
}

static v8::Handle<v8::Value> getPresentationAttributeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.SVGTextContentElement.getPresentationAttribute");
    SVGTextContentElement* imp = V8SVGTextContentElement::toNative(args.Holder());
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return toV8(imp->getPresentationAttribute(name));
}

} // namespace SVGTextContentElementInternal

static const BatchedAttribute SVGTextContentElementAttrs[] = {
    // Attribute 'textLength' (Type: 'readonly attribute' ExtAttr: '')
    {"textLength", SVGTextContentElementInternal::textLengthAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'lengthAdjust' (Type: 'readonly attribute' ExtAttr: '')
    {"lengthAdjust", SVGTextContentElementInternal::lengthAdjustAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredFeatures' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredFeatures", SVGTextContentElementInternal::requiredFeaturesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'requiredExtensions' (Type: 'readonly attribute' ExtAttr: '')
    {"requiredExtensions", SVGTextContentElementInternal::requiredExtensionsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'systemLanguage' (Type: 'readonly attribute' ExtAttr: '')
    {"systemLanguage", SVGTextContentElementInternal::systemLanguageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmllang' (Type: 'attribute' ExtAttr: '')
    {"xmllang", SVGTextContentElementInternal::xmllangAttrGetter, SVGTextContentElementInternal::xmllangAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'xmlspace' (Type: 'attribute' ExtAttr: '')
    {"xmlspace", SVGTextContentElementInternal::xmlspaceAttrGetter, SVGTextContentElementInternal::xmlspaceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'externalResourcesRequired' (Type: 'readonly attribute' ExtAttr: '')
    {"externalResourcesRequired", SVGTextContentElementInternal::externalResourcesRequiredAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'className' (Type: 'readonly attribute' ExtAttr: '')
    {"className", SVGTextContentElementInternal::classNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'style' (Type: 'readonly attribute' ExtAttr: '')
    {"style", SVGTextContentElementInternal::styleAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback SVGTextContentElementCallbacks[] = {
    {"getNumberOfChars", SVGTextContentElementInternal::getNumberOfCharsCallback},
    {"getComputedTextLength", SVGTextContentElementInternal::getComputedTextLengthCallback},
    {"getSubStringLength", SVGTextContentElementInternal::getSubStringLengthCallback},
    {"getStartPositionOfChar", SVGTextContentElementInternal::getStartPositionOfCharCallback},
    {"getEndPositionOfChar", SVGTextContentElementInternal::getEndPositionOfCharCallback},
    {"getExtentOfChar", SVGTextContentElementInternal::getExtentOfCharCallback},
    {"getRotationOfChar", SVGTextContentElementInternal::getRotationOfCharCallback},
    {"selectSubString", SVGTextContentElementInternal::selectSubStringCallback},
    {"hasExtension", SVGTextContentElementInternal::hasExtensionCallback},
    {"getPresentationAttribute", SVGTextContentElementInternal::getPresentationAttributeCallback},
};

static const BatchedConstant SVGTextContentElementConsts[] = {
    {"LENGTHADJUST_UNKNOWN", static_cast<signed int>(0)},
    {"LENGTHADJUST_SPACING", static_cast<signed int>(1)},
    {"LENGTHADJUST_SPACINGANDGLYPHS", static_cast<signed int>(2)},
};


COMPILE_ASSERT(0 == SVGTextContentElement::LENGTHADJUST_UNKNOWN, SVGTextContentElementEnumLENGTHADJUST_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGTextContentElement::LENGTHADJUST_SPACING, SVGTextContentElementEnumLENGTHADJUST_SPACINGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGTextContentElement::LENGTHADJUST_SPACINGANDGLYPHS, SVGTextContentElementEnumLENGTHADJUST_SPACINGANDGLYPHSIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGTextContentElementTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGTextContentElement", V8SVGElement::GetTemplate(), V8SVGTextContentElement::internalFieldCount,
        SVGTextContentElementAttrs, WTF_ARRAY_LENGTH(SVGTextContentElementAttrs),
        SVGTextContentElementCallbacks, WTF_ARRAY_LENGTH(SVGTextContentElementCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'getCharNumAtPosition'
    const int getCharNumAtPositionArgc = 1;
    v8::Handle<v8::FunctionTemplate> getCharNumAtPositionArgv[getCharNumAtPositionArgc] = { V8SVGPoint::GetRawTemplate() };
    v8::Handle<v8::Signature> getCharNumAtPositionSignature = v8::Signature::New(desc, getCharNumAtPositionArgc, getCharNumAtPositionArgv);
    proto->Set(v8::String::New("getCharNumAtPosition"), v8::FunctionTemplate::New(SVGTextContentElementInternal::getCharNumAtPositionCallback, v8::Handle<v8::Value>(), getCharNumAtPositionSignature));
    batchConfigureConstants(desc, proto, SVGTextContentElementConsts, WTF_ARRAY_LENGTH(SVGTextContentElementConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGTextContentElement::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGTextContentElement::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGTextContentElementTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGTextContentElement::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGTextContentElement::wrapSlow(SVGTextContentElement* impl)
{
    v8::Handle<v8::Object> wrapper;
    V8Proxy* proxy = 0;
    if (impl->document()) {
        proxy = V8Proxy::retrieve(impl->document()->frame());
        if (proxy && static_cast<Node*>(impl->document()) == static_cast<Node*>(impl)) {
            if (proxy->windowShell()->initContextIfNeeded()) {
                // initContextIfNeeded may have created a wrapper for the object, retry from the start.
                return V8SVGTextContentElement::wrap(impl);
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

void V8SVGTextContentElement::derefObject(void* object)
{
    static_cast<SVGTextContentElement*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
