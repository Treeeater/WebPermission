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
#include "V8SVGZoomAndPan.h"

#if ENABLE(SVG)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGZoomAndPan::info = { V8SVGZoomAndPan::GetTemplate, V8SVGZoomAndPan::derefObject, 0, 0 };

namespace SVGZoomAndPanInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> zoomAndPanAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGZoomAndPan.zoomAndPan._get");
    SVGZoomAndPan* imp = V8SVGZoomAndPan::toNative(info.Holder());
    return v8::Integer::New(imp->zoomAndPan());
}

static void zoomAndPanAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGZoomAndPan.zoomAndPan._set");
    SVGZoomAndPan* imp = V8SVGZoomAndPan::toNative(info.Holder());
    int v = toUInt32(value);
    imp->setZoomAndPan(v);
    return;
}

} // namespace SVGZoomAndPanInternal

static const BatchedAttribute SVGZoomAndPanAttrs[] = {
    // Attribute 'zoomAndPan' (Type: 'attribute' ExtAttr: '')
    {"zoomAndPan", SVGZoomAndPanInternal::zoomAndPanAttrGetter, SVGZoomAndPanInternal::zoomAndPanAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedConstant SVGZoomAndPanConsts[] = {
    {"SVG_ZOOMANDPAN_UNKNOWN", static_cast<signed int>(0)},
    {"SVG_ZOOMANDPAN_DISABLE", static_cast<signed int>(1)},
    {"SVG_ZOOMANDPAN_MAGNIFY", static_cast<signed int>(2)},
};


COMPILE_ASSERT(0 == SVGZoomAndPan::SVG_ZOOMANDPAN_UNKNOWN, SVGZoomAndPanEnumSVG_ZOOMANDPAN_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGZoomAndPan::SVG_ZOOMANDPAN_DISABLE, SVGZoomAndPanEnumSVG_ZOOMANDPAN_DISABLEIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGZoomAndPan::SVG_ZOOMANDPAN_MAGNIFY, SVGZoomAndPanEnumSVG_ZOOMANDPAN_MAGNIFYIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGZoomAndPanTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGZoomAndPan", v8::Persistent<v8::FunctionTemplate>(), V8SVGZoomAndPan::internalFieldCount,
        SVGZoomAndPanAttrs, WTF_ARRAY_LENGTH(SVGZoomAndPanAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SVGZoomAndPanConsts, WTF_ARRAY_LENGTH(SVGZoomAndPanConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGZoomAndPan::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGZoomAndPan::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGZoomAndPanTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGZoomAndPan::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGZoomAndPan::wrapSlow(SVGZoomAndPan* impl)
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

void V8SVGZoomAndPan::derefObject(void* object)
{
    static_cast<SVGZoomAndPan*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
