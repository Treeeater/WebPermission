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
#include "V8MediaStreamTrack.h"

#if ENABLE(MEDIA_STREAM)

#include "RuntimeEnabledFeatures.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/UnusedParam.h>

namespace WebCore {

WrapperTypeInfo V8MediaStreamTrack::info = { V8MediaStreamTrack::GetTemplate, V8MediaStreamTrack::derefObject, 0, 0 };

namespace MediaStreamTrackInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> kindAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MediaStreamTrack.kind._get");
    MediaStreamTrack* imp = V8MediaStreamTrack::toNative(info.Holder());
    return v8String(imp->kind());
}

static v8::Handle<v8::Value> labelAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MediaStreamTrack.label._get");
    MediaStreamTrack* imp = V8MediaStreamTrack::toNative(info.Holder());
    return v8String(imp->label());
}

static v8::Handle<v8::Value> enabledAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MediaStreamTrack.enabled._get");
    MediaStreamTrack* imp = V8MediaStreamTrack::toNative(info.Holder());
    return v8Boolean(imp->enabled());
}

static void enabledAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.MediaStreamTrack.enabled._set");
    MediaStreamTrack* imp = V8MediaStreamTrack::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setEnabled(v);
    return;
}

} // namespace MediaStreamTrackInternal

static const BatchedAttribute MediaStreamTrackAttrs[] = {
    // Attribute 'kind' (Type: 'readonly attribute' ExtAttr: '')
    {"kind", MediaStreamTrackInternal::kindAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'label' (Type: 'readonly attribute' ExtAttr: '')
    {"label", MediaStreamTrackInternal::labelAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'enabled' (Type: 'attribute' ExtAttr: '')
    {"enabled", MediaStreamTrackInternal::enabledAttrGetter, MediaStreamTrackInternal::enabledAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8MediaStreamTrackTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "MediaStreamTrack", v8::Persistent<v8::FunctionTemplate>(), V8MediaStreamTrack::internalFieldCount,
        MediaStreamTrackAttrs, WTF_ARRAY_LENGTH(MediaStreamTrackAttrs),
        0, 0);
    UNUSED_PARAM(defaultSignature); // In some cases, it will not be used.
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8MediaStreamTrack::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8MediaStreamTrack::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8MediaStreamTrackTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8MediaStreamTrack::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8MediaStreamTrack::wrapSlow(MediaStreamTrack* impl)
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

void V8MediaStreamTrack::derefObject(void* object)
{
    static_cast<MediaStreamTrack*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM)
