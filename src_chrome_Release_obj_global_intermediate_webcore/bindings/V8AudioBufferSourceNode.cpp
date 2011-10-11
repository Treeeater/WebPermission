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
#include "V8AudioBufferSourceNode.h"

#if ENABLE(WEB_AUDIO)

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AudioBuffer.h"
#include "V8AudioGain.h"
#include "V8AudioParam.h"
#include "V8AudioSourceNode.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8AudioBufferSourceNode::info = { V8AudioBufferSourceNode::GetTemplate, V8AudioBufferSourceNode::derefObject, 0, &V8AudioSourceNode::info };

namespace AudioBufferSourceNodeInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> bufferAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioBufferSourceNode.buffer._get");
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    return toV8(imp->buffer());
}

static v8::Handle<v8::Value> gainAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioBufferSourceNode.gain._get");
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    RefPtr<AudioGain> result = imp->gain();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "gain", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> playbackRateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioBufferSourceNode.playbackRate._get");
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    RefPtr<AudioParam> result = imp->playbackRate();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "playbackRate", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> loopAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioBufferSourceNode.loop._get");
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    return v8Boolean(imp->loop());
}

static void loopAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioBufferSourceNode.loop._set");
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setLoop(v);
    return;
}

static v8::Handle<v8::Value> loopingAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioBufferSourceNode.looping._get");
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    return v8Boolean(imp->looping());
}

static void loopingAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioBufferSourceNode.looping._set");
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(info.Holder());
    bool v = value->BooleanValue();
    imp->setLooping(v);
    return;
}

static v8::Handle<v8::Value> noteOnCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioBufferSourceNode.noteOn");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    EXCEPTION_BLOCK(float, when, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    imp->noteOn(when);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> noteGrainOnCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioBufferSourceNode.noteGrainOn");
    if (args.Length() < 3)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    EXCEPTION_BLOCK(float, when, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, grainOffset, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)->NumberValue()));
    EXCEPTION_BLOCK(float, grainDuration, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined)->NumberValue()));
    imp->noteGrainOn(when, grainOffset, grainDuration);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> noteOffCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioBufferSourceNode.noteOff");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    AudioBufferSourceNode* imp = V8AudioBufferSourceNode::toNative(args.Holder());
    EXCEPTION_BLOCK(float, when, static_cast<float>(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)->NumberValue()));
    imp->noteOff(when);
    return v8::Handle<v8::Value>();
}

} // namespace AudioBufferSourceNodeInternal

static const BatchedAttribute AudioBufferSourceNodeAttrs[] = {
    // Attribute 'buffer' (Type: 'attribute' ExtAttr: 'CustomSetter')
    {"buffer", AudioBufferSourceNodeInternal::bufferAttrGetter, V8AudioBufferSourceNode::bufferAccessorSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'gain' (Type: 'readonly attribute' ExtAttr: '')
    {"gain", AudioBufferSourceNodeInternal::gainAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'playbackRate' (Type: 'readonly attribute' ExtAttr: '')
    {"playbackRate", AudioBufferSourceNodeInternal::playbackRateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'loop' (Type: 'attribute' ExtAttr: '')
    {"loop", AudioBufferSourceNodeInternal::loopAttrGetter, AudioBufferSourceNodeInternal::loopAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'looping' (Type: 'attribute' ExtAttr: '')
    {"looping", AudioBufferSourceNodeInternal::loopingAttrGetter, AudioBufferSourceNodeInternal::loopingAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback AudioBufferSourceNodeCallbacks[] = {
    {"noteOn", AudioBufferSourceNodeInternal::noteOnCallback},
    {"noteGrainOn", AudioBufferSourceNodeInternal::noteGrainOnCallback},
    {"noteOff", AudioBufferSourceNodeInternal::noteOffCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8AudioBufferSourceNodeTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "AudioBufferSourceNode", V8AudioSourceNode::GetTemplate(), V8AudioBufferSourceNode::internalFieldCount,
        AudioBufferSourceNodeAttrs, WTF_ARRAY_LENGTH(AudioBufferSourceNodeAttrs),
        AudioBufferSourceNodeCallbacks, WTF_ARRAY_LENGTH(AudioBufferSourceNodeCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8AudioBufferSourceNode::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8AudioBufferSourceNode::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8AudioBufferSourceNodeTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8AudioBufferSourceNode::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8AudioBufferSourceNode::wrapSlow(AudioBufferSourceNode* impl)
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

void V8AudioBufferSourceNode::derefObject(void* object)
{
    static_cast<AudioBufferSourceNode*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)
