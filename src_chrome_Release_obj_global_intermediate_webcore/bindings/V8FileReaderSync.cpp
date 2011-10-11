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
#include "V8FileReaderSync.h"

#if ENABLE(BLOB)

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

WrapperTypeInfo V8FileReaderSync::info = { V8FileReaderSync::GetTemplate, V8FileReaderSync::derefObject, 0, 0 };

namespace FileReaderSyncInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> readAsArrayBufferCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.FileReaderSync.readAsArrayBuffer");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    FileReaderSync* imp = V8FileReaderSync::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    RefPtr<ArrayBuffer> result = imp->readAsArrayBuffer(scriptContext, blob, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> readAsBinaryStringCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.FileReaderSync.readAsBinaryString");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    FileReaderSync* imp = V8FileReaderSync::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    String result = imp->readAsBinaryString(scriptContext, blob, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8StringOrNull(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> readAsTextCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.FileReaderSync.readAsText");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    FileReaderSync* imp = V8FileReaderSync::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        String result = imp->readAsText(scriptContext, blob, ec);
        if (UNLIKELY(ec))
            goto fail;
        return v8StringOrNull(result);
    }
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, encoding, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    String result = imp->readAsText(scriptContext, blob, encoding, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8StringOrNull(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> readAsDataURLCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.FileReaderSync.readAsDataURL");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    FileReaderSync* imp = V8FileReaderSync::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    EXCEPTION_BLOCK(Blob*, blob, V8Blob::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8Blob::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    String result = imp->readAsDataURL(scriptContext, blob, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8StringOrNull(result);
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace FileReaderSyncInternal

static const BatchedCallback FileReaderSyncCallbacks[] = {
    {"readAsText", FileReaderSyncInternal::readAsTextCallback},
};

v8::Handle<v8::Value> V8FileReaderSync::constructorCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.FileReaderSync.Contructor");
    return V8Proxy::constructDOMObject<FileReaderSync>(args, &info);
}

static v8::Persistent<v8::FunctionTemplate> ConfigureV8FileReaderSyncTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "FileReaderSync", v8::Persistent<v8::FunctionTemplate>(), V8FileReaderSync::internalFieldCount,
        0, 0,
        FileReaderSyncCallbacks, WTF_ARRAY_LENGTH(FileReaderSyncCallbacks));
    desc->SetCallHandler(V8FileReaderSync::constructorCallback);
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom Signature 'readAsArrayBuffer'
    const int readAsArrayBufferArgc = 1;
    v8::Handle<v8::FunctionTemplate> readAsArrayBufferArgv[readAsArrayBufferArgc] = { V8Blob::GetRawTemplate() };
    v8::Handle<v8::Signature> readAsArrayBufferSignature = v8::Signature::New(desc, readAsArrayBufferArgc, readAsArrayBufferArgv);
    proto->Set(v8::String::New("readAsArrayBuffer"), v8::FunctionTemplate::New(FileReaderSyncInternal::readAsArrayBufferCallback, v8::Handle<v8::Value>(), readAsArrayBufferSignature));

    // Custom Signature 'readAsBinaryString'
    const int readAsBinaryStringArgc = 1;
    v8::Handle<v8::FunctionTemplate> readAsBinaryStringArgv[readAsBinaryStringArgc] = { V8Blob::GetRawTemplate() };
    v8::Handle<v8::Signature> readAsBinaryStringSignature = v8::Signature::New(desc, readAsBinaryStringArgc, readAsBinaryStringArgv);
    proto->Set(v8::String::New("readAsBinaryString"), v8::FunctionTemplate::New(FileReaderSyncInternal::readAsBinaryStringCallback, v8::Handle<v8::Value>(), readAsBinaryStringSignature));

    // Custom Signature 'readAsDataURL'
    const int readAsDataURLArgc = 1;
    v8::Handle<v8::FunctionTemplate> readAsDataURLArgv[readAsDataURLArgc] = { V8Blob::GetRawTemplate() };
    v8::Handle<v8::Signature> readAsDataURLSignature = v8::Signature::New(desc, readAsDataURLArgc, readAsDataURLArgv);
    proto->Set(v8::String::New("readAsDataURL"), v8::FunctionTemplate::New(FileReaderSyncInternal::readAsDataURLCallback, v8::Handle<v8::Value>(), readAsDataURLSignature));

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8FileReaderSync::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8FileReaderSync::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8FileReaderSyncTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8FileReaderSync::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8FileReaderSync::wrapSlow(FileReaderSync* impl)
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

void V8FileReaderSync::derefObject(void* object)
{
    static_cast<FileReaderSync*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(BLOB)