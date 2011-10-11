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
#include "V8Navigator.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMMimeTypeArray.h"
#include "V8DOMPluginArray.h"
#include "V8DOMWrapper.h"
#include "V8Geolocation.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8Navigator::info = { V8Navigator::GetTemplate, V8Navigator::derefObject, 0, 0 };

namespace NavigatorInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> appCodeNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.appCodeName._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->appCodeName());
}

static v8::Handle<v8::Value> appNameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.appName._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->appName());
}

static v8::Handle<v8::Value> appVersionAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.appVersion._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->appVersion());
}

static v8::Handle<v8::Value> languageAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.language._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->language());
}

static v8::Handle<v8::Value> userAgentAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.userAgent._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->userAgent());
}

static v8::Handle<v8::Value> platformAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.platform._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->platform());
}

static v8::Handle<v8::Value> pluginsAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.plugins._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    RefPtr<DOMPluginArray> result = imp->plugins();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "plugins", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> mimeTypesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.mimeTypes._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    RefPtr<DOMMimeTypeArray> result = imp->mimeTypes();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "mimeTypes", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> productAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.product._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->product());
}

static v8::Handle<v8::Value> productSubAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.productSub._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->productSub());
}

static v8::Handle<v8::Value> vendorAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.vendor._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->vendor());
}

static v8::Handle<v8::Value> vendorSubAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.vendorSub._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8String(imp->vendorSub());
}

static v8::Handle<v8::Value> cookieEnabledAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.cookieEnabled._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8Boolean(imp->cookieEnabled());
}

static v8::Handle<v8::Value> onLineAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.onLine._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    return v8Boolean(imp->onLine());
}

static v8::Handle<v8::Value> geolocationAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.Navigator.geolocation._get");
    Navigator* imp = V8Navigator::toNative(info.Holder());
    RefPtr<Geolocation> result = imp->geolocation();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "geolocation", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> javaEnabledCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Navigator.javaEnabled");
    Navigator* imp = V8Navigator::toNative(args.Holder());
    return v8Boolean(imp->javaEnabled());
}

static v8::Handle<v8::Value> getStorageUpdatesCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Navigator.getStorageUpdates");
    Navigator* imp = V8Navigator::toNative(args.Holder());
    imp->getStorageUpdates();
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> registerProtocolHandlerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.Navigator.registerProtocolHandler");
    if (args.Length() < 3)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    Navigator* imp = V8Navigator::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, scheme, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, url, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined));
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, title, MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined));
    imp->registerProtocolHandler(scheme, url, title, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace NavigatorInternal

static const BatchedAttribute NavigatorAttrs[] = {
    // Attribute 'appCodeName' (Type: 'readonly attribute' ExtAttr: '')
    {"appCodeName", NavigatorInternal::appCodeNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'appName' (Type: 'readonly attribute' ExtAttr: '')
    {"appName", NavigatorInternal::appNameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'appVersion' (Type: 'readonly attribute' ExtAttr: '')
    {"appVersion", NavigatorInternal::appVersionAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'language' (Type: 'readonly attribute' ExtAttr: '')
    {"language", NavigatorInternal::languageAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'userAgent' (Type: 'readonly attribute' ExtAttr: '')
    {"userAgent", NavigatorInternal::userAgentAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'platform' (Type: 'readonly attribute' ExtAttr: '')
    {"platform", NavigatorInternal::platformAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'plugins' (Type: 'readonly attribute' ExtAttr: '')
    {"plugins", NavigatorInternal::pluginsAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'mimeTypes' (Type: 'readonly attribute' ExtAttr: '')
    {"mimeTypes", NavigatorInternal::mimeTypesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'product' (Type: 'readonly attribute' ExtAttr: '')
    {"product", NavigatorInternal::productAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'productSub' (Type: 'readonly attribute' ExtAttr: '')
    {"productSub", NavigatorInternal::productSubAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vendor' (Type: 'readonly attribute' ExtAttr: '')
    {"vendor", NavigatorInternal::vendorAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'vendorSub' (Type: 'readonly attribute' ExtAttr: '')
    {"vendorSub", NavigatorInternal::vendorSubAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'cookieEnabled' (Type: 'readonly attribute' ExtAttr: '')
    {"cookieEnabled", NavigatorInternal::cookieEnabledAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'onLine' (Type: 'readonly attribute' ExtAttr: '')
    {"onLine", NavigatorInternal::onLineAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback NavigatorCallbacks[] = {
    {"javaEnabled", NavigatorInternal::javaEnabledCallback},
    {"getStorageUpdates", NavigatorInternal::getStorageUpdatesCallback},
    {"registerProtocolHandler", NavigatorInternal::registerProtocolHandlerCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8NavigatorTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "Navigator", v8::Persistent<v8::FunctionTemplate>(), V8Navigator::internalFieldCount,
        NavigatorAttrs, WTF_ARRAY_LENGTH(NavigatorAttrs),
        NavigatorCallbacks, WTF_ARRAY_LENGTH(NavigatorCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    if (RuntimeEnabledFeatures::geolocationEnabled()) {
        static const BatchedAttribute attrData =\
        // Attribute 'geolocation' (Type: 'readonly attribute' ExtAttr: 'EnabledAtRuntime')
        {"geolocation", NavigatorInternal::geolocationAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */};
        configureAttribute(instance, proto, attrData);
    }
    if (RuntimeEnabledFeatures::webkitGetUserMediaEnabled())
        proto->Set(v8::String::New("webkitGetUserMedia"), v8::FunctionTemplate::New(V8Navigator::webkitGetUserMediaCallback, v8::Handle<v8::Value>(), defaultSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8Navigator::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8Navigator::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8NavigatorTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8Navigator::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8Navigator::wrapSlow(Navigator* impl)
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

void V8Navigator::derefObject(void* object)
{
    static_cast<Navigator*>(object)->deref();
}

} // namespace WebCore
