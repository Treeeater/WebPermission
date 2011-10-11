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
#include "V8SVGNumber.h"

#if ENABLE(SVG)

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

WrapperTypeInfo V8SVGNumber::info = { V8SVGNumber::GetTemplate, V8SVGNumber::derefObject, 0, 0 };

namespace SVGNumberInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> valueAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGNumber.value._get");
    SVGPropertyTearOff<float>* wrapper = V8SVGNumber::toNative(info.Holder());
    float& impInstance = wrapper->propertyReference();
    return v8::Number::New(impInstance);
}

static void valueAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.SVGNumber.value._set");
    SVGPropertyTearOff<float>* wrapper = V8SVGNumber::toNative(info.Holder());
    if (wrapper->role() == AnimValRole) {
        V8Proxy::setDOMException(NO_MODIFICATION_ALLOWED_ERR);
        return;
    }
    float& impInstance = wrapper->propertyReference();
    float* imp = &impInstance;
    float v = static_cast<float>(value->NumberValue());
    *imp = v;
    wrapper->commitChange();
    return;
}

} // namespace SVGNumberInternal

static const BatchedAttribute SVGNumberAttrs[] = {
    // Attribute 'value' (Type: 'attribute' ExtAttr: 'StrictTypeChecking')
    {"value", SVGNumberInternal::valueAttrGetter, SVGNumberInternal::valueAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8SVGNumberTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "SVGNumber", v8::Persistent<v8::FunctionTemplate>(), V8SVGNumber::internalFieldCount,
        SVGNumberAttrs, WTF_ARRAY_LENGTH(SVGNumberAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8SVGNumber::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8SVGNumber::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8SVGNumberTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8SVGNumber::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8SVGNumber::wrapSlow(SVGPropertyTearOff<float>* impl)
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

void V8SVGNumber::derefObject(void* object)
{
    static_cast<SVGPropertyTearOff<float>*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(SVG)
