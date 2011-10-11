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
#include "V8SVGAnimatedRect.h"

#if ENABLE(SVG)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include "V8SVGRect.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8SVGAnimatedRect::info = { V8SVGAnimatedRect::GetTemplate, V8SVGAnimatedRect::derefObject, 0, 0 };

namespace SVGAnimatedRectInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> baseValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGAnimatedRect.baseVal._get");
    SVGAnimatedRect* imp = V8SVGAnimatedRect::toNative(info.Holder());
    return toV8(static_cast<SVGPropertyTearOff<FloatRect>*>(imp->baseVal()));
}

static v8::Handle<v8::Value> animValAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGAnimatedRect.animVal._get");
    SVGAnimatedRect* imp = V8SVGAnimatedRect::toNative(info.Holder());
    return toV8(static_cast<SVGPropertyTearOff<FloatRect>*>(imp->animVal()));
}

} // namespace SVGAnimatedRectInternal

static const BatchedAttribute SVGAnimatedRectAttrs[] = {
    // Attribute 'baseVal' (Type: 'readonly attribute' ExtAttr: '')
    {"baseVal", SVGAnimatedRectInternal::baseValAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'animVal' (Type: 'readonly attribute' ExtAttr: '')
    {"animVal", SVGAnimatedRectInternal::animValAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGAnimatedRectTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGAnimatedRect", v8::Persistent<v8::FunctionTemplate>(), V8SVGAnimatedRect::internalFieldCount,
        SVGAnimatedRectAttrs, WTF_ARRAY_LENGTH(SVGAnimatedRectAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedRect::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGAnimatedRect::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGAnimatedRectTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGAnimatedRect::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGAnimatedRect::wrapSlow(SVGAnimatedRect* impl)
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

void V8SVGAnimatedRect::derefObject(void* object)
{
    static_cast<SVGAnimatedRect*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
