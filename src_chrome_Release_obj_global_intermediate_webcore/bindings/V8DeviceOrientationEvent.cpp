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
#include "V8DeviceOrientationEvent.h"

#if ENABLE(DEVICE_ORIENTATION)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8DeviceOrientationEvent::info = { V8DeviceOrientationEvent::GetTemplate, V8DeviceOrientationEvent::derefObject, 0, &V8Event::info };

namespace DeviceOrientationEventInternal {

template <typename T> void V8_USE(T) { }

} // namespace DeviceOrientationEventInternal

static const BatchedAttribute DeviceOrientationEventAttrs[] = {
    // Attribute 'alpha' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"alpha", V8DeviceOrientationEvent::alphaAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'beta' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"beta", V8DeviceOrientationEvent::betaAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'gamma' (Type: 'readonly attribute' ExtAttr: 'Custom')
    {"gamma", V8DeviceOrientationEvent::gammaAccessorGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback DeviceOrientationEventCallbacks[] = {
    {"initDeviceOrientationEvent", V8DeviceOrientationEvent::initDeviceOrientationEventCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8DeviceOrientationEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "DeviceOrientationEvent", V8Event::GetTemplate(), V8DeviceOrientationEvent::internalFieldCount,
        DeviceOrientationEventAttrs, WTF_ARRAY_LENGTH(DeviceOrientationEventAttrs),
        DeviceOrientationEventCallbacks, WTF_ARRAY_LENGTH(DeviceOrientationEventCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8DeviceOrientationEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8DeviceOrientationEvent::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8DeviceOrientationEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8DeviceOrientationEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8DeviceOrientationEvent::wrapSlow(DeviceOrientationEvent* impl)
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

void V8DeviceOrientationEvent::derefObject(void* object)
{
    static_cast<DeviceOrientationEvent*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(DEVICE_ORIENTATION)