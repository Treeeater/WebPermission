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
#include "V8IDBObjectStore.h"

#if ENABLE(INDEXED_DATABASE)

#include "ExceptionCode.h"
#include "IDBBindingUtilities.h"
#include "IDBKey.h"
#include "OptionsObject.h"
#include "RuntimeEnabledFeatures.h"
#include "SerializedScriptValue.h"
#include "V8Binding.h"
#include "V8BindingMacros.h"
#include "V8BindingState.h"
#include "V8DOMStringList.h"
#include "V8DOMWrapper.h"
#include "V8IDBIndex.h"
#include "V8IDBKeyRange.h"
#include "V8IDBRequest.h"
#include "V8IsolatedContext.h"
#include "V8Proxy.h"
#include <wtf/GetPtr.h>
#include <wtf/RefCounted.h>
#include <wtf/RefPtr.h>

namespace WebCore {

WrapperTypeInfo V8IDBObjectStore::info = { V8IDBObjectStore::GetTemplate, V8IDBObjectStore::derefObject, 0, 0 };

namespace IDBObjectStoreInternal {

template <typename T> void V8_USE(T) { }

static v8::Handle<v8::Value> nameAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBObjectStore.name._get");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(info.Holder());
    return v8StringOrNull(imp->name());
}

static v8::Handle<v8::Value> keyPathAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBObjectStore.keyPath._get");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(info.Holder());
    return v8StringOrNull(imp->keyPath());
}

static v8::Handle<v8::Value> indexNamesAttrGetter(v8::Local<v8::String> name, const v8::AccessorInfo& info)
{
    INC_STATS("DOM.IDBObjectStore.indexNames._get");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(info.Holder());
    RefPtr<DOMStringList> result = imp->indexNames();
    v8::Handle<v8::Value> wrapper = result.get() ? getDOMObjectMap().get(result.get()) : v8::Handle<v8::Value>();
    if (wrapper.IsEmpty()) {
        wrapper = toV8(result.get());
        if (!wrapper.IsEmpty())
            V8DOMWrapper::setNamedHiddenReference(info.Holder(), "indexNames", wrapper);
    }
    return wrapper;
}

