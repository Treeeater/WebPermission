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
#include "V8SVGPreserveAspectRatio.h"

#if ENABLE(SVG)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "SVGAnimatedPropertyTearOff.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGPreserveAspectRatio::info = { V8SVGPreserveAspectRatio::GetTemplate, V8SVGPreserveAspectRatio::derefObject, 0, 0 };

namespace SVGPreserveAspectRatioInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> alignAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPreserveAspectRatio.align._get");
    SVGPropertyTearOff<SVGPreserveAspectRatio>* wrapper = V8SVGPreserveAspectRatio::toNative(info.Holder());
    SVGPreserveAspectRatio& impInstance = wrapper->propertyReference();
    SVGPreserveAspectRatio* imp = &impInstance;
    return v8::Integer::New(imp->align());
}

static void alignAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPreserveAspectRatio.align._set");
    SVGPropertyTearOff<SVGPreserveAspectRatio>* wrapper = V8SVGPreserveAspectRatio::toNative(info.Holder());
    if (wrapper->role() == AnimValRole) {
        V8Proxy::setDOMException(NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGPreserveAspectRatio& impInstance = wrapper->propertyReference();
    SVGPreserveAspectRatio* imp = &impInstance;
    int v = toUInt32(value);
    ExceptionCode ec = 0;
    imp->setAlign(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    if (!ec)
        wrapper->commitChange();
    return;
}

static v8::Handle<v8::Value> meetOrSliceAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPreserveAspectRatio.meetOrSlice._get");
    SVGPropertyTearOff<SVGPreserveAspectRatio>* wrapper = V8SVGPreserveAspectRatio::toNative(info.Holder());
    SVGPreserveAspectRatio& impInstance = wrapper->propertyReference();
    SVGPreserveAspectRatio* imp = &impInstance;
    return v8::Integer::New(imp->meetOrSlice());
}

static void meetOrSliceAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGPreserveAspectRatio.meetOrSlice._set");
    SVGPropertyTearOff<SVGPreserveAspectRatio>* wrapper = V8SVGPreserveAspectRatio::toNative(info.Holder());
    if (wrapper->role() == AnimValRole) {
        V8Proxy::setDOMException(NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    SVGPreserveAspectRatio& impInstance = wrapper->propertyReference();
    SVGPreserveAspectRatio* imp = &impInstance;
    int v = toUInt32(value);
    ExceptionCode ec = 0;
    imp->setMeetOrSlice(v, ec);
    if (UNLIKELY(ec))
        V8Proxy::setDOMException(ec);
    if (!ec)
        wrapper->commitChange();
    return;
}

} // namespace SVGPreserveAspectRatioInternal

static const BatchedAttribute SVGPreserveAspectRatioAttrs[] = {
    // Attribute 'align' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"align", SVGPreserveAspectRatioInternal::alignAttrGetter, SVGPreserveAspectRatioInternal::alignAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'meetOrSlice' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"meetOrSlice", SVGPreserveAspectRatioInternal::meetOrSliceAttrGetter, SVGPreserveAspectRatioInternal::meetOrSliceAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedConstant SVGPreserveAspectRatioConsts[] = {
    {"SVG_PRESERVEASPECTRATIO_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_PRESERVEASPECTRATIO_NONE", static_cast<signed int>(1)},
    {"SVG_PRESERVEASPECTRATIO_XMINYMIN", static_cast<signed int>(2)},
    {"SVG_PRESERVEASPECTRATIO_XMIDYMIN", static_cast<signed int>(3)},
    {"SVG_PRESERVEASPECTRATIO_XMAXYMIN", static_cast<signed int>(4)},
    {"SVG_PRESERVEASPECTRATIO_XMINYMID", static_cast<signed int>(5)},
    {"SVG_PRESERVEASPECTRATIO_XMIDYMID", static_cast<signed int>(6)},
    {"SVG_PRESERVEASPECTRATIO_XMAXYMID", static_cast<signed int>(7)},
    {"SVG_PRESERVEASPECTRATIO_XMINYMAX", static_cast<signed int>(8)},
    {"SVG_PRESERVEASPECTRATIO_XMIDYMAX", static_cast<signed int>(9)},
    {"SVG_PRESERVEASPECTRATIO_XMAXYMAX", static_cast<signed int>(10)},
    {"SVG_MEETORSLICE_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_MEETORSLICE_MEET", static_cast<signed int>(1)},
    {"SVG_MEETORSLICE_SLICE", static_cast<signed int>(2)},
};


COMPILE_ASSERT(0 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_UNKNOWN, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_NONE, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_NONEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMIN, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMINYMINIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMIN, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMIDYMINIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMIN, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMAXYMINIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMID, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMINYMIDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(6 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMID, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMIDYMIDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(7 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMID, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMAXYMIDIsWrongUseDontCheckEnums);
COMPILE_ASSERT(8 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMINYMAX, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMINYMAXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(9 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMIDYMAX, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMIDYMAXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(10 == SVGPreserveAspectRatio::SVG_PRESERVEASPECTRATIO_XMAXYMAX, SVGPreserveAspectRatioEnumSVG_PRESERVEASPECTRATIO_XMAXYMAXIsWrongUseDontCheckEnums);
COMPILE_ASSERT(0 == SVGPreserveAspectRatio::SVG_MEETORSLICE_UNKNOWN, SVGPreserveAspectRatioEnumSVG_MEETORSLICE_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGPreserveAspectRatio::SVG_MEETORSLICE_MEET, SVGPreserveAspectRatioEnumSVG_MEETORSLICE_MEETIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGPreserveAspectRatio::SVG_MEETORSLICE_SLICE, SVGPreserveAspectRatioEnumSVG_MEETORSLICE_SLICEIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGPreserveAspectRatioTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGPreserveAspectRatio", v8::Persistent<v8::FunctionTemplate>(), V8SVGPreserveAspectRatio::internalFieldCount,
        SVGPreserveAspectRatioAttrs, WTF_ARRAY_LENGTH(SVGPreserveAspectRatioAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SVGPreserveAspectRatioConsts, WTF_ARRAY_LENGTH(SVGPreserveAspectRatioConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGPreserveAspectRatio::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGPreserveAspectRatio::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGPreserveAspectRatioTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGPreserveAspectRatio::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGPreserveAspectRatio::wrapSlow(SVGPropertyTearOff<SVGPreserveAspectRatio>* impl)
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

void V8SVGPreserveAspectRatio::derefObject(void* object)
{
    static_cast<SVGPropertyTearOff<SVGPreserveAspectRatio>*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
