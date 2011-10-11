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
#include "V8AudioContext.h"

#if ENABLE(WEB_AUDIO)

#include "EventListener.h"
#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8AbstractEventListener.h"
#include "V8ArrayBuffer.h"
#include "V8AudioBufferCallback.h"
#include "V8AudioBufferSourceNode.h"
#include "V8AudioChannelMerger.h"
#include "V8AudioChannelSplitter.h"
#include "V8AudioDestinationNode.h"
#include "V8AudioGainNode.h"
#include "V8AudioListener.h"
#include "V8AudioPannerNode.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8BiquadFilterNode.h"
#include "V8ConvolverNode.h"
#include "V8DOMWrapper.h"
#include "V8DelayNode.h"
#include "V8DynamicsCompressorNode.h"
#include "V8HTMLMediaElement.h"
#include "V8HighPass2FilterNode.h"
#include "V8IsolatedContext.h"
#include "V8JavaScriptAudioNode.h"
#include "V8LowPass2FilterNode.h"
#include "V8MediaElementAudioSourceNode.h"
#include "V8Proxy.h"
#include "V8RealtimeAnalyserNode.h"
#include "V8WaveShaperNode.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8AudioContext::info = { V8AudioContext::GetTemplate, V8AudioContext::derefObject, 0, 0 };

namespace AudioContextInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> destinationAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioContext.destination._get");
    AudioContext* imp = V8AudioContext::toNative(info.Holder());
    RefPtr<AudioDestinationNode> result = imp->destination();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "destination", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> currentTimeAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioContext.currentTime._get");
    AudioContext* imp = V8AudioContext::toNative(info.Holder());
    return v8::Number::New(imp->currentTime());
}

static v8::Handle<v8::Value> sampleRateAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioContext.sampleRate._get");
    AudioContext* imp = V8AudioContext::toNative(info.Holder());
    return v8::Number::New(imp->sampleRate());
}

static v8::Handle<v8::Value> listenerAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioContext.listener._get");
    AudioContext* imp = V8AudioContext::toNative(info.Holder());
    RefPtr<AudioListener> result = imp->listener();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "listener", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> oncompleteAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioContext.oncomplete._get");
    AudioContext* imp = V8AudioContext::toNative(info.Holder());
    return imp->oncomplete() ? v8::Handle<v8::Value>(static_cast<V8AbstractEventListener*>(imp->oncomplete())->getListenerObject(imp->scriptExecutionContext())) : v8::Handle<v8::Value>(v8::Null());
}

static void oncompleteAttrSetter(v8::Local<v8::String> name, v8::Local<v8::Value> value, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.AudioContext.oncomplete._set");
    AudioContext* imp = V8AudioContext::toNative(info.Holder());
    transferHiddenDependency(info.Holder(), imp->oncomplete(), value, V8AudioContext::eventListenerCacheIndex);
    imp->setOncomplete(V8DOMWrapper::getEventListener(value, true, ListenerFindOrCreate));
    return;
}

static v8::Handle<v8::Value> decodeAudioDataCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.decodeAudioData");
    if (args.Length() < 2)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(ArrayBuffer*, audioData, V8ArrayBuffer::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8ArrayBuffer::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    if (args.Length() <= 1 || !args[1]->IsObject())
        return throwError(TYPE_MISMATCH_ERR);
    RefPtr<AudioBufferCallback> successCallback = V8AudioBufferCallback::create(args[1], getScriptExecutionContext());
    RefPtr<AudioBufferCallback> errorCallback;
    if (args.Length() > 2 && !args[2]->IsNull() && !args[2]->IsUndefined()) {
        if (!args[2]->IsObject())
            return throwError(TYPE_MISMATCH_ERR);
        errorCallback = V8AudioBufferCallback::create(args[2], getScriptExecutionContext());
    }
    imp->decodeAudioData(audioData, successCallback, errorCallback, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> createBufferSourceCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createBufferSource");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createBufferSource());
}

static v8::Handle<v8::Value> createMediaElementSourceCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createMediaElementSource");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(HTMLMediaElement*, mediaElement, V8HTMLMediaElement::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8HTMLMediaElement::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    RefPtr<MediaElementAudioSourceNode> result = imp->createMediaElementSource(mediaElement, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> createGainNodeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createGainNode");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createGainNode());
}

static v8::Handle<v8::Value> createDelayNodeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createDelayNode");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createDelayNode());
}

static v8::Handle<v8::Value> createBiquadFilterCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createBiquadFilter");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createBiquadFilter());
}

static v8::Handle<v8::Value> createWaveShaperCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createWaveShaper");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createWaveShaper());
}

static v8::Handle<v8::Value> createLowPass2FilterCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createLowPass2Filter");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createLowPass2Filter());
}

