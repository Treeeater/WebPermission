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
#include "V8OverflowEvent.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8Event.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"

namespace WebCore {

WrapperTypeInfo V8OverflowEvent::info = { V8OverflowEvent::GetTemplate, V8OverflowEvent::derefObject, 0, &V8Event::info };

namespace OverflowEventInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> orientAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.OverflowEvent.orient._get");
    OverflowEvent* imp = V8OverflowEvent::toNative(info.Holder());
    return v8::Integer::New(imp->orient());
}

static v8::Handle<v8::Value> horizontalOverflowAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.OverflowEvent.horizontalOverflow._get");
    OverflowEvent* imp = V8OverflowEvent::toNative(info.Holder());
    return v8Boolean(imp->horizontalOverflow());
}

static v8::Handle<v8::Value> verticalOverflowAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.OverflowEvent.verticalOverflow._get");
    OverflowEvent* imp = V8OverflowEvent::toNative(info.Holder());
    return v8Boolean(imp->verticalOverflow());
}

static v8::Handle<v8::Value> initOverflowEventCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.OverflowEvent.initOverflowEvent");
    OverflowEvent* imp = V8OverflowEvent::toNative(args.Holder());
    EXCEPTION_BLOCK(int, orient, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    EXCEPTION_BLOCK(bool, horizontalOverflow, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->BooleanValue());
    EXCEPTION_BLOCK(bool, verticalOverflow, MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->BooleanValue());
    imp->initOverflowEvent(orient, horizontalOverflow, verticalOverflow);
    return v8::Handle<v8::Value>();
}

} // namespace OverflowEventInternal

static const BatchedAttribute OverflowEventAttrs[] = {
    // Attribute 'orient' (Type: 'readonly attribute' ExtAttr: '')
    {"orient", OverflowEventInternal::orientAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'horizontalOverflow' (Type: 'readonly attribute' ExtAttr: '')
    {"horizontalOverflow", OverflowEventInternal::horizontalOverflowAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'verticalOverflow' (Type: 'readonly attribute' ExtAttr: '')
    {"verticalOverflow", OverflowEventInternal::verticalOverflowAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback OverflowEventCallbacks[] = {
    {"initOverflowEvent", OverflowEventInternal::initOverflowEventCallback},
};

static const BatchedConstant OverflowEventConsts[] = {
    {"HORIZONTAL", static_cast<signed int>(0)},
    {"VERTICAL", static_cast<signed int>(1)},
    {"BOTH", static_cast<signed int>(2)},
};


COMPILE_ASSERT(0 == OverflowEvent::HORIZONTAL, OverflowEventEnumHORIZONTALIsWrongUseDontCheckEnums);
COMPILE_ASSERT(1 == OverflowEvent::VERTICAL, OverflowEventEnumVERTICALIsWrongUseDontCheckEnums);
COMPILE_ASSERT(2 == OverflowEvent::BOTH, OverflowEventEnumBOTHIsWrongUseDontCheckEnums);

static v8::Persistent<v8::FunctionTemplate> ConfigureV8OverflowEventTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "OverflowEvent", V8Event::GetTemplate(), V8OverflowEvent::internalFieldCount,
        OverflowEventAttrs, WTF_ARRAY_LENGTH(OverflowEventAttrs),
        OverflowEventCallbacks, WTF_ARRAY_LENGTH(OverflowEventCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    
    batchConfigureConstants(desc, proto, OverflowEventConsts, WTF_ARRAY_LENGTH(OverflowEventConsts));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8OverflowEvent::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8OverflowEvent::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8OverflowEventTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8OverflowEvent::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8OverflowEvent::wrapSlow(OverflowEvent* impl)
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

void V8OverflowEvent::derefObject(void* object)
{
    static_cast<OverflowEvent*>(object)->deref();
}

} // namespace WebCore