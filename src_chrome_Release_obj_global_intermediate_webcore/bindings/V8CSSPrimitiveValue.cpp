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
#include "V8CSSPrimitiveValue.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8CSSValue.h"
#include "V8Counter.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8RGBColor.h"
#include "V8Rect.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8CSSPrimitiveValue::info = { V8CSSPrimitiveValue::GetTemplate, V8CSSPrimitiveValue::derefObject, 0, &V8CSSValue::info };

namespace CSSPrimitiveValueInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> primitiveTypeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.CSSPrimitiveValue.primitiveType._get");
    CSSPrimitiveValue* imp = V8CSSPrimitiveValue::toNative(info.Holder());
    return v8::Integer::New(imp->primitiveType());
}

static v8::Handle<v8::Value> setFloatValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSPrimitiveValue.setFloatValue");
    CSSPrimitiveValue* imp = V8CSSPrimitiveValue::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, unitType, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    EXCEPTION_BLOCK(float, floatValue, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    imp->setFloatValue(unitType, floatValue, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getFloatValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSPrimitiveValue.getFloatValue");
    CSSPrimitiveValue* imp = V8CSSPrimitiveValue::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, unitType, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    float result = imp->getFloatValue(unitType, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Number::New(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> setStringValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSPrimitiveValue.setStringValue");
    CSSPrimitiveValue* imp = V8CSSPrimitiveValue::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(int, stringType, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, stringValue, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined));
    imp->setStringValue(stringType, stringValue, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getStringValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSPrimitiveValue.getStringValue");
    CSSPrimitiveValue* imp = V8CSSPrimitiveValue::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    String result = imp->getStringValue(ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8String(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getCounterValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSPrimitiveValue.getCounterValue");
    CSSPrimitiveValue* imp = V8CSSPrimitiveValue::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<Counter> result = imp->getCounterValue(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getRectValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSPrimitiveValue.getRectValue");
    CSSPrimitiveValue* imp = V8CSSPrimitiveValue::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<Rect> result = imp->getRectValue(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getRGBColorValueCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.CSSPrimitiveValue.getRGBColorValue");
    CSSPrimitiveValue* imp = V8CSSPrimitiveValue::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<RGBColor> result = imp->getRGBColorValue(ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace CSSPrimitiveValueInternal

static const BatchedAttribute CSSPrimitiveValueAttrs[] = {
    // Attribute 'primitiveType' (Type: 'readonly attribute' ExtAttr: '')
    {"primitiveType", CSSPrimitiveValueInternal::primitiveTypeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback CSSPrimitiveValueCallbacks[] = {
    {"setFloatValue", CSSPrimitiveValueInternal::setFloatValueCallback},
    {"getFloatValue", CSSPrimitiveValueInternal::getFloatValueCallback},
    {"setStringValue", CSSPrimitiveValueInternal::setStringValueCallback},
    {"getStringValue", CSSPrimitiveValueInternal::getStringValueCallback},
    {"getCounterValue", CSSPrimitiveValueInternal::getCounterValueCallback},
    {"getRectValue", CSSPrimitiveValueInternal::getRectValueCallback},
    {"getRGBColorValue", CSSPrimitiveValueInternal::getRGBColorValueCallback},
};

static const BatchedConstant CSSPrimitiveValueConsts[] = {
    {"CSS_UNKNOWN", static_cast<signed int>(0)},
    {"CSS_NUMBER", static_cast<signed int>(1)},
    {"CSS_PERCENTAGE", static_cast<signed int>(2)},
    {"CSS_EMS", static_cast<signed int>(3)},
    {"CSS_EXS", static_cast<signed int>(4)},
    {"CSS_PX", static_cast<signed int>(5)},
    {"CSS_CM", static_cast<signed int>(6)},
    {"CSS_MM", static_cast<signed int>(7)},
    {"CSS_IN", static_cast<signed int>(8)},
    {"CSS_PT", static_cast<signed int>(9)},
    {"CSS_PC", static_cast<signed int>(10)},
    {"CSS_DEG", static_cast<signed int>(11)},
    {"CSS_RAD", static_cast<signed int>(12)},
    {"CSS_GRAD", static_cast<signed int>(13)},
    {"CSS_MS", static_cast<signed int>(14)},
    {"CSS_S", static_cast<signed int>(15)},
    {"CSS_HZ", static_cast<signed int>(16)},
    {"CSS_KHZ", static_cast<signed int>(17)},
    {"CSS_DIMENSION", static_cast<signed int>(18)},
    {"CSS_STRING", static_cast<signed int>(19)},
    {"CSS_URI", static_cast<signed int>(20)},
    {"CSS_IDENT", static_cast<signed int>(21)},
    {"CSS_ATTR", static_cast<signed int>(22)},
    {"CSS_COUNTER", static_cast<signed int>(23)},
    {"CSS_RECT", static_cast<signed int>(24)},
    {"CSS_RGBCOLOR", static_cast<signed int>(25)},
};


COMPILE_ASSERT(0 == CSSPrimitiveValue::CSS_UNKNOWN, CSSPrimitiveValueEnumCSS_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == CSSPrimitiveValue::CSS_NUMBER, CSSPrimitiveValueEnumCSS_NUMBERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == CSSPrimitiveValue::CSS_PERCENTAGE, CSSPrimitiveValueEnumCSS_PERCENTAGEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == CSSPrimitiveValue::CSS_EMS, CSSPrimitiveValueEnumCSS_EMSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == CSSPrimitiveValue::CSS_EXS, CSSPrimitiveValueEnumCSS_EXSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == CSSPrimitiveValue::CSS_PX, CSSPrimitiveValueEnumCSS_PXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == CSSPrimitiveValue::CSS_CM, CSSPrimitiveValueEnumCSS_CMIsWrongUseDontCheckEnums);
COMPILE_ASSERT(7 == CSSPrimitiveValue::CSS_MM, CSSPrimitiveValueEnumCSS_MMIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == CSSPrimitiveValue::CSS_IN, CSSPrimitiveValueEnumCSS_INIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == CSSPrimitiveValue::CSS_PT, CSSPrimitiveValueEnumCSS_PTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(10 == CSSPrimitiveValue::CSS_PC, CSSPrimitiveValueEnumCSS_PCIsWrongUseDontCheckEnums);
COMPILE_ASSERT(11 == CSSPrimitiveValue::CSS_DEG, CSSPrimitiveValueEnumCSS_DEGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(12 == CSSPrimitiveValue::CSS_RAD, CSSPrimitiveValueEnumCSS_RADIsWrongUseDontCheckEnums);
COMPILE_ASSERT(13 == CSSPrimitiveValue::CSS_GRAD, CSSPrimitiveValueEnumCSS_GRADIsWrongUseDontCheckEnums);
COMPILE_ASSERT(14 == CSSPrimitiveValue::CSS_MS, CSSPrimitiveValueEnumCSS_MSIsWrongUseDontCheckEnums);
COMPILE_ASSERT(15 == CSSPrimitiveValue::CSS_S, CSSPrimitiveValueEnumCSS_SIsWrongUseDontCheckEnums);
COMPILE_ASSERT(16 == CSSPrimitiveValue::CSS_HZ, CSSPrimitiveValueEnumCSS_HZIsWrongUseDontCheckEnums);
COMPILE_ASSERT(17 == CSSPrimitiveValue::CSS_KHZ, CSSPrimitiveValueEnumCSS_KHZIsWrongUseDontCheckEnums);
COMPILE_ASSERT(18 == CSSPrimitiveValue::CSS_DIMENSION, CSSPrimitiveValueEnumCSS_DIMENSIONIsWrongUseDontCheckEnums);
COMPILE_ASSERT(19 == CSSPrimitiveValue::CSS_STRING, CSSPrimitiveValueEnumCSS_STRINGIsWrongUseDontCheckEnums);
COMPILE_ASSERT(20 == CSSPrimitiveValue::CSS_URI, CSSPrimitiveValueEnumCSS_URIIsWrongUseDontCheckEnums);
COMPILE_ASSERT(21 == CSSPrimitiveValue::CSS_IDENT, CSSPrimitiveValueEnumCSS_IDENTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(22 == CSSPrimitiveValue::CSS_ATTR, CSSPrimitiveValueEnumCSS_ATTRIsWrongUseDontCheckEnums);
COMPILE_ASSERT(23 == CSSPrimitiveValue::CSS_COUNTER, CSSPrimitiveValueEnumCSS_COUNTERIsWrongUseDontCheckEnums);
COMPILE_ASSERT(24 == CSSPrimitiveValue::CSS_RECT, CSSPrimitiveValueEnumCSS_RECTIsWrongUseDontCheckEnums);
COMPILE_ASSERT(25 == CSSPrimitiveValue::CSS_RGBCOLOR, CSSPrimitiveValueEnumCSS_RGBCOLORIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8CSSPrimitiveValueTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "CSSPrimitiveValue", V8CSSValue::GetTemplate(), V8CSSPrimitiveValue::internalFieldCount,
        CSSPrimitiveValueAttrs, WTF_ARRAY_LENGTH(CSSPrimitiveValueAttrs),
        CSSPrimitiveValueCallbacks, WTF_ARRAY_LENGTH(CSSPrimitiveValueCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, CSSPrimitiveValueConsts, WTF_ARRAY_LENGTH(CSSPrimitiveValueConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8CSSPrimitiveValue::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8CSSPrimitiveValue::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8CSSPrimitiveValueTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8CSSPrimitiveValue::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8CSSPrimitiveValue::wrapSlow(CSSPrimitiveValue* impl)
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

void V8CSSPrimitiveValue::derefObject(void* object)
{
    static_cast<CSSPrimitiveValue*>(object)->deref();
}

} // namespace WebCore