static v8::Handle<v8::Value> createHighPass2FilterCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createHighPass2Filter");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createHighPass2Filter());
}

static v8::Handle<v8::Value> createPannerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createPanner");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createPanner());
}

static v8::Handle<v8::Value> createConvolverCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createConvolver");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createConvolver());
}

static v8::Handle<v8::Value> createDynamicsCompressorCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createDynamicsCompressor");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createDynamicsCompressor());
}

static v8::Handle<v8::Value> createAnalyserCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createAnalyser");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createAnalyser());
}

static v8::Handle<v8::Value> createJavaScriptNodeCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createJavaScriptNode");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    EXCEPTION_BLOCK(unsigned, bufferSize, toUInt32(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)));
    return toV8(imp->createJavaScriptNode(bufferSize));
}

static v8::Handle<v8::Value> createChannelSplitterCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createChannelSplitter");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createChannelSplitter());
}

static v8::Handle<v8::Value> createChannelMergerCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.createChannelMerger");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    return toV8(imp->createChannelMerger());
}

static v8::Handle<v8::Value> startRenderingCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.AudioContext.startRendering");
    AudioContext* imp = V8AudioContext::toNative(args.Holder());
    imp->startRendering();
    return v8::Handle<v8::Value>();
}

} // namespace AudioContextInternal

static const BatchedAttribute AudioContextAttrs[] = {
    // Attribute 'destination' (Type: 'readonly attribute' ExtAttr: '')
    {"destination", AudioContextInternal::destinationAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'currentTime' (Type: 'readonly attribute' ExtAttr: '')
    {"currentTime", AudioContextInternal::currentTimeAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'sampleRate' (Type: 'readonly attribute' ExtAttr: '')
    {"sampleRate", AudioContextInternal::sampleRateAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'listener' (Type: 'readonly attribute' ExtAttr: '')
    {"listener", AudioContextInternal::listenerAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'oncomplete' (Type: 'attribute' ExtAttr: '')
    {"oncomplete", AudioContextInternal::oncompleteAttrGetter, AudioContextInternal::oncompleteAttrSetter, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback AudioContextCallbacks[] = {
    {"createBuffer", V8AudioContext::createBufferCallback},
    {"decodeAudioData", AudioContextInternal::decodeAudioDataCallback},
    {"createBufferSource", AudioContextInternal::createBufferSourceCallback},
    {"createGainNode", AudioContextInternal::createGainNodeCallback},
    {"createDelayNode", AudioContextInternal::createDelayNodeCallback},
    {"createBiquadFilter", AudioContextInternal::createBiquadFilterCallback},
    {"createWaveShaper", AudioContextInternal::createWaveShaperCallback},
    {"createLowPass2Filter", AudioContextInternal::createLowPass2FilterCallback},
    {"createHighPass2Filter", AudioContextInternal::createHighPass2FilterCallback},
    {"createPanner", AudioContextInternal::createPannerCallback},
    {"createConvolver", AudioContextInternal::createConvolverCallback},
    {"createDynamicsCompressor", AudioContextInternal::createDynamicsCompressorCallback},
    {"createAnalyser", AudioContextInternal::createAnalyserCallback},
    {"createJavaScriptNode", AudioContextInternal::createJavaScriptNodeCallback},
    {"createChannelSplitter", AudioContextInternal::createChannelSplitterCallback},
    {"createChannelMerger", AudioContextInternal::createChannelMergerCallback},
    {"startRendering", AudioContextInternal::startRenderingCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8AudioContextTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "AudioContext", v8::Persistent<v8::FunctionTemplate>(), V8AudioContext::internalFieldCount,
        AudioContextAttrs, WTF_ARRAY_LENGTH(AudioContextAttrs),
        AudioContextCallbacks, WTF_ARRAY_LENGTH(AudioContextCallbacks));
    desc->SetCallHandler(V8AudioContext::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'createMediaElementSource'
    const int createMediaElementSourceArgc = 1;
    v8::Handle<v8::FunctionTemplate> createMediaElementSourceArgv[createMediaElementSourceArgc] = { V8HTMLMediaElement::GetRawTemplate() };
    v8::Handle<v8::Signature> createMediaElementSourceSignature = v8::Signature::New(desc, createMediaElementSourceArgc, createMediaElementSourceArgv);
    proto->Set(v8::String::New("createMediaElementSource"), v8::FunctionTemplate::New(AudioContextInternal::createMediaElementSourceCallback, v8::Handle<v8::Value>(), createMediaElementSourceSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8AudioContext::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8AudioContext::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8AudioContextTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8AudioContext::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8AudioContext::wrapSlow(AudioContext* impl)
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

void V8AudioContext::derefObject(void* object)
{
    static_cast<AudioContext*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(WEB_AUDIO)