static v8::Handle<v8::Value> putCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.put");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    bool valueDidThrow = false;
    RefPtr<SerializedScriptValue> value = SerializedScriptValue::create(args[0], valueDidThrow);
    if (valueDidThrow)
        return v8::Undefined();
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        RefPtr<IDBRequest> result = imp->put(scriptContext, value, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release());
    }
    RefPtr<IDBKey> key = createIDBKeyFromValue(args[1]);
    if (UNLIKELY(!key)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    RefPtr<IDBRequest> result = imp->put(scriptContext, value, key, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> addCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.add");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    bool valueDidThrow = false;
    RefPtr<SerializedScriptValue> value = SerializedScriptValue::create(args[0], valueDidThrow);
    if (valueDidThrow)
        return v8::Undefined();
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        RefPtr<IDBRequest> result = imp->add(scriptContext, value, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release());
    }
    RefPtr<IDBKey> key = createIDBKeyFromValue(args[1]);
    if (UNLIKELY(!key)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    RefPtr<IDBRequest> result = imp->add(scriptContext, value, key, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> deleteCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.delete");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<IDBKey> key = createIDBKeyFromValue(args[0]);
    if (UNLIKELY(!key)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    RefPtr<IDBRequest> result = imp->deleteFunction(scriptContext, key, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> clearCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.clear");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    RefPtr<IDBRequest> result = imp->clear(scriptContext, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> getCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.get");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    RefPtr<IDBKey> key = createIDBKeyFromValue(args[0]);
    if (UNLIKELY(!key)) {
        ec = TYPE_MISMATCH_ERR;
        goto fail;
    }
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    RefPtr<IDBRequest> result = imp->get(scriptContext, key, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> openCursorCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.openCursor");
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    if (args.Length() <= 0) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        RefPtr<IDBRequest> result = imp->openCursor(scriptContext, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release());
    }
    EXCEPTION_BLOCK(IDBKeyRange*, range, V8IDBKeyRange::HasInstance(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined)) ? V8IDBKeyRange::toNative(v8::Handle<v8::Object>::Cast(MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined))) : 0);
    if (args.Length() <= 1) {
        ScriptExecutionContext* scriptContext = getScriptExecutionContext();
        if (!scriptContext)
            return v8::Undefined();
        RefPtr<IDBRequest> result = imp->openCursor(scriptContext, range, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release());
    }
    EXCEPTION_BLOCK(int, direction, toUInt32(MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined)));
    ScriptExecutionContext* scriptContext = getScriptExecutionContext();
    if (!scriptContext)
        return v8::Undefined();
    RefPtr<IDBRequest> result = imp->openCursor(scriptContext, range, direction, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> createIndexCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.createIndex");
    if (args.Length() < 2)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, keyPath, MAYBE_MISSING_PARAMETER(args, 1, MissingIsUndefined));
    if (args.Length() <= 2) {
        RefPtr<IDBIndex> result = imp->createIndex(name, keyPath, ec);
        if (UNLIKELY(ec))
            goto fail;
        return toV8(result.release());
    }
    EXCEPTION_BLOCK(OptionsObject, options, MAYBE_MISSING_PARAMETER(args, 2, MissingIsUndefined));
    RefPtr<IDBIndex> result = imp->createIndex(name, keyPath, options, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> indexCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.index");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    RefPtr<IDBIndex> result = imp->index(name, ec);
    if (UNLIKELY(ec))
        goto fail;
    return toV8(result.release());
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

static v8::Handle<v8::Value> deleteIndexCallback(const v8::Arguments& args)
{
    INC_STATS("DOM.IDBObjectStore.deleteIndex");
    if (args.Length() < 1)
        return throwError("Not enough arguments", V8Proxy::TypeError);
    IDBObjectStore* imp = V8IDBObjectStore::toNative(args.Holder());
    ExceptionCode ec = 0;
    {
    STRING_TO_V8PARAMETER_EXCEPTION_BLOCK(V8Parameter<>, name, MAYBE_MISSING_PARAMETER(args, 0, MissingIsUndefined));
    imp->deleteIndex(name, ec);
    if (UNLIKELY(ec))
        goto fail;
    return v8::Handle<v8::Value>();
    }
    fail:
    V8Proxy::setDOMException(ec);
    return v8::Handle<v8::Value>();
}

} // namespace IDBObjectStoreInternal

static const BatchedAttribute IDBObjectStoreAttrs[] = {
    // Attribute 'name' (Type: 'readonly attribute' ExtAttr: 'ConvertNullStringTo')
    {"name", IDBObjectStoreInternal::nameAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'keyPath' (Type: 'readonly attribute' ExtAttr: 'ConvertNullStringTo')
    {"keyPath", IDBObjectStoreInternal::keyPathAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    // Attribute 'indexNames' (Type: 'readonly attribute' ExtAttr: '')
    {"indexNames", IDBObjectStoreInternal::indexNamesAttrGetter, 0, 0 /* no data */, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const BatchedCallback IDBObjectStoreCallbacks[] = {
    {"put", IDBObjectStoreInternal::putCallback},
    {"add", IDBObjectStoreInternal::addCallback},
    {"delete", IDBObjectStoreInternal::deleteCallback},
    {"clear", IDBObjectStoreInternal::clearCallback},
    {"get", IDBObjectStoreInternal::getCallback},
    {"openCursor", IDBObjectStoreInternal::openCursorCallback},
    {"createIndex", IDBObjectStoreInternal::createIndexCallback},
    {"index", IDBObjectStoreInternal::indexCallback},
    {"deleteIndex", IDBObjectStoreInternal::deleteIndexCallback},
};

static v8::Persistent<v8::FunctionTemplate> ConfigureV8IDBObjectStoreTemplate(v8::Persistent<v8::FunctionTemplate> desc)
{
    desc->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature = configureTemplate(desc, "IDBObjectStore", v8::Persistent<v8::FunctionTemplate>(), V8IDBObjectStore::internalFieldCount,
        IDBObjectStoreAttrs, WTF_ARRAY_LENGTH(IDBObjectStoreAttrs),
        IDBObjectStoreCallbacks, WTF_ARRAY_LENGTH(IDBObjectStoreCallbacks));
    v8::Local<v8::ObjectTemplate> instance = desc->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> proto = desc->PrototypeTemplate();
    

    // Custom toString template
    desc->Set(getToStringName(), getToStringTemplate());
    return desc;
}

v8::Persistent<v8::FunctionTemplate> V8IDBObjectStore::GetRawTemplate()
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

v8::Persistent<v8::FunctionTemplate> V8IDBObjectStore::GetTemplate()
{
    V8BindingPerIsolateData* data = V8BindingPerIsolateData::current();
    V8BindingPerIsolateData::TemplateMap::iterator result = data->templateMap().find(&info);
    if (result != data->templateMap().end())
        return result->second;

    v8::HandleScope handleScope;
    v8::Persistent<v8::FunctionTemplate> templ =
        ConfigureV8IDBObjectStoreTemplate(GetRawTemplate());
    data->templateMap().add(&info, templ);
    return templ;
}

bool V8IDBObjectStore::HasInstance(v8::Handle<v8::Value> value)
{
    return GetRawTemplate()->HasInstance(value);
}


v8::Handle<v8::Object> V8IDBObjectStore::wrapSlow(IDBObjectStore* impl)
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

void V8IDBObjectStore::derefObject(void* object)
{
    static_cast<IDBObjectStore*>(object)->deref();
}

} // namespace WebCore

#endif // ENABLE(INDEXED_DATABASE)
