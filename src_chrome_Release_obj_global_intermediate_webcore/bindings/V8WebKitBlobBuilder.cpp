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
#include "V8WebKitBlobBuilder.h"

#include "ExceptionCode.h"
#include "RuntimeEnabledFeatures.h"
#include "V8ArrayBuffer.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8Blob.h"
#include "V8DOMWrapper.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8WebKitBlobBuilder::info = { V8WebKitBlobBuilder::GetTemplate, V8WebKitBlobBuilder::derefObject, 0, 0 };

namespace WebKitBlobBuilderInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> getBlobCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitBlobBuilder.getBlob");
    WebKitBlobBuilder* imp = V8WebKitBlobBuilder::toNative(args.Holder());
    if (args.Length() <= 0) {
        return toV8(imp->getBlob());
    }
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<WithUndefinedOrNullCheck>, contentType, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    return toV8(imp->getBlob(contentType));
}

static v8::Handle<v8::Value> append1Callback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitBlobBuilder.append1");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    WebKitBlobBuilder* imp = V8WebKitBlobBuilder::toNative(args.Holder());
    EXCEPTION_BLOCK(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    imp->append(blob);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> append2Callback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitBlobBuilder.append2");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    WebKitBlobBuilder* imp = V8WebKitBlobBuilder::toNative(args.Holder());
    EXCEPTION_BLOCK(ArrayBuffer*, arrayBuffer, V8ArrayBuffer::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8ArrayBuffer::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    imp->append(arrayBuffer);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> append3Callback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitBlobBuilder.append3");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    WebKitBlobBuilder* imp = V8WebKitBlobBuilder::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, value, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    if (args.Length() <= 1) {
        imp->append(value, ec);
        if (UNLIKELY(ec))
            goto fail;
        return v8::Handle<v8::Value>();
    }
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<WithUndefinedOrNullCheck>, endings, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined));
    imp->append(value, endings, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> appendCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitBlobBuilder.append");
    if ((args.Length() == 1 && (args[0]->IsNull() || V8Blob::HasInstance(args[0]))))
        return append1Callback(args);
    if ((args.Length() == 1 && (args[0]->IsNull() || V8ArrayBuffer::HasInstance(args[0]))))
        return append2Callback(args);
    if ((args.Length() == 1 && (args[0]->IsNull() || args[0]->IsUndefined() || args[0]->IsString() || args[0]->IsObject())) || (args.Length() == 2 && (args[0]->IsNull() || args[0]->IsUndefined() || args[0]->IsString() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsUndefined() || args[1]->IsString() || args[1]->IsObject())))
        return append3Callback(args);
    V8Proxy::throwTypeError();
    return notHandledByInterceptor();
}

} // namespace WebKitBlobBuilderInternal

static const BatchedCallback WebKitBlobBuilderCallbacks[] = {
    {"getBlob", WebKitBlobBuilderInternal::getBlobCallback},
    {"append", WebKitBlobBuilderInternal::appendCallback},
};

v8::Handle<v8::Value> V8WebKitBlobBuilder::constructorCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.WebKitBlobBuilder.Contructor");
    return V8Proxy::constructDOMObject<WebKitBlobBuilder>(args, &info);
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8WebKitBlobBuilderTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "WebKitBlobBuilder", v8::Persistent<v8::FunctionTemplate>(), V8WebKitBlobBuilder::internalFieldCount,
        0, 0,
        WebKitBlobBuilderCallbacks, WTF_ARRAY_LENGTH(WebKitBlobBuilderCallbacks));
    desc->SetCallHandler(V8WebKitBlobBuilder::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8WebKitBlobBuilder::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8WebKitBlobBuilder::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8WebKitBlobBuilderTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8WebKitBlobBuilder::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8WebKitBlobBuilder::wrapSlow(WebKitBlobBuilder* impl)
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

void V8WebKitBlobBuilder::derefObject(void* object)
{
    static_cast<WebKitBlobBuilder*>(object)->deref();
}

} // namespace WebCore
