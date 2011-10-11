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
#include "V8SVGRenderingIntent.h"

#if ENABLE(SVG)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGRenderingIntent::info = { V8SVGRenderingIntent::GetTemplate, V8SVGRenderingIntent::derefObject, 0, 0 };

namespace SVGRenderingIntentInternal {

template <typename T> void V8_USE(T) { }

} // namespace SVGRenderingIntentInternal

static const BatchedConstant SVGRenderingIntentConsts[] = {
    {"RENDERING_INTENT_UNKNOWN", static_cast<signed int>(0)},
    {"RENDERING_INTENT_AUTO", static_cast<signed int>(1)},
    {"RENDERING_INTENT_PERCEPTUAL", static_cast<signed int>(2)},
    {"RENDERING_INTENT_RELATIVE_COLORIMETRIC", static_cast<signed int>(3)},
    {"RENDERING_INTENT_SATURATION", static_cast<signed int>(4)},
    {"RENDERING_INTENT_ABSOLUTE_COLORIMETRIC", static_cast<signed int>(5)},
};


COMPILE_ASSERT(0 == SVGRenderingIntent::RENDERING_INTENT_UNKNOWN, SVGRenderingIntentEnumRENDERING_INTENT_UNKNOWNIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == SVGRenderingIntent::RENDERING_INTENT_AUTO, SVGRenderingIntentEnumRENDERING_INTENT_AUTOIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == SVGRenderingIntent::RENDERING_INTENT_PERCEPTUAL, SVGRenderingIntentEnumRENDERING_INTENT_PERCEPTUALIsWrongUseDontCheckEnums);
COMPILE_ASSERT(3 == SVGRenderingIntent::RENDERING_INTENT_RELATIVE_COLORIMETRIC, SVGRenderingIntentEnumRENDERING_INTENT_RELATIVE_COLORIMETRICIsWrongUseDontCheckEnums);
COMPILE_ASSERT(4 == SVGRenderingIntent::RENDERING_INTENT_SATURATION, SVGRenderingIntentEnumRENDERING_INTENT_SATURATIONIsWrongUseDontCheckEnums);
COMPILE_ASSERT(5 == SVGRenderingIntent::RENDERING_INTENT_ABSOLUTE_COLORIMETRIC, SVGRenderingIntentEnumRENDERING_INTENT_ABSOLUTE_COLORIMETRICIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGRenderingIntentTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGRenderingIntent", v8::Persistent<v8::FunctionTemplate>(), V8SVGRenderingIntent::internalFieldCount,
        0, 0,
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, SVGRenderingIntentConsts, WTF_ARRAY_LENGTH(SVGRenderingIntentConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGRenderingIntent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGRenderingIntent::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGRenderingIntentTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGRenderingIntent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGRenderingIntent::wrapSlow(SVGRenderingIntent* impl)
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

void V8SVGRenderingIntent::derefObject(void* object)
{
    static_cast<SVGRenderingIntent*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)